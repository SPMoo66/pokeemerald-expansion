MossdeepCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
	.byte 0

MossdeepCity_Gym_OnTransition:
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
	setflag FLAG_TEMP_1
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 12, EventScript_Clear_FlagTemp1
	end

MossdeepCity_Gym_EventScript_WarpToEntrance::
	lockall
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
	waitstate
	releaseall
	end

MossdeepCity_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Virgil::
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Blake::
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Hannah::
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Samantha::
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Maura::
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Sylvia::
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Macey::
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Clifford::
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nicholas::
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Kathleen::
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_GymGuidePostVictory::
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_YellowFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 0
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_BlueFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 1
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_GreenFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 2
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 3
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_RedFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 4
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_Text_PrestonIntro:
	.string "Battles hinge on the strength of your\n"
	.string "spirit! The weak-spirited will never win!$"

MossdeepCity_Gym_Text_PrestonDefeat:
	.string "I lost!\n"
	.string "I must temper my spirit again!$"

MossdeepCity_Gym_Text_PrestonPostBattle:
	.string "The indecisive lose.\n"
	.string "That's my warning to you.$"

MossdeepCity_Gym_Text_VirgilIntro:
	.string "Let me see your talent!$"

MossdeepCity_Gym_Text_VirgilDefeat:
	.string "You possess spectacular talent!$"

MossdeepCity_Gym_Text_VirgilPostBattle:
	.string "If there are prodigies in the world,\n"
	.string "then our Gym Leaders are them!\p"
	.string "However, you may be even more talented\n"
	.string "than them…$"

MossdeepCity_Gym_Text_BlakeIntro:
	.string "Fufufufu… Watch me levitate a Poké\n"
	.string "Ball telekinetically!\p"
	.string "Wrooooooooaaaar!\n"
	.string "… … … … … … …\p"
	.string "Sometimes, I'm out of sync…$"

MossdeepCity_Gym_Text_BlakeDefeat:
	.string "My Pokémon battling skills are out\n"
	.string "of sync, too!$"

MossdeepCity_Gym_Text_BlakePostBattle:
	.string "A Poké Ball was too heavy to lift\n"
	.string "psychically. But this dust bunny…\p"
	.string "Whoooooooooooooooh!\n"
	.string "… … … … … …\p"
	.string "No, I'm not cheating!\n"
	.string "I didn't blow on it! Honestly!$"

MossdeepCity_Gym_Text_HannahIntro:
	.string "When you lose to me, don't be too hard\n"
	.string "on yourself.\p"
	.string "It's not that you're weak--I'm just\n"
	.string "too strong!$"

MossdeepCity_Gym_Text_HannahDefeat:
	.string "You're just too strong!$"

MossdeepCity_Gym_Text_HannahPostBattle:
	.string "I'm not going to get down on myself for\n"
	.string "losing. I just need to train harder.\p"
	.string "Positive thinking--that's my strong\n"
	.string "point!$"

MossdeepCity_Gym_Text_SamanthaIntro:
	.string "I see it…\n"
	.string "I see your future…\p"
	.string "If you can beat me, I will tell you\n"
	.string "your future!$"

MossdeepCity_Gym_Text_SamanthaDefeat:
	.string "I surrender!$"

MossdeepCity_Gym_Text_SamanthaPostBattle:
	.string "You will wage a terrifically intense\n"
	.string "battle with our Gym Leaders…\p"
	.string "The result…\n"
	.string "You won't hear it from me!$"

MossdeepCity_Gym_Text_MauraIntro:
	.string "The roads you have traveled…\n"
	.string "What you have experienced…\p"
	.string "Come at me with everything you've\n"
	.string "learned!$"

MossdeepCity_Gym_Text_MauraDefeat:
	.string "You've traveled a path of greatness!$"

MossdeepCity_Gym_Text_MauraPostBattle:
	.string "A bright future awaits those who have\n"
	.string "worked diligently.\p"
	.string "For those who lazed idly, there is\n"
	.string "only despair at the end.\p"
	.string "What goes around comes around…$"

MossdeepCity_Gym_Text_SylviaIntro:
	.string "Even at the risk of life, I will win\n"
	.string "this battle!$"

MossdeepCity_Gym_Text_SylviaDefeat:
	.string "What you do…\n"
	.string "It horrifies me…$"

MossdeepCity_Gym_Text_SylviaPostBattle:
	.string "How dare you beat me…\p"
	.string "It won't be my fault if something\n"
	.string "horrible befalls you…$"

MossdeepCity_Gym_Text_NateIntro:
	.string "Hohoho.\p"
	.string "You need me to show you how tenacious\n"
	.string "the Psychic type can be.$"

MossdeepCity_Gym_Text_NateDefeat:
	.string "Oh! My, my!\n"
	.string "Your battle style is fantastic!$"

MossdeepCity_Gym_Text_NatePostBattle:
	.string "I… I don't let defeat rattle m-me,\n"
	.string "however b-badly.$"

MossdeepCity_Gym_Text_KathleenIntro:
	.string "Let me show you a perfectly awful,\n"
	.string "horrifying time!$"

MossdeepCity_Gym_Text_KathleenDefeat:
	.string "N-nooooo!$"

MossdeepCity_Gym_Text_KathleenPostBattle:
	.string "Your vitality is contagious!\n"
	.string "Get away from me quickly!$"

MossdeepCity_Gym_Text_CliffordIntro:
	.string "I may be past my prime, but I suggest\n"
	.string "you not patronize me.$"

MossdeepCity_Gym_Text_CliffordDefeat:
	.string "Ah, you overflow with the power\n"
	.string "of youth!$"

MossdeepCity_Gym_Text_CliffordPostBattle:
	.string "It seems that I could not overcome\n"
	.string "your youthful energy.$"

MossdeepCity_Gym_Text_MaceyIntro:
	.string "You're not getting through to the end!\n"
	.string "Not if I can help it!$"

MossdeepCity_Gym_Text_MaceyDefeat:
	.string "How could you be so ludicrously\n"
	.string "strong?$"

MossdeepCity_Gym_Text_MaceyPostBattle:
	.string "Humph! You may be strong, but you're\n"
	.string "not suitable for the Psychic type!\p"
	.string "The way you battle is somehow brutal!$"

MossdeepCity_Gym_Text_NicholasIntro:
	.string "Wroooar! Have a taste of my super\n"
	.string "Pokémon hard-battling power!$"

MossdeepCity_Gym_Text_NicholasDefeat:
	.string "Oh!\n"
	.string "Done in!$"

MossdeepCity_Gym_Text_NicholasPostBattle:
	.string "All right! I think I'll develop a special\n"
	.string "invincible Pokémon power next.$"
