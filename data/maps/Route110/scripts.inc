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
	setflag FLAG_TEMP_2
# 15 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 5, EventScript_Clear_FlagTemp1
# 16 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 15, EventScript_Clear_FlagTemp2
# 17 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 19 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 20 "data/maps/Route110/scripts.pory"
	end
# 21 "data/maps/Route110/scripts.pory"

# 22 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 23 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 24 "data/maps/Route110/scripts.pory"
	return
# 25 "data/maps/Route110/scripts.pory"

# 26 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 27 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 28 "data/maps/Route110/scripts.pory"
	.2byte 0
# 29 "data/maps/Route110/scripts.pory"

# 30 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 31 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 32 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 33 "data/maps/Route110/scripts.pory"
	return
# 34 "data/maps/Route110/scripts.pory"

# 35 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 36 "data/maps/Route110/scripts.pory"
	lock
# 37 "data/maps/Route110/scripts.pory"
	faceplayer
# 38 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 39 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 40 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route110/scripts.pory"
	release
# 42 "data/maps/Route110/scripts.pory"
	end
# 43 "data/maps/Route110/scripts.pory"

# 44 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 45 "data/maps/Route110/scripts.pory"
	lock
# 46 "data/maps/Route110/scripts.pory"
	faceplayer
# 47 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 48 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 49 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route110/scripts.pory"
	release
# 51 "data/maps/Route110/scripts.pory"
	end
# 52 "data/maps/Route110/scripts.pory"

# 53 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 54 "data/maps/Route110/scripts.pory"
	lock
# 55 "data/maps/Route110/scripts.pory"
	faceplayer
# 56 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 57 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 58 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route110/scripts.pory"
	release
# 60 "data/maps/Route110/scripts.pory"
	end
# 61 "data/maps/Route110/scripts.pory"

# 62 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 63 "data/maps/Route110/scripts.pory"
	lock
# 64 "data/maps/Route110/scripts.pory"
	faceplayer
# 65 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 66 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 67 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route110/scripts.pory"
	release
# 69 "data/maps/Route110/scripts.pory"
	end
# 70 "data/maps/Route110/scripts.pory"

# 71 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 72 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 73 "data/maps/Route110/scripts.pory"
	end
# 74 "data/maps/Route110/scripts.pory"

# 75 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 76 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 77 "data/maps/Route110/scripts.pory"
	end
# 78 "data/maps/Route110/scripts.pory"

# 79 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 80 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 81 "data/maps/Route110/scripts.pory"
	end
# 82 "data/maps/Route110/scripts.pory"

# 83 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 84 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 85 "data/maps/Route110/scripts.pory"
	end
# 86 "data/maps/Route110/scripts.pory"

# 87 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 88 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 89 "data/maps/Route110/scripts.pory"
	end
# 90 "data/maps/Route110/scripts.pory"

# 91 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 92 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 93 "data/maps/Route110/scripts.pory"
	end
# 94 "data/maps/Route110/scripts.pory"

# 95 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 96 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 97 "data/maps/Route110/scripts.pory"
	end
# 98 "data/maps/Route110/scripts.pory"

# 99 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 100 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 101 "data/maps/Route110/scripts.pory"
	end
# 102 "data/maps/Route110/scripts.pory"

# 103 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 104 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 105 "data/maps/Route110/scripts.pory"
	end
# 106 "data/maps/Route110/scripts.pory"

# 107 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 108 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 109 "data/maps/Route110/scripts.pory"
	end
# 110 "data/maps/Route110/scripts.pory"

# 111 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 112 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 113 "data/maps/Route110/scripts.pory"
	end
# 114 "data/maps/Route110/scripts.pory"

# 115 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 116 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 117 "data/maps/Route110/scripts.pory"
	end
# 118 "data/maps/Route110/scripts.pory"

# 119 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 120 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 121 "data/maps/Route110/scripts.pory"
	end
# 122 "data/maps/Route110/scripts.pory"

# 123 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 124 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 125 "data/maps/Route110/scripts.pory"
	end
# 126 "data/maps/Route110/scripts.pory"

# 127 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 128 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 129 "data/maps/Route110/scripts.pory"
	end
# 130 "data/maps/Route110/scripts.pory"

# 131 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 132 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 133 "data/maps/Route110/scripts.pory"
	end
