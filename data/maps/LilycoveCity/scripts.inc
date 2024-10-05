# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_WOMAN_1, 19
# 3 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_MAN_1, 20
# 4 "data/maps/LilycoveCity/scripts.pory"

# 5 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 6 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 7 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 8 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 9 "data/maps/LilycoveCity/scripts.pory"

# 10 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 11 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 12 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 13 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 14 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 15 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/LilycoveCity/scripts.pory"
	end
# 17 "data/maps/LilycoveCity/scripts.pory"

# 18 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 19 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 20 "data/maps/LilycoveCity/scripts.pory"
	end
# 21 "data/maps/LilycoveCity/scripts.pory"

# 22 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 23 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 24 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 35 "data/maps/LilycoveCity/scripts.pory"
	return
# 36 "data/maps/LilycoveCity/scripts.pory"

# 37 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 38 "data/maps/LilycoveCity/scripts.pory"
	lock
# 39 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 40 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 41 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 42 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 43 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 44 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 45 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 46 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 47 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 48 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity/scripts.pory"
	release
# 50 "data/maps/LilycoveCity/scripts.pory"
	end
# 51 "data/maps/LilycoveCity/scripts.pory"

# 52 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 53 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 54 "data/maps/LilycoveCity/scripts.pory"
	release
# 55 "data/maps/LilycoveCity/scripts.pory"
	end
# 56 "data/maps/LilycoveCity/scripts.pory"

# 57 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 58 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 59 "data/maps/LilycoveCity/scripts.pory"
	end
# 60 "data/maps/LilycoveCity/scripts.pory"

# 61 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 62 "data/maps/LilycoveCity/scripts.pory"
	lock
# 63 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 65 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity/scripts.pory"
	release
# 67 "data/maps/LilycoveCity/scripts.pory"
	end
# 68 "data/maps/LilycoveCity/scripts.pory"

# 69 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 70 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 71 "data/maps/LilycoveCity/scripts.pory"
	release
# 72 "data/maps/LilycoveCity/scripts.pory"
	end
# 73 "data/maps/LilycoveCity/scripts.pory"

# 74 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 75 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 76 "data/maps/LilycoveCity/scripts.pory"
	end
# 77 "data/maps/LilycoveCity/scripts.pory"

# 78 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 79 "data/maps/LilycoveCity/scripts.pory"
	lock
# 80 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 81 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 82 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity/scripts.pory"
	release
# 84 "data/maps/LilycoveCity/scripts.pory"
	end
# 85 "data/maps/LilycoveCity/scripts.pory"

# 86 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 87 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity/scripts.pory"
	release
# 89 "data/maps/LilycoveCity/scripts.pory"
	end
# 90 "data/maps/LilycoveCity/scripts.pory"

# 91 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 92 "data/maps/LilycoveCity/scripts.pory"
	lock
# 93 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 94 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 95 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity/scripts.pory"
	release
# 97 "data/maps/LilycoveCity/scripts.pory"
	end
# 98 "data/maps/LilycoveCity/scripts.pory"

# 99 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 100 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity/scripts.pory"
	release
# 102 "data/maps/LilycoveCity/scripts.pory"
	end
# 103 "data/maps/LilycoveCity/scripts.pory"

# 104 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 105 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 106 "data/maps/LilycoveCity/scripts.pory"
	end
# 107 "data/maps/LilycoveCity/scripts.pory"

# 108 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 109 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 110 "data/maps/LilycoveCity/scripts.pory"
	end
# 111 "data/maps/LilycoveCity/scripts.pory"

# 112 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 113 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 114 "data/maps/LilycoveCity/scripts.pory"
	end
# 115 "data/maps/LilycoveCity/scripts.pory"

# 116 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 117 "data/maps/LilycoveCity/scripts.pory"
	lock
# 118 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 119 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 120 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity/scripts.pory"
	release
