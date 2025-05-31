# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 3 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 4 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 5 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 6 "data/maps/Route110/scripts.pory"
	.byte 0
# 7 "data/maps/Route110/scripts.pory"

# 8 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 9 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 10 "data/maps/Route110/scripts.pory"
	end
# 11 "data/maps/Route110/scripts.pory"

# 12 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 13 "data/maps/Route110/scripts.pory"
	setflag FLAG_TEMP_1
# 14 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 5, EventScript_Clear_FlagTemp1
# 15 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 17 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 18 "data/maps/Route110/scripts.pory"
	end
# 19 "data/maps/Route110/scripts.pory"

# 20 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 21 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 22 "data/maps/Route110/scripts.pory"
	return
# 23 "data/maps/Route110/scripts.pory"

# 24 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 25 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 26 "data/maps/Route110/scripts.pory"
	.2byte 0
# 27 "data/maps/Route110/scripts.pory"

# 28 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 29 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 30 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 31 "data/maps/Route110/scripts.pory"
	return
# 32 "data/maps/Route110/scripts.pory"

# 33 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 34 "data/maps/Route110/scripts.pory"
	lock
# 35 "data/maps/Route110/scripts.pory"
	faceplayer
# 36 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 37 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 38 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route110/scripts.pory"
	release
# 40 "data/maps/Route110/scripts.pory"
	end
# 41 "data/maps/Route110/scripts.pory"

# 42 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 43 "data/maps/Route110/scripts.pory"
	lock
# 44 "data/maps/Route110/scripts.pory"
	faceplayer
# 45 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 46 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 47 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route110/scripts.pory"
	release
# 49 "data/maps/Route110/scripts.pory"
	end
# 50 "data/maps/Route110/scripts.pory"

# 51 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 52 "data/maps/Route110/scripts.pory"
	lock
# 53 "data/maps/Route110/scripts.pory"
	faceplayer
# 54 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 55 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 56 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route110/scripts.pory"
	release
# 58 "data/maps/Route110/scripts.pory"
	end
# 59 "data/maps/Route110/scripts.pory"

# 60 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 61 "data/maps/Route110/scripts.pory"
	lock
# 62 "data/maps/Route110/scripts.pory"
	faceplayer
# 63 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 64 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 65 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route110/scripts.pory"
	release
# 67 "data/maps/Route110/scripts.pory"
	end
# 68 "data/maps/Route110/scripts.pory"

# 69 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 70 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 71 "data/maps/Route110/scripts.pory"
	end
# 72 "data/maps/Route110/scripts.pory"

# 73 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 74 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 75 "data/maps/Route110/scripts.pory"
	end
# 76 "data/maps/Route110/scripts.pory"

# 77 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 78 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 79 "data/maps/Route110/scripts.pory"
	end
# 80 "data/maps/Route110/scripts.pory"

# 81 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 82 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 83 "data/maps/Route110/scripts.pory"
	end
# 84 "data/maps/Route110/scripts.pory"

# 85 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 86 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 87 "data/maps/Route110/scripts.pory"
	end
# 88 "data/maps/Route110/scripts.pory"

# 89 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 90 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 91 "data/maps/Route110/scripts.pory"
	end
# 92 "data/maps/Route110/scripts.pory"

# 93 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 94 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 95 "data/maps/Route110/scripts.pory"
	end
# 96 "data/maps/Route110/scripts.pory"

# 97 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 98 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 99 "data/maps/Route110/scripts.pory"
	end
# 100 "data/maps/Route110/scripts.pory"

# 101 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 102 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 103 "data/maps/Route110/scripts.pory"
	end
# 104 "data/maps/Route110/scripts.pory"

# 105 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 106 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 107 "data/maps/Route110/scripts.pory"
	end
# 108 "data/maps/Route110/scripts.pory"

# 109 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 110 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 111 "data/maps/Route110/scripts.pory"
	end
# 112 "data/maps/Route110/scripts.pory"

# 113 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 114 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 115 "data/maps/Route110/scripts.pory"
	end
# 116 "data/maps/Route110/scripts.pory"

# 117 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 118 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 119 "data/maps/Route110/scripts.pory"
	end
# 120 "data/maps/Route110/scripts.pory"

# 121 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 122 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 123 "data/maps/Route110/scripts.pory"
	end
