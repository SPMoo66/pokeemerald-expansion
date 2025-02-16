# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 3 "data/maps/Route103/scripts.pory"

# 4 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 5 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 6 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 7 "data/maps/Route103/scripts.pory"
	.byte 0
# 8 "data/maps/Route103/scripts.pory"

# 9 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 10 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route103/scripts.pory"
	end
# 13 "data/maps/Route103/scripts.pory"

# 14 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 15 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 16 "data/maps/Route103/scripts.pory"
	end
# 17 "data/maps/Route103/scripts.pory"

# 18 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 19 "data/maps/Route103/scripts.pory"
	setmetatile 51, 5, METATILE_General_CaveEntrance_Top, TRUE
# 20 "data/maps/Route103/scripts.pory"
	setmetatile 51, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 21 "data/maps/Route103/scripts.pory"
	return
# 22 "data/maps/Route103/scripts.pory"

# 23 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 24 "data/maps/Route103/scripts.pory"
	lockall
# 25 "data/maps/Route103/scripts.pory"
	checkplayergender
# 26 "data/maps/Route103/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 27 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 28 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 29 "data/maps/Route103/scripts.pory"
	end
# 30 "data/maps/Route103/scripts.pory"

# 31 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 32 "data/maps/Route103/scripts.pory"
	speakername CommonText_May
# 33 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 34 "data/maps/Route103/scripts.pory"
	closemessage
# 35 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 36 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 37 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 39 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 41 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route103/scripts.pory"
	speakername CommonText_May
# 43 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 44 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 45 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 46 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 47 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 48 "data/maps/Route103/scripts.pory"
	end
# 49 "data/maps/Route103/scripts.pory"

# 50 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 51 "data/maps/Route103/scripts.pory"
	speakername CommonText_Brendan
# 52 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 53 "data/maps/Route103/scripts.pory"
	closemessage
# 54 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 55 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 56 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 58 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 60 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route103/scripts.pory"
	speakername CommonText_Brendan
# 62 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 63 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 64 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 65 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 66 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 67 "data/maps/Route103/scripts.pory"
	end
# 68 "data/maps/Route103/scripts.pory"

# 69 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 70 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 71 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 72 "data/maps/Route103/scripts.pory"
	end
# 73 "data/maps/Route103/scripts.pory"

# 74 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 75 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 76 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 77 "data/maps/Route103/scripts.pory"
	end
# 78 "data/maps/Route103/scripts.pory"

# 79 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 80 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 81 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 82 "data/maps/Route103/scripts.pory"
	end
# 83 "data/maps/Route103/scripts.pory"

# 84 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 85 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 86 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 87 "data/maps/Route103/scripts.pory"
	end
# 88 "data/maps/Route103/scripts.pory"

# 89 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 90 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 91 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 92 "data/maps/Route103/scripts.pory"
	end
# 93 "data/maps/Route103/scripts.pory"

# 94 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 95 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 96 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 97 "data/maps/Route103/scripts.pory"
	end
# 98 "data/maps/Route103/scripts.pory"

# 99 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 100 "data/maps/Route103/scripts.pory"
	speakername CommonText_May
# 101 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 102 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 103 "data/maps/Route103/scripts.pory"
	end
# 104 "data/maps/Route103/scripts.pory"

# 105 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 106 "data/maps/Route103/scripts.pory"
	speakername CommonText_Brendan
# 107 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 108 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 109 "data/maps/Route103/scripts.pory"
	end
# 110 "data/maps/Route103/scripts.pory"

# 111 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 112 "data/maps/Route103/scripts.pory"
	closemessage
# 113 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 114 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 115 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 116 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 117 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 118 "data/maps/Route103/scripts.pory"
	end
# 119 "data/maps/Route103/scripts.pory"

# 120 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 121 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 122 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 123 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 125 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 126 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 128 "data/maps/Route103/scripts.pory"
	end
# 129 "data/maps/Route103/scripts.pory"

# 130 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 131 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 132 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkDown2
# 133 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 135 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 136 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 138 "data/maps/Route103/scripts.pory"
	end
# 139 "data/maps/Route103/scripts.pory"