# 134 "data/maps/Route110/scripts.pory"

# 135 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 136 "data/maps/Route110/scripts.pory"
	lockall
# 137 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 138 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 139 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 140 "data/maps/Route110/scripts.pory"
	releaseall
# 141 "data/maps/Route110/scripts.pory"
	end
# 142 "data/maps/Route110/scripts.pory"

# 143 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 144 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 145 "data/maps/Route110/scripts.pory"
	releaseall
# 146 "data/maps/Route110/scripts.pory"
	end
# 147 "data/maps/Route110/scripts.pory"

# 148 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 149 "data/maps/Route110/scripts.pory"
	lock
# 150 "data/maps/Route110/scripts.pory"
	faceplayer
# 151 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 152 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 153 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 154 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 155 "data/maps/Route110/scripts.pory"
	release
# 156 "data/maps/Route110/scripts.pory"
	end
# 157 "data/maps/Route110/scripts.pory"

# 158 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 159 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 160 "data/maps/Route110/scripts.pory"
	release
# 161 "data/maps/Route110/scripts.pory"
	end
# 162 "data/maps/Route110/scripts.pory"

# 163 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 164 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 165 "data/maps/Route110/scripts.pory"
	release
# 166 "data/maps/Route110/scripts.pory"
	end
# 167 "data/maps/Route110/scripts.pory"

# 168 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 169 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 170 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 171 "data/maps/Route110/scripts.pory"
	end
# 172 "data/maps/Route110/scripts.pory"

# 173 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 174 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 175 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route110/scripts.pory"
	end
# 177 "data/maps/Route110/scripts.pory"

# 178 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 179 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 180 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 181 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 182 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 183 "data/maps/Route110/scripts.pory"
	release
# 184 "data/maps/Route110/scripts.pory"
	end
# 185 "data/maps/Route110/scripts.pory"

# 186 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 187 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 188 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 190 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 191 "data/maps/Route110/scripts.pory"
	release
# 192 "data/maps/Route110/scripts.pory"
	end
# 193 "data/maps/Route110/scripts.pory"

# 194 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 195 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 196 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route110/scripts.pory"
	end
# 198 "data/maps/Route110/scripts.pory"

# 199 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 200 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 201 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route110/scripts.pory"
	end
# 203 "data/maps/Route110/scripts.pory"

# 204 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 205 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 206 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route110/scripts.pory"
	end
# 208 "data/maps/Route110/scripts.pory"

# 209 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 210 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 211 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route110/scripts.pory"
	end
# 213 "data/maps/Route110/scripts.pory"

# 214 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 215 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 216 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 217 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 218 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 219 "data/maps/Route110/scripts.pory"
	release
# 220 "data/maps/Route110/scripts.pory"
	end
# 221 "data/maps/Route110/scripts.pory"

# 222 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 223 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 224 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 226 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 227 "data/maps/Route110/scripts.pory"
	release
# 228 "data/maps/Route110/scripts.pory"
	end
# 229 "data/maps/Route110/scripts.pory"

# 230 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 231 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 232 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route110/scripts.pory"
	end
# 234 "data/maps/Route110/scripts.pory"

# 235 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 236 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 237 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route110/scripts.pory"
	end
# 239 "data/maps/Route110/scripts.pory"

# 240 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 241 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 242 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 243 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 244 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 245 "data/maps/Route110/scripts.pory"
	release
# 246 "data/maps/Route110/scripts.pory"
	end
# 247 "data/maps/Route110/scripts.pory"

# 248 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 249 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 250 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 252 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 253 "data/maps/Route110/scripts.pory"
	release
# 254 "data/maps/Route110/scripts.pory"
	end
# 255 "data/maps/Route110/scripts.pory"

# 256 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 257 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 258 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/Route110/scripts.pory"
	end
# 260 "data/maps/Route110/scripts.pory"

# 261 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 262 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 263 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 264 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 265 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 266 "data/maps/Route110/scripts.pory"
	release
# 267 "data/maps/Route110/scripts.pory"
	end
# 268 "data/maps/Route110/scripts.pory"

# 269 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 270 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 271 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 273 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 274 "data/maps/Route110/scripts.pory"
	release
# 275 "data/maps/Route110/scripts.pory"
	end