# 124 "data/maps/Route110/scripts.pory"

# 125 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 126 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 127 "data/maps/Route110/scripts.pory"
	end
# 128 "data/maps/Route110/scripts.pory"

# 129 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 130 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 131 "data/maps/Route110/scripts.pory"
	end
# 132 "data/maps/Route110/scripts.pory"

# 133 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 134 "data/maps/Route110/scripts.pory"
	lockall
# 135 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 136 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 137 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 138 "data/maps/Route110/scripts.pory"
	releaseall
# 139 "data/maps/Route110/scripts.pory"
	end
# 140 "data/maps/Route110/scripts.pory"

# 141 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 142 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 143 "data/maps/Route110/scripts.pory"
	releaseall
# 144 "data/maps/Route110/scripts.pory"
	end
# 145 "data/maps/Route110/scripts.pory"

# 146 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 147 "data/maps/Route110/scripts.pory"
	lock
# 148 "data/maps/Route110/scripts.pory"
	faceplayer
# 149 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 150 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 151 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 152 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 153 "data/maps/Route110/scripts.pory"
	release
# 154 "data/maps/Route110/scripts.pory"
	end
# 155 "data/maps/Route110/scripts.pory"

# 156 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 157 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 158 "data/maps/Route110/scripts.pory"
	release
# 159 "data/maps/Route110/scripts.pory"
	end
# 160 "data/maps/Route110/scripts.pory"

# 161 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 162 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 163 "data/maps/Route110/scripts.pory"
	release
# 164 "data/maps/Route110/scripts.pory"
	end
# 165 "data/maps/Route110/scripts.pory"

# 166 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 167 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 168 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route110/scripts.pory"
	end
# 170 "data/maps/Route110/scripts.pory"

# 171 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 172 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 173 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route110/scripts.pory"
	end
# 175 "data/maps/Route110/scripts.pory"

# 176 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 177 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 178 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 179 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 180 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 181 "data/maps/Route110/scripts.pory"
	release
# 182 "data/maps/Route110/scripts.pory"
	end
# 183 "data/maps/Route110/scripts.pory"

# 184 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 185 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 186 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 188 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 189 "data/maps/Route110/scripts.pory"
	release
# 190 "data/maps/Route110/scripts.pory"
	end
# 191 "data/maps/Route110/scripts.pory"

# 192 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 193 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 194 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route110/scripts.pory"
	end
# 196 "data/maps/Route110/scripts.pory"

# 197 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 198 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 199 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route110/scripts.pory"
	end
# 201 "data/maps/Route110/scripts.pory"

# 202 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 203 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 204 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route110/scripts.pory"
	end
# 206 "data/maps/Route110/scripts.pory"

# 207 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 208 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 209 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route110/scripts.pory"
	end
# 211 "data/maps/Route110/scripts.pory"

# 212 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 213 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 214 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 215 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 216 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 217 "data/maps/Route110/scripts.pory"
	release
# 218 "data/maps/Route110/scripts.pory"
	end
# 219 "data/maps/Route110/scripts.pory"

# 220 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 221 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 222 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 224 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 225 "data/maps/Route110/scripts.pory"
	release
# 226 "data/maps/Route110/scripts.pory"
	end
# 227 "data/maps/Route110/scripts.pory"

# 228 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 229 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 230 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/Route110/scripts.pory"
	end
# 232 "data/maps/Route110/scripts.pory"

# 233 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 234 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 235 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route110/scripts.pory"
	end
# 237 "data/maps/Route110/scripts.pory"

# 238 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 239 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 240 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 241 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 242 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 243 "data/maps/Route110/scripts.pory"
	release
# 244 "data/maps/Route110/scripts.pory"
	end
# 245 "data/maps/Route110/scripts.pory"

# 246 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 247 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 248 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 250 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 251 "data/maps/Route110/scripts.pory"
	release
# 252 "data/maps/Route110/scripts.pory"
	end
# 253 "data/maps/Route110/scripts.pory"

# 254 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 255 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 256 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/Route110/scripts.pory"
	end
# 258 "data/maps/Route110/scripts.pory"

# 259 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 260 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 261 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 262 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 263 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 264 "data/maps/Route110/scripts.pory"
	release
# 265 "data/maps/Route110/scripts.pory"
	end
# 266 "data/maps/Route110/scripts.pory"