# 122 "data/maps/LilycoveCity/scripts.pory"
	end
# 123 "data/maps/LilycoveCity/scripts.pory"

# 124 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 125 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 126 "data/maps/LilycoveCity/scripts.pory"
	release
# 127 "data/maps/LilycoveCity/scripts.pory"
	end
# 128 "data/maps/LilycoveCity/scripts.pory"

# 129 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 130 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 131 "data/maps/LilycoveCity/scripts.pory"
	end
# 132 "data/maps/LilycoveCity/scripts.pory"

# 133 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 135 "data/maps/LilycoveCity/scripts.pory"
	end
# 136 "data/maps/LilycoveCity/scripts.pory"

# 137 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 138 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 139 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 140 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 141 "data/maps/LilycoveCity/scripts.pory"
	end
# 142 "data/maps/LilycoveCity/scripts.pory"

# 143 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 144 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 145 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 146 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 147 "data/maps/LilycoveCity/scripts.pory"
	end
# 148 "data/maps/LilycoveCity/scripts.pory"

# 149 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 150 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 151 "data/maps/LilycoveCity/scripts.pory"
	end
# 152 "data/maps/LilycoveCity/scripts.pory"

# 153 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 154 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 155 "data/maps/LilycoveCity/scripts.pory"
	end
# 156 "data/maps/LilycoveCity/scripts.pory"

# 157 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 158 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 159 "data/maps/LilycoveCity/scripts.pory"
	end
# 160 "data/maps/LilycoveCity/scripts.pory"

# 161 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 162 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 163 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 164 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 165 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 166 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 167 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 168 "data/maps/LilycoveCity/scripts.pory"
	end
# 169 "data/maps/LilycoveCity/scripts.pory"

# 170 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 171 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 172 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 173 "data/maps/LilycoveCity/scripts.pory"
	end
# 174 "data/maps/LilycoveCity/scripts.pory"

# 175 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 176 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 177 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 178 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 179 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 180 "data/maps/LilycoveCity/scripts.pory"
	end
# 181 "data/maps/LilycoveCity/scripts.pory"

# 182 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 183 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 184 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 185 "data/maps/LilycoveCity/scripts.pory"
	end
# 186 "data/maps/LilycoveCity/scripts.pory"

# 187 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 188 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 189 "data/maps/LilycoveCity/scripts.pory"
	end
# 190 "data/maps/LilycoveCity/scripts.pory"

# 191 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 192 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 193 "data/maps/LilycoveCity/scripts.pory"
	end
# 194 "data/maps/LilycoveCity/scripts.pory"

# 195 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 196 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 197 "data/maps/LilycoveCity/scripts.pory"
	end
# 198 "data/maps/LilycoveCity/scripts.pory"

# 199 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 200 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 201 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 202 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 204 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 206 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 207 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 209 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 210 "data/maps/LilycoveCity/scripts.pory"
	end
# 211 "data/maps/LilycoveCity/scripts.pory"

# 212 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 213 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 214 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 215 "data/maps/LilycoveCity/scripts.pory"
	end
# 216 "data/maps/LilycoveCity/scripts.pory"

# 217 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 218 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 219 "data/maps/LilycoveCity/scripts.pory"
	end
# 220 "data/maps/LilycoveCity/scripts.pory"

# 221 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 222 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 223 "data/maps/LilycoveCity/scripts.pory"
	end
# 224 "data/maps/LilycoveCity/scripts.pory"

# 225 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 226 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 227 "data/maps/LilycoveCity/scripts.pory"
	end
# 228 "data/maps/LilycoveCity/scripts.pory"

# 229 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 230 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 231 "data/maps/LilycoveCity/scripts.pory"
	end
# 232 "data/maps/LilycoveCity/scripts.pory"

# 233 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 234 "data/maps/LilycoveCity/scripts.pory"
	lock
# 235 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 236 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 237 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 238 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 239 "data/maps/LilycoveCity/scripts.pory"
	end
