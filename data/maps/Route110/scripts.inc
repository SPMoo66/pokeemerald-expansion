# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 3 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL, 28
# 4 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 29
# 5 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 36
# 6 "data/maps/Route110/scripts.pory"

# 7 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 8 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 9 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 10 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 11 "data/maps/Route110/scripts.pory"
	.byte 0
# 12 "data/maps/Route110/scripts.pory"

# 13 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 14 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 15 "data/maps/Route110/scripts.pory"
	end
# 16 "data/maps/Route110/scripts.pory"

# 17 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 18 "data/maps/Route110/scripts.pory"
	setflag FLAG_TEMP_1
# 19 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 5, EventScript_Clear_FlagTemp1
# 20 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 21 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 22 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 23 "data/maps/Route110/scripts.pory"
	end
# 24 "data/maps/Route110/scripts.pory"

# 25 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 26 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 27 "data/maps/Route110/scripts.pory"
	return
# 28 "data/maps/Route110/scripts.pory"

# 29 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 30 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 31 "data/maps/Route110/scripts.pory"
	.2byte 0
# 32 "data/maps/Route110/scripts.pory"

# 33 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 34 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 35 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 36 "data/maps/Route110/scripts.pory"
	return
# 37 "data/maps/Route110/scripts.pory"

# 38 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 39 "data/maps/Route110/scripts.pory"
	lock
# 40 "data/maps/Route110/scripts.pory"
	faceplayer
# 41 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 42 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 43 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route110/scripts.pory"
	release
# 45 "data/maps/Route110/scripts.pory"
	end
# 46 "data/maps/Route110/scripts.pory"

# 47 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 48 "data/maps/Route110/scripts.pory"
	lock
# 49 "data/maps/Route110/scripts.pory"
	faceplayer
# 50 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 51 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 52 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route110/scripts.pory"
	release
# 54 "data/maps/Route110/scripts.pory"
	end
# 55 "data/maps/Route110/scripts.pory"

# 56 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 57 "data/maps/Route110/scripts.pory"
	lock
# 58 "data/maps/Route110/scripts.pory"
	faceplayer
# 59 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 60 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 61 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route110/scripts.pory"
	release
# 63 "data/maps/Route110/scripts.pory"
	end
# 64 "data/maps/Route110/scripts.pory"

# 65 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 66 "data/maps/Route110/scripts.pory"
	lock
# 67 "data/maps/Route110/scripts.pory"
	faceplayer
# 68 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 69 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 70 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route110/scripts.pory"
	release
# 72 "data/maps/Route110/scripts.pory"
	end
# 73 "data/maps/Route110/scripts.pory"

# 74 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 75 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 76 "data/maps/Route110/scripts.pory"
	end
# 77 "data/maps/Route110/scripts.pory"

# 78 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 79 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 80 "data/maps/Route110/scripts.pory"
	end
# 81 "data/maps/Route110/scripts.pory"

# 82 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 83 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 84 "data/maps/Route110/scripts.pory"
	end
# 85 "data/maps/Route110/scripts.pory"

# 86 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 87 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 88 "data/maps/Route110/scripts.pory"
	end
# 89 "data/maps/Route110/scripts.pory"

# 90 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 91 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 92 "data/maps/Route110/scripts.pory"
	end
# 93 "data/maps/Route110/scripts.pory"

# 94 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 95 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 96 "data/maps/Route110/scripts.pory"
	end
# 97 "data/maps/Route110/scripts.pory"

# 98 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 99 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 100 "data/maps/Route110/scripts.pory"
	end
# 101 "data/maps/Route110/scripts.pory"

# 102 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 103 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 104 "data/maps/Route110/scripts.pory"
	end
# 105 "data/maps/Route110/scripts.pory"

# 106 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 107 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 108 "data/maps/Route110/scripts.pory"
	end
# 109 "data/maps/Route110/scripts.pory"

# 110 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 111 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 112 "data/maps/Route110/scripts.pory"
	end
# 113 "data/maps/Route110/scripts.pory"

# 114 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 115 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 116 "data/maps/Route110/scripts.pory"
	end
# 117 "data/maps/Route110/scripts.pory"

# 118 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 119 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 120 "data/maps/Route110/scripts.pory"
	end
# 121 "data/maps/Route110/scripts.pory"

# 122 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 123 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 124 "data/maps/Route110/scripts.pory"
	end