# 140 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 141 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkDown2
# 142 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 144 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 145 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 147 "data/maps/Route103/scripts.pory"
	end
# 148 "data/maps/Route103/scripts.pory"

# 149 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 150 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 151 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 152 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 153 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 154 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 155 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 156 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 157 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 158 "data/maps/Route103/scripts.pory"
	releaseall
# 159 "data/maps/Route103/scripts.pory"
	end
# 160 "data/maps/Route103/scripts.pory"

# 161 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 162 "data/maps/Route103/scripts.pory"
	walk_left
# 163 "data/maps/Route103/scripts.pory"
	walk_down
# 164 "data/maps/Route103/scripts.pory"
	walk_down
# 165 "data/maps/Route103/scripts.pory"
	step_end
# 166 "data/maps/Route103/scripts.pory"

# 167 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 168 "data/maps/Route103/scripts.pory"
	jump_2_down
# 169 "data/maps/Route103/scripts.pory"
	delay_16
# 170 "data/maps/Route103/scripts.pory"
	walk_down
# 171 "data/maps/Route103/scripts.pory"
	walk_down
# 172 "data/maps/Route103/scripts.pory"
	walk_down
# 173 "data/maps/Route103/scripts.pory"
	step_end
# 174 "data/maps/Route103/scripts.pory"

# 175 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 176 "data/maps/Route103/scripts.pory"
	delay_16
# 177 "data/maps/Route103/scripts.pory"
	delay_4
# 178 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 179 "data/maps/Route103/scripts.pory"
	delay_16
# 180 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 181 "data/maps/Route103/scripts.pory"
	step_end
# 182 "data/maps/Route103/scripts.pory"

# 183 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 184 "data/maps/Route103/scripts.pory"
	jump_2_down
# 185 "data/maps/Route103/scripts.pory"
	delay_16
# 186 "data/maps/Route103/scripts.pory"
	walk_down
# 187 "data/maps/Route103/scripts.pory"
	walk_down
# 188 "data/maps/Route103/scripts.pory"
	step_end
# 189 "data/maps/Route103/scripts.pory"

# 190 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 191 "data/maps/Route103/scripts.pory"
	delay_16
# 192 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 193 "data/maps/Route103/scripts.pory"
	step_end
# 194 "data/maps/Route103/scripts.pory"

# 195 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 196 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 197 "data/maps/Route103/scripts.pory"
	end
# 198 "data/maps/Route103/scripts.pory"

# 199 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 200 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 201 "data/maps/Route103/scripts.pory"
	end
# 202 "data/maps/Route103/scripts.pory"

# 203 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 204 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 205 "data/maps/Route103/scripts.pory"
	end
# 206 "data/maps/Route103/scripts.pory"

# 207 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 208 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 209 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route103/scripts.pory"
	end
# 211 "data/maps/Route103/scripts.pory"

# 212 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 213 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 214 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 215 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 216 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route103/scripts.pory"
	end
# 218 "data/maps/Route103/scripts.pory"

# 219 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 220 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 221 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 222 "data/maps/Route103/scripts.pory"
	release
# 223 "data/maps/Route103/scripts.pory"
	end
# 224 "data/maps/Route103/scripts.pory"

# 225 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 226 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 227 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/Route103/scripts.pory"
	end
# 229 "data/maps/Route103/scripts.pory"

# 230 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 231 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 232 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 233 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 234 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route103/scripts.pory"
	end
# 236 "data/maps/Route103/scripts.pory"

# 237 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 238 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 239 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 240 "data/maps/Route103/scripts.pory"
	release
# 241 "data/maps/Route103/scripts.pory"
	end
# 242 "data/maps/Route103/scripts.pory"

# 243 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 244 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 245 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route103/scripts.pory"
	end
# 247 "data/maps/Route103/scripts.pory"

# 248 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 249 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 250 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route103/scripts.pory"
	end
# 252 "data/maps/Route103/scripts.pory"

# 253 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 254 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 255 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 256 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 257 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 258 "data/maps/Route103/scripts.pory"
	release
# 259 "data/maps/Route103/scripts.pory"
	end