# 276 "data/maps/Route110/scripts.pory"

# 277 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 278 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 279 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route110/scripts.pory"
	end
# 281 "data/maps/Route110/scripts.pory"

# 282 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 283 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 284 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route110/scripts.pory"
	end
# 286 "data/maps/Route110/scripts.pory"

# 287 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 288 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 289 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/Route110/scripts.pory"
	end
# 291 "data/maps/Route110/scripts.pory"

# 292 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 293 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 294 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route110/scripts.pory"
	end
# 296 "data/maps/Route110/scripts.pory"

# 297 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 298 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 299 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route110/scripts.pory"
	end
# 301 "data/maps/Route110/scripts.pory"

# 302 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 303 "data/maps/Route110/scripts.pory"
	lockall
# 304 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 305 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 306 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 307 "data/maps/Route110/scripts.pory"
	releaseall
# 308 "data/maps/Route110/scripts.pory"
	end
# 309 "data/maps/Route110/scripts.pory"

# 310 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 311 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 312 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 313 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 314 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 315 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 316 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 317 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 318 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 319 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 320 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 321 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 322 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 323 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 324 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 325 "data/maps/Route110/scripts.pory"
	end
# 326 "data/maps/Route110/scripts.pory"

# 327 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 328 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 329 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 330 "data/maps/Route110/scripts.pory"
	end
# 331 "data/maps/Route110/scripts.pory"

# 332 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 333 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 334 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 335 "data/maps/Route110/scripts.pory"
	end
# 336 "data/maps/Route110/scripts.pory"

# 337 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 338 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 339 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 340 "data/maps/Route110/scripts.pory"
	end
# 341 "data/maps/Route110/scripts.pory"

# 342 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 343 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 344 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 345 "data/maps/Route110/scripts.pory"
	end
# 346 "data/maps/Route110/scripts.pory"

# 347 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 348 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 349 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 350 "data/maps/Route110/scripts.pory"
	end
# 351 "data/maps/Route110/scripts.pory"

# 352 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 353 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 354 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 355 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 356 "data/maps/Route110/scripts.pory"
	return
# 357 "data/maps/Route110/scripts.pory"

# 358 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 359 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 360 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 361 "data/maps/Route110/scripts.pory"
	end
# 362 "data/maps/Route110/scripts.pory"

# 363 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 364 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 365 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 366 "data/maps/Route110/scripts.pory"
	end
# 367 "data/maps/Route110/scripts.pory"

# 368 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 369 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 370 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 371 "data/maps/Route110/scripts.pory"
	end
# 372 "data/maps/Route110/scripts.pory"

# 373 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 374 "data/maps/Route110/scripts.pory"
	lockall
# 375 "data/maps/Route110/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 376 "data/maps/Route110/scripts.pory"
	checkplayergender
# 377 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 378 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 379 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 380 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 382 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 384 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 385 "data/maps/Route110/scripts.pory"
	delay 30
# 386 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 387 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 388 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 389 "data/maps/Route110/scripts.pory"
	checkplayergender
# 390 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 391 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 392 "data/maps/Route110/scripts.pory"
	end
# 393 "data/maps/Route110/scripts.pory"

# 394 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 395 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 396 "data/maps/Route110/scripts.pory"
	return
# 397 "data/maps/Route110/scripts.pory"

# 398 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 399 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 400 "data/maps/Route110/scripts.pory"
	return
# 401 "data/maps/Route110/scripts.pory"

# 402 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 403 "data/maps/Route110/scripts.pory"
	speakername (CommonText_May)
# 404 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 405 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 406 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 407 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 408 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 409 "data/maps/Route110/scripts.pory"
	end
# 410 "data/maps/Route110/scripts.pory"

# 411 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 412 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 413 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 414 "data/maps/Route110/scripts.pory"
	end
# 415 "data/maps/Route110/scripts.pory"

# 416 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 417 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 418 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 419 "data/maps/Route110/scripts.pory"
	end
# 420 "data/maps/Route110/scripts.pory"

# 421 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 422 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 423 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 424 "data/maps/Route110/scripts.pory"
	end
# 425 "data/maps/Route110/scripts.pory"

# 426 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 427 "data/maps/Route110/scripts.pory"
	speakername (CommonText_May)