# 125 "data/maps/Route110/scripts.pory"

# 126 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 127 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 128 "data/maps/Route110/scripts.pory"
	end
# 129 "data/maps/Route110/scripts.pory"

# 130 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 131 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 132 "data/maps/Route110/scripts.pory"
	end
# 133 "data/maps/Route110/scripts.pory"

# 134 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 135 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 136 "data/maps/Route110/scripts.pory"
	end
# 137 "data/maps/Route110/scripts.pory"

# 138 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 139 "data/maps/Route110/scripts.pory"
	lockall
# 140 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 141 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 142 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 143 "data/maps/Route110/scripts.pory"
	releaseall
# 144 "data/maps/Route110/scripts.pory"
	end
# 145 "data/maps/Route110/scripts.pory"

# 146 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 147 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 148 "data/maps/Route110/scripts.pory"
	releaseall
# 149 "data/maps/Route110/scripts.pory"
	end
# 150 "data/maps/Route110/scripts.pory"

# 151 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 152 "data/maps/Route110/scripts.pory"
	lock
# 153 "data/maps/Route110/scripts.pory"
	faceplayer
# 154 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 155 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 156 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 157 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 158 "data/maps/Route110/scripts.pory"
	release
# 159 "data/maps/Route110/scripts.pory"
	end
# 160 "data/maps/Route110/scripts.pory"

# 161 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 162 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 163 "data/maps/Route110/scripts.pory"
	release
# 164 "data/maps/Route110/scripts.pory"
	end
# 165 "data/maps/Route110/scripts.pory"

# 166 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 167 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 168 "data/maps/Route110/scripts.pory"
	release
# 169 "data/maps/Route110/scripts.pory"
	end
# 170 "data/maps/Route110/scripts.pory"

# 171 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 172 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 173 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route110/scripts.pory"
	end
# 175 "data/maps/Route110/scripts.pory"

# 176 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 177 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 178 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route110/scripts.pory"
	end
# 180 "data/maps/Route110/scripts.pory"

# 181 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 182 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 183 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 184 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 185 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 186 "data/maps/Route110/scripts.pory"
	release
# 187 "data/maps/Route110/scripts.pory"
	end
# 188 "data/maps/Route110/scripts.pory"

# 189 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 190 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 191 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 193 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 194 "data/maps/Route110/scripts.pory"
	release
# 195 "data/maps/Route110/scripts.pory"
	end
# 196 "data/maps/Route110/scripts.pory"

# 197 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 198 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 199 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route110/scripts.pory"
	end
# 201 "data/maps/Route110/scripts.pory"

# 202 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 203 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 204 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route110/scripts.pory"
	end
# 206 "data/maps/Route110/scripts.pory"

# 207 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 208 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 209 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route110/scripts.pory"
	end
# 211 "data/maps/Route110/scripts.pory"

# 212 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 213 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 214 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/Route110/scripts.pory"
	end
# 216 "data/maps/Route110/scripts.pory"

# 217 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 218 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 219 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 220 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 221 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 222 "data/maps/Route110/scripts.pory"
	release
# 223 "data/maps/Route110/scripts.pory"
	end
# 224 "data/maps/Route110/scripts.pory"

# 225 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 226 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 227 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 229 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 230 "data/maps/Route110/scripts.pory"
	release
# 231 "data/maps/Route110/scripts.pory"
	end
# 232 "data/maps/Route110/scripts.pory"

# 233 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 234 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 235 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route110/scripts.pory"
	end
# 237 "data/maps/Route110/scripts.pory"

# 238 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 239 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 240 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route110/scripts.pory"
	end
# 242 "data/maps/Route110/scripts.pory"

# 243 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 244 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 245 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 246 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 247 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 248 "data/maps/Route110/scripts.pory"
	release
# 249 "data/maps/Route110/scripts.pory"
	end
# 250 "data/maps/Route110/scripts.pory"

# 251 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 252 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 253 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 254 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 255 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 256 "data/maps/Route110/scripts.pory"
	release
# 257 "data/maps/Route110/scripts.pory"
	end
# 258 "data/maps/Route110/scripts.pory"

# 259 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 260 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 261 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 262 "data/maps/Route110/scripts.pory"
	end
# 263 "data/maps/Route110/scripts.pory"

# 264 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 265 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 266 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 267 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 268 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 269 "data/maps/Route110/scripts.pory"
	release