# 240 "data/maps/LilycoveCity/scripts.pory"

# 241 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 242 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 243 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 244 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 245 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 246 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 247 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 248 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 249 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 250 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 251 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 252 "data/maps/LilycoveCity/scripts.pory"
	end
# 253 "data/maps/LilycoveCity/scripts.pory"

# 254 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 255 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 256 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 257 "data/maps/LilycoveCity/scripts.pory"
	return
# 258 "data/maps/LilycoveCity/scripts.pory"

# 259 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 260 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 261 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 262 "data/maps/LilycoveCity/scripts.pory"
	return
# 263 "data/maps/LilycoveCity/scripts.pory"

# 264 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 265 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 266 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 267 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 268 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 269 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 270 "data/maps/LilycoveCity/scripts.pory"
	release
# 271 "data/maps/LilycoveCity/scripts.pory"
	end
# 272 "data/maps/LilycoveCity/scripts.pory"

# 273 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 274 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 275 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 276 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 277 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 278 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 279 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 280 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 281 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 282 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 283 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 284 "data/maps/LilycoveCity/scripts.pory"
	end
# 285 "data/maps/LilycoveCity/scripts.pory"

# 286 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 287 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 288 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 289 "data/maps/LilycoveCity/scripts.pory"
	return
# 290 "data/maps/LilycoveCity/scripts.pory"

# 291 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 292 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 293 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 294 "data/maps/LilycoveCity/scripts.pory"
	return
# 295 "data/maps/LilycoveCity/scripts.pory"

# 296 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 297 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 298 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 299 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 300 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 301 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 302 "data/maps/LilycoveCity/scripts.pory"
	release
# 303 "data/maps/LilycoveCity/scripts.pory"
	end
# 304 "data/maps/LilycoveCity/scripts.pory"

# 305 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 306 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 307 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 308 "data/maps/LilycoveCity/scripts.pory"
	end
# 309 "data/maps/LilycoveCity/scripts.pory"

# 310 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 311 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 312 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 313 "data/maps/LilycoveCity/scripts.pory"
	end
# 314 "data/maps/LilycoveCity/scripts.pory"

# 315 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 316 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 317 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 318 "data/maps/LilycoveCity/scripts.pory"
	end
# 319 "data/maps/LilycoveCity/scripts.pory"

# 320 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 321 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 322 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 323 "data/maps/LilycoveCity/scripts.pory"
	end
# 324 "data/maps/LilycoveCity/scripts.pory"

# 325 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 326 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 327 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 328 "data/maps/LilycoveCity/scripts.pory"
	end
# 329 "data/maps/LilycoveCity/scripts.pory"

# 330 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 331 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 332 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 333 "data/maps/LilycoveCity/scripts.pory"
	end
# 334 "data/maps/LilycoveCity/scripts.pory"

# 335 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 336 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 337 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 338 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 339 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 340 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 341 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 342 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 343 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 344 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 345 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 346 "data/maps/LilycoveCity/scripts.pory"
	end
# 347 "data/maps/LilycoveCity/scripts.pory"

# 348 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 349 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 350 "data/maps/LilycoveCity/scripts.pory"
	return
# 351 "data/maps/LilycoveCity/scripts.pory"

# 352 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 353 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 354 "data/maps/LilycoveCity/scripts.pory"
	return
# 355 "data/maps/LilycoveCity/scripts.pory"

# 356 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 357 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 358 "data/maps/LilycoveCity/scripts.pory"
	return
# 359 "data/maps/LilycoveCity/scripts.pory"

# 360 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 361 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 362 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 363 "data/maps/LilycoveCity/scripts.pory"
	return
# 364 "data/maps/LilycoveCity/scripts.pory"

# 365 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 366 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 367 "data/maps/LilycoveCity/scripts.pory"
	return
# 368 "data/maps/LilycoveCity/scripts.pory"