# 428 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 429 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GivePokemonBoxLink
# 430 "data/maps/Route110/scripts.pory"
	speakername (CommonText_May)
# 431 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainPokemonBoxLink, MSGBOX_DEFAULT
# 432 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 433 "data/maps/Route110/scripts.pory"
	end
# 434 "data/maps/Route110/scripts.pory"

# 435 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 436 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Brendan)
# 437 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 438 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 439 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 440 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 441 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 442 "data/maps/Route110/scripts.pory"
	end
# 443 "data/maps/Route110/scripts.pory"

# 444 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 445 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 446 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 447 "data/maps/Route110/scripts.pory"
	end
# 448 "data/maps/Route110/scripts.pory"

# 449 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 450 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 451 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 452 "data/maps/Route110/scripts.pory"
	end
# 453 "data/maps/Route110/scripts.pory"

# 454 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 455 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 456 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 457 "data/maps/Route110/scripts.pory"
	end
# 458 "data/maps/Route110/scripts.pory"

# 459 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 460 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Brendan)
# 461 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 462 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GivePokemonBoxLink
# 463 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Brendan)
# 464 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainPokemonBoxLink, MSGBOX_DEFAULT
# 465 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 466 "data/maps/Route110/scripts.pory"
	end
# 467 "data/maps/Route110/scripts.pory"

# 468 "data/maps/Route110/scripts.pory"
Route110_EventScript_GivePokemonBoxLink::
# 469 "data/maps/Route110/scripts.pory"
	closemessage
# 470 "data/maps/Route110/scripts.pory"
	giveitem ITEM_POKEMON_BOX_LINK
# 471 "data/maps/Route110/scripts.pory"
	return
# 472 "data/maps/Route110/scripts.pory"

# 473 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 474 "data/maps/Route110/scripts.pory"
	closemessage
# 475 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 476 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 477 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 478 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 479 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 480 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 481 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 482 "data/maps/Route110/scripts.pory"
	delay 45
# 483 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Common_Movement_WalkFastUp7
# 484 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 485 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 486 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 487 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 488 "data/maps/Route110/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 489 "data/maps/Route110/scripts.pory"
	releaseall
# 490 "data/maps/Route110/scripts.pory"
	end
# 491 "data/maps/Route110/scripts.pory"

# 492 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 493 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer1
# 494 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 495 "data/maps/Route110/scripts.pory"
	return
# 496 "data/maps/Route110/scripts.pory"

# 497 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 498 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkDown
# 499 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 500 "data/maps/Route110/scripts.pory"
	return
# 501 "data/maps/Route110/scripts.pory"

# 502 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 503 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer3
# 504 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 505 "data/maps/Route110/scripts.pory"
	return
# 506 "data/maps/Route110/scripts.pory"

# 507 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 508 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
# 509 "data/maps/Route110/scripts.pory"
	return
# 510 "data/maps/Route110/scripts.pory"

# 511 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 512 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
# 513 "data/maps/Route110/scripts.pory"
	return
# 514 "data/maps/Route110/scripts.pory"

# 515 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 516 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
# 517 "data/maps/Route110/scripts.pory"
	return
# 518 "data/maps/Route110/scripts.pory"

# 519 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 520 "data/maps/Route110/scripts.pory"
	walk_down
# 521 "data/maps/Route110/scripts.pory"
	walk_left
# 522 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 523 "data/maps/Route110/scripts.pory"
	step_end
# 524 "data/maps/Route110/scripts.pory"

# 525 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 526 "data/maps/Route110/scripts.pory"
	walk_down
# 527 "data/maps/Route110/scripts.pory"
	walk_right
# 528 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 529 "data/maps/Route110/scripts.pory"
	step_end
# 530 "data/maps/Route110/scripts.pory"

# 531 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 532 "data/maps/Route110/scripts.pory"
	lockall
# 533 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 534 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 535 "data/maps/Route110/scripts.pory"

# 536 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 537 "data/maps/Route110/scripts.pory"
	lockall
# 538 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 539 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 540 "data/maps/Route110/scripts.pory"

# 541 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 542 "data/maps/Route110/scripts.pory"
	lockall
# 543 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 544 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 545 "data/maps/Route110/scripts.pory"

# 546 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 547 "data/maps/Route110/scripts.pory"
	lockall
