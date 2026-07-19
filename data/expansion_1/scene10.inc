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
	setflag FLAG_SYS_SET_BATTLE_TRANSITION
# 109 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_TRANSITION, 1
# 110 "data/expansion_1/scene10.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 1, 0, 0, 1
# 111 "data/expansion_1/scene10.pory"
	multi_2_vs_1 TRAINER_EXP_1_FINAL_BATTLE_1, Expansion1_Rival_Scene10b_Text_5, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 112 "data/expansion_1/scene10.pory"
	clearflag FLAG_SINGLE_WILD_OPPONENT
# 113 "data/expansion_1/scene10.pory"
	clearflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 116 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 117 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_6
# 119 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 120 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_7, MSGBOX_AUTOCLOSE
# 125 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_HIGH_PITCH
# 126 "data/expansion_1/scene10.pory"
	call WeatherScript_SetAndDo_Rain
# 127 "data/expansion_1/scene10.pory"
	delay 60
# 129 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 130 "data/expansion_1/scene10.pory"
	waitmoncry
# 131 "data/expansion_1/scene10.pory"
	addobject 9
# 132 "data/expansion_1/scene10.pory"
	addobject 10
# 133 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 134 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 135 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 136 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_WalkUp
# 137 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkUp
# 138 "data/expansion_1/scene10.pory"
	waitmovement 0
# 139 "data/expansion_1/scene10.pory"
	playse SE_LEDGE
# 140 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 141 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 142 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_JumpUp
# 143 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_JumpUp
# 144 "data/expansion_1/scene10.pory"
	waitmovement 0
# 145 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_WalkUp2
# 146 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkUp2
# 147 "data/expansion_1/scene10.pory"
	waitmovement 0
# 150 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 151 "data/expansion_1/scene10.pory"
	setflag FLAG_WILD_OPPONENT
# 152 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 153 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 154 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_BGM, MUS_XD_VS_CIPHER_PEON
# 155 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_PLAY_VICTORY_MUSIC
# 156 "data/expansion_1/scene10.pory"
	multi_2_vs_2 TRAINER_WILD_POKEMON_IG_5, Exp1_WildPokemonTrainerText_Defeat, TRAINER_WILD_POKEMON_IG_6, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 157 "data/expansion_1/scene10.pory"
	clearflag FLAG_WILD_OPPONENT
# 158 "data/expansion_1/scene10.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 159 "data/expansion_1/scene10.pory"
	call WeatherScript_SetAndDo_None
# 160 "data/expansion_1/scene10.pory"
	delay 30
# 163 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 164 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 165 "data/expansion_1/scene10.pory"
	waitmovement 0
# 166 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 167 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_8
# 168 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 169 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_9, MSGBOX_AUTOCLOSE
# 173 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 174 "data/expansion_1/scene10.pory"
	waitmovement 0
# 175 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 176 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_10
# 178 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 179 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_11, MSGBOX_AUTOCLOSE
# 181 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 182 "data/expansion_1/scene10.pory"
	waitmovement 0
# 183 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 184 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_12
# 185 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
# 186 "data/expansion_1/scene10.pory"
	waitmoncry
# 187 "data/expansion_1/scene10.pory"
	savebgm MUS_NONE
# 190 "data/expansion_1/scene10.pory"
	setstartingstatus STARTING_STATUS_RAINBOW_PLAYER
# 191 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 192 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 193 "data/expansion_1/scene10.pory"
	setflag FLAG_SINGLE_WILD_OPPONENT
# 194 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_PLAY_VICTORY_MUSIC
# 195 "data/expansion_1/scene10.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 1, 0, 0, 1
# 196 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 197 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_BGM, MUS_B2W2_VS_GHETSIS
# 198 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_TRANSITION
# 199 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_TRANSITION, 1
# 200 "data/expansion_1/scene10.pory"
	multi_2_vs_1 TRAINER_EXP_1_FINAL_BATTLE_2, Expansion1_Rival_Scene10b_Text_13, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 201 "data/expansion_1/scene10.pory"
	clearflag FLAG_SINGLE_WILD_OPPONENT