# 267 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 268 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 269 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 270 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 271 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 272 "data/maps/Route110/scripts.pory"
	release
# 273 "data/maps/Route110/scripts.pory"
	end
# 274 "data/maps/Route110/scripts.pory"

# 275 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 276 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 277 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route110/scripts.pory"
	end
# 279 "data/maps/Route110/scripts.pory"

# 280 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 281 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 282 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/Route110/scripts.pory"
	end
# 284 "data/maps/Route110/scripts.pory"

# 285 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 286 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 287 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route110/scripts.pory"
	end
# 289 "data/maps/Route110/scripts.pory"

# 290 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 291 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 292 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route110/scripts.pory"
	end
# 294 "data/maps/Route110/scripts.pory"

# 295 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 296 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 297 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route110/scripts.pory"
	end
# 299 "data/maps/Route110/scripts.pory"

# 300 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 301 "data/maps/Route110/scripts.pory"
	lockall
# 302 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 303 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 304 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 305 "data/maps/Route110/scripts.pory"
	releaseall
# 306 "data/maps/Route110/scripts.pory"
	end
# 307 "data/maps/Route110/scripts.pory"

# 308 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 309 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 310 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 311 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 312 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 313 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 314 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 315 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 316 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 317 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 318 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 319 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 320 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 321 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 322 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 323 "data/maps/Route110/scripts.pory"
	end
# 324 "data/maps/Route110/scripts.pory"

# 325 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 326 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 327 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 328 "data/maps/Route110/scripts.pory"
	end
# 329 "data/maps/Route110/scripts.pory"

# 330 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 331 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 332 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 333 "data/maps/Route110/scripts.pory"
	end
# 334 "data/maps/Route110/scripts.pory"

# 335 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 336 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 337 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 338 "data/maps/Route110/scripts.pory"
	end
# 339 "data/maps/Route110/scripts.pory"

# 340 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 341 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 342 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 343 "data/maps/Route110/scripts.pory"
	end
# 344 "data/maps/Route110/scripts.pory"

# 345 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 346 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 347 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 348 "data/maps/Route110/scripts.pory"
	end
# 349 "data/maps/Route110/scripts.pory"

# 350 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 351 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 352 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 353 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 354 "data/maps/Route110/scripts.pory"
	return
# 355 "data/maps/Route110/scripts.pory"

# 356 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 357 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 358 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 359 "data/maps/Route110/scripts.pory"
	end
# 360 "data/maps/Route110/scripts.pory"

# 361 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 362 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 363 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 364 "data/maps/Route110/scripts.pory"
	end
# 365 "data/maps/Route110/scripts.pory"

# 366 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 367 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 368 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 369 "data/maps/Route110/scripts.pory"
	end
# 370 "data/maps/Route110/scripts.pory"

# 371 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 372 "data/maps/Route110/scripts.pory"
	lockall
# 373 "data/maps/Route110/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 374 "data/maps/Route110/scripts.pory"
	checkplayergender
# 375 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 376 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 377 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 378 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 379 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 380 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 382 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route110/scripts.pory"
	delay 30
# 384 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 385 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 386 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 387 "data/maps/Route110/scripts.pory"
	checkplayergender
# 388 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 389 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 390 "data/maps/Route110/scripts.pory"
	end
# 391 "data/maps/Route110/scripts.pory"

# 392 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 393 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 394 "data/maps/Route110/scripts.pory"
	return
# 395 "data/maps/Route110/scripts.pory"

# 396 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 397 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 398 "data/maps/Route110/scripts.pory"
	return
# 399 "data/maps/Route110/scripts.pory"

# 400 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 401 "data/maps/Route110/scripts.pory"
	speakername (CommonText_May)
# 402 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 403 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 404 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 405 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 406 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 407 "data/maps/Route110/scripts.pory"
	end
# 408 "data/maps/Route110/scripts.pory"

# 409 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 410 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 411 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 412 "data/maps/Route110/scripts.pory"
	end
# 413 "data/maps/Route110/scripts.pory"

# 414 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 415 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 416 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 417 "data/maps/Route110/scripts.pory"
	end
# 418 "data/maps/Route110/scripts.pory"

# 419 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 420 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 421 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 422 "data/maps/Route110/scripts.pory"
	end
# 423 "data/maps/Route110/scripts.pory"