# 548 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 549 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 550 "data/maps/Route110/scripts.pory"

# 551 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 552 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 553 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkDown3
# 554 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 555 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 556 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 557 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 558 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 559 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 560 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 561 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 562 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 563 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 564 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Birch)
# 565 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 566 "data/maps/Route110/scripts.pory"
	closemessage
# 567 "data/maps/Route110/scripts.pory"
	delay 20
# 568 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 569 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 570 "data/maps/Route110/scripts.pory"
	delay 10
# 571 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 572 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 573 "data/maps/Route110/scripts.pory"
	delay 20
# 574 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 575 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 576 "data/maps/Route110/scripts.pory"
	delay 30
# 577 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Birch)
# 578 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 579 "data/maps/Route110/scripts.pory"
	closemessage
# 580 "data/maps/Route110/scripts.pory"
	delay 30
# 581 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 582 "data/maps/Route110/scripts.pory"
	bufferstring STR_VAR_2, CommonText_Birch
# 583 "data/maps/Route110/scripts.pory"
	msgbox Text_RegisteredInPokenav_OneInput, MSGBOX_DEFAULT
# 584 "data/maps/Route110/scripts.pory"
	waitfanfare
# 585 "data/maps/Route110/scripts.pory"
	closemessage
# 586 "data/maps/Route110/scripts.pory"
	delay 30
# 587 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 588 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Birch)
# 589 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 590 "data/maps/Route110/scripts.pory"
	closemessage
# 591 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 592 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 593 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit2
# 594 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit2
# 595 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 596 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 597 "data/maps/Route110/scripts.pory"
	releaseall
# 598 "data/maps/Route110/scripts.pory"
	end
# 599 "data/maps/Route110/scripts.pory"

# 600 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 601 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer1
# 602 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 603 "data/maps/Route110/scripts.pory"
	return
# 604 "data/maps/Route110/scripts.pory"

# 605 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 606 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer2
# 607 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 608 "data/maps/Route110/scripts.pory"
	return
# 609 "data/maps/Route110/scripts.pory"

# 610 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 611 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkDown2
# 612 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 613 "data/maps/Route110/scripts.pory"
	return
# 614 "data/maps/Route110/scripts.pory"

# 615 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 616 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer4
# 617 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 618 "data/maps/Route110/scripts.pory"
	return
# 619 "data/maps/Route110/scripts.pory"

# 620 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 621 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit1
# 622 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 623 "data/maps/Route110/scripts.pory"
	return
# 624 "data/maps/Route110/scripts.pory"

# 625 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 626 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkUp5
# 627 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 628 "data/maps/Route110/scripts.pory"
	return
# 629 "data/maps/Route110/scripts.pory"

# 630 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 631 "data/maps/Route110/scripts.pory"
	walk_down
# 632 "data/maps/Route110/scripts.pory"
	walk_left
# 633 "data/maps/Route110/scripts.pory"
	walk_left
# 634 "data/maps/Route110/scripts.pory"
	walk_down
# 635 "data/maps/Route110/scripts.pory"
	step_end
# 636 "data/maps/Route110/scripts.pory"

# 637 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 638 "data/maps/Route110/scripts.pory"
	walk_down
# 639 "data/maps/Route110/scripts.pory"
	walk_left
# 640 "data/maps/Route110/scripts.pory"
	walk_down
# 641 "data/maps/Route110/scripts.pory"
	step_end
# 642 "data/maps/Route110/scripts.pory"

# 643 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 644 "data/maps/Route110/scripts.pory"
	walk_down
# 645 "data/maps/Route110/scripts.pory"
	walk_right
# 646 "data/maps/Route110/scripts.pory"
	walk_down
# 647 "data/maps/Route110/scripts.pory"
	step_end
# 648 "data/maps/Route110/scripts.pory"

# 649 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 650 "data/maps/Route110/scripts.pory"
	walk_up
# 651 "data/maps/Route110/scripts.pory"
	walk_up
# 652 "data/maps/Route110/scripts.pory"
	walk_right
# 653 "data/maps/Route110/scripts.pory"
	walk_up
# 654 "data/maps/Route110/scripts.pory"
	walk_up
# 655 "data/maps/Route110/scripts.pory"
	walk_up
# 656 "data/maps/Route110/scripts.pory"
	step_end
