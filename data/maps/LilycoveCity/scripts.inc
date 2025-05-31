# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 3 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 4 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 5 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 6 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 7 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 8 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 9 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 10 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 11 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 12 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 13 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 14 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 15 "data/maps/LilycoveCity/scripts.pory"
	return
# 16 "data/maps/LilycoveCity/scripts.pory"

# 17 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 18 "data/maps/LilycoveCity/scripts.pory"
	lock
# 19 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 20 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 21 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 22 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 23 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 24 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 25 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 26 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 27 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 28 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity/scripts.pory"
	release
# 30 "data/maps/LilycoveCity/scripts.pory"
	end
# 31 "data/maps/LilycoveCity/scripts.pory"

# 32 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 33 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 34 "data/maps/LilycoveCity/scripts.pory"
	release
# 35 "data/maps/LilycoveCity/scripts.pory"
	end
# 36 "data/maps/LilycoveCity/scripts.pory"

# 37 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 38 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 39 "data/maps/LilycoveCity/scripts.pory"
	end
# 40 "data/maps/LilycoveCity/scripts.pory"

# 41 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 42 "data/maps/LilycoveCity/scripts.pory"
	lock
# 43 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 44 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 45 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 46 "data/maps/LilycoveCity/scripts.pory"
	release
# 47 "data/maps/LilycoveCity/scripts.pory"
	end
# 48 "data/maps/LilycoveCity/scripts.pory"

# 49 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 50 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 51 "data/maps/LilycoveCity/scripts.pory"
	release
# 52 "data/maps/LilycoveCity/scripts.pory"
	end
# 53 "data/maps/LilycoveCity/scripts.pory"

# 54 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 55 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 56 "data/maps/LilycoveCity/scripts.pory"
	end
# 57 "data/maps/LilycoveCity/scripts.pory"

# 58 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 59 "data/maps/LilycoveCity/scripts.pory"
	lock
# 60 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 61 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 62 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 63 "data/maps/LilycoveCity/scripts.pory"
	release
# 64 "data/maps/LilycoveCity/scripts.pory"
	end
# 65 "data/maps/LilycoveCity/scripts.pory"

# 66 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 67 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 68 "data/maps/LilycoveCity/scripts.pory"
	release
# 69 "data/maps/LilycoveCity/scripts.pory"
	end
# 70 "data/maps/LilycoveCity/scripts.pory"

# 71 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 72 "data/maps/LilycoveCity/scripts.pory"
	lock
# 73 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 74 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 75 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 76 "data/maps/LilycoveCity/scripts.pory"
	release
# 77 "data/maps/LilycoveCity/scripts.pory"
	end
# 78 "data/maps/LilycoveCity/scripts.pory"

# 79 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 80 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 81 "data/maps/LilycoveCity/scripts.pory"
	release
# 82 "data/maps/LilycoveCity/scripts.pory"
	end
# 83 "data/maps/LilycoveCity/scripts.pory"

# 84 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 85 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 86 "data/maps/LilycoveCity/scripts.pory"
	end
# 87 "data/maps/LilycoveCity/scripts.pory"

# 88 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 89 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 90 "data/maps/LilycoveCity/scripts.pory"
	end
# 91 "data/maps/LilycoveCity/scripts.pory"

# 92 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 93 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 94 "data/maps/LilycoveCity/scripts.pory"
	end
# 95 "data/maps/LilycoveCity/scripts.pory"

# 96 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 97 "data/maps/LilycoveCity/scripts.pory"
	lock
# 98 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 99 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 100 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity/scripts.pory"
	release
# 102 "data/maps/LilycoveCity/scripts.pory"
	end
# 103 "data/maps/LilycoveCity/scripts.pory"

# 104 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 105 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 106 "data/maps/LilycoveCity/scripts.pory"
	release
# 107 "data/maps/LilycoveCity/scripts.pory"
	end
# 108 "data/maps/LilycoveCity/scripts.pory"

# 109 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 110 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 111 "data/maps/LilycoveCity/scripts.pory"
	end
# 112 "data/maps/LilycoveCity/scripts.pory"

# 113 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 114 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 115 "data/maps/LilycoveCity/scripts.pory"
	end
# 116 "data/maps/LilycoveCity/scripts.pory"