# 270 "data/maps/Route110/scripts.pory"
	end
# 271 "data/maps/Route110/scripts.pory"

# 272 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 273 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 274 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 275 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 276 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 277 "data/maps/Route110/scripts.pory"
	release
# 278 "data/maps/Route110/scripts.pory"
	end
# 279 "data/maps/Route110/scripts.pory"

# 280 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 281 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 282 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/Route110/scripts.pory"
	end
# 284 "data/maps/Route110/scripts.pory"

# 285 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 286 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 287 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route110/scripts.pory"
	end
# 289 "data/maps/Route110/scripts.pory"

# 290 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 291 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 292 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route110/scripts.pory"
	end
# 294 "data/maps/Route110/scripts.pory"

# 295 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 296 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 297 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route110/scripts.pory"
	end
# 299 "data/maps/Route110/scripts.pory"

# 300 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 301 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 302 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 303 "data/maps/Route110/scripts.pory"
	end
# 304 "data/maps/Route110/scripts.pory"

# 305 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 306 "data/maps/Route110/scripts.pory"
	lockall
# 307 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 308 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 309 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 310 "data/maps/Route110/scripts.pory"
	releaseall
# 311 "data/maps/Route110/scripts.pory"
	end
# 312 "data/maps/Route110/scripts.pory"

# 313 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 314 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 315 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 316 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 317 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 318 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 319 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 320 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 321 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 322 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 323 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 324 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 325 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 326 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 327 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 328 "data/maps/Route110/scripts.pory"
	end
# 329 "data/maps/Route110/scripts.pory"

# 330 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 331 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 332 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 333 "data/maps/Route110/scripts.pory"
	end
# 334 "data/maps/Route110/scripts.pory"

# 335 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 336 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 337 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 338 "data/maps/Route110/scripts.pory"
	end
# 339 "data/maps/Route110/scripts.pory"

# 340 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 341 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 342 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 343 "data/maps/Route110/scripts.pory"
	end
# 344 "data/maps/Route110/scripts.pory"

# 345 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 346 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 347 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 348 "data/maps/Route110/scripts.pory"
	end
# 349 "data/maps/Route110/scripts.pory"

# 350 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 351 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 352 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 353 "data/maps/Route110/scripts.pory"
	end
# 354 "data/maps/Route110/scripts.pory"

# 355 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 356 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 357 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 358 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 359 "data/maps/Route110/scripts.pory"
	return
# 360 "data/maps/Route110/scripts.pory"

# 361 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 362 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 363 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 364 "data/maps/Route110/scripts.pory"
	end
# 365 "data/maps/Route110/scripts.pory"

# 366 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 367 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 368 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 369 "data/maps/Route110/scripts.pory"
	end
# 370 "data/maps/Route110/scripts.pory"

# 371 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 372 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 373 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 374 "data/maps/Route110/scripts.pory"
	end
# 375 "data/maps/Route110/scripts.pory"

# 376 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 377 "data/maps/Route110/scripts.pory"
	lockall
# 378 "data/maps/Route110/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 379 "data/maps/Route110/scripts.pory"
	checkplayergender
# 380 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 381 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 382 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 383 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 384 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 385 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 387 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route110/scripts.pory"
	delay 30
# 389 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 390 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 391 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 392 "data/maps/Route110/scripts.pory"
	checkplayergender
# 393 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 394 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 395 "data/maps/Route110/scripts.pory"
	end
# 396 "data/maps/Route110/scripts.pory"

# 397 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 398 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 399 "data/maps/Route110/scripts.pory"
	return
# 400 "data/maps/Route110/scripts.pory"

# 401 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 402 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 403 "data/maps/Route110/scripts.pory"
	return
# 404 "data/maps/Route110/scripts.pory"

# 405 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 406 "data/maps/Route110/scripts.pory"
	speakername (CommonText_May)
# 407 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 408 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 409 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 410 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 411 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 412 "data/maps/Route110/scripts.pory"
	end
# 413 "data/maps/Route110/scripts.pory"

# 414 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 415 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 416 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 417 "data/maps/Route110/scripts.pory"
	end
# 418 "data/maps/Route110/scripts.pory"

# 419 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 420 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 421 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 422 "data/maps/Route110/scripts.pory"
	end
# 423 "data/maps/Route110/scripts.pory"