# 202 "data/expansion_1/scene10.pory"
	clearflag FLAG_DONT_TRANSITION_BATTLE_MUSIC
# 204 "data/expansion_1/scene10.pory"
	setvar VAR_0x8004, 2
# 205 "data/expansion_1/scene10.pory"
	setvar VAR_0x8005, 6
# 206 "data/expansion_1/scene10.pory"
	setvar VAR_0x8006, 20
# 207 "data/expansion_1/scene10.pory"
	setvar VAR_0x8007, 3
# 208 "data/expansion_1/scene10.pory"
	special ShakeCamera
# 209 "data/expansion_1/scene10.pory"
	delay 50
# 210 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_FAINT
# 211 "data/expansion_1/scene10.pory"
	mosaicmorph 3, OBJ_EVENT_GFX_NONE
# 212 "data/expansion_1/scene10.pory"
	delay 80
# 213 "data/expansion_1/scene10.pory"
	removeobject 3
# 215 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 216 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_14
# 217 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 218 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_15, MSGBOX_AUTOCLOSE
# 219 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Thinking
# 220 "data/expansion_1/scene10.pory"
	delay 80
# 221 "data/expansion_1/scene10.pory"
	playbgm MUS_PL_VICTORY_FRONTIER_BRAIN, FALSE
# 222 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 223 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_16
# 224 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 225 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_17
# 226 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 227 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_18
# 228 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 229 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_19, MSGBOX_AUTOCLOSE
# 230 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 231 "data/expansion_1/scene10.pory"
	waitmovement 0
# 232 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 233 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_20
# 237 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 238 "data/expansion_1/scene10.pory"
	waitmovement 0
# 239 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 240 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_21
# 241 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 242 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_22
# 243 "data/expansion_1/scene10.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 244 "data/expansion_1/scene10.pory"
	waitmovement 0
# 245 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 246 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_23, MSGBOX_AUTOCLOSE
# 248 "data/expansion_1/scene10.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 249 "data/expansion_1/scene10.pory"
	setflag FLAG_SCENE10_TRANSITION
# 250 "data/expansion_1/scene10.pory"
	fadescreen FADE_TO_BLACK
# 251 "data/expansion_1/scene10.pory"
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
# 255 "data/expansion_1/scene10.pory"
	setobjectxyperm 6, 15, 10
# 256 "data/expansion_1/scene10.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 257 "data/expansion_1/scene10.pory"
	setobjectxyperm 10, 17, 10
# 258 "data/expansion_1/scene10.pory"
	setobjectxyperm 7, 17, 8
# 259 "data/expansion_1/scene10.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 260 "data/expansion_1/scene10.pory"
	setobjectxyperm 11, 16, 10
# 261 "data/expansion_1/scene10.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
# 262 "data/expansion_1/scene10.pory"
	setobjectxyperm 8, 15, 8
# 263 "data/expansion_1/scene10.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 264 "data/expansion_1/scene10.pory"
	addobject 7
# 265 "data/expansion_1/scene10.pory"
	addobject 11
# 266 "data/expansion_1/scene10.pory"
	addobject 8
# 267 "data/expansion_1/scene10.pory"
	addobject 6
# 268 "data/expansion_1/scene10.pory"
	addobject 10
# 269 "data/expansion_1/scene10.pory"
	fadescreen FADE_FROM_BLACK
# 270 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 271 "data/expansion_1/scene10.pory"
	delay 40
# 272 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown
# 273 "data/expansion_1/scene10.pory"
	waitmovement 0
# 274 "data/expansion_1/scene10.pory"
	delay 20
# 275 "data/expansion_1/scene10.pory"
	applymovement MAUVEISLANDWEST_SAKURA, Common_Movement_MusicNote