# 117 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 118 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 119 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 120 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_MAN_1, Common_Movement_FaceOriginalDirection
# 121 "data/maps/LilycoveCity/scripts.pory"
	end
# 122 "data/maps/LilycoveCity/scripts.pory"

# 123 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 124 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 125 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 126 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_WOMAN_1, Common_Movement_FaceOriginalDirection
# 127 "data/maps/LilycoveCity/scripts.pory"
	end
# 128 "data/maps/LilycoveCity/scripts.pory"

# 129 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 130 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 131 "data/maps/LilycoveCity/scripts.pory"
	end
# 132 "data/maps/LilycoveCity/scripts.pory"

# 133 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 135 "data/maps/LilycoveCity/scripts.pory"
	end
# 136 "data/maps/LilycoveCity/scripts.pory"

# 137 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 138 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 139 "data/maps/LilycoveCity/scripts.pory"
	end
# 140 "data/maps/LilycoveCity/scripts.pory"

# 141 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 142 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 143 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 144 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 145 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 146 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 147 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 148 "data/maps/LilycoveCity/scripts.pory"
	end
# 149 "data/maps/LilycoveCity/scripts.pory"

# 150 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 151 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 152 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 153 "data/maps/LilycoveCity/scripts.pory"
	end
# 154 "data/maps/LilycoveCity/scripts.pory"

# 155 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 156 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 157 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 158 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 159 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 160 "data/maps/LilycoveCity/scripts.pory"
	end
# 161 "data/maps/LilycoveCity/scripts.pory"

# 162 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 163 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 164 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 165 "data/maps/LilycoveCity/scripts.pory"
	end
# 166 "data/maps/LilycoveCity/scripts.pory"

# 167 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 168 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 169 "data/maps/LilycoveCity/scripts.pory"
	end
# 170 "data/maps/LilycoveCity/scripts.pory"

# 171 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 172 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 173 "data/maps/LilycoveCity/scripts.pory"
	end
# 174 "data/maps/LilycoveCity/scripts.pory"

# 175 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 176 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 177 "data/maps/LilycoveCity/scripts.pory"
	end
# 178 "data/maps/LilycoveCity/scripts.pory"

# 179 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 180 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 181 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 182 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 183 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 184 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 185 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 186 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 187 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 188 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 189 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 190 "data/maps/LilycoveCity/scripts.pory"
	end
# 191 "data/maps/LilycoveCity/scripts.pory"

# 192 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 193 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 194 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 195 "data/maps/LilycoveCity/scripts.pory"
	end
# 196 "data/maps/LilycoveCity/scripts.pory"

# 197 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 198 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 199 "data/maps/LilycoveCity/scripts.pory"
	end
# 200 "data/maps/LilycoveCity/scripts.pory"

# 201 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 202 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 203 "data/maps/LilycoveCity/scripts.pory"
	end
# 204 "data/maps/LilycoveCity/scripts.pory"

# 205 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 206 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 207 "data/maps/LilycoveCity/scripts.pory"
	end
# 208 "data/maps/LilycoveCity/scripts.pory"

# 209 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 210 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 211 "data/maps/LilycoveCity/scripts.pory"
	end
# 212 "data/maps/LilycoveCity/scripts.pory"

# 213 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 214 "data/maps/LilycoveCity/scripts.pory"
	lock
# 215 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 216 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 217 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 218 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 219 "data/maps/LilycoveCity/scripts.pory"
	end
# 220 "data/maps/LilycoveCity/scripts.pory"

# 221 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 222 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 223 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 224 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 225 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 226 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 227 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 228 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 229 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 230 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 231 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 232 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 233 "data/maps/LilycoveCity/scripts.pory"
	end
# 234 "data/maps/LilycoveCity/scripts.pory"

# 235 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 236 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 237 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 238 "data/maps/LilycoveCity/scripts.pory"
	return
# 239 "data/maps/LilycoveCity/scripts.pory"

# 240 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 241 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 242 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 243 "data/maps/LilycoveCity/scripts.pory"
	return
# 244 "data/maps/LilycoveCity/scripts.pory"

# 245 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 246 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 247 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 248 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 249 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 250 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 251 "data/maps/LilycoveCity/scripts.pory"
	release
# 252 "data/maps/LilycoveCity/scripts.pory"
	end
# 253 "data/maps/LilycoveCity/scripts.pory"