# 424 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 425 "data/maps/Route110/scripts.pory"
	speakername (CommonText_May)
# 426 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 427 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GivePokemonBoxLink
# 428 "data/maps/Route110/scripts.pory"
	speakername (CommonText_May)
# 429 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainPokemonBoxLink, MSGBOX_DEFAULT
# 430 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 431 "data/maps/Route110/scripts.pory"
	end
# 432 "data/maps/Route110/scripts.pory"

# 433 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 434 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Brendan)
# 435 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 436 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 437 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 438 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 439 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 440 "data/maps/Route110/scripts.pory"
	end
# 441 "data/maps/Route110/scripts.pory"

# 442 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 443 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 444 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 445 "data/maps/Route110/scripts.pory"
	end
# 446 "data/maps/Route110/scripts.pory"

# 447 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 448 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 449 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 450 "data/maps/Route110/scripts.pory"
	end
# 451 "data/maps/Route110/scripts.pory"

# 452 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 453 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 454 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 455 "data/maps/Route110/scripts.pory"
	end
# 456 "data/maps/Route110/scripts.pory"

# 457 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 458 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Brendan)
# 459 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 460 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GivePokemonBoxLink
# 461 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Brendan)
# 462 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainPokemonBoxLink, MSGBOX_DEFAULT
# 463 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 464 "data/maps/Route110/scripts.pory"
	end
# 465 "data/maps/Route110/scripts.pory"

# 466 "data/maps/Route110/scripts.pory"
Route110_EventScript_GivePokemonBoxLink::
# 467 "data/maps/Route110/scripts.pory"
	closemessage
# 468 "data/maps/Route110/scripts.pory"
	giveitem ITEM_POKEMON_BOX_LINK
# 469 "data/maps/Route110/scripts.pory"
	return
# 470 "data/maps/Route110/scripts.pory"

# 471 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 472 "data/maps/Route110/scripts.pory"
	closemessage
# 473 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 474 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 475 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 476 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 477 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 478 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 479 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 480 "data/maps/Route110/scripts.pory"
	delay 45
# 481 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Common_Movement_WalkFastUp7
# 482 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 483 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 484 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 485 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 486 "data/maps/Route110/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 487 "data/maps/Route110/scripts.pory"
	releaseall
# 488 "data/maps/Route110/scripts.pory"
	end
# 489 "data/maps/Route110/scripts.pory"

# 490 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 491 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer1
# 492 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 493 "data/maps/Route110/scripts.pory"
	return
# 494 "data/maps/Route110/scripts.pory"

# 495 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 496 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkDown
# 497 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 498 "data/maps/Route110/scripts.pory"
	return
# 499 "data/maps/Route110/scripts.pory"

# 500 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 501 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer3
# 502 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 503 "data/maps/Route110/scripts.pory"
	return
# 504 "data/maps/Route110/scripts.pory"

# 505 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 506 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
# 507 "data/maps/Route110/scripts.pory"
	return
# 508 "data/maps/Route110/scripts.pory"

# 509 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 510 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
# 511 "data/maps/Route110/scripts.pory"
	return
# 512 "data/maps/Route110/scripts.pory"

# 513 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 514 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
# 515 "data/maps/Route110/scripts.pory"
	return
# 516 "data/maps/Route110/scripts.pory"

# 517 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 518 "data/maps/Route110/scripts.pory"
	walk_down
# 519 "data/maps/Route110/scripts.pory"
	walk_left
# 520 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 521 "data/maps/Route110/scripts.pory"
	step_end
# 522 "data/maps/Route110/scripts.pory"

# 523 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 524 "data/maps/Route110/scripts.pory"
	walk_down
# 525 "data/maps/Route110/scripts.pory"
	walk_right
# 526 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 527 "data/maps/Route110/scripts.pory"
	step_end
# 528 "data/maps/Route110/scripts.pory"

# 529 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 530 "data/maps/Route110/scripts.pory"
	lockall
# 531 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 532 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 533 "data/maps/Route110/scripts.pory"

# 534 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 535 "data/maps/Route110/scripts.pory"
	lockall
# 536 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 537 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 538 "data/maps/Route110/scripts.pory"

# 539 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 540 "data/maps/Route110/scripts.pory"
	lockall
# 541 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 542 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 543 "data/maps/Route110/scripts.pory"