# 276 "data/expansion_1/scene10.pory"
	playse SE_RG_HELP_OPEN
# 277 "data/expansion_1/scene10.pory"
	delay 60
# 278 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 279 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_0
# 282 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 283 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_1
# 284 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 285 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_2, MSGBOX_AUTOCLOSE
# 287 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterLeft
# 288 "data/expansion_1/scene10.pory"
	waitmovement 0
# 289 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 290 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_3
# 292 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 293 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_4
# 295 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 296 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_5
# 299 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 300 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_6, MSGBOX_AUTOCLOSE
# 302 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterUp
# 303 "data/expansion_1/scene10.pory"
	waitmovement 0
# 304 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 305 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_7, MSGBOX_AUTOCLOSE
# 306 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_Thinking
# 307 "data/expansion_1/scene10.pory"
	delay 60
# 308 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 309 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_8, MSGBOX_AUTOCLOSE
# 310 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 311 "data/expansion_1/scene10.pory"
	waitmovement 0
# 312 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 313 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_9, MSGBOX_AUTOCLOSE
# 317 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 318 "data/expansion_1/scene10.pory"
	waitmovement 0
# 319 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 320 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_10
# 328 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 329 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_11
# 331 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 332 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_12
# 334 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 335 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_13
# 338 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 339 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_14, MSGBOX_AUTOCLOSE
# 341 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterLeft
# 342 "data/expansion_1/scene10.pory"
	waitmovement 0
# 343 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 344 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_15
# 347 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 348 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_16, MSGBOX_AUTOCLOSE
# 349 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 350 "data/expansion_1/scene10.pory"
	waitmovement 0
# 351 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 352 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_17, MSGBOX_AUTOCLOSE
# 354 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 355 "data/expansion_1/scene10.pory"
	waitmovement 0
# 356 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 357 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_18
# 360 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 361 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_19, MSGBOX_AUTOCLOSE
# 363 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 364 "data/expansion_1/scene10.pory"
	waitmovement 0
# 365 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 366 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_20
# 369 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 370 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_21
# 372 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 373 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_22, MSGBOX_AUTOCLOSE
# 376 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 377 "data/expansion_1/scene10.pory"
	waitmovement 0
# 378 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 379 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_23, MSGBOX_AUTOCLOSE
# 383 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 384 "data/expansion_1/scene10.pory"
	waitmovement 0
# 385 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 386 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_24, MSGBOX_AUTOCLOSE
# 387 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_SweatDrop
# 388 "data/expansion_1/scene10.pory"
	playse SE_M_METRONOME
# 389 "data/expansion_1/scene10.pory"
	delay 60
# 390 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 391 "data/expansion_1/scene10.pory"
	waitmovement 0
# 392 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 393 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_25
# 394 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 395 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_26, MSGBOX_AUTOCLOSE
# 397 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_Talking
# 398 "data/expansion_1/scene10.pory"
	delay 100
# 399 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_Talking
# 400 "data/expansion_1/scene10.pory"
	delay 80
# 401 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_Thinking
# 402 "data/expansion_1/scene10.pory"
	delay 60
# 403 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 404 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_27, MSGBOX_AUTOCLOSE
# 406 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterUp
# 407 "data/expansion_1/scene10.pory"
	waitmovement 0
# 408 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 409 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_28
# 411 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 412 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_29, MSGBOX_AUTOCLOSE
# 413 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 414 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 415 "data/expansion_1/scene10.pory"
	delay 60
# 416 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 417 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterUp
# 418 "data/expansion_1/scene10.pory"
	waitmovement 0
# 419 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 420 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_30
# 421 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 422 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_31
# 423 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 424 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_32, MSGBOX_AUTOCLOSE
# 426 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 427 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_DoubleExclamationMark
# 428 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 429 "data/expansion_1/scene10.pory"
	delay 60