# 657 "data/maps/Route110/scripts.pory"

# 658 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 659 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's activities…\n"
# 660 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 661 "data/maps/Route110/scripts.pory"

# 662 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 663 "data/maps/Route110/scripts.pory"
	.string "I want to get going to Slateport and\n"
# 664 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 665 "data/maps/Route110/scripts.pory"

# 666 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 667 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 668 "data/maps/Route110/scripts.pory"
	.string "Team Aqua. It's a little scary.$"
# 669 "data/maps/Route110/scripts.pory"

# 670 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 671 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's actions should bring\n"
# 672 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 673 "data/maps/Route110/scripts.pory"

# 674 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 675 "data/maps/Route110/scripts.pory"
	.string "Hi, {PLAYER}{KUN}, long time no see!\p"
# 676 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 677 "data/maps/Route110/scripts.pory"
	.string "Pokémon, my Pokémon grew stronger.\p"
# 678 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 679 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 680 "data/maps/Route110/scripts.pory"

# 681 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 682 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 683 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 684 "data/maps/Route110/scripts.pory"

# 685 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 686 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}{KUN}, you've been busy\n"
# 687 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 688 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 689 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 690 "data/maps/Route110/scripts.pory"

# 691 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainPokemonBoxLink:
# 692 "data/maps/Route110/scripts.pory"
	.string "That's a Pokémon Box Link.\p"
# 693 "data/maps/Route110/scripts.pory"
	.string "Try it out. It allows you to access\n"
# 694 "data/maps/Route110/scripts.pory"
	.string "your PC remotely when you use it.\p"
# 695 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 696 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 697 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 698 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 699 "data/maps/Route110/scripts.pory"

# 700 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 701 "data/maps/Route110/scripts.pory"
	.string "Hey, {PLAYER}.\n"
# 702 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 703 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 704 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your Pokémon?\n"
# 705 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 706 "data/maps/Route110/scripts.pory"

# 707 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 708 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 709 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 710 "data/maps/Route110/scripts.pory"

# 711 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 712 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}, you've trained without\n"
# 713 "data/maps/Route110/scripts.pory"
	.string "me noticing…\p"
# 714 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 715 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 716 "data/maps/Route110/scripts.pory"

# 717 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainPokemonBoxLink:
# 718 "data/maps/Route110/scripts.pory"
	.string "That's a Pokémon Box Link.\p"
# 719 "data/maps/Route110/scripts.pory"
	.string "Use it and you can access your PC\n"
# 720 "data/maps/Route110/scripts.pory"
	.string "remotely.\p"
# 721 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 722 "data/maps/Route110/scripts.pory"
	.string "Pokémon.$"
# 723 "data/maps/Route110/scripts.pory"

# 724 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 725 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a Bike\n"
# 726 "data/maps/Route110/scripts.pory"
	.string "at full speed on Cycling Road?$"
# 727 "data/maps/Route110/scripts.pory"

# 728 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 729 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 730 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 731 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 732 "data/maps/Route110/scripts.pory"

# 733 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 734 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that Bike from Rydel!\p"
# 735 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 736 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
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
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 744 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 745 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel…\n"
# 746 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 747 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 748 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 749 "data/maps/Route110/scripts.pory"

# 750 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 751 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 752 "data/maps/Route110/scripts.pory"
	.string "A road each for people and Pokémon.\n"
# 753 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 754 "data/maps/Route110/scripts.pory"

# 755 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 756 "data/maps/Route110/scripts.pory"
	.string "I don't have a Bike, so I'll take\n"
# 757 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 758 "data/maps/Route110/scripts.pory"

# 759 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 760 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make Bike\n"
# 761 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 762 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 763 "data/maps/Route110/scripts.pory"
	.string "reach only by using a Bike technique.$"
# 764 "data/maps/Route110/scripts.pory"

# 765 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 766 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 767 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for Mauville on\n"
# 768 "data/maps/Route110/scripts.pory"
	.string "Cycling Road, or take the low road\l"
# 769 "data/maps/Route110/scripts.pory"
	.string "and look for Pokémon?$"
# 770 "data/maps/Route110/scripts.pory"

# 771 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 772 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 773 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 774 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 775 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 776 "data/maps/Route110/scripts.pory"