# 254 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 255 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 256 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 257 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 258 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 259 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_CHALLENGING_TRAINER
# 260 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 261 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 262 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 263 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 264 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 265 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 266 "data/maps/LilycoveCity/scripts.pory"
	end
# 267 "data/maps/LilycoveCity/scripts.pory"

# 268 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 269 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 270 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 271 "data/maps/LilycoveCity/scripts.pory"
	return
# 272 "data/maps/LilycoveCity/scripts.pory"

# 273 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 274 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 275 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 276 "data/maps/LilycoveCity/scripts.pory"
	return
# 277 "data/maps/LilycoveCity/scripts.pory"

# 278 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 279 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 280 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 281 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 282 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 283 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 284 "data/maps/LilycoveCity/scripts.pory"
	release
# 285 "data/maps/LilycoveCity/scripts.pory"
	end
# 286 "data/maps/LilycoveCity/scripts.pory"

# 287 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 288 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 289 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 290 "data/maps/LilycoveCity/scripts.pory"
	end
# 291 "data/maps/LilycoveCity/scripts.pory"

# 292 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 293 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 294 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 295 "data/maps/LilycoveCity/scripts.pory"
	end
# 296 "data/maps/LilycoveCity/scripts.pory"

# 297 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 298 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 299 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 300 "data/maps/LilycoveCity/scripts.pory"
	end
# 301 "data/maps/LilycoveCity/scripts.pory"

# 302 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 303 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 304 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 305 "data/maps/LilycoveCity/scripts.pory"
	end
# 306 "data/maps/LilycoveCity/scripts.pory"

# 307 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 308 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 309 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 310 "data/maps/LilycoveCity/scripts.pory"
	end
# 311 "data/maps/LilycoveCity/scripts.pory"

# 312 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 313 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 314 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 315 "data/maps/LilycoveCity/scripts.pory"
	end
# 316 "data/maps/LilycoveCity/scripts.pory"

# 317 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 318 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 319 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 320 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 321 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 322 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_May)
# 323 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 324 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 325 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 326 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 327 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 328 "data/maps/LilycoveCity/scripts.pory"
	end
# 329 "data/maps/LilycoveCity/scripts.pory"

# 330 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 331 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 332 "data/maps/LilycoveCity/scripts.pory"
	return
# 333 "data/maps/LilycoveCity/scripts.pory"

# 334 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 335 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 336 "data/maps/LilycoveCity/scripts.pory"
	return
# 337 "data/maps/LilycoveCity/scripts.pory"

# 338 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 339 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 340 "data/maps/LilycoveCity/scripts.pory"
	return
# 341 "data/maps/LilycoveCity/scripts.pory"

# 342 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 343 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 344 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 345 "data/maps/LilycoveCity/scripts.pory"
	return
# 346 "data/maps/LilycoveCity/scripts.pory"

# 347 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 348 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 349 "data/maps/LilycoveCity/scripts.pory"
	return
# 350 "data/maps/LilycoveCity/scripts.pory"

# 351 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 352 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 353 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 354 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 355 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 356 "data/maps/LilycoveCity/scripts.pory"
	speakername (CommonText_Brendan)
# 357 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 358 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 359 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 360 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 361 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 362 "data/maps/LilycoveCity/scripts.pory"
	end
# 363 "data/maps/LilycoveCity/scripts.pory"

# 364 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 365 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 366 "data/maps/LilycoveCity/scripts.pory"
	return
# 367 "data/maps/LilycoveCity/scripts.pory"

# 368 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 369 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 370 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 371 "data/maps/LilycoveCity/scripts.pory"
	return
# 372 "data/maps/LilycoveCity/scripts.pory"

# 373 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 374 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 375 "data/maps/LilycoveCity/scripts.pory"
	return
# 376 "data/maps/LilycoveCity/scripts.pory"

# 377 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 378 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 379 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 380 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 381 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 382 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 383 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 384 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 385 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 386 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 387 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 388 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 389 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 390 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_CHALLENGING_TRAINER
# 391 "data/maps/LilycoveCity/scripts.pory"
	release
# 392 "data/maps/LilycoveCity/scripts.pory"
	end
# 393 "data/maps/LilycoveCity/scripts.pory"

# 394 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 395 "data/maps/LilycoveCity/scripts.pory"
	lock