# 430 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 431 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_33
# 432 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 433 "data/expansion_1/scene10.pory"
	waitmovement 0
# 434 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 435 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_34, MSGBOX_AUTOCLOSE
# 436 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_SweatDrop
# 437 "data/expansion_1/scene10.pory"
	playse SE_M_METRONOME
# 438 "data/expansion_1/scene10.pory"
	delay 40
# 439 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 440 "data/expansion_1/scene10.pory"
	waitmovement 0
# 441 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 442 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_35, MSGBOX_AUTOCLOSE
# 444 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 445 "data/expansion_1/scene10.pory"
	waitmovement 0
# 446 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 447 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_36
# 450 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 451 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_37, MSGBOX_AUTOCLOSE
# 453 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_Thinking
# 454 "data/expansion_1/scene10.pory"
	delay 60
# 455 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 456 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_38
# 458 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 459 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_39
# 460 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 461 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_40, MSGBOX_AUTOCLOSE
# 464 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkDown2
# 465 "data/expansion_1/scene10.pory"
	waitmovement 0
# 466 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 467 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkLeft9
# 468 "data/expansion_1/scene10.pory"
	waitmovement 0
# 469 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 470 "data/expansion_1/scene10.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 471 "data/expansion_1/scene10.pory"
	delay 60
# 472 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 473 "data/expansion_1/scene10.pory"
	waitmovement 0
# 474 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 475 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_41, MSGBOX_AUTOCLOSE
# 476 "data/expansion_1/scene10.pory"
	applymovement 8, Common_Movement_WalkFastDown
# 477 "data/expansion_1/scene10.pory"
	waitmovement 0
# 478 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 479 "data/expansion_1/scene10.pory"
	applymovement 8, Common_Movement_WalkFastLeft4
# 480 "data/expansion_1/scene10.pory"
	waitmovement 0
# 481 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 482 "data/expansion_1/scene10.pory"
	applymovement 8, Common_Movement_WalkFastDown2
# 483 "data/expansion_1/scene10.pory"
	waitmovement 0
# 484 "data/expansion_1/scene10.pory"
	applymovement 8, Common_Movement_WalkFastLeft3
# 485 "data/expansion_1/scene10.pory"
	waitmovement 0
# 486 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 487 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 488 "data/expansion_1/scene10.pory"
	delay 60
# 489 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 490 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_42, MSGBOX_AUTOCLOSE
# 491 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 492 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 493 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkDown4
# 494 "data/expansion_1/scene10.pory"
	waitmovement 0
# 495 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_Thinking
# 496 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkLeft9
# 497 "data/expansion_1/scene10.pory"
	delay 80
# 498 "data/expansion_1/scene10.pory"
	applymovement 11, Common_Movement_WalkDown5
# 499 "data/expansion_1/scene10.pory"
	delay 100
# 500 "data/expansion_1/scene10.pory"
	fadescreen FADE_TO_BLACK
# 502 "data/expansion_1/scene10.pory"
	removeobject 7
# 503 "data/expansion_1/scene10.pory"
	removeobject 11
# 504 "data/expansion_1/scene10.pory"
	removeobject 8
# 505 "data/expansion_1/scene10.pory"
	removeobject 6
# 506 "data/expansion_1/scene10.pory"
	removeobject 10
# 507 "data/expansion_1/scene10.pory"
	setobjectxyperm 6, 16, 14
# 508 "data/expansion_1/scene10.pory"
	addobject 12
# 509 "data/expansion_1/scene10.pory"
	applymovement 12, Common_Movement_WalkQuarterDown
# 510 "data/expansion_1/scene10.pory"
	waitmovement 0
# 512 "data/expansion_1/scene10.pory"
	fadescreen FADE_FROM_BLACK
# 513 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp
# 514 "data/expansion_1/scene10.pory"
	waitmovement 0
# 515 "data/expansion_1/scene10.pory"
	fadenewbgm MUS_B_PIKE
