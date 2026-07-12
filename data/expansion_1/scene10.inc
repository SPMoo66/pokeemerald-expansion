IGB4_MoveCameraUp::
# 11 "data/expansion_1/scene10.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 50
	goto_if_eq IGB4_MoveCameraUp_1
# 19 "data/expansion_1/scene10.pory"
	setvar VAR_TEMP_2, 2
	return

IGB4_MoveCameraUp_1:
# 12 "data/expansion_1/scene10.pory"
	setvar VAR_TEMP_2, 1
# 13 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 14 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkUp2
# 15 "data/expansion_1/scene10.pory"
	waitmovement 0
# 16 "data/expansion_1/scene10.pory"
	special RemoveCameraObject
	return


IGB4_MoveCameraDown::
# 24 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 25 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDown2
# 26 "data/expansion_1/scene10.pory"
	waitmovement 0
# 27 "data/expansion_1/scene10.pory"
	special RemoveCameraObject
# 28 "data/expansion_1/scene10.pory"
	setvar VAR_TEMP_2, 0
	return


Expansion1_Rival_Scene10::
# 33 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10_Text_0, MSGBOX_YESNO
# 35 "data/expansion_1/scene10.pory"
	closemessage
# 36 "data/expansion_1/scene10.pory"
	compare VAR_RESULT, YES
	goto_if_eq Expansion1_Rival_Scene10_1
# 40 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 41 "data/expansion_1/scene10.pory"
	waitmovement 0
	return

Expansion1_Rival_Scene10_1:
# 37 "data/expansion_1/scene10.pory"
	goto Expansion1_Rival_Scene10b
	return


Expansion1_Rival_Scene10b::
# 46 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 47 "data/expansion_1/scene10.pory"
	waitmovement 0
# 48 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 49 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_0, MSGBOX_AUTOCLOSE
# 52 "data/expansion_1/scene10.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 53 "data/expansion_1/scene10.pory"
	switch VAR_TEMP_0
# 54 "data/expansion_1/scene10.pory"
	case 23, Expansion1_Rival_Scene10b_3
# 56 "data/expansion_1/scene10.pory"
	case 24, Expansion1_Rival_Scene10b_4
# 58 "data/expansion_1/scene10.pory"
	case 26, Expansion1_Rival_Scene10b_5
# 60 "data/expansion_1/scene10.pory"
	case 27, Expansion1_Rival_Scene10b_6
# 62 "data/expansion_1/scene10.pory"
	case 28, Expansion1_Rival_Scene10b_7
# 64 "data/expansion_1/scene10.pory"
	case 29, Expansion1_Rival_Scene10b_8
Expansion1_Rival_Scene10b_1:
# 67 "data/expansion_1/scene10.pory"
	waitmovement 0
# 68 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 69 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 70 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNE
# 71 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 72 "data/expansion_1/scene10.pory"
	waitmovement 0
# 73 "data/expansion_1/scene10.pory"
	playbgm MUS_DP_CATASTROPHE, FALSE
# 74 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 75 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_1
# 77 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 78 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_2, MSGBOX_AUTOCLOSE
# 81 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 82 "data/expansion_1/scene10.pory"
	waitmovement 0
# 83 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 84 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_3
# 85 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 86 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_4, MSGBOX_AUTOCLOSE
# 89 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 90 "data/expansion_1/scene10.pory"
	waitmovement 0
# 91 "data/expansion_1/scene10.pory"
	playbgm MUS_B2W2_VS_GHETSIS, TRUE
# 92 "data/expansion_1/scene10.pory"
	applymovement 3, Common_Movement_ShakeHorizontal
# 93 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
# 94 "data/expansion_1/scene10.pory"
	waitmoncry
# 97 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_TRANSIITON_BATTLE_MUSIC
# 98 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 99 "data/expansion_1/scene10.pory"
	setflag FLAG_SINGLE_WILD_OPPONENT
# 100 "data/expansion_1/scene10.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 1, 0, 0, 1
# 101 "data/expansion_1/scene10.pory"
	multi_2_vs_1 TRAINER_EXP_1_FINAL_BATTLE_1, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 102 "data/expansion_1/scene10.pory"
	clearflag FLAG_SINGLE_WILD_OPPONENT
# 103 "data/expansion_1/scene10.pory"
	clearflag FLAG_DONT_TRANSIITON_BATTLE_MUSIC
# 106 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 107 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_5
# 109 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 110 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_6, MSGBOX_AUTOCLOSE
# 115 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_HIGH_PITCH
# 116 "data/expansion_1/scene10.pory"
	call WeatherScript_SetAndDo_Rain
# 117 "data/expansion_1/scene10.pory"
	delay 60
# 119 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_LUCARIO, CRY_MODE_ENCOUNTER
# 120 "data/expansion_1/scene10.pory"
	waitmoncry
# 121 "data/expansion_1/scene10.pory"
	addobject 9
# 122 "data/expansion_1/scene10.pory"
	addobject 10
# 123 "data/expansion_1/scene10.pory"
	playse SE_PIN
# 124 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 125 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 126 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_WalkUp
# 127 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkUp
# 128 "data/expansion_1/scene10.pory"
	waitmovement 0
# 129 "data/expansion_1/scene10.pory"
	playse SE_LEDGE
# 130 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 131 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 132 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_JumpUp
# 133 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_JumpUp
# 134 "data/expansion_1/scene10.pory"
	waitmovement 0
# 135 "data/expansion_1/scene10.pory"
	applymovement 9, Common_Movement_WalkUp2
# 136 "data/expansion_1/scene10.pory"
	applymovement 10, Common_Movement_WalkUp2
# 137 "data/expansion_1/scene10.pory"
	waitmovement 0