# 369 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 370 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 371 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 372 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 373 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 374 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 375 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 376 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 377 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 378 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 379 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 380 "data/maps/LilycoveCity/scripts.pory"
	end
# 381 "data/maps/LilycoveCity/scripts.pory"

# 382 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 383 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 384 "data/maps/LilycoveCity/scripts.pory"
	return
# 385 "data/maps/LilycoveCity/scripts.pory"

# 386 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 387 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 388 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 389 "data/maps/LilycoveCity/scripts.pory"
	return
# 390 "data/maps/LilycoveCity/scripts.pory"

# 391 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 392 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 393 "data/maps/LilycoveCity/scripts.pory"
	return
# 394 "data/maps/LilycoveCity/scripts.pory"

# 395 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 396 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 397 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 398 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 399 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 400 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 401 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 402 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 403 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 404 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 405 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 406 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 407 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 408 "data/maps/LilycoveCity/scripts.pory"
	release
# 409 "data/maps/LilycoveCity/scripts.pory"
	end
# 410 "data/maps/LilycoveCity/scripts.pory"

# 411 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 412 "data/maps/LilycoveCity/scripts.pory"
	lock
# 413 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 414 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 415 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 416 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 417 "data/maps/LilycoveCity/scripts.pory"
	release
# 418 "data/maps/LilycoveCity/scripts.pory"
	end
# 419 "data/maps/LilycoveCity/scripts.pory"

# 420 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 421 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 422 "data/maps/LilycoveCity/scripts.pory"
	return
# 423 "data/maps/LilycoveCity/scripts.pory"

# 424 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 425 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 426 "data/maps/LilycoveCity/scripts.pory"
	return
# 427 "data/maps/LilycoveCity/scripts.pory"

# 428 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 429 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh, hey?\n"
# 430 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of Dolls and\n"
# 432 "data/maps/LilycoveCity/scripts.pory"
	.string "Posters.\p"
# 433 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon, and I'm raising them\l"
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 437 "data/maps/LilycoveCity/scripts.pory"
	.string "raising Pokémon properly, {PLAYER}{KUN}.\p"
# 438 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "me your Pokémon, {PLAYER}{KUN}.$"
# 440 "data/maps/LilycoveCity/scripts.pory"

# 441 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh, why? {PLAYER}{KUN}, haven't you\n"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your Pokémon?\p"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "Trainer…$"
# 446 "data/maps/LilycoveCity/scripts.pory"

# 447 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "Come on, battle with me, so I can\n"
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your Pokémon!$"
# 450 "data/maps/LilycoveCity/scripts.pory"

# 451 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "The Pokémon I raised won't be\n"
# 453 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your Pokémon, {PLAYER}{KUN}!$"
# 454 "data/maps/LilycoveCity/scripts.pory"

# 455 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 460 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 461 "data/maps/LilycoveCity/scripts.pory"

# 462 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 463 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm thinking of going back to\n"
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "Littleroot soon.\p"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of Pokémon,\n"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "and my Pokédex is coming along, so\l"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 468 "data/maps/LilycoveCity/scripts.pory"

# 469 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 470 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 471 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the Gym Badges and take\n"
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "the Pokémon League challenge?\p"
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting Badges,\n"
# 474 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 475 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex. I'll complete it before you!\p"
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 477 "data/maps/LilycoveCity/scripts.pory"

# 478 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 479 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 480 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the Pokémon League\n"
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex?\p"
# 484 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 485 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my Pokédex before you!\p"
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 487 "data/maps/LilycoveCity/scripts.pory"

# 488 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 489 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the Battle Frontier\n"
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 492 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 493 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex?\p"
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my Pokédex before you!\p"
# 496 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 497 "data/maps/LilycoveCity/scripts.pory"

# 498 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 499 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh, hey, it's {PLAYER}.\p"
# 500 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 501 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any Dolls.\p"
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 504 "data/maps/LilycoveCity/scripts.pory"
	.string "raising Pokémon better?$"