# 777 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 778 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 779 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 780 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 781 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 782 "data/maps/Route110/scripts.pory"

# 783 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 784 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 785 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 786 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 787 "data/maps/Route110/scripts.pory"

# 788 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 789 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 790 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 791 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 792 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 793 "data/maps/Route110/scripts.pory"

# 794 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 795 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 796 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 797 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 798 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 799 "data/maps/Route110/scripts.pory"

# 800 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 801 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 802 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 803 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 804 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 805 "data/maps/Route110/scripts.pory"
	.string "returning that Bike to Rydel.$"
# 806 "data/maps/Route110/scripts.pory"

# 807 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 808 "data/maps/Route110/scripts.pory"
	.string "This is Cycling Road.\p"
# 809 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from Mauville to\n"
# 810 "data/maps/Route110/scripts.pory"
	.string "Slateport on a Mach Bike, you would\l"
# 811 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 812 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 813 "data/maps/Route110/scripts.pory"

# 814 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 815 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 816 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 817 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 818 "data/maps/Route110/scripts.pory"

# 819 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 820 "data/maps/Route110/scripts.pory"
	.string "On this Cycling Road, those riding\n"
# 821 "data/maps/Route110/scripts.pory"
	.string "Mach Bikes are rated for their number\l"
# 822 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 823 "data/maps/Route110/scripts.pory"
	.string "Acro Bikes do not qualify for rating.\n"
# 824 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 825 "data/maps/Route110/scripts.pory"

# 826 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 827 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 828 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} Slateport City$"
# 829 "data/maps/Route110/scripts.pory"

# 830 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 831 "data/maps/Route110/scripts.pory"
	.string "Seaside Cycling Road$"
# 832 "data/maps/Route110/scripts.pory"

# 833 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 834 "data/maps/Route110/scripts.pory"
	.string "“Team Aqua was here!”\p"
# 835 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 836 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 837 "data/maps/Route110/scripts.pory"
	.string "“Team Magma rules!” is what it\n"
# 838 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 839 "data/maps/Route110/scripts.pory"

# 840 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 841 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 842 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} Route 103$"
# 843 "data/maps/Route110/scripts.pory"

# 844 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 845 "data/maps/Route110/scripts.pory"
	.string "Seaside Parking$"
# 846 "data/maps/Route110/scripts.pory"

# 847 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 848 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 849 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} Mauville City$"
# 850 "data/maps/Route110/scripts.pory"

# 851 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 852 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 853 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 854 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 855 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 856 "data/maps/Route110/scripts.pory"
	.string "Pokémon battles.$"
# 857 "data/maps/Route110/scripts.pory"

# 858 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 859 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 860 "data/maps/Route110/scripts.pory"
	.string "The items in the Bag can be reorganized\n"
# 861 "data/maps/Route110/scripts.pory"
	.string "by pressing Select.\p"
# 862 "data/maps/Route110/scripts.pory"
	.string "It can also be automatically sorted by\n"
# 863 "data/maps/Route110/scripts.pory"
	.string "by pressing Start.$"
# 864 "data/maps/Route110/scripts.pory"

# 865 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 866 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 867 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous Trick House.”$"
# 868 "data/maps/Route110/scripts.pory"

# 869 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 870 "data/maps/Route110/scripts.pory"
	.string "The best record to date…\p"
# 871 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 872 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 873 "data/maps/Route110/scripts.pory"

# 874 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 875 "data/maps/Route110/scripts.pory"
	.string "The best record to date…\p"
# 876 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 877 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 878 "data/maps/Route110/scripts.pory"

# 879 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 880 "data/maps/Route110/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!\n"
# 881 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 882 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 883 "data/maps/Route110/scripts.pory"

# 884 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 885 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 886 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 887 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 888 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your Pokénav\n"
# 889 "data/maps/Route110/scripts.pory"
	.string "had the Match Call system installed.\p"
# 890 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 891 "data/maps/Route110/scripts.pory"
	.string "my Pokénav as well.\p"
# 892 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 893 "data/maps/Route110/scripts.pory"
	.string "I can rate your Pokédex anytime.\p"
# 894 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 895 "data/maps/Route110/scripts.pory"

# 896 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 897 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}{KUN}…\p"
# 898 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 899 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 900 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 901 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