# 516 "data/expansion_1/scene10.pory"
	delay 80
# 517 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 518 "data/expansion_1/scene10.pory"
	delay 80
# 519 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 520 "data/expansion_1/scene10.pory"
	waitmovement 0
# 521 "data/expansion_1/scene10.pory"
	delay 40
# 522 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 523 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 524 "data/expansion_1/scene10.pory"
	delay 100
# 525 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Talking
# 526 "data/expansion_1/scene10.pory"
	delay 100
# 527 "data/expansion_1/scene10.pory"
	applymovement 12, Common_Movement_WalkUp2
# 528 "data/expansion_1/scene10.pory"
	waitmovement 0
# 529 "data/expansion_1/scene10.pory"
	removeobject 12
# 530 "data/expansion_1/scene10.pory"
	addobject 6
# 531 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkUp3
# 532 "data/expansion_1/scene10.pory"
	waitmovement 0
# 533 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 534 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_43, MSGBOX_AUTOCLOSE
# 535 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 536 "data/expansion_1/scene10.pory"
	waitmovement 0
# 537 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkUp2
# 538 "data/expansion_1/scene10.pory"
	waitmovement 0
# 539 "data/expansion_1/scene10.pory"
	delay 20
# 540 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Talking
# 541 "data/expansion_1/scene10.pory"
	delay 100
# 542 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_QuestionMark
# 543 "data/expansion_1/scene10.pory"
	delay 40
# 544 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 545 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10c_Text_44, MSGBOX_AUTOCLOSE
# 560 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkRight2
# 561 "data/expansion_1/scene10.pory"
	waitmovement 0
# 562 "data/expansion_1/scene10.pory"
	applymovement 6, Common_Movement_WalkDown5
# 563 "data/expansion_1/scene10.pory"
	delay 40
# 564 "data/expansion_1/scene10.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 51
# 565 "data/expansion_1/scene10.pory"
	fadescreen FADE_TO_BLACK
# 567 "data/expansion_1/scene10.pory"
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
# 111 "data/expansion_1/scene10.pory"
	.string "Gyashaa!$"

Expansion1_Rival_Scene10b_Text_6:
# 117 "data/expansion_1/scene10.pory"
	.string "It-{PAUSE 30}It looks almost dead…{PAUSE 100}?\n"
	.string "Did we beat it?$"

Expansion1_Rival_Scene10b_Text_7:
# 120 "data/expansion_1/scene10.pory"
	.string "Tsk. This is when they're at their\n"
	.string "most dangerous.\p"
	.string "{EMOJI_BIGWHEEL}Clenches fist{EMOJI_BIGWHEEL}\n"
	.string "Down with you!$"

Expansion1_Rival_Scene10b_Text_8:
# 167 "data/expansion_1/scene10.pory"
	.string "Again? Jeez! This guy won't give up!$"

Expansion1_Rival_Scene10b_Text_9:
# 169 "data/expansion_1/scene10.pory"
	.string "HAHAHA!\n"
	.string "Live up to your name, {PAUSE 60}“Redd”!\l"
	.string "Let us BATHE IN THE BLOOD OF OUR\l"
	.string "ENEMIES!!!$"

Expansion1_Rival_Scene10b_Text_10:
# 176 "data/expansion_1/scene10.pory"
	.string "That's not-…{PAUSE 100}! F-{PAUSE 30}FINE!\n"
	.string "I can go another round!$"

Expansion1_Rival_Scene10b_Text_11:
# 179 "data/expansion_1/scene10.pory"
	.string "Everything comes in threes.\n"
	.string "This should be the last phase!$"

Expansion1_Rival_Scene10b_Text_12:
# 184 "data/expansion_1/scene10.pory"
	.string "One more time!$"

Expansion1_Rival_Scene10b_Text_13:
# 200 "data/expansion_1/scene10.pory"
	.string "Gyassshaaa…$"