# 505 "data/maps/LilycoveCity/scripts.pory"

# 506 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 507 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh, what's the matter?\n"
# 508 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 509 "data/maps/LilycoveCity/scripts.pory"

# 510 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 511 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to battle to see who's\n"
# 512 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising Pokémon better?$"
# 513 "data/maps/LilycoveCity/scripts.pory"

# 514 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 515 "data/maps/LilycoveCity/scripts.pory"
	.string "Aww, but you know I'm not\n"
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 517 "data/maps/LilycoveCity/scripts.pory"

# 518 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 521 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 522 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a Trainer…$"
# 523 "data/maps/LilycoveCity/scripts.pory"

# 524 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 525 "data/maps/LilycoveCity/scripts.pory"
	.string "I…\n"
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to Littleroot.\p"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex. It's coming together pretty\l"
# 529 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 530 "data/maps/LilycoveCity/scripts.pory"

# 531 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the Gym Badges and take\n"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "the Pokémon League challenge?\p"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 537 "data/maps/LilycoveCity/scripts.pory"

# 538 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the Pokémon League challenge?\p"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my Pokémon\n"
# 543 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 544 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 546 "data/maps/LilycoveCity/scripts.pory"

# 547 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 548 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the Battle Frontier\n"
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 551 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 552 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex?\p"
# 553 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 554 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the Battle Frontier.\p"
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my Pokémon a bit more,\n"
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the Battle\n"
# 558 "data/maps/LilycoveCity/scripts.pory"
	.string "Frontier.\p"
# 559 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 560 "data/maps/LilycoveCity/scripts.pory"

# 561 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "Hideout today…\p"
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 567 "data/maps/LilycoveCity/scripts.pory"

# 568 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 569 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a Grunt, so I don't know what\n"
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "the Boss is thinking…\p"
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on Team Aqua, I know I'll get\n"
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 573 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 574 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 575 "data/maps/LilycoveCity/scripts.pory"

# 576 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 577 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 581 "data/maps/LilycoveCity/scripts.pory"

# 582 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 583 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua's, it will be a happier\l"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "place for Pokémon, too.$"
# 586 "data/maps/LilycoveCity/scripts.pory"

# 587 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 588 "data/maps/LilycoveCity/scripts.pory"
	.string "There! Wailmer!\n"
# 589 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 590 "data/maps/LilycoveCity/scripts.pory"

# 591 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 592 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 593 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 594 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 595 "data/maps/LilycoveCity/scripts.pory"

# 596 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 597 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a Pokémon Contest Hall\n"
# 598 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 599 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised Pokémon will\n"
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 602 "data/maps/LilycoveCity/scripts.pory"

# 603 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 606 "data/maps/LilycoveCity/scripts.pory"

# 607 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my Pokémon some new\n"
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a Contest.\p"
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the Move Deleter\n"
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 612 "data/maps/LilycoveCity/scripts.pory"

# 613 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 614 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from Kanto.\p"
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "The Hoenn region is beautiful with\n"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 618 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare Pokémon that live\n"
# 619 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 620 "data/maps/LilycoveCity/scripts.pory"

# 621 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua's been training their\n"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "Wailmer in the cove.\p"
# 624 "data/maps/LilycoveCity/scripts.pory"
	.string "We Sailors can't get our boats out\n"
# 625 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 626 "data/maps/LilycoveCity/scripts.pory"

# 627 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 628 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted Team Aqua out of\n"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 631 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the Wailmer out of the cove,\n"
# 632 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 633 "data/maps/LilycoveCity/scripts.pory"

# 634 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 635 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 636 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my Pokémon!\p"
# 638 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua? Is it Team Aqua?$"
# 640 "data/maps/LilycoveCity/scripts.pory"

# 641 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing Pokémon…\n"
# 643 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 644 "data/maps/LilycoveCity/scripts.pory"

