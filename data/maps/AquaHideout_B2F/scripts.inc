# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_MATT, 1
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_SUBMARINE, 4
# 4 "data/maps/AquaHideout_B2F/scripts.pory"

# 5 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattNoticePlayer::
# 6 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
# 8 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 9 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 10 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 12 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 13 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 14 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 16 "data/maps/AquaHideout_B2F/scripts.pory"

# 17 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Matt::
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 21 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 22 "data/maps/AquaHideout_B2F/scripts.pory"

# 23 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
# 25 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_SUBMARINE
# 26 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 29 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, Common_Movement_WalkLeft4
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 45 "data/maps/AquaHideout_B2F/scripts.pory"

# 46 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 50 "data/maps/AquaHideout_B2F/scripts.pory"

# 51 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 55 "data/maps/AquaHideout_B2F/scripts.pory"

# 56 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 60 "data/maps/AquaHideout_B2F/scripts.pory"

# 61 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 65 "data/maps/AquaHideout_B2F/scripts.pory"

# 66 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro:
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\p"
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Got here already, did you?\n"
# 69 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But this is it!\p"
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm a cut above the Grunts you've seen\n"
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "so far.\p"
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm not stalling for time.\n"
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm going to pulverize you!$"
# 75 "data/maps/AquaHideout_B2F/scripts.pory"

# 76 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 79 "data/maps/AquaHideout_B2F/scripts.pory"

# 80 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our Boss\n"
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$"
# 84 "data/maps/AquaHideout_B2F/scripts.pory"

# 85 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our Boss has already gone on his way to\n"
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 89 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lilycove.\p"
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But will you find it then?\n"
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!$"
# 94 "data/maps/AquaHideout_B2F/scripts.pory"

# 95 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 97 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 98 "data/maps/AquaHideout_B2F/scripts.pory"

# 99 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 102 "data/maps/AquaHideout_B2F/scripts.pory"

# 103 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 104 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Boss…\n"
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 106 "data/maps/AquaHideout_B2F/scripts.pory"

# 107 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 108 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the Hideout's pride\n"
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 112 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 114 "data/maps/AquaHideout_B2F/scripts.pory"

# 115 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 118 "data/maps/AquaHideout_B2F/scripts.pory"

# 119 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the Master Ball.\p"
# 122 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our Boss will\n"
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 124 "data/maps/AquaHideout_B2F/scripts.pory"

# 125 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 126 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined Team Aqua, the first\n"
# 127 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 128 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 129 "data/maps/AquaHideout_B2F/scripts.pory"

# 130 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 133 "data/maps/AquaHideout_B2F/scripts.pory"

# 134 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"

AquaHideout_B2F_MapScripts::
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 143 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_set FLAG_CAUGHT_GENESECT, AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_lt AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEMP_2
# 148 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject 7
	return

AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 152 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

AquaHideout_B2F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 153 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


BattleGenesect::
# 159 "data/maps/AquaHideout_B2F/scripts.pory"
	lock
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 161 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_LAST_TALKED, 7
# 162 "data/maps/AquaHideout_B2F/scripts.pory"
	playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER
# 163 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox BattleGenesect_Text_0
# 164 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmoncry
# 165 "data/maps/AquaHideout_B2F/scripts.pory"
	seteventmon SPECIES_GENESECT, 40
# 166 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 167 "data/maps/AquaHideout_B2F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 168 "data/maps/AquaHideout_B2F/scripts.pory"
	waitstate
# 169 "data/maps/AquaHideout_B2F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 170 "data/maps/AquaHideout_B2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 171 "data/maps/AquaHideout_B2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleGenesect_2
BattleGenesect_1:
# 174 "data/maps/AquaHideout_B2F/scripts.pory"
	release
	end

BattleGenesect_2:
# 172 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_CAUGHT_GENESECT
	goto BattleGenesect_1


BattleGenesect_Text_0:
# 163 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wraaayuu!$"