# 544 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 545 "data/maps/Route110/scripts.pory"
	lockall
# 546 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 547 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 548 "data/maps/Route110/scripts.pory"

# 549 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 550 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 551 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkDown3
# 552 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 553 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 554 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 555 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 556 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 557 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 558 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 559 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 560 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 561 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 562 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Birch)
# 563 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 564 "data/maps/Route110/scripts.pory"
	closemessage
# 565 "data/maps/Route110/scripts.pory"
	delay 20
# 566 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 567 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 568 "data/maps/Route110/scripts.pory"
	delay 10
# 569 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 570 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 571 "data/maps/Route110/scripts.pory"
	delay 20
# 572 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 573 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 574 "data/maps/Route110/scripts.pory"
	delay 30
# 575 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Birch)
# 576 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 577 "data/maps/Route110/scripts.pory"
	closemessage
# 578 "data/maps/Route110/scripts.pory"
	delay 30
# 579 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 580 "data/maps/Route110/scripts.pory"
	bufferstring STR_VAR_2, CommonText_Birch
# 581 "data/maps/Route110/scripts.pory"
	msgbox Text_RegisteredInPokenav_OneInput, MSGBOX_DEFAULT
# 582 "data/maps/Route110/scripts.pory"
	waitfanfare
# 583 "data/maps/Route110/scripts.pory"
	closemessage
# 584 "data/maps/Route110/scripts.pory"
	delay 30
# 585 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 586 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Birch)
# 587 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 588 "data/maps/Route110/scripts.pory"
	closemessage
# 589 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 590 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 591 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit2
# 592 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit2
# 593 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 594 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 595 "data/maps/Route110/scripts.pory"
	releaseall
# 596 "data/maps/Route110/scripts.pory"
	end
# 597 "data/maps/Route110/scripts.pory"

# 598 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 599 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer1
# 600 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 601 "data/maps/Route110/scripts.pory"
	return
# 602 "data/maps/Route110/scripts.pory"

# 603 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 604 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer2
# 605 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 606 "data/maps/Route110/scripts.pory"
	return
# 607 "data/maps/Route110/scripts.pory"

# 608 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 609 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkDown2
# 610 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 611 "data/maps/Route110/scripts.pory"
	return
# 612 "data/maps/Route110/scripts.pory"

# 613 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 614 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer4
# 615 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 616 "data/maps/Route110/scripts.pory"
	return
# 617 "data/maps/Route110/scripts.pory"

# 618 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 619 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit1
# 620 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 621 "data/maps/Route110/scripts.pory"
	return
# 622 "data/maps/Route110/scripts.pory"

# 623 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 624 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkUp5
# 625 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 626 "data/maps/Route110/scripts.pory"
	return
# 627 "data/maps/Route110/scripts.pory"

# 628 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 629 "data/maps/Route110/scripts.pory"
	walk_down
# 630 "data/maps/Route110/scripts.pory"
	walk_left
# 631 "data/maps/Route110/scripts.pory"
	walk_left
# 632 "data/maps/Route110/scripts.pory"
	walk_down
# 633 "data/maps/Route110/scripts.pory"
	step_end
# 634 "data/maps/Route110/scripts.pory"

# 635 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 636 "data/maps/Route110/scripts.pory"
	walk_down
# 637 "data/maps/Route110/scripts.pory"
	walk_left
# 638 "data/maps/Route110/scripts.pory"
	walk_down
# 639 "data/maps/Route110/scripts.pory"
	step_end
# 640 "data/maps/Route110/scripts.pory"

# 641 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 642 "data/maps/Route110/scripts.pory"
	walk_down
# 643 "data/maps/Route110/scripts.pory"
	walk_right
# 644 "data/maps/Route110/scripts.pory"
	walk_down
# 645 "data/maps/Route110/scripts.pory"
	step_end
# 646 "data/maps/Route110/scripts.pory"

# 647 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 648 "data/maps/Route110/scripts.pory"
	walk_up
# 649 "data/maps/Route110/scripts.pory"
	walk_up
# 650 "data/maps/Route110/scripts.pory"
	walk_right
# 651 "data/maps/Route110/scripts.pory"
	walk_up
# 652 "data/maps/Route110/scripts.pory"
	walk_up
# 653 "data/maps/Route110/scripts.pory"
	walk_up