# 396 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 397 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 398 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 399 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 400 "data/maps/LilycoveCity/scripts.pory"
	release
# 401 "data/maps/LilycoveCity/scripts.pory"
	end
# 402 "data/maps/LilycoveCity/scripts.pory"

# 403 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 404 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 405 "data/maps/LilycoveCity/scripts.pory"
	return
# 406 "data/maps/LilycoveCity/scripts.pory"

# 407 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 408 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 409 "data/maps/LilycoveCity/scripts.pory"
	return
# 410 "data/maps/LilycoveCity/scripts.pory"

# 411 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 412 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh, hey?\n"
# 413 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 414 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of Dolls and\n"
# 415 "data/maps/LilycoveCity/scripts.pory"
	.string "Posters.\p"
# 416 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 417 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon, and I'm raising them\l"
# 418 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 419 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 420 "data/maps/LilycoveCity/scripts.pory"
	.string "raising Pokémon properly, {PLAYER}{KUN}.\p"
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "me your Pokémon, {PLAYER}{KUN}.$"
# 423 "data/maps/LilycoveCity/scripts.pory"

# 424 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh, why? {PLAYER}{KUN}, haven't you\n"
# 426 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your Pokémon?\p"
# 427 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "Trainer…$"
# 429 "data/maps/LilycoveCity/scripts.pory"

# 430 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "Come on, battle with me, so I can\n"
# 432 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your Pokémon!$"
# 433 "data/maps/LilycoveCity/scripts.pory"

# 434 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "The Pokémon I raised won't be\n"
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your Pokémon, {PLAYER}{KUN}!$"
# 437 "data/maps/LilycoveCity/scripts.pory"

# 438 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 441 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 444 "data/maps/LilycoveCity/scripts.pory"

# 445 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 446 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm thinking of going back to\n"
# 447 "data/maps/LilycoveCity/scripts.pory"
	.string "Littleroot soon.\p"
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of Pokémon,\n"
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "and my Pokédex is coming along, so\l"
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 451 "data/maps/LilycoveCity/scripts.pory"

# 452 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 453 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 454 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the Gym Badges and take\n"
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "the Pokémon League challenge?\p"
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting Badges,\n"
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex. I'll complete it before you!\p"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 460 "data/maps/LilycoveCity/scripts.pory"

# 461 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 462 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 463 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the Pokémon League\n"
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex?\p"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 468 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my Pokédex before you!\p"
# 469 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 470 "data/maps/LilycoveCity/scripts.pory"

# 471 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the Battle Frontier\n"
# 474 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 475 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex?\p"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 478 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my Pokédex before you!\p"
# 479 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 480 "data/maps/LilycoveCity/scripts.pory"

# 481 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh, hey, it's {PLAYER}.\p"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 484 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any Dolls.\p"
# 485 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "raising Pokémon better?$"
# 488 "data/maps/LilycoveCity/scripts.pory"

# 489 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh, what's the matter?\n"
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 492 "data/maps/LilycoveCity/scripts.pory"

# 493 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to battle to see who's\n"
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising Pokémon better?$"
# 496 "data/maps/LilycoveCity/scripts.pory"

# 497 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 498 "data/maps/LilycoveCity/scripts.pory"
	.string "Aww, but you know I'm not\n"
# 499 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 500 "data/maps/LilycoveCity/scripts.pory"

# 501 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 504 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 505 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a Trainer…$"
# 506 "data/maps/LilycoveCity/scripts.pory"

# 507 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 508 "data/maps/LilycoveCity/scripts.pory"
	.string "I…\n"
# 509 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to Littleroot.\p"
# 510 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 511 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex. It's coming together pretty\l"
# 512 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 513 "data/maps/LilycoveCity/scripts.pory"

# 514 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 515 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the Gym Badges and take\n"
# 517 "data/maps/LilycoveCity/scripts.pory"
	.string "the Pokémon League challenge?\p"
# 518 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 520 "data/maps/LilycoveCity/scripts.pory"

# 521 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 522 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 523 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 524 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the Pokémon League challenge?\p"
# 525 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my Pokémon\n"
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 529 "data/maps/LilycoveCity/scripts.pory"

# 530 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 531 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the Battle Frontier\n"
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex?\p"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 537 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the Battle Frontier.\p"
# 538 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my Pokémon a bit more,\n"
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the Battle\n"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "Frontier.\p"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 543 "data/maps/LilycoveCity/scripts.pory"