# 424 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 425 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 426 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 427 "data/maps/Route110/scripts.pory"
	end
# 428 "data/maps/Route110/scripts.pory"

# 429 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 430 "data/maps/Route110/scripts.pory"
	speakername (CommonText_May)
# 431 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 432 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GivePokemonBoxLink
# 433 "data/maps/Route110/scripts.pory"
	speakername (CommonText_May)
# 434 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainPokemonBoxLink, MSGBOX_DEFAULT
# 435 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 436 "data/maps/Route110/scripts.pory"
	end
# 437 "data/maps/Route110/scripts.pory"

# 438 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 439 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Brendan)
# 440 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 441 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 442 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 443 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 444 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 445 "data/maps/Route110/scripts.pory"
	end
# 446 "data/maps/Route110/scripts.pory"

# 447 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 448 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 449 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 450 "data/maps/Route110/scripts.pory"
	end
# 451 "data/maps/Route110/scripts.pory"

# 452 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 453 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 454 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 455 "data/maps/Route110/scripts.pory"
	end
# 456 "data/maps/Route110/scripts.pory"

# 457 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 458 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 459 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 460 "data/maps/Route110/scripts.pory"
	end
# 461 "data/maps/Route110/scripts.pory"

# 462 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 463 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Brendan)
# 464 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 465 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GivePokemonBoxLink
# 466 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Brendan)
# 467 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainPokemonBoxLink, MSGBOX_DEFAULT
# 468 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 469 "data/maps/Route110/scripts.pory"
	end
# 470 "data/maps/Route110/scripts.pory"

# 471 "data/maps/Route110/scripts.pory"
Route110_EventScript_GivePokemonBoxLink::
# 472 "data/maps/Route110/scripts.pory"
	closemessage
# 473 "data/maps/Route110/scripts.pory"
	giveitem ITEM_POKEMON_BOX_LINK
# 474 "data/maps/Route110/scripts.pory"
	return
# 475 "data/maps/Route110/scripts.pory"

# 476 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 477 "data/maps/Route110/scripts.pory"
	closemessage
# 478 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 479 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 480 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 481 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 482 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 483 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 484 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 485 "data/maps/Route110/scripts.pory"
	delay 45
# 486 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Common_Movement_WalkFastUp7
# 487 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 488 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 489 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 490 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 491 "data/maps/Route110/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 492 "data/maps/Route110/scripts.pory"
	releaseall
# 493 "data/maps/Route110/scripts.pory"
	end
# 494 "data/maps/Route110/scripts.pory"

# 495 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 496 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 497 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 498 "data/maps/Route110/scripts.pory"
	return
# 499 "data/maps/Route110/scripts.pory"

# 500 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 501 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkDown
# 502 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 503 "data/maps/Route110/scripts.pory"
	return
# 504 "data/maps/Route110/scripts.pory"

# 505 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 506 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 507 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 508 "data/maps/Route110/scripts.pory"
	return
# 509 "data/maps/Route110/scripts.pory"

# 510 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 511 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 512 "data/maps/Route110/scripts.pory"
	return
# 513 "data/maps/Route110/scripts.pory"

# 514 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 515 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 516 "data/maps/Route110/scripts.pory"
	return
# 517 "data/maps/Route110/scripts.pory"

# 518 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 519 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 520 "data/maps/Route110/scripts.pory"
	return
# 521 "data/maps/Route110/scripts.pory"

# 522 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 523 "data/maps/Route110/scripts.pory"
	walk_down
# 524 "data/maps/Route110/scripts.pory"
	walk_left
# 525 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 526 "data/maps/Route110/scripts.pory"
	step_end
# 527 "data/maps/Route110/scripts.pory"

# 528 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 529 "data/maps/Route110/scripts.pory"
	walk_down
# 530 "data/maps/Route110/scripts.pory"
	walk_right
# 531 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 532 "data/maps/Route110/scripts.pory"
	step_end
# 533 "data/maps/Route110/scripts.pory"

# 534 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 535 "data/maps/Route110/scripts.pory"
	lockall
# 536 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 537 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 538 "data/maps/Route110/scripts.pory"

# 539 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 540 "data/maps/Route110/scripts.pory"
	lockall
# 541 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 542 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 543 "data/maps/Route110/scripts.pory"

# 544 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 545 "data/maps/Route110/scripts.pory"
	lockall