# 654 "data/maps/Route110/scripts.pory"
	step_end
# 655 "data/maps/Route110/scripts.pory"

# 656 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 657 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's activities…\n"
# 658 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 659 "data/maps/Route110/scripts.pory"

# 660 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 661 "data/maps/Route110/scripts.pory"
	.string "I want to get going to Slateport and\n"
# 662 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 663 "data/maps/Route110/scripts.pory"

# 664 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 665 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 666 "data/maps/Route110/scripts.pory"
	.string "Team Aqua. It's a little scary.$"
# 667 "data/maps/Route110/scripts.pory"

# 668 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 669 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's actions should bring\n"
# 670 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 671 "data/maps/Route110/scripts.pory"

# 672 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 673 "data/maps/Route110/scripts.pory"
	.string "Hi, {PLAYER}{KUN}, long time no see!\p"
# 674 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 675 "data/maps/Route110/scripts.pory"
	.string "Pokémon, my Pokémon grew stronger.\p"
# 676 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 677 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 678 "data/maps/Route110/scripts.pory"

# 679 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 680 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 681 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 682 "data/maps/Route110/scripts.pory"

# 683 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 684 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}{KUN}, you've been busy\n"
# 685 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 686 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 687 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 688 "data/maps/Route110/scripts.pory"

# 689 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainPokemonBoxLink:
# 690 "data/maps/Route110/scripts.pory"
	.string "That's a Pokémon Box Link.\p"
# 691 "data/maps/Route110/scripts.pory"
	.string "Try it out. It allows you to access\n"
# 692 "data/maps/Route110/scripts.pory"
	.string "your PC remotely when you use it.\p"
# 693 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 694 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 695 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 696 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 697 "data/maps/Route110/scripts.pory"

# 698 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 699 "data/maps/Route110/scripts.pory"
	.string "Hey, {PLAYER}.\n"
# 700 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 701 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 702 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your Pokémon?\n"
# 703 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 704 "data/maps/Route110/scripts.pory"

# 705 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 706 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 707 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 708 "data/maps/Route110/scripts.pory"

# 709 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 710 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}, you've trained without\n"
# 711 "data/maps/Route110/scripts.pory"
	.string "me noticing…\p"
# 712 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 713 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 714 "data/maps/Route110/scripts.pory"

# 715 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainPokemonBoxLink:
# 716 "data/maps/Route110/scripts.pory"
	.string "That's a Pokémon Box Link.\p"
# 717 "data/maps/Route110/scripts.pory"
	.string "Use it and you can access your PC\n"
# 718 "data/maps/Route110/scripts.pory"
	.string "remotely.\p"
# 719 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 720 "data/maps/Route110/scripts.pory"
	.string "Pokémon.$"
# 721 "data/maps/Route110/scripts.pory"

# 722 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 723 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a Bike\n"
# 724 "data/maps/Route110/scripts.pory"
	.string "at full speed on Cycling Road?$"
# 725 "data/maps/Route110/scripts.pory"

# 726 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 727 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 728 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 729 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 730 "data/maps/Route110/scripts.pory"

# 731 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 732 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that Bike from Rydel!\p"
# 733 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 734 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 735 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 736 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 737 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 738 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 739 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 740 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 741 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 742 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 743 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel…\n"
# 744 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 745 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 746 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 747 "data/maps/Route110/scripts.pory"

# 748 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 749 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 750 "data/maps/Route110/scripts.pory"
	.string "A road each for people and Pokémon.\n"
# 751 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 752 "data/maps/Route110/scripts.pory"

# 753 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 754 "data/maps/Route110/scripts.pory"
	.string "I don't have a Bike, so I'll take\n"
# 755 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 756 "data/maps/Route110/scripts.pory"

# 757 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 758 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make Bike\n"
# 759 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 760 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 761 "data/maps/Route110/scripts.pory"
	.string "reach only by using a Bike technique.$"
# 762 "data/maps/Route110/scripts.pory"

# 763 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 764 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 765 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for Mauville on\n"
# 766 "data/maps/Route110/scripts.pory"
	.string "Cycling Road, or take the low road\l"
# 767 "data/maps/Route110/scripts.pory"
	.string "and look for Pokémon?$"
# 768 "data/maps/Route110/scripts.pory"

# 769 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 770 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 771 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 772 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 773 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 774 "data/maps/Route110/scripts.pory"