# 544 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "Hideout today…\p"
# 548 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 550 "data/maps/LilycoveCity/scripts.pory"

# 551 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 552 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a Grunt, so I don't know what\n"
# 553 "data/maps/LilycoveCity/scripts.pory"
	.string "the Boss is thinking…\p"
# 554 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on Team Aqua, I know I'll get\n"
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 558 "data/maps/LilycoveCity/scripts.pory"

# 559 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 564 "data/maps/LilycoveCity/scripts.pory"

# 565 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 567 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua's, it will be a happier\l"
# 568 "data/maps/LilycoveCity/scripts.pory"
	.string "place for Pokémon, too.$"
# 569 "data/maps/LilycoveCity/scripts.pory"

# 570 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "There! Wailmer!\n"
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 573 "data/maps/LilycoveCity/scripts.pory"

# 574 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 575 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 576 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 577 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 578 "data/maps/LilycoveCity/scripts.pory"

# 579 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a Pokémon Contest Hall\n"
# 581 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 582 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised Pokémon will\n"
# 583 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 585 "data/maps/LilycoveCity/scripts.pory"

# 586 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 587 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 588 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 589 "data/maps/LilycoveCity/scripts.pory"

# 590 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my Pokémon some new\n"
# 592 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a Contest.\p"
# 593 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the Move Deleter\n"
# 594 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 595 "data/maps/LilycoveCity/scripts.pory"

# 596 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 597 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from Kanto.\p"
# 598 "data/maps/LilycoveCity/scripts.pory"
	.string "The Hoenn region is beautiful with\n"
# 599 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare Pokémon that live\n"
# 602 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 603 "data/maps/LilycoveCity/scripts.pory"

# 604 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua's been training their\n"
# 606 "data/maps/LilycoveCity/scripts.pory"
	.string "Wailmer in the cove.\p"
# 607 "data/maps/LilycoveCity/scripts.pory"
	.string "We Sailors can't get our boats out\n"
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 609 "data/maps/LilycoveCity/scripts.pory"

# 610 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 612 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted Team Aqua out of\n"
# 613 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 614 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the Wailmer out of the cove,\n"
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 616 "data/maps/LilycoveCity/scripts.pory"

# 617 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 618 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 619 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 620 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my Pokémon!\p"
# 621 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua? Is it Team Aqua?$"
# 623 "data/maps/LilycoveCity/scripts.pory"

# 624 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 625 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing Pokémon…\n"
# 626 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 627 "data/maps/LilycoveCity/scripts.pory"

# 628 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an Art Dealer.\p"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 631 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 632 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the Museum here has\n"
# 633 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 634 "data/maps/LilycoveCity/scripts.pory"

# 635 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 636 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 638 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 640 "data/maps/LilycoveCity/scripts.pory"

# 641 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 643 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 644 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 646 "data/maps/LilycoveCity/scripts.pory"

# 647 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 648 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 649 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 651 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that Team Aqua lot came\l"
# 652 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving Team Aqua”!\p"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 657 "data/maps/LilycoveCity/scripts.pory"

# 658 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 662 "data/maps/LilycoveCity/scripts.pory"
	.string "That Team Aqua lot, they must\n"
# 663 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 664 "data/maps/LilycoveCity/scripts.pory"

# 665 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City\p"
# 667 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 668 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 669 "data/maps/LilycoveCity/scripts.pory"

# 670 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Contest Hall\n"
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for Trainers!”$"
# 673 "data/maps/LilycoveCity/scripts.pory"

# 674 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 675 "data/maps/LilycoveCity/scripts.pory"
	.string "Cove Lily Motel\p"
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as Cove Lily of\n"
# 677 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove.”$"
# 678 "data/maps/LilycoveCity/scripts.pory"

# 679 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Museum\p"
# 681 "data/maps/LilycoveCity/scripts.pory"
	.string "“Pokémon Masterpiece Collection\n"
# 682 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 683 "data/maps/LilycoveCity/scripts.pory"

# 684 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 685 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Museum\p"
# 686 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s Pokémon Collection\n"
# 687 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 688 "data/maps/LilycoveCity/scripts.pory"

