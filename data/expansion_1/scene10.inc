Expansion1_Rival_Scene10::
# 9 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10_Text_0, MSGBOX_YESNO
# 11 "data/expansion_1/scene10.pory"
	closemessage
# 12 "data/expansion_1/scene10.pory"
	compare VAR_RESULT, YES
	goto_if_eq Expansion1_Rival_Scene10_1
# 16 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 17 "data/expansion_1/scene10.pory"
	waitmovement 0
	return

Expansion1_Rival_Scene10_1:
# 13 "data/expansion_1/scene10.pory"
	goto Expansion1_Rival_Scene10b
	return


Expansion1_Rival_Scene10b::
# 22 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 23 "data/expansion_1/scene10.pory"
	waitmovement 0
# 24 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 25 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/expansion_1/scene10.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 29 "data/expansion_1/scene10.pory"
	switch VAR_TEMP_0
# 30 "data/expansion_1/scene10.pory"
	case 23, Expansion1_Rival_Scene10b_3
# 32 "data/expansion_1/scene10.pory"
	case 24, Expansion1_Rival_Scene10b_4
# 34 "data/expansion_1/scene10.pory"
	case 26, Expansion1_Rival_Scene10b_5
# 36 "data/expansion_1/scene10.pory"
	case 27, Expansion1_Rival_Scene10b_6
# 38 "data/expansion_1/scene10.pory"
	case 28, Expansion1_Rival_Scene10b_7
# 40 "data/expansion_1/scene10.pory"
	case 29, Expansion1_Rival_Scene10b_8
Expansion1_Rival_Scene10b_1:
# 43 "data/expansion_1/scene10.pory"
	waitmovement 0
# 44 "data/expansion_1/scene10.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 45 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 46 "data/expansion_1/scene10.pory"
	waitmovement 0
# 47 "data/expansion_1/scene10.pory"
	special SpawnCameraObject
# 48 "data/expansion_1/scene10.pory"
	applymovement LOCALID_CAMERA, Common_Movement_WalkDiagNE
# 49 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 50 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_1
# 52 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 53 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_2, MSGBOX_AUTOCLOSE
# 56 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 57 "data/expansion_1/scene10.pory"
	waitmovement 0
# 58 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 59 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_3
# 60 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 61 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_4, MSGBOX_AUTOCLOSE
# 64 "data/expansion_1/scene10.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 65 "data/expansion_1/scene10.pory"
	waitmovement 0
# 66 "data/expansion_1/scene10.pory"
	playbgm MUS_B2W2_VS_GHETSIS, TRUE
# 67 "data/expansion_1/scene10.pory"
	applymovement 3, Common_Movement_ShakeHorizontal
# 68 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
# 69 "data/expansion_1/scene10.pory"
	waitmoncry
# 72 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_TRANSIITON_BATTLE_MUSIC
# 73 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 74 "data/expansion_1/scene10.pory"
	setflag FLAG_SINGLE_WILD_OPPONENT
# 75 "data/expansion_1/scene10.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 1, 0, 0, 1
# 76 "data/expansion_1/scene10.pory"
	multi_2_vs_1 TRAINER_EXP_1_FINAL_BATTLE_1, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 77 "data/expansion_1/scene10.pory"
	clearflag FLAG_SINGLE_WILD_OPPONENT
# 78 "data/expansion_1/scene10.pory"
	clearflag FLAG_DONT_TRANSIITON_BATTLE_MUSIC
# 81 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 82 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_5
# 84 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 85 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_6, MSGBOX_AUTOCLOSE
# 91 "data/expansion_1/scene10.pory"
	setstartingstatus STARTING_STATUS_TAILWIND_OPPONENT_TEMPORARY
# 92 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 93 "data/expansion_1/scene10.pory"
	setflag FLAG_WILD_OPPONENT
# 94 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 95 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_BGM, MUS_XD_VS_CIPHER_PEON
# 96 "data/expansion_1/scene10.pory"
	multi_2_vs_2 TRAINER_WILD_POKEMON_IG_5, Exp1_WildPokemonTrainerText_Defeat, TRAINER_WILD_POKEMON_IG_6, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 97 "data/expansion_1/scene10.pory"
	clearflag FLAG_WILD_OPPONENT
# 100 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 101 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_7
# 102 "data/expansion_1/scene10.pory"
	speakername CommonText_Sakura
# 103 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_8
# 107 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 108 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_9
# 110 "data/expansion_1/scene10.pory"
	speakername CommonText_Jakson
# 111 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_10
# 113 "data/expansion_1/scene10.pory"
	speakername CommonText_Harper
# 114 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_11
# 115 "data/expansion_1/scene10.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
# 116 "data/expansion_1/scene10.pory"
	waitmoncry
# 117 "data/expansion_1/scene10.pory"
	savebgm MUS_VICTORY_TRAINER
# 120 "data/expansion_1/scene10.pory"
	setflag FLAG_DONT_TRANSIITON_BATTLE_MUSIC