# 546 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 547 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 548 "data/maps/Route110/scripts.pory"

# 549 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 550 "data/maps/Route110/scripts.pory"
	lockall
# 551 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 552 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 553 "data/maps/Route110/scripts.pory"

# 554 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 555 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 556 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkDown3
# 557 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 558 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 559 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 560 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 561 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 562 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 563 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 564 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 565 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 566 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 567 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Birch)
# 568 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 569 "data/maps/Route110/scripts.pory"
	closemessage
# 570 "data/maps/Route110/scripts.pory"
	delay 20
# 571 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 572 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 573 "data/maps/Route110/scripts.pory"
	delay 10
# 574 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 575 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 576 "data/maps/Route110/scripts.pory"
	delay 20
# 577 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 578 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 579 "data/maps/Route110/scripts.pory"
	delay 30
# 580 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Birch)
# 581 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 582 "data/maps/Route110/scripts.pory"
	closemessage
# 583 "data/maps/Route110/scripts.pory"
	delay 30
# 584 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 585 "data/maps/Route110/scripts.pory"
	bufferstring STR_VAR_2, CommonText_Birch
# 586 "data/maps/Route110/scripts.pory"
	msgbox Text_RegisteredInPokenav_OneInput, MSGBOX_DEFAULT
# 587 "data/maps/Route110/scripts.pory"
	waitfanfare
# 588 "data/maps/Route110/scripts.pory"
	closemessage
# 589 "data/maps/Route110/scripts.pory"
	delay 30
# 590 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 591 "data/maps/Route110/scripts.pory"
	speakername (CommonText_Birch)
# 592 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 593 "data/maps/Route110/scripts.pory"
	closemessage
# 594 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 595 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 596 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit2
# 597 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit2
# 598 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 599 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 600 "data/maps/Route110/scripts.pory"
	releaseall
# 601 "data/maps/Route110/scripts.pory"
	end
# 602 "data/maps/Route110/scripts.pory"

# 603 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 604 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 605 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 606 "data/maps/Route110/scripts.pory"
	return
# 607 "data/maps/Route110/scripts.pory"

# 608 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 609 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 610 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 611 "data/maps/Route110/scripts.pory"
	return
# 612 "data/maps/Route110/scripts.pory"

# 613 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 614 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkDown2
# 615 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 616 "data/maps/Route110/scripts.pory"
	return
# 617 "data/maps/Route110/scripts.pory"

# 618 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 619 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 620 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 621 "data/maps/Route110/scripts.pory"
	return
# 622 "data/maps/Route110/scripts.pory"

# 623 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 624 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 625 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 626 "data/maps/Route110/scripts.pory"
	return
# 627 "data/maps/Route110/scripts.pory"

# 628 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 629 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkUp5
# 630 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 631 "data/maps/Route110/scripts.pory"
	return
# 632 "data/maps/Route110/scripts.pory"

# 633 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 634 "data/maps/Route110/scripts.pory"
	walk_down
# 635 "data/maps/Route110/scripts.pory"
	walk_left
# 636 "data/maps/Route110/scripts.pory"
	walk_left
# 637 "data/maps/Route110/scripts.pory"
	walk_down
# 638 "data/maps/Route110/scripts.pory"
	step_end
# 639 "data/maps/Route110/scripts.pory"

# 640 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 641 "data/maps/Route110/scripts.pory"
	walk_down
# 642 "data/maps/Route110/scripts.pory"
	walk_left
# 643 "data/maps/Route110/scripts.pory"
	walk_down
# 644 "data/maps/Route110/scripts.pory"
	step_end
# 645 "data/maps/Route110/scripts.pory"

# 646 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 647 "data/maps/Route110/scripts.pory"
	walk_down
# 648 "data/maps/Route110/scripts.pory"
	walk_right
# 649 "data/maps/Route110/scripts.pory"
	walk_down
# 650 "data/maps/Route110/scripts.pory"
	step_end
# 651 "data/maps/Route110/scripts.pory"

# 652 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 653 "data/maps/Route110/scripts.pory"
	walk_up
# 654 "data/maps/Route110/scripts.pory"
	walk_up
# 655 "data/maps/Route110/scripts.pory"
	walk_right
# 656 "data/maps/Route110/scripts.pory"
	walk_up
# 657 "data/maps/Route110/scripts.pory"
	walk_up