# 645 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 646 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an Art Dealer.\p"
# 647 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 648 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 649 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the Museum here has\n"
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 651 "data/maps/LilycoveCity/scripts.pory"

# 652 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 657 "data/maps/LilycoveCity/scripts.pory"

# 658 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 662 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 663 "data/maps/LilycoveCity/scripts.pory"

# 664 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 667 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 668 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that Team Aqua lot came\l"
# 669 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 670 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving Team Aqua”!\p"
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 673 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 674 "data/maps/LilycoveCity/scripts.pory"

# 675 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 677 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 678 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 679 "data/maps/LilycoveCity/scripts.pory"
	.string "That Team Aqua lot, they must\n"
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 681 "data/maps/LilycoveCity/scripts.pory"

# 682 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 683 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City\p"
# 684 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 685 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 686 "data/maps/LilycoveCity/scripts.pory"

# 687 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 688 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Contest Hall\n"
# 689 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for Trainers!”$"
# 690 "data/maps/LilycoveCity/scripts.pory"

# 691 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 692 "data/maps/LilycoveCity/scripts.pory"
	.string "Cove Lily Motel\p"
# 693 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as Cove Lily of\n"
# 694 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove.”$"
# 695 "data/maps/LilycoveCity/scripts.pory"

# 696 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 697 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Museum\p"
# 698 "data/maps/LilycoveCity/scripts.pory"
	.string "“Pokémon Masterpiece Collection\n"
# 699 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 700 "data/maps/LilycoveCity/scripts.pory"

# 701 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 702 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Museum\p"
# 703 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s Pokémon Collection\n"
# 704 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 705 "data/maps/LilycoveCity/scripts.pory"

# 706 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 707 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City Harbor\p"
# 708 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. Tidal is under\n"
# 709 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in Slateport City.\p"
# 710 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 711 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 712 "data/maps/LilycoveCity/scripts.pory"

# 713 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City Harbor\p"
# 715 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 716 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. Tidal.”$"
# 717 "data/maps/LilycoveCity/scripts.pory"

# 718 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 719 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Trainer Fan Club\p"
# 720 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of Trainers are scribbled\n"
# 721 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 722 "data/maps/LilycoveCity/scripts.pory"

# 723 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 724 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Department Store\p"
# 725 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 726 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 727 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 728 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 729 "data/maps/LilycoveCity/scripts.pory"

# 730 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 731 "data/maps/LilycoveCity/scripts.pory"
	.string "Move Deleter's House\p"
# 732 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted Pokémon moves deleted.”$"
# 733 "data/maps/LilycoveCity/scripts.pory"

# 734 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 736 "data/maps/LilycoveCity/scripts.pory"
	.string "Berry Blender?$"
# 737 "data/maps/LilycoveCity/scripts.pory"

# 738 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 739 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 740 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 741 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 742 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}s you can get, I've heard.$"
# 743 "data/maps/LilycoveCity/scripts.pory"

# 744 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 745 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 746 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 747 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a Pokémon,\n"
# 748 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 749 "data/maps/LilycoveCity/scripts.pory"

# 750 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 751 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 753 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the Sky Pillar, I hear.$"
# 754 "data/maps/LilycoveCity/scripts.pory"

# 755 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 756 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 757 "data/maps/LilycoveCity/scripts.pory"
	.string "around Route 131.\p"
# 758 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 759 "data/maps/LilycoveCity/scripts.pory"

# 760 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 761 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 762 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 763 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a Dragon-type\n"
# 764 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon flying way up in the sky.\p"
# 765 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool Pokémon like that live in\n"
# 766 "data/maps/LilycoveCity/scripts.pory"
	.string "the Hoenn region?$"
# 767 "data/maps/LilycoveCity/scripts.pory"

# 768 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 769 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 770 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare Pokémon as we can.\p"
# 771 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 772 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon as soon as we arrived.\p"
# 773 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"