Expansion1_Rival_Scene10b_Text_14:
# 216 "data/expansion_1/scene10.pory"
	.string "Is that…{PAUSE 60}?!$"

Expansion1_Rival_Scene10b_Text_15:
# 218 "data/expansion_1/scene10.pory"
	.string "Did it… {PAUSE 100}Did it actually…{PAUSE 60}?$"

Expansion1_Rival_Scene10b_Text_16:
# 223 "data/expansion_1/scene10.pory"
	.string "Whew… {PAUSE 100}Looks like that's finally it!$"

Expansion1_Rival_Scene10b_Text_17:
# 225 "data/expansion_1/scene10.pory"
	.string "Yeah, I think we did it, guys!$"

Expansion1_Rival_Scene10b_Text_18:
# 227 "data/expansion_1/scene10.pory"
	.string "I… {PAUSE 100}I did! I did it!$"

Expansion1_Rival_Scene10b_Text_19:
# 229 "data/expansion_1/scene10.pory"
	.string "We {PAUSE 30}ALL {PAUSE 60}did it, Baron{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene10b_Text_20:
# 233 "data/expansion_1/scene10.pory"
	.string "We all… {PAUSE 100}Baron…{PAUSE 60}?\p"
	.string "…{PAUSE 60}uh, yeah, haha…\p"
	.string "You can really lose where you are in\n"
	.string "some of those moments, can't you?$"

Expansion1_Rival_Scene10b_Text_21:
# 240 "data/expansion_1/scene10.pory"
	.string "Mission accomplished?$"

Expansion1_Rival_Scene10b_Text_22:
# 242 "data/expansion_1/scene10.pory"
	.string "That was… {PAUSE 100}blood pumping…{PAUSE 60}!$"

Expansion1_Rival_Scene10b_Text_23:
# 246 "data/expansion_1/scene10.pory"
	.string "“Mission accomplished” seems right.\p"
	.string "Time for some fresh air?$"

Expansion1_Rival_Scene10c_Text_0:
# 279 "data/expansion_1/scene10.pory"
	.string "We did it!\p"
	.string "… {PAUSE 30}… {PAUSE 30}…\p"
	.string "Where's my treasure, Jakson?$"

Expansion1_Rival_Scene10c_Text_1:
# 283 "data/expansion_1/scene10.pory"
	.string "No one got any drops?$"

Expansion1_Rival_Scene10c_Text_2:
# 285 "data/expansion_1/scene10.pory"
	.string "That's the question of the hour,\n"
	.string "isn't it?$"

Expansion1_Rival_Scene10c_Text_3:
# 290 "data/expansion_1/scene10.pory"
	.string "What, so our gamemaster doesn't know\n"
	.string "either?$"

Expansion1_Rival_Scene10c_Text_4:
# 293 "data/expansion_1/scene10.pory"
	.string "Well… {PAUSE 100}it's possible that there was never\n"
	.string "a real treasure, right?$"

Expansion1_Rival_Scene10c_Text_5:
# 296 "data/expansion_1/scene10.pory"
	.string "So you set the stage for our grand\n"
	.string "treasure hunt without knowing if\l"
	.string "there was a treasure to be had?$"

Expansion1_Rival_Scene10c_Text_6:
# 300 "data/expansion_1/scene10.pory"
	.string "Aww… {PAUSE 100}I was really looking forward to\n"
	.string "some healing items.$"

Expansion1_Rival_Scene10c_Text_7:
# 305 "data/expansion_1/scene10.pory"
	.string "Baron, you know that…$"

Expansion1_Rival_Scene10c_Text_8:
# 309 "data/expansion_1/scene10.pory"
	.string "Never mind.$"

Expansion1_Rival_Scene10c_Text_9:
# 313 "data/expansion_1/scene10.pory"
	.string "Jakson, you think the logic for the\n"
	.string "reward being dropped also got\l"
	.string "compromised?\p"
	.string "That would explain it, if true.$"