# 658 "data/maps/Route110/scripts.pory"
	walk_up
# 659 "data/maps/Route110/scripts.pory"
	step_end
# 660 "data/maps/Route110/scripts.pory"

# 661 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 662 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's activities…\n"
# 663 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 664 "data/maps/Route110/scripts.pory"

# 665 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 666 "data/maps/Route110/scripts.pory"
	.string "I want to get going to Slateport and\n"
# 667 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 668 "data/maps/Route110/scripts.pory"

# 669 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 670 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 671 "data/maps/Route110/scripts.pory"
	.string "Team Aqua. It's a little scary.$"
# 672 "data/maps/Route110/scripts.pory"

# 673 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 674 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's actions should bring\n"
# 675 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 676 "data/maps/Route110/scripts.pory"

# 677 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 678 "data/maps/Route110/scripts.pory"
	.string "Hi, {PLAYER}{KUN}, long time no see!\p"
# 679 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 680 "data/maps/Route110/scripts.pory"
	.string "Pokémon, my Pokémon grew stronger.\p"
# 681 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 682 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 683 "data/maps/Route110/scripts.pory"

# 684 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 685 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 686 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 687 "data/maps/Route110/scripts.pory"

# 688 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 689 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}{KUN}, you've been busy\n"
# 690 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 691 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 692 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 693 "data/maps/Route110/scripts.pory"

# 694 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainPokemonBoxLink:
# 695 "data/maps/Route110/scripts.pory"
	.string "That's a Pokémon Box Link.\p"
# 696 "data/maps/Route110/scripts.pory"
	.string "Try it out. It allows you to access\n"
# 697 "data/maps/Route110/scripts.pory"
	.string "your PC remotely when you use it.\p"
# 698 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 699 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 700 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 701 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 702 "data/maps/Route110/scripts.pory"

# 703 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 704 "data/maps/Route110/scripts.pory"
	.string "Hey, {PLAYER}.\n"
# 705 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 706 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 707 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your Pokémon?\n"
# 708 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 709 "data/maps/Route110/scripts.pory"

# 710 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 711 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 712 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 713 "data/maps/Route110/scripts.pory"

# 714 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 715 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}, you've trained without\n"
# 716 "data/maps/Route110/scripts.pory"
	.string "me noticing…\p"
# 717 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 718 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 719 "data/maps/Route110/scripts.pory"

# 720 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainPokemonBoxLink:
# 721 "data/maps/Route110/scripts.pory"
	.string "That's a Pokémon Box Link.\p"
# 722 "data/maps/Route110/scripts.pory"
	.string "Use it and you can access your PC\n"
# 723 "data/maps/Route110/scripts.pory"
	.string "remotely.\p"
# 724 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 725 "data/maps/Route110/scripts.pory"
	.string "Pokémon.$"
# 726 "data/maps/Route110/scripts.pory"

# 727 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 728 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a Bike\n"
# 729 "data/maps/Route110/scripts.pory"
	.string "at full speed on Cycling Road?$"
# 730 "data/maps/Route110/scripts.pory"

# 731 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 732 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 733 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 734 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 735 "data/maps/Route110/scripts.pory"

# 736 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 737 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that Bike from Rydel!\p"
# 738 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 739 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 740 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 741 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 742 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 743 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 744 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 745 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 746 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 747 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 748 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel…\n"
# 749 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 750 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 751 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 752 "data/maps/Route110/scripts.pory"

# 753 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 754 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 755 "data/maps/Route110/scripts.pory"
	.string "A road each for people and Pokémon.\n"
# 756 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 757 "data/maps/Route110/scripts.pory"

# 758 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 759 "data/maps/Route110/scripts.pory"
	.string "I don't have a Bike, so I'll take\n"
# 760 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 761 "data/maps/Route110/scripts.pory"

# 762 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 763 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make Bike\n"
# 764 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 765 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 766 "data/maps/Route110/scripts.pory"
	.string "reach only by using a Bike technique.$"
# 767 "data/maps/Route110/scripts.pory"

# 768 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 769 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 770 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for Mauville on\n"
# 771 "data/maps/Route110/scripts.pory"
	.string "Cycling Road, or take the low road\l"
# 772 "data/maps/Route110/scripts.pory"
	.string "and look for Pokémon?$"
# 773 "data/maps/Route110/scripts.pory"