# 260 "data/maps/Route103/scripts.pory"

# 261 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 262 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 263 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 265 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 266 "data/maps/Route103/scripts.pory"
	release
# 267 "data/maps/Route103/scripts.pory"
	end
# 268 "data/maps/Route103/scripts.pory"

# 269 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 270 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 271 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 272 "data/maps/Route103/scripts.pory"
	end
# 273 "data/maps/Route103/scripts.pory"

# 274 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 275 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 276 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 277 "data/maps/Route103/scripts.pory"
	end
# 278 "data/maps/Route103/scripts.pory"

# 279 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 280 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 281 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 282 "data/maps/Route103/scripts.pory"
	end
# 283 "data/maps/Route103/scripts.pory"

# 284 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 285 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 286 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route103/scripts.pory"
	end
# 288 "data/maps/Route103/scripts.pory"

# 289 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 290 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 291 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route103/scripts.pory"
	end
# 293 "data/maps/Route103/scripts.pory"

# 294 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 295 "data/maps/Route103/scripts.pory"
	.string "Let's see… The Pokémon found\n"
# 296 "data/maps/Route103/scripts.pory"
	.string "on Route 103 include…$"
# 297 "data/maps/Route103/scripts.pory"

# 298 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 299 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 300 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 301 "data/maps/Route103/scripts.pory"
	.string "a Pokémon as a gift.\p"
# 302 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 303 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 304 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 305 "data/maps/Route103/scripts.pory"
	.string "a Trainer is like.$"
# 306 "data/maps/Route103/scripts.pory"

# 307 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 308 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 309 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 310 "data/maps/Route103/scripts.pory"

# 311 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 312 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has\n"
# 313 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 314 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that Pokémon,\n"
# 315 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 316 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 317 "data/maps/Route103/scripts.pory"
	.string "kind of Pokémon easily.\p"
# 318 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 319 "data/maps/Route103/scripts.pory"
	.string "the Lab.$"
# 320 "data/maps/Route103/scripts.pory"

# 321 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 322 "data/maps/Route103/scripts.pory"
	.string "Okay, so it's this one and\n"
# 323 "data/maps/Route103/scripts.pory"
	.string "that one that live on Route 103…$"
# 324 "data/maps/Route103/scripts.pory"

# 325 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 326 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 327 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a Pokémon.\p"
# 328 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 329 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 330 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a Trainer's\n"
# 331 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 332 "data/maps/Route103/scripts.pory"

# 333 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 334 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 335 "data/maps/Route103/scripts.pory"

# 336 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 337 "data/maps/Route103/scripts.pory"
	.string "I think I get it.\n"
# 338 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 339 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 340 "data/maps/Route103/scripts.pory"
	.string "Look, your Pokémon already likes you,\n"
# 341 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 342 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 343 "data/maps/Route103/scripts.pory"
	.string "could befriend any Pokémon with ease.\p"
# 344 "data/maps/Route103/scripts.pory"
	.string "We should head back to the Lab.$"
# 345 "data/maps/Route103/scripts.pory"

# 346 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 347 "data/maps/Route103/scripts.pory"
	.string "My Pokémon is staggeringly tired…\n"
# 348 "data/maps/Route103/scripts.pory"
	.string "I should have brought a Potion…$"
# 349 "data/maps/Route103/scripts.pory"

# 350 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 351 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 352 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to Oldale Town.\p"
# 353 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 354 "data/maps/Route103/scripts.pory"

# 355 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 356 "data/maps/Route103/scripts.pory"
	.string "Route 103\n"
# 357 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} Oldale Town$"

TrainerTipsBattleSpeed::
# 362 "data/maps/Route103/scripts.pory"
	msgbox TrainerTipsBattleSpeed_Text_0, MSGBOX_SIGN
	return


TrainerTipsBattleSpeed_Text_0:
# 362 "data/maps/Route103/scripts.pory"
	.string "Trainer Tips\p"
	.string "If battle speed is set higher than 1x,\n"
	.string "hold the L button in battle to\l"
	.string "temporarily slow the battle down to\l"
	.string "normal speed.$"
