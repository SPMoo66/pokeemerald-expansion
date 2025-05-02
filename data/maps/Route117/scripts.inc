# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
# 3 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_0, 25
# 4 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_1, 26
# 5 "data/maps/Route117/scripts.pory"

# 6 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 7 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 8 "data/maps/Route117/scripts.pory"
	.byte 0
# 9 "data/maps/Route117/scripts.pory"

# 10 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 11 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 12 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_3
# 13 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_EMERALBODY_RIVAL_STATE, 6, EventScript_Clear_FlagTemp3
# 14 "data/maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 15 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 16 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 17 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 18 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1
# 20 "data/maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 21 "data/maps/Route117/scripts.pory"
	end
# 22 "data/maps/Route117/scripts.pory"

# 23 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 24 "data/maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 25 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 26 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 27 "data/maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 28 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 29 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 30 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 31 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 32 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 33 "data/maps/Route117/scripts.pory"
	end
# 34 "data/maps/Route117/scripts.pory"

# 35 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 36 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 37 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 38 "data/maps/Route117/scripts.pory"
	return
# 39 "data/maps/Route117/scripts.pory"

# 40 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 41 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 42 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 43 "data/maps/Route117/scripts.pory"
	return
# 44 "data/maps/Route117/scripts.pory"

# 45 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 46 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 47 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 48 "data/maps/Route117/scripts.pory"
	return
# 49 "data/maps/Route117/scripts.pory"

# 50 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 51 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 52 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 53 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 54 "data/maps/Route117/scripts.pory"
	return
# 55 "data/maps/Route117/scripts.pory"

# 56 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 57 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 58 "data/maps/Route117/scripts.pory"
	end
# 59 "data/maps/Route117/scripts.pory"

# 60 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 61 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 62 "data/maps/Route117/scripts.pory"
	end
# 63 "data/maps/Route117/scripts.pory"

# 64 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 65 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 66 "data/maps/Route117/scripts.pory"
	end
# 67 "data/maps/Route117/scripts.pory"

# 68 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 69 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 70 "data/maps/Route117/scripts.pory"
	end
# 71 "data/maps/Route117/scripts.pory"

# 72 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 73 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 74 "data/maps/Route117/scripts.pory"
	end
# 75 "data/maps/Route117/scripts.pory"

# 76 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 77 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 78 "data/maps/Route117/scripts.pory"
	end
# 79 "data/maps/Route117/scripts.pory"

# 80 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 81 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 82 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 83 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
# 84 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 85 "data/maps/Route117/scripts.pory"
	release
# 86 "data/maps/Route117/scripts.pory"
	end
# 87 "data/maps/Route117/scripts.pory"

# 88 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 89 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 90 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 92 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 93 "data/maps/Route117/scripts.pory"
	release
# 94 "data/maps/Route117/scripts.pory"
	end
# 95 "data/maps/Route117/scripts.pory"

# 96 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 97 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 98 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route117/scripts.pory"
	end
# 100 "data/maps/Route117/scripts.pory"

# 101 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 102 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 103 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 104 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 105 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 106 "data/maps/Route117/scripts.pory"
	release
# 107 "data/maps/Route117/scripts.pory"
	end
# 108 "data/maps/Route117/scripts.pory"

# 109 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 110 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 111 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 113 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 114 "data/maps/Route117/scripts.pory"
	release
# 115 "data/maps/Route117/scripts.pory"
	end
# 116 "data/maps/Route117/scripts.pory"

# 117 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 118 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 119 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route117/scripts.pory"
	end
# 121 "data/maps/Route117/scripts.pory"

# 122 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 123 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 124 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 125 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 126 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 127 "data/maps/Route117/scripts.pory"
	release
# 128 "data/maps/Route117/scripts.pory"
	end
# 129 "data/maps/Route117/scripts.pory"

# 130 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 131 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 132 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 134 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 135 "data/maps/Route117/scripts.pory"
	release
# 136 "data/maps/Route117/scripts.pory"
	end
# 137 "data/maps/Route117/scripts.pory"

# 138 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 139 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 140 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route117/scripts.pory"
	end
# 142 "data/maps/Route117/scripts.pory"

# 143 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 144 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 145 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 146 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 147 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 148 "data/maps/Route117/scripts.pory"
	release
# 149 "data/maps/Route117/scripts.pory"
	end
# 150 "data/maps/Route117/scripts.pory"

# 151 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 152 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 153 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 155 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 156 "data/maps/Route117/scripts.pory"
	release
# 157 "data/maps/Route117/scripts.pory"
	end
# 158 "data/maps/Route117/scripts.pory"

# 159 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 160 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 161 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 162 "data/maps/Route117/scripts.pory"
	end
# 163 "data/maps/Route117/scripts.pory"

# 164 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 165 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 166 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route117/scripts.pory"
	end
# 168 "data/maps/Route117/scripts.pory"

# 169 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 170 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 171 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 172 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 173 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 174 "data/maps/Route117/scripts.pory"
	release
# 175 "data/maps/Route117/scripts.pory"
	end
# 176 "data/maps/Route117/scripts.pory"

# 177 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 178 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 179 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 180 "data/maps/Route117/scripts.pory"
	release
# 181 "data/maps/Route117/scripts.pory"
	end
# 182 "data/maps/Route117/scripts.pory"

# 183 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 184 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 185 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 186 "data/maps/Route117/scripts.pory"
	end
# 187 "data/maps/Route117/scripts.pory"

# 188 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 189 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 190 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 191 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 192 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 193 "data/maps/Route117/scripts.pory"
	release
# 194 "data/maps/Route117/scripts.pory"
	end
# 195 "data/maps/Route117/scripts.pory"

# 196 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 197 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 198 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 199 "data/maps/Route117/scripts.pory"
	release
# 200 "data/maps/Route117/scripts.pory"
	end
# 201 "data/maps/Route117/scripts.pory"

# 202 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 203 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 204 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route117/scripts.pory"
	end
# 206 "data/maps/Route117/scripts.pory"

# 207 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 208 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 209 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route117/scripts.pory"
	end
# 211 "data/maps/Route117/scripts.pory"

# 212 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 213 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 214 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/Route117/scripts.pory"
	end
# 216 "data/maps/Route117/scripts.pory"

# 217 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 218 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 219 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route117/scripts.pory"
	end
# 221 "data/maps/Route117/scripts.pory"

# 222 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 223 "data/maps/Route117/scripts.pory"
	.string "I left my Pokémon at the Day Care.\p"
# 224 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 225 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 226 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 227 "data/maps/Route117/scripts.pory"

# 228 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 229 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 230 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 231 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 232 "data/maps/Route117/scripts.pory"

# 233 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 234 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 235 "data/maps/Route117/scripts.pory"

# 236 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 237 "data/maps/Route117/scripts.pory"
	.string "Route 117\n"
# 238 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} Verdanturf Town$"
# 239 "data/maps/Route117/scripts.pory"

# 240 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 241 "data/maps/Route117/scripts.pory"
	.string "Route 117\n"
# 242 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} Mauville City$"
# 243 "data/maps/Route117/scripts.pory"

# 244 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 245 "data/maps/Route117/scripts.pory"
	.string "Pokémon Day Care\n"
# 246 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your Pokémon.”$"