# 774 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 775 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 776 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 777 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 778 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 779 "data/maps/Route110/scripts.pory"

# 780 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 781 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 782 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 783 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 784 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 785 "data/maps/Route110/scripts.pory"

# 786 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 787 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 788 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 789 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 790 "data/maps/Route110/scripts.pory"

# 791 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 792 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 793 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 794 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 795 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 796 "data/maps/Route110/scripts.pory"

# 797 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 798 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 799 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 800 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 801 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 802 "data/maps/Route110/scripts.pory"

# 803 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 804 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 805 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 806 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 807 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 808 "data/maps/Route110/scripts.pory"
	.string "returning that Bike to Rydel.$"
# 809 "data/maps/Route110/scripts.pory"

# 810 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 811 "data/maps/Route110/scripts.pory"
	.string "This is Cycling Road.\p"
# 812 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from Mauville to\n"
# 813 "data/maps/Route110/scripts.pory"
	.string "Slateport on a Mach Bike, you would\l"
# 814 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 815 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 816 "data/maps/Route110/scripts.pory"

# 817 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 818 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 819 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 820 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 821 "data/maps/Route110/scripts.pory"

# 822 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 823 "data/maps/Route110/scripts.pory"
	.string "On this Cycling Road, those riding\n"
# 824 "data/maps/Route110/scripts.pory"
	.string "Mach Bikes are rated for their number\l"
# 825 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 826 "data/maps/Route110/scripts.pory"
	.string "Acro Bikes do not qualify for rating.\n"
# 827 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 828 "data/maps/Route110/scripts.pory"

# 829 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 830 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 831 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} Slateport City$"
# 832 "data/maps/Route110/scripts.pory"

# 833 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 834 "data/maps/Route110/scripts.pory"
	.string "Seaside Cycling Road$"
# 835 "data/maps/Route110/scripts.pory"

# 836 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 837 "data/maps/Route110/scripts.pory"
	.string "“Team Aqua was here!”\p"
# 838 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 839 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 840 "data/maps/Route110/scripts.pory"
	.string "“Team Magma rules!” is what it\n"
# 841 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 842 "data/maps/Route110/scripts.pory"

# 843 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 844 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 845 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} Route 103$"
# 846 "data/maps/Route110/scripts.pory"

# 847 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 848 "data/maps/Route110/scripts.pory"
	.string "Seaside Parking$"
# 849 "data/maps/Route110/scripts.pory"

# 850 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 851 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 852 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} Mauville City$"
# 853 "data/maps/Route110/scripts.pory"

# 854 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 855 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 856 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 857 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 858 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 859 "data/maps/Route110/scripts.pory"
	.string "Pokémon battles.$"
# 860 "data/maps/Route110/scripts.pory"

# 861 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 862 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 863 "data/maps/Route110/scripts.pory"
	.string "The items in the Bag can be reorganized\n"
# 864 "data/maps/Route110/scripts.pory"
	.string "by pressing Select.\p"
# 865 "data/maps/Route110/scripts.pory"
	.string "It can also be automatically sorted by\n"
# 866 "data/maps/Route110/scripts.pory"
	.string "by pressing Start.$"
# 867 "data/maps/Route110/scripts.pory"

# 868 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 869 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 870 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous Trick House.”$"
# 871 "data/maps/Route110/scripts.pory"

# 872 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 873 "data/maps/Route110/scripts.pory"
	.string "The best record to date…\p"
# 874 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 875 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 876 "data/maps/Route110/scripts.pory"

# 877 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 878 "data/maps/Route110/scripts.pory"
	.string "The best record to date…\p"
# 879 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 880 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 881 "data/maps/Route110/scripts.pory"

# 882 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 883 "data/maps/Route110/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!\n"
# 884 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 885 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 886 "data/maps/Route110/scripts.pory"

# 887 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 888 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 889 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 890 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 891 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your Pokénav\n"
# 892 "data/maps/Route110/scripts.pory"
	.string "had the Match Call system installed.\p"
# 893 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 894 "data/maps/Route110/scripts.pory"
	.string "my Pokénav as well.\p"
# 895 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 896 "data/maps/Route110/scripts.pory"
	.string "I can rate your Pokédex anytime.\p"
# 897 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 898 "data/maps/Route110/scripts.pory"

# 899 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 900 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}{KUN}…\p"
# 901 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 902 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 903 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 904 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