# 775 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 776 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 777 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 778 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 779 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 780 "data/maps/Route110/scripts.pory"

# 781 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 782 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 783 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 784 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 785 "data/maps/Route110/scripts.pory"

# 786 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 787 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 788 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 789 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 790 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 791 "data/maps/Route110/scripts.pory"

# 792 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 793 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 794 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 795 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 796 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 797 "data/maps/Route110/scripts.pory"

# 798 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 799 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 800 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 801 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 802 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 803 "data/maps/Route110/scripts.pory"
	.string "returning that Bike to Rydel.$"
# 804 "data/maps/Route110/scripts.pory"

# 805 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 806 "data/maps/Route110/scripts.pory"
	.string "This is Cycling Road.\p"
# 807 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from Mauville to\n"
# 808 "data/maps/Route110/scripts.pory"
	.string "Slateport on a Mach Bike, you would\l"
# 809 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 810 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 811 "data/maps/Route110/scripts.pory"

# 812 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 813 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 814 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 815 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 816 "data/maps/Route110/scripts.pory"

# 817 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 818 "data/maps/Route110/scripts.pory"
	.string "On this Cycling Road, those riding\n"
# 819 "data/maps/Route110/scripts.pory"
	.string "Mach Bikes are rated for their number\l"
# 820 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 821 "data/maps/Route110/scripts.pory"
	.string "Acro Bikes do not qualify for rating.\n"
# 822 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 823 "data/maps/Route110/scripts.pory"

# 824 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 825 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 826 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} Slateport City$"
# 827 "data/maps/Route110/scripts.pory"

# 828 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 829 "data/maps/Route110/scripts.pory"
	.string "Seaside Cycling Road$"
# 830 "data/maps/Route110/scripts.pory"

# 831 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 832 "data/maps/Route110/scripts.pory"
	.string "“Team Aqua was here!”\p"
# 833 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 834 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 835 "data/maps/Route110/scripts.pory"
	.string "“Team Magma rules!” is what it\n"
# 836 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 837 "data/maps/Route110/scripts.pory"

# 838 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 839 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 840 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} Route 103$"
# 841 "data/maps/Route110/scripts.pory"

# 842 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 843 "data/maps/Route110/scripts.pory"
	.string "Seaside Parking$"
# 844 "data/maps/Route110/scripts.pory"

# 845 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 846 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 847 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} Mauville City$"
# 848 "data/maps/Route110/scripts.pory"

# 849 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 850 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 851 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 852 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 853 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 854 "data/maps/Route110/scripts.pory"
	.string "Pokémon battles.$"
# 855 "data/maps/Route110/scripts.pory"

# 856 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 857 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 858 "data/maps/Route110/scripts.pory"
	.string "The items in the Bag can be reorganized\n"
# 859 "data/maps/Route110/scripts.pory"
	.string "by pressing Select.\p"
# 860 "data/maps/Route110/scripts.pory"
	.string "It can also be automatically sorted by\n"
# 861 "data/maps/Route110/scripts.pory"
	.string "by pressing Start.$"
# 862 "data/maps/Route110/scripts.pory"

# 863 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 864 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 865 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous Trick House.”$"
# 866 "data/maps/Route110/scripts.pory"

# 867 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 868 "data/maps/Route110/scripts.pory"
	.string "The best record to date…\p"
# 869 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 870 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 871 "data/maps/Route110/scripts.pory"

# 872 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 873 "data/maps/Route110/scripts.pory"
	.string "The best record to date…\p"
# 874 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 875 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 876 "data/maps/Route110/scripts.pory"

# 877 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 878 "data/maps/Route110/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!\n"
# 879 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 880 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 881 "data/maps/Route110/scripts.pory"

# 882 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 883 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 884 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 885 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 886 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your Pokénav\n"
# 887 "data/maps/Route110/scripts.pory"
	.string "had the Match Call system installed.\p"
# 888 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 889 "data/maps/Route110/scripts.pory"
	.string "my Pokénav as well.\p"
# 890 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 891 "data/maps/Route110/scripts.pory"
	.string "I can rate your Pokédex anytime.\p"
# 892 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 893 "data/maps/Route110/scripts.pory"

# 894 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 895 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}{KUN}…\p"
# 896 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 897 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 898 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 899 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