# 140 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 141 "data/expansion_1/scene10.pory"
	setflag FLAG_WILD_OPPONENT
# 142 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 143 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 144 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_BGM, MUS_XD_VS_CIPHER_PEON
# 145 "data/expansion_1/scene10.pory"
	multi_2_vs_2 TRAINER_WILD_POKEMON_IG_5, Exp1_WildPokemonTrainerText_Defeat, TRAINER_WILD_POKEMON_IG_6, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 146 "data/expansion_1/scene10.pory"
	clearflag FLAG_WILD_OPPONENT
# 147 "data/expansion_1/scene10.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 148 "data/expansion_1/scene10.pory"
	call WeatherScript_SetAndDo_None
# 149 "data/expansion_1/scene10.pory"
	delay 30
# 152 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 153 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 154 "data/expansion_1/scene10.pory"
	waitmovement 0
# 155 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 156 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_7
# 157 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 158 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_8
# 162 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 163 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_9
# 165 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 166 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_10
# 168 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 169 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_11
# 170 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
# 171 "data/expansion_1/scene10.pory"
	waitmoncry
# 172 "data/expansion_1/scene10.pory"
	savebgm MUS_VICTORY_TRAINER
# 175 "data/expansion_1/scene10.pory"
	setstartingstatus STARTING_STATUS_RAINBOW_PLAYER
# 176 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_TRANSIITON_BATTLE_MUSIC
# 177 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 178 "data/expansion_1/scene10.pory"
	setflag FLAG_SINGLE_WILD_OPPONENT
# 179 "data/expansion_1/scene10.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 1, 0, 0, 1
# 180 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 181 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_BGM, MUS_B2W2_VS_GHETSIS
# 182 "data/expansion_1/scene10.pory"
	multi_2_vs_1 TRAINER_EXP_1_FINAL_BATTLE_2, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 183 "data/expansion_1/scene10.pory"
	clearflag FLAG_SINGLE_WILD_OPPONENT
# 184 "data/expansion_1/scene10.pory"
	clearflag FLAG_DONT_TRANSIITON_BATTLE_MUSIC
# 187 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 188 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_12
# 189 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 190 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_13, MSGBOX_AUTOCLOSE
	return

Expansion1_Rival_Scene10b_3:
# 55 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_4:
# 57 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_5:
# 59 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_6:
# 61 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft2
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_7:
# 63 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_8:
# 65 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft4
	goto Expansion1_Rival_Scene10b_1


Expansion1_Rival_Scene10_Text_0:
# 33 "data/expansion_1/scene10.pory"
	.string "Are you prepared to face off\n"
	.string "against your final opponents?$"

Expansion1_Rival_Scene10b_Text_0:
# 49 "data/expansion_1/scene10.pory"
	.string "{PLAYER}!\n"
	.string "It looks like it worked in the end!\l"
	.string "Let's take this on together.$"

Expansion1_Rival_Scene10b_Text_1:
# 75 "data/expansion_1/scene10.pory"
	.string "Everyone, get ready! This'll be custom,\n"
	.string "so there's no telling how it will go!$"

Expansion1_Rival_Scene10b_Text_2:
# 78 "data/expansion_1/scene10.pory"
	.string "Hah… {PAUSE 100}with how everything else has\n"
	.string "gone? Custom mechanics sound like a\l"
	.string "perfectly chaotic climax.$"

Expansion1_Rival_Scene10b_Text_3:
# 84 "data/expansion_1/scene10.pory"
	.string "What?! {PAUSE 60}What do you mean ‘no telling’?!$"

Expansion1_Rival_Scene10b_Text_4:
# 86 "data/expansion_1/scene10.pory"
	.string "Baron, we can take it! Back to back.\n"
	.string "Allies that fight until the final\l"
	.string "breath!$"

Expansion1_Rival_Scene10b_Text_5:
# 107 "data/expansion_1/scene10.pory"
	.string "It-{PAUSE 30}It looks almost dead…{PAUSE 100}?\n"
	.string "Did we beat it?$"

Expansion1_Rival_Scene10b_Text_6:
# 110 "data/expansion_1/scene10.pory"
	.string "Tsk. This is when they're at their\n"
	.string "most dangerous.\p"
	.string "{EMOJI_BIGWHEEL}Clenches fist{EMOJI_BIGWHEEL}\n"
	.string "Down with you!$"

Expansion1_Rival_Scene10b_Text_7:
# 156 "data/expansion_1/scene10.pory"
	.string "Again? Jeez! This guy won't give up!$"

Expansion1_Rival_Scene10b_Text_8:
# 158 "data/expansion_1/scene10.pory"
	.string "HAHAHA!\n"
	.string "Live up to your name, {PAUSE 60}“Redd”!\l"
	.string "Let us BATHE IN THE BLOOD OF OUR\l"
	.string "ENEMIES!!!$"

Expansion1_Rival_Scene10b_Text_9:
# 163 "data/expansion_1/scene10.pory"
	.string "That's not-…{PAUSE 100}! F-{PAUSE 30}FINE!\n"
	.string "I can go another round!$"

Expansion1_Rival_Scene10b_Text_10:
# 166 "data/expansion_1/scene10.pory"
	.string "Everything comes in threes.\n"
	.string "This should be the last phase!$"

Expansion1_Rival_Scene10b_Text_11:
# 169 "data/expansion_1/scene10.pory"
	.string "One more time!$"

Expansion1_Rival_Scene10b_Text_12:
# 188 "data/expansion_1/scene10.pory"
	.string "Is that…{PAUSE 100}?!$"

Expansion1_Rival_Scene10b_Text_13:
# 190 "data/expansion_1/scene10.pory"
	.string "Did it… {PAUSE 100}Did it actually…{PAUSE 100}?$"