# 121 "data/expansion_1/scene10.pory"
	setflag FLAG_NO_MONEY_LOSS_ON_DEFEAT
# 122 "data/expansion_1/scene10.pory"
	setflag FLAG_SINGLE_WILD_OPPONENT
# 123 "data/expansion_1/scene10.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 1, 0, 0, 1
# 124 "data/expansion_1/scene10.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 125 "data/expansion_1/scene10.pory"
	setvar VAR_BATTLE_BGM, MUS_B2W2_VS_GHETSIS
# 126 "data/expansion_1/scene10.pory"
	multi_2_vs_1 TRAINER_EXP_1_FINAL_BATTLE_2, Exp1_WildPokemonTrainerText_Defeat, PARTNER_FOLLOWER_HARPER_EXP_1_FINAL_BOSS
# 127 "data/expansion_1/scene10.pory"
	clearflag FLAG_SINGLE_WILD_OPPONENT
# 128 "data/expansion_1/scene10.pory"
	clearflag FLAG_DONT_TRANSIITON_BATTLE_MUSIC
# 131 "data/expansion_1/scene10.pory"
	speakername CommonText_Redd
# 132 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_12
# 133 "data/expansion_1/scene10.pory"
	call GetBaronsName
# 134 "data/expansion_1/scene10.pory"
	msgbox Expansion1_Rival_Scene10b_Text_13
	return

Expansion1_Rival_Scene10b_3:
# 31 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_4:
# 33 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_5:
# 35 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_6:
# 37 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft2
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_7:
# 39 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
	goto Expansion1_Rival_Scene10b_1

Expansion1_Rival_Scene10b_8:
# 41 "data/expansion_1/scene10.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft4
	goto Expansion1_Rival_Scene10b_1


Expansion1_Rival_Scene10_Text_0:
# 9 "data/expansion_1/scene10.pory"
	.string "Are you prepared to face off\n"
	.string "against your final opponents?$"

Expansion1_Rival_Scene10b_Text_0:
# 25 "data/expansion_1/scene10.pory"
	.string "{PLAYER}!\n"
	.string "It looks like it worked in the end!\l"
	.string "Let's take this on together.$"

Expansion1_Rival_Scene10b_Text_1:
# 50 "data/expansion_1/scene10.pory"
	.string "Everyone, get ready! This'll be custom,\n"
	.string "so there's no telling how it will go!$"

Expansion1_Rival_Scene10b_Text_2:
# 53 "data/expansion_1/scene10.pory"
	.string "Hah… {PAUSE 100}with how everything else has\n"
	.string "gone? Custom mechanics sound like a\l"
	.string "perfectly chaotic climax.$"

Expansion1_Rival_Scene10b_Text_3:
# 59 "data/expansion_1/scene10.pory"
	.string "What?! {PAUSE 60}What do you mean ‘no telling’?!$"

Expansion1_Rival_Scene10b_Text_4:
# 61 "data/expansion_1/scene10.pory"
	.string "Baron, we can take it! Back to back.\n"
	.string "Allies that fight until the final\l"
	.string "breath!$"

Expansion1_Rival_Scene10b_Text_5:
# 82 "data/expansion_1/scene10.pory"
	.string "It-{PAUSE 30}It looks almost dead…{PAUSE 100}?\n"
	.string "Did we beat it?$"

Expansion1_Rival_Scene10b_Text_6:
# 85 "data/expansion_1/scene10.pory"
	.string "Tsk. This is when they're at their\n"
	.string "most dangerous.\p"
	.string "{EMOJI_BIGWHEEL}Clenches fist{EMOJI_BIGWHEEL}\n"
	.string "Down with you!$"

Expansion1_Rival_Scene10b_Text_7:
# 101 "data/expansion_1/scene10.pory"
	.string "Again? Jeez! This guy won't give up!$"

Expansion1_Rival_Scene10b_Text_8:
# 103 "data/expansion_1/scene10.pory"
	.string "HAHAHA!\n"
	.string "Live up to your name, {PAUSE 60}“Redd”!\l"
	.string "Let us BATHE IN THE BLOOD OF OUR\l"
	.string "ENEMIES!!!$"

Expansion1_Rival_Scene10b_Text_9:
# 108 "data/expansion_1/scene10.pory"
	.string "That's not-…{PAUSE 100}! F-{PAUSE 30}FINE!\n"
	.string "I can go another round!$"

Expansion1_Rival_Scene10b_Text_10:
# 111 "data/expansion_1/scene10.pory"
	.string "Everything comes in threes.\n"
	.string "This should be the last phase!$"

Expansion1_Rival_Scene10b_Text_11:
# 114 "data/expansion_1/scene10.pory"
	.string "One more time!$"

Expansion1_Rival_Scene10b_Text_12:
# 132 "data/expansion_1/scene10.pory"
	.string "Is that…{PAUSE 100}?!$"

Expansion1_Rival_Scene10b_Text_13:
# 134 "data/expansion_1/scene10.pory"
	.string "Did it… {PAUSE 100}Did it actually…{PAUSE 100}?$"