Expansion1_Rival_Scene10c_Text_10:
# 320 "data/expansion_1/scene10.pory"
	.string "We could look into the code behind this\n"
	.string "all to see if there was something there.\p"
	.string "But… {PAUSE 100}I guess it's hard to know if it\n"
	.string "was a weird bug or general messiness\l"
	.string "of the mod's creators…\l"
	.string "I…\l"
	.string "Argh…\l"
	.string "I can just spawn in a reward.$"

Expansion1_Rival_Scene10c_Text_11:
# 329 "data/expansion_1/scene10.pory"
	.string "I sense a thief! The scallywags must've\n"
	.string "took our plunder for themselves.$"

Expansion1_Rival_Scene10c_Text_12:
# 332 "data/expansion_1/scene10.pory"
	.string "No, I'm pretty sure that's the end of\n"
	.string "the mod's story.$"

Expansion1_Rival_Scene10c_Text_13:
# 335 "data/expansion_1/scene10.pory"
	.string "Darn. And if they're already gone it'll\n"
	.string "be too late for my Sakura Senses to\l"
	.string "pick them up.$"

Expansion1_Rival_Scene10c_Text_14:
# 339 "data/expansion_1/scene10.pory"
	.string "{EMOJI_BIGWHEEL}Sigh{EMOJI_BIGWHEEL} {PAUSE 60}It's such an unfortunate\n"
	.string "limitation to the Sakura Senses.$"

Expansion1_Rival_Scene10c_Text_15:
# 344 "data/expansion_1/scene10.pory"
	.string "Jakson, I think she's asking for the\n"
	.string "reward to be spawned for each one of\l"
	.string "us.$"

Expansion1_Rival_Scene10c_Text_16:
# 348 "data/expansion_1/scene10.pory"
	.string "{EMOJI_BIGWHEEL}Sigh{EMOJI_BIGWHEEL}…$"

Expansion1_Rival_Scene10c_Text_17:
# 352 "data/expansion_1/scene10.pory"
	.string "…{PAUSE 100}Well, anyway. I agree that it seems\n"
	.string "like we've hit the ending.$"

Expansion1_Rival_Scene10c_Text_18:
# 357 "data/expansion_1/scene10.pory"
	.string "I can check again, but I believe we've\n"
	.string "concluded with that ‘main story’ part of\l"
	.string "this little expansion.$"

Expansion1_Rival_Scene10c_Text_19:
# 361 "data/expansion_1/scene10.pory"
	.string "Anything else? Do you think I could get\n"
	.string "one of those ‘Calamity Maw’ for myself?$"

Expansion1_Rival_Scene10c_Text_20:
# 366 "data/expansion_1/scene10.pory"
	.string "I think so. Pretty sure that was the\n"
	.string "Paradox Pokémon naming scheme.\l"
	.string "And if not I'll make it so you can.$"

Expansion1_Rival_Scene10c_Text_21:
# 370 "data/expansion_1/scene10.pory"
	.string "It certainly wasn't the only new…{PAUSE 100}\n"
	.string "Pokémon… {PAUSE 100}that I saw. I wonder…$"

Expansion1_Rival_Scene10c_Text_22:
# 373 "data/expansion_1/scene10.pory"
	.string "Gotta prepare for the next expansion\n"
	.string "pack, right? Catch 'em all. All the cute\l"
	.string "and cool ones, at least.$"

Expansion1_Rival_Scene10c_Text_23:
# 379 "data/expansion_1/scene10.pory"
	.string "Yeah… {PAUSE 100}I'll keep working on that idea\n"
	.string "I had. And…\l"
	.string "And I'll not rush anything just because\l"
	.string "I'm taking forever myself.$"

Expansion1_Rival_Scene10c_Text_24:
# 386 "data/expansion_1/scene10.pory"
	.string "Pfft. Fine, I'll fix your gaffs.$"