# 689 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 690 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City Harbor\p"
# 691 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. Tidal is under\n"
# 692 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in Slateport City.\p"
# 693 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 694 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 695 "data/maps/LilycoveCity/scripts.pory"

# 696 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 697 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City Harbor\p"
# 698 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 699 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. Tidal.”$"
# 700 "data/maps/LilycoveCity/scripts.pory"

# 701 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 702 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Trainer Fan Club\p"
# 703 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of Trainers are scribbled\n"
# 704 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 705 "data/maps/LilycoveCity/scripts.pory"

# 706 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 707 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Department Store\p"
# 708 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 709 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 710 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 711 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 712 "data/maps/LilycoveCity/scripts.pory"

# 713 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "Move Deleter's House\p"
# 715 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted Pokémon moves deleted.”$"
# 716 "data/maps/LilycoveCity/scripts.pory"

# 717 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 719 "data/maps/LilycoveCity/scripts.pory"
	.string "Berry Blender?$"
# 720 "data/maps/LilycoveCity/scripts.pory"

# 721 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 722 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 724 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 725 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}s you can get, I've heard.$"
# 726 "data/maps/LilycoveCity/scripts.pory"

# 727 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 728 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 729 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 730 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a Pokémon,\n"
# 731 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 732 "data/maps/LilycoveCity/scripts.pory"

# 733 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 736 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the Sky Pillar, I hear.$"
# 737 "data/maps/LilycoveCity/scripts.pory"

# 738 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 739 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 740 "data/maps/LilycoveCity/scripts.pory"
	.string "around Route 131.\p"
# 741 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 742 "data/maps/LilycoveCity/scripts.pory"

# 743 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 744 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 745 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 746 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a Dragon-type\n"
# 747 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon flying way up in the sky.\p"
# 748 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool Pokémon like that live in\n"
# 749 "data/maps/LilycoveCity/scripts.pory"
	.string "the Hoenn region?$"
# 750 "data/maps/LilycoveCity/scripts.pory"

# 751 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 753 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare Pokémon as we can.\p"
# 754 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 755 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon as soon as we arrived.\p"
# 756 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"

LilycoveCity_MapScripts::
# 762 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 763 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 764 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LilycoveCity_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

LilycoveCity_MapScripts_MAP_SCRIPT_ON_RESUME:
# 765 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, LilycoveCity_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

LilycoveCity_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 766 "data/maps/LilycoveCity/scripts.pory"
	removeobject 23
	return


LilycoveCity_OnTransition::
# 772 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 773 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 774 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_CAUGHT_VICTINI, LilycoveCity_OnTransition_2
# 774 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_VICTINI_READY, LilycoveCity_OnTransition_2
LilycoveCity_OnTransition_1:
# 777 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 778 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, LilycoveCity_OnTransition_7
LilycoveCity_OnTransition_6:
# 781 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

LilycoveCity_OnTransition_2:
# 775 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_TEMP_2
	goto LilycoveCity_OnTransition_1

LilycoveCity_OnTransition_7:
# 779 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto LilycoveCity_OnTransition_6


LilycoveCity_OnLoad::
# 785 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_OnLoad_1
	return

LilycoveCity_OnLoad_1:
# 786 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_SetWailmerMetatiles
	return


BattleVictini::
# 791 "data/maps/LilycoveCity/scripts.pory"
	lock
# 792 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 793 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_LAST_TALKED, 23
# 794 "data/maps/LilycoveCity/scripts.pory"
	playmoncry SPECIES_VICTINI, CRY_MODE_ENCOUNTER
# 795 "data/maps/LilycoveCity/scripts.pory"
	msgbox BattleVictini_Text_0
# 796 "data/maps/LilycoveCity/scripts.pory"
	waitmoncry
# 797 "data/maps/LilycoveCity/scripts.pory"
	seteventmon SPECIES_VICTINI, 50
# 798 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 799 "data/maps/LilycoveCity/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 800 "data/maps/LilycoveCity/scripts.pory"
	waitstate
# 801 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 802 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 803 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BattleVictini_2
BattleVictini_1:
# 806 "data/maps/LilycoveCity/scripts.pory"
	release
	return

BattleVictini_2:
# 804 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_CAUGHT_VICTINI
	goto BattleVictini_1


BattleVictini_Text_0:
# 795 "data/maps/LilycoveCity/scripts.pory"
	.string "Ta-ta-ta-tah!$"