Expansion1_Rival_Scene10c_Text_25:
# 393 "data/expansion_1/scene10.pory"
	.string "I… {PAUSE 100}didn't…$"

Expansion1_Rival_Scene10c_Text_26:
# 395 "data/expansion_1/scene10.pory"
	.string "So there were a couple of mods I saw\n"
	.string "online that…$"

Expansion1_Rival_Scene10c_Text_27:
# 404 "data/expansion_1/scene10.pory"
	.string "Was… {PAUSE 100}Harper always this into this\n"
	.string "topic?$"

Expansion1_Rival_Scene10c_Text_28:
# 409 "data/expansion_1/scene10.pory"
	.string "Maybe she just likes things feeling\n"
	.string "neat and tidy?$"

Expansion1_Rival_Scene10c_Text_29:
# 412 "data/expansion_1/scene10.pory"
	.string "Or maybe those two are fucking?$"

Expansion1_Rival_Scene10c_Text_30:
# 420 "data/expansion_1/scene10.pory"
	.string "Sakura… {PAUSE 100}We're still here.$"

Expansion1_Rival_Scene10c_Text_31:
# 422 "data/expansion_1/scene10.pory"
	.string "I mean platonically! Sheesh.$"

Expansion1_Rival_Scene10c_Text_32:
# 424 "data/expansion_1/scene10.pory"
	.string "I think I'll let people fill in the\n"
	.string "blanks however they want.$"

Expansion1_Rival_Scene10c_Text_33:
# 431 "data/expansion_1/scene10.pory"
	.string "Scandalous{EMOJI_TILDE}{UNK_SPACER}$"

Expansion1_Rival_Scene10c_Text_34:
# 435 "data/expansion_1/scene10.pory"
	.string "Are they… {PAUSE 100}actually…{PAUSE 60}?$"

Expansion1_Rival_Scene10c_Text_35:
# 442 "data/expansion_1/scene10.pory"
	.string "Harper… {PAUSE 100}maybe don't imply something\n"
	.string "that isn't happening…{PAUSE 60}?$"

Expansion1_Rival_Scene10c_Text_36:
# 447 "data/expansion_1/scene10.pory"
	.string "Pfft. {PAUSE 60}Consider it penance for you not\n"
	.string "testing this thing properly.\l"
	.string "{EMOJI_BIGWHEEL}Sticks out her tongue playfully{EMOJI_BIGWHEEL}$"

Expansion1_Rival_Scene10c_Text_37:
# 451 "data/expansion_1/scene10.pory"
	.string "If only we were back in high school,\n"
	.string "this gossip would be all the rage.$"

Expansion1_Rival_Scene10c_Text_38:
# 456 "data/expansion_1/scene10.pory"
	.string "Well, I don't really wanna talk about\n"
	.string "anyone's love life.$"

Expansion1_Rival_Scene10c_Text_39:
# 459 "data/expansion_1/scene10.pory"
	.string "We're not-{PAUSE 20}!$"

Expansion1_Rival_Scene10c_Text_40:
# 461 "data/expansion_1/scene10.pory"
	.string "If that's all, I think I do want to look\n"
	.string "around a bit more now that I have the\l"
	.string "chance.$"

Expansion1_Rival_Scene10c_Text_41:
# 475 "data/expansion_1/scene10.pory"
	.string "Oh, you're not getting ahead of me!$"

Expansion1_Rival_Scene10c_Text_42:
# 490 "data/expansion_1/scene10.pory"
	.string "W-{PAUSE 30}wait! Me as well!$"

Expansion1_Rival_Scene10c_Text_43:
# 534 "data/expansion_1/scene10.pory"
	.string "Uh, you good, {PLAYER}?$"

Expansion1_Rival_Scene10c_Text_44:
# 545 "data/expansion_1/scene10.pory"
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
