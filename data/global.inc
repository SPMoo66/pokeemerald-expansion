EventScript_Clear_FlagTemp1::
# 2 "data/global.pory"
	clearflag FLAG_TEMP_1
	return


EventScript_Clear_FlagTemp2::
# 7 "data/global.pory"
	clearflag FLAG_TEMP_2
	return


EventScript_Clear_FlagTemp3::
# 12 "data/global.pory"
	clearflag FLAG_TEMP_3
	return


EventScript_Clear_FlagTemp4::
# 17 "data/global.pory"
	clearflag FLAG_TEMP_4
	return


EventScript_HideMapNamePopup::
# 22 "data/global.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


EventScript_DoNotDoor::
# 27 "data/global.pory"
	setflag FLAG_SYS_DO_NOT_DOOR
	return


EventScript_SpawnInvisible::
# 32 "data/global.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
	return


GetPlayerGfxNormal::
# 37 "data/global.pory"
	checkplayergender
# 38 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq GetPlayerGfxNormal_1
# 42 "data/global.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_MAY_NORMAL
	return

GetPlayerGfxNormal_1:
# 39 "data/global.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_BRENDAN_NORMAL
	return


Mart_EventScript_Clerk::
# 47 "data/global.pory"
	lock
# 48 "data/global.pory"
	faceplayer
# 49 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 50 "data/global.pory"
	waitmessage
# 51 "data/global.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Mart_EventScript_Clerk_2
# 55 "data/global.pory"
	special GetNumberOfBadges
# 56 "data/global.pory"
	switch VAR_RESULT
# 57 "data/global.pory"
	case 0, Mart_EventScript_Clerk_6
# 59 "data/global.pory"
	case 1, Mart_EventScript_Clerk_7
# 61 "data/global.pory"
	case 2, Mart_EventScript_Clerk_8
# 63 "data/global.pory"
	case 3, Mart_EventScript_Clerk_9
# 65 "data/global.pory"
	case 4, Mart_EventScript_Clerk_10
# 67 "data/global.pory"
	case 5, Mart_EventScript_Clerk_11
# 69 "data/global.pory"
	case 6, Mart_EventScript_Clerk_12
# 71 "data/global.pory"
	case 7, Mart_EventScript_Clerk_13
# 72 "data/global.pory"
	case 8, Mart_EventScript_Clerk_13
Mart_EventScript_Clerk_1:
# 78 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 79 "data/global.pory"
	release
	return

Mart_EventScript_Clerk_2:
# 52 "data/global.pory"
	pokemart BadgedPokemartClear
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 58 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 60 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 62 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 64 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 66 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 68 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_12:
# 70 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_13:
# 73 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 82 "data/global.pory"
BadgedPokemart0:
# 83 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 84 "data/global.pory"
	.2byte ITEM_POTION
# 85 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 86 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 87 "data/global.pory"
	.2byte ITEM_AWAKENING
# 88 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 89 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 90 "data/global.pory"
	.2byte ITEM_REPEL
# 91 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 94 "data/global.pory"
BadgedPokemart1:
# 95 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 96 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 97 "data/global.pory"
	.2byte ITEM_POTION
# 98 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 99 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 100 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 101 "data/global.pory"
	.2byte ITEM_AWAKENING
# 102 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 103 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 104 "data/global.pory"
	.2byte ITEM_REPEL
# 105 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 108 "data/global.pory"
BadgedPokemart2:
# 109 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 110 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 111 "data/global.pory"
	.2byte ITEM_POTION
# 112 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 113 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 114 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 115 "data/global.pory"
	.2byte ITEM_AWAKENING
# 116 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 117 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 118 "data/global.pory"
	.2byte ITEM_REPEL
# 119 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 120 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 121 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 122 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 125 "data/global.pory"
BadgedPokemart3:
# 126 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 127 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 128 "data/global.pory"
	.2byte ITEM_POTION
# 129 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 130 "data/global.pory"
	.2byte ITEM_REVIVE
# 131 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 132 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 133 "data/global.pory"
	.2byte ITEM_AWAKENING
# 134 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 135 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 136 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 137 "data/global.pory"
	.2byte ITEM_REPEL
# 138 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 139 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 140 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 141 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 142 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 145 "data/global.pory"
BadgedPokemart4:
# 146 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 147 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 148 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 149 "data/global.pory"
	.2byte ITEM_POTION
# 150 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 151 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 152 "data/global.pory"
	.2byte ITEM_REVIVE
# 153 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 154 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 155 "data/global.pory"
	.2byte ITEM_AWAKENING
# 156 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 157 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 158 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 159 "data/global.pory"
	.2byte ITEM_REPEL
# 160 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 161 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 162 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 163 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 164 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 167 "data/global.pory"
BadgedPokemart5:
# 168 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 169 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 170 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 171 "data/global.pory"
	.2byte ITEM_POTION
# 172 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 173 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 174 "data/global.pory"
	.2byte ITEM_REVIVE
# 175 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 176 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 177 "data/global.pory"
	.2byte ITEM_AWAKENING
# 178 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 179 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 180 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 181 "data/global.pory"
	.2byte ITEM_REPEL
# 182 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 183 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 184 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 185 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 186 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 187 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 190 "data/global.pory"
BadgedPokemart6:
# 191 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 192 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 193 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 194 "data/global.pory"
	.2byte ITEM_POTION
# 195 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 196 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 197 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 198 "data/global.pory"
	.2byte ITEM_REVIVE
# 199 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 200 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 201 "data/global.pory"
	.2byte ITEM_AWAKENING
# 202 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 203 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 204 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 205 "data/global.pory"
	.2byte ITEM_REPEL
# 206 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 207 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 208 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 209 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 210 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 211 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 214 "data/global.pory"
BadgedPokemart7:
# 215 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 216 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 217 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 218 "data/global.pory"
	.2byte ITEM_POTION
# 219 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 220 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 221 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 222 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 223 "data/global.pory"
	.2byte ITEM_REVIVE
# 224 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 225 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 226 "data/global.pory"
	.2byte ITEM_AWAKENING
# 227 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 228 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 229 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 230 "data/global.pory"
	.2byte ITEM_REPEL
# 231 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 232 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 233 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 234 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 235 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 236 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 237 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

	.align 2
# 240 "data/global.pory"
BadgedPokemartClear:
# 241 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 242 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 243 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 244 "data/global.pory"
	.2byte ITEM_POTION
# 245 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 246 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 247 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 248 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 249 "data/global.pory"
	.2byte ITEM_REVIVE
# 250 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 251 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 252 "data/global.pory"
	.2byte ITEM_AWAKENING
# 253 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 254 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 255 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 256 "data/global.pory"
	.2byte ITEM_REPEL
# 257 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 258 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 259 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 260 "data/global.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
# 261 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 262 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 263 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 264 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
# 265 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 270 "data/global.pory"
	lock
# 271 "data/global.pory"
	faceplayer
# 272 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 278 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 279 "data/global.pory"
	waitmessage
# 280 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 281 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 284 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 287 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 290 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 293 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 296 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 299 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 302 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 303 "data/global.pory"
	switch VAR_RESULT
# 304 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 306 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 308 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 310 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 312 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 314 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 316 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 318 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 323 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 325 "data/global.pory"
	release
	return

Mart_EventScript_TMClerk_2:
# 274 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 282 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 285 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 288 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 291 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 294 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 297 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 300 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 305 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 307 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 309 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 311 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 313 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 315 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 317 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 319 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 328 "data/global.pory"
TMMart1:
# 329 "data/global.pory"
	.2byte ITEM_TM33
# 330 "data/global.pory"
	.2byte ITEM_TM47
# 331 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 334 "data/global.pory"
TMMart2:
# 335 "data/global.pory"
	.2byte ITEM_TM21
# 336 "data/global.pory"
	.2byte ITEM_TM26
# 337 "data/global.pory"
	.2byte ITEM_TM29
# 338 "data/global.pory"
	.2byte ITEM_TM31
# 339 "data/global.pory"
	.2byte ITEM_TM37
# 340 "data/global.pory"
	.2byte ITEM_TM81
# 341 "data/global.pory"
	.2byte ITEM_TM109
# 342 "data/global.pory"
	.2byte ITEM_TM110
# 343 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 346 "data/global.pory"
TMMart3:
# 347 "data/global.pory"
	.2byte ITEM_TM01
# 348 "data/global.pory"
	.2byte ITEM_TM02
# 349 "data/global.pory"
	.2byte ITEM_TM03
# 350 "data/global.pory"
	.2byte ITEM_TM04
# 351 "data/global.pory"
	.2byte ITEM_TM19
# 352 "data/global.pory"
	.2byte ITEM_TM20
# 353 "data/global.pory"
	.2byte ITEM_TM30
# 354 "data/global.pory"
	.2byte ITEM_TM39
# 355 "data/global.pory"
	.2byte ITEM_TM44
# 356 "data/global.pory"
	.2byte ITEM_TM48
# 357 "data/global.pory"
	.2byte ITEM_TM64
# 358 "data/global.pory"
	.2byte ITEM_TM68
# 359 "data/global.pory"
	.2byte ITEM_TM76
# 360 "data/global.pory"
	.2byte ITEM_TM94
# 361 "data/global.pory"
	.2byte ITEM_TM103
# 362 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 365 "data/global.pory"
TMMart4:
# 366 "data/global.pory"
	.2byte ITEM_TM10
# 367 "data/global.pory"
	.2byte ITEM_TM15
# 368 "data/global.pory"
	.2byte ITEM_TM16
# 369 "data/global.pory"
	.2byte ITEM_TM17
# 370 "data/global.pory"
	.2byte ITEM_TM18
# 371 "data/global.pory"
	.2byte ITEM_TM25
# 372 "data/global.pory"
	.2byte ITEM_TM32
# 373 "data/global.pory"
	.2byte ITEM_TM65
# 374 "data/global.pory"
	.2byte ITEM_TM73
# 375 "data/global.pory"
	.2byte ITEM_TM75
# 376 "data/global.pory"
	.2byte ITEM_TM82
# 377 "data/global.pory"
	.2byte ITEM_TM87
# 378 "data/global.pory"
	.2byte ITEM_TM101
# 379 "data/global.pory"
	.2byte ITEM_TM104
# 380 "data/global.pory"
	.2byte ITEM_TM108
# 381 "data/global.pory"
	.2byte ITEM_TM114
# 382 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 385 "data/global.pory"
TMMart5:
# 386 "data/global.pory"
	.2byte ITEM_TM05
# 387 "data/global.pory"
	.2byte ITEM_TM06
# 388 "data/global.pory"
	.2byte ITEM_TM07
# 389 "data/global.pory"
	.2byte ITEM_TM08
# 390 "data/global.pory"
	.2byte ITEM_TM11
# 391 "data/global.pory"
	.2byte ITEM_TM12
# 392 "data/global.pory"
	.2byte ITEM_TM13
# 393 "data/global.pory"
	.2byte ITEM_TM24
# 394 "data/global.pory"
	.2byte ITEM_TM28
# 395 "data/global.pory"
	.2byte ITEM_TM45
# 396 "data/global.pory"
	.2byte ITEM_TM50
# 397 "data/global.pory"
	.2byte ITEM_TM54
# 398 "data/global.pory"
	.2byte ITEM_TM60
# 399 "data/global.pory"
	.2byte ITEM_TM61
# 400 "data/global.pory"
	.2byte ITEM_TM66
# 401 "data/global.pory"
	.2byte ITEM_TM71
# 402 "data/global.pory"
	.2byte ITEM_TM78
# 403 "data/global.pory"
	.2byte ITEM_TM83
# 404 "data/global.pory"
	.2byte ITEM_TM85
# 405 "data/global.pory"
	.2byte ITEM_TM86
# 406 "data/global.pory"
	.2byte ITEM_TM88
# 407 "data/global.pory"
	.2byte ITEM_TM99
# 408 "data/global.pory"
	.2byte ITEM_TM111
# 409 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 412 "data/global.pory"
TMMart6:
# 413 "data/global.pory"
	.2byte ITEM_TM09
# 414 "data/global.pory"
	.2byte ITEM_TM22
# 415 "data/global.pory"
	.2byte ITEM_TM23
# 416 "data/global.pory"
	.2byte ITEM_TM41
# 417 "data/global.pory"
	.2byte ITEM_TM49
# 418 "data/global.pory"
	.2byte ITEM_TM51
# 419 "data/global.pory"
	.2byte ITEM_TM52
# 420 "data/global.pory"
	.2byte ITEM_TM56
# 421 "data/global.pory"
	.2byte ITEM_TM57
# 422 "data/global.pory"
	.2byte ITEM_TM59
# 423 "data/global.pory"
	.2byte ITEM_TM62
# 424 "data/global.pory"
	.2byte ITEM_TM67
# 425 "data/global.pory"
	.2byte ITEM_TM69
# 426 "data/global.pory"
	.2byte ITEM_TM74
# 427 "data/global.pory"
	.2byte ITEM_TM79
# 428 "data/global.pory"
	.2byte ITEM_TM89
# 429 "data/global.pory"
	.2byte ITEM_TM90
# 430 "data/global.pory"
	.2byte ITEM_TM91
# 431 "data/global.pory"
	.2byte ITEM_TM92
# 432 "data/global.pory"
	.2byte ITEM_TM97
# 433 "data/global.pory"
	.2byte ITEM_TM98
# 434 "data/global.pory"
	.2byte ITEM_TM100
# 435 "data/global.pory"
	.2byte ITEM_TM102
# 436 "data/global.pory"
	.2byte ITEM_TM105
# 437 "data/global.pory"
	.2byte ITEM_TM106
# 438 "data/global.pory"
	.2byte ITEM_TM113
# 439 "data/global.pory"
	.2byte ITEM_TM117
# 440 "data/global.pory"
	.2byte ITEM_TM118
# 441 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 444 "data/global.pory"
TMMart7:
# 445 "data/global.pory"
	.2byte ITEM_TM36
# 446 "data/global.pory"
	.2byte ITEM_TM38
# 447 "data/global.pory"
	.2byte ITEM_TM42
# 448 "data/global.pory"
	.2byte ITEM_TM53
# 449 "data/global.pory"
	.2byte ITEM_TM58
# 450 "data/global.pory"
	.2byte ITEM_TM63
# 451 "data/global.pory"
	.2byte ITEM_TM70
# 452 "data/global.pory"
	.2byte ITEM_TM72
# 453 "data/global.pory"
	.2byte ITEM_TM77
# 454 "data/global.pory"
	.2byte ITEM_TM84
# 455 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 458 "data/global.pory"
TMMart8:
# 459 "data/global.pory"
	.2byte ITEM_TM43
# 460 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 465 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 466 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 468 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 470 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 472 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 475 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 467 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 469 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 471 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 473 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 479 "data/global.pory"

# 480 "data/global.pory"
Common_EventScript_GymNurse::
# 481 "data/global.pory"
	lock
# 482 "data/global.pory"
	faceplayer
# 483 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 484 "data/global.pory"
	closemessage
# 485 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 486 "data/global.pory"
	releaseall
# 487 "data/global.pory"
	end
# 488 "data/global.pory"

# 489 "data/global.pory"
gText_GymNurseHeal::
# 490 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 494 "data/global.pory"
	lock
# 495 "data/global.pory"
	faceplayer
# 496 "data/global.pory"
	special GetNumberOfBadges
# 497 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 498 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 502 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 503 "data/global.pory"
	waitmessage
# 504 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 505 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 506 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 509 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 510 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 527 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 545 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 562 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 564 "data/global.pory"
	release
	return

Mart_EventScript_EvoClerk_2:
# 499 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 507 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 511 "data/global.pory"
	switch VAR_TEMP_0
# 512 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 513 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 514 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 515 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 516 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 518 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 519 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 520 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 521 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 528 "data/global.pory"
	switch VAR_TEMP_0
# 529 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 530 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 531 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 532 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 534 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 536 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 537 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 538 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 539 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 546 "data/global.pory"
	switch VAR_TEMP_0
# 547 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 548 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 549 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 550 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 551 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 552 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 553 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 555 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 556 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 517 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 522 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 533 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 535 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 540 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 554 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 557 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 567 "data/global.pory"
EvoStonesPokemart3:
# 568 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 569 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 570 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 571 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 572 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 573 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 574 "data/global.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 577 "data/global.pory"
EvoStonesPokemart5:
# 578 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 579 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 580 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 581 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 582 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 583 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 584 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 585 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 586 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 587 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 590 "data/global.pory"
EvoOtherPokemart3:
# 591 "data/global.pory"
	.2byte ITEM_SACHET
# 592 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 595 "data/global.pory"
EvoOtherPokemart4:
# 596 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 597 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 598 "data/global.pory"
	.2byte ITEM_SACHET
# 599 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 600 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 601 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 602 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 603 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 606 "data/global.pory"
EvoOtherPokemart5:
# 607 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 608 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 609 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 610 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 611 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 612 "data/global.pory"
	.2byte ITEM_UPGRADE
# 613 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 614 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 615 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 616 "data/global.pory"
	.2byte ITEM_SACHET
# 617 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 618 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 619 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 620 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 621 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 622 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 623 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 624 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 625 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 628 "data/global.pory"
EvoExtraPokemart6:
# 629 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 630 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 631 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 632 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 633 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 634 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 635 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 638 "data/global.pory"
EvoExtraPokemart7:
# 639 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 640 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 641 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 642 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 643 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 644 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 645 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 646 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 647 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 651 "data/global.pory"
	lock
# 652 "data/global.pory"
	faceplayer
# 653 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 656 "data/global.pory"
	setflag FLAG_TEMP_1
# 657 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 658 "data/global.pory"
	setvar VAR_RESULT, 2
# 659 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 660 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 663 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 664 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 665 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 669 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 673 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 674 "data/global.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 675 "data/global.pory"
	waitstate
# 676 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 681 "data/global.pory"
	special IsSelectedMonEgg
# 682 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_20
Common_EventScript_MoveReminder_19:
# 685 "data/global.pory"
	special HasMovesToRelearn
# 686 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_MoveReminder_22
# 690 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 691 "data/global.pory"
	special TeachMoveRelearnerMove
# 692 "data/global.pory"
	waitstate
# 693 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 699 "data/global.pory"
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
# 700 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 654 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 661 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 666 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 670 "data/global.pory"
	setmoverelearnerstate MOVE_RELEARNER_EGG_MOVES
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 677 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_20:
# 683 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_19

Common_EventScript_MoveReminder_22:
# 687 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 704 "data/global.pory"
	lock
# 705 "data/global.pory"
	faceplayer
# 706 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 710 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 711 "data/global.pory"
	waitmessage
# 712 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 713 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 714 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 715 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 716 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 717 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 718 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 719 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 720 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 721 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 722 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 723 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 724 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 725 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 726 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 727 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 728 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 729 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 730 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 731 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 732 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 733 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 734 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 735 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 736 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BLUNDER_POLICY
# 737 "data/global.pory"
	special GetNumberOfBadges
# 738 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 743 "data/global.pory"
	special ShowBottleCapsWindow
# 744 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 745 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 766 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 767 "data/global.pory"
	special CloseBattlePointsWindow
# 768 "data/global.pory"
	release
	return

EventScript_CapCollector_2:
# 707 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 708 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 739 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_BOOSTER_ENERGY
# 740 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_MIRROR_HERB
# 741 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_27, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 746 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 747 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 748 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 754 "data/global.pory"
	checkitemspace VAR_0x8009
# 755 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 761 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 762 "data/global.pory"
	additem VAR_0x8009
# 763 "data/global.pory"
	special UpdateBottleCapsWindow
# 764 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 749 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 750 "data/global.pory"
	special CloseBattlePointsWindow
# 751 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 756 "data/global.pory"
	msgbox EventScript_CapCollector_Text_29
# 757 "data/global.pory"
	special CloseBattlePointsWindow
# 758 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 781 "data/global.pory"
	lock
# 782 "data/global.pory"
	faceplayer
# 783 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 784 "data/global.pory"
	waitmessage
# 785 "data/global.pory"
	pokemart AbilityNaturePokemart
# 786 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 787 "data/global.pory"
	release
	return


	.align 2
# 790 "data/global.pory"
AbilityNaturePokemart:
# 791 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 792 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 793 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 794 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 795 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
# 796 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 797 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 798 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 799 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 800 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 801 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 802 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 803 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 804 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 805 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 806 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 807 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 808 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 809 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 810 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 811 "data/global.pory"
	.2byte ITEM_JOLLY_MINT
# 812 "data/global.pory"
	.2byte ITEM_NAIVE_MINT
# 813 "data/global.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 817 "data/global.pory"
	lock
# 818 "data/global.pory"
	faceplayer
# 819 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 820 "data/global.pory"
	waitmessage
# 821 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 822 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 823 "data/global.pory"
	release
	return


	.align 2
# 826 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 827 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 828 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 829 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 830 "data/global.pory"
	.2byte ITEM_MAGNET
# 831 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 832 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 833 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 834 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 835 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 836 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 837 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 838 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 839 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 840 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 841 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 842 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 843 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 844 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 1001 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 1002 "data/global.pory"
	case 1, GetRivalForNameBox_2
# 1004 "data/global.pory"
	case 2, GetRivalForNameBox_3
# 1006 "data/global.pory"
	case 3, GetRivalForNameBox_4
# 1008 "data/global.pory"
	case 4, GetRivalForNameBox_5
# 1011 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 1003 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_3:
# 1005 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_4:
# 1007 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_5:
# 1009 "data/global.pory"
	speakername CommonText_Sakura
	return


GetRivalMusic::
# 1016 "data/global.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 1017 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 1018 "data/global.pory"
	case 1, GetRivalMusic_2
# 1020 "data/global.pory"
	case 2, GetRivalMusic_3
# 1022 "data/global.pory"
	case 3, GetRivalMusic_4
# 1024 "data/global.pory"
	case 4, GetRivalMusic_5
# 1027 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_RIVAL
	return

GetRivalMusic_2:
# 1019 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_TRAINER
	return

GetRivalMusic_3:
# 1021 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_ELITE_FOUR
	return

GetRivalMusic_4:
# 1023 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_WILD_KANTO
	return

GetRivalMusic_5:
# 1025 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_PL_VS_FRONTIER_BRAIN
	return


Emote_Test::
# 1276 "data/global.pory"
	lock
# 1277 "data/global.pory"
	applymovement 11, Common_Movement_MusicNote
# 1278 "data/global.pory"
	delay 70
# 1279 "data/global.pory"
	applymovement 11, Common_Movement_Smile
# 1280 "data/global.pory"
	delay 70
# 1281 "data/global.pory"
	applymovement 11, Common_Movement_SweatDrop
# 1282 "data/global.pory"
	delay 70
# 1283 "data/global.pory"
	applymovement 11, Common_Movement_Talking
# 1284 "data/global.pory"
	delay 70
# 1285 "data/global.pory"
	applymovement 11, Common_Movement_Thinking
# 1286 "data/global.pory"
	delay 70
# 1287 "data/global.pory"
	release
	return


IncreasePokevialSize::
# 1291 "data/global.pory"
	speakername NULL
# 1292 "data/global.pory"
	pokevialincreasesize
# 1293 "data/global.pory"
	message Text_PokevialSizeIncrease
# 1294 "data/global.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1295 "data/global.pory"
	waitmessage
# 1296 "data/global.pory"
	delay 60
	return


BufferNumberSring0::
# 1305 "data/global.pory"
	buffernumberstring 0, VAR_TEMP_0
# 1306 "data/global.pory"
	msgbox BufferNumberSring0_Text_0
# 1307 "data/global.pory"
	closemessage
	return


PlayersHouse_2F_EventScript_Notebook::
# 1311 "data/global.pory"
	msgbox PlayersHouse_2F_EventScript_Notebook_Text_0
# 1313 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_1, 0
# 1314 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_2, 1
# 1315 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_3, 2
# 1316 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_4, 3
# 1317 "data/global.pory"
	goto_if_set FLAG_TERA_ENABLED, PlayersHouse_2F_EventScript_Notebook_2
PlayersHouse_2F_EventScript_Notebook_1:
# 1320 "data/global.pory"
	goto_if_set FLAG_ITEM_REALMS_FRAY_MEGA_RING, PlayersHouse_2F_EventScript_Notebook_5
PlayersHouse_2F_EventScript_Notebook_4:
# 1323 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 1324 "data/global.pory"
	closemessage
# 1325 "data/global.pory"
	switch VAR_RESULT
# 1326 "data/global.pory"
	case 0, PlayersHouse_2F_EventScript_Notebook_8
# 1328 "data/global.pory"
	case 1, PlayersHouse_2F_EventScript_Notebook_9
# 1330 "data/global.pory"
	case 2, PlayersHouse_2F_EventScript_Notebook_10
# 1332 "data/global.pory"
	case 3, PlayersHouse_2F_EventScript_Notebook_11
# 1334 "data/global.pory"
	case 4, PlayersHouse_2F_EventScript_Notebook_12
# 1336 "data/global.pory"
	case 5, PlayersHouse_2F_EventScript_Notebook_13
	return

PlayersHouse_2F_EventScript_Notebook_2:
# 1318 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_5, 4
	goto PlayersHouse_2F_EventScript_Notebook_1

PlayersHouse_2F_EventScript_Notebook_5:
# 1321 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_6, 5
	goto PlayersHouse_2F_EventScript_Notebook_4

PlayersHouse_2F_EventScript_Notebook_8:
# 1327 "data/global.pory"
	helpwindow HELP_BATTLE_CONTROLS
	return

PlayersHouse_2F_EventScript_Notebook_9:
# 1329 "data/global.pory"
	helpwindow HELP_POKEDEX
	return

PlayersHouse_2F_EventScript_Notebook_10:
# 1331 "data/global.pory"
	helpwindow HELP_SHOP_INVENTORY
	return

PlayersHouse_2F_EventScript_Notebook_11:
# 1333 "data/global.pory"
	helpwindow HELP_FLYING
	return

PlayersHouse_2F_EventScript_Notebook_12:
# 1335 "data/global.pory"
	helpwindow HELP_TERASTALLIZATION
	return

PlayersHouse_2F_EventScript_Notebook_13:
# 1337 "data/global.pory"
	helpwindow HELP_MEGA_EVOLUTION
	return


Mart_EventScript_TMClerk_Text_0:
# 274 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 280 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 282 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 285 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 288 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 291 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 294 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 297 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 300 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 499 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 504 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 505 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 507 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 654 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 657 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 659 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 661 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 663 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 666 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 673 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 683 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 687 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 690 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 712 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 713 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 714 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 715 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 716 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 717 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 718 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 719 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 720 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 721 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 722 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 723 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 724 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 725 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 726 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 727 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 728 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 729 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 730 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 731 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 732 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 733 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 734 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 735 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 736 "data/global.pory"
	.string "Blunder Policy$"

EventScript_CapCollector_Text_25:
# 739 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_26:
# 740 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_27:
# 741 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_28:
# 749 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_29:
# 756 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BufferNumberSring0_Text_0:
# 1306 "data/global.pory"
	.string "{STR_VAR_1}$"

PlayersHouse_2F_EventScript_Notebook_Text_0:
# 1311 "data/global.pory"
	.string "{PLAYER} flipped open the notebook.\n"
	.string "Which section would you like to view?$"

PlayersHouse_2F_EventScript_Notebook_Text_1:
# 1313 "data/global.pory"
	.string "Battle Controls$"

PlayersHouse_2F_EventScript_Notebook_Text_2:
# 1314 "data/global.pory"
	.string "Pokédex$"

PlayersHouse_2F_EventScript_Notebook_Text_3:
# 1315 "data/global.pory"
	.string "Shop Inventory$"

PlayersHouse_2F_EventScript_Notebook_Text_4:
# 1316 "data/global.pory"
	.string "Flying$"

PlayersHouse_2F_EventScript_Notebook_Text_5:
# 1318 "data/global.pory"
	.string "Terastallization$"

PlayersHouse_2F_EventScript_Notebook_Text_6:
# 1321 "data/global.pory"
	.string "Mega Evolution$"

BottleCapCollectorIntro::
# 772 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 776 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 847 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 851 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 855 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 859 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 863 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 867 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 871 "data/global.pory"
	.string "Giovanni$"

CommonText_Shelly::
# 875 "data/global.pory"
	.string "Shelly$"

CommonText_Matt::
# 879 "data/global.pory"
	.string "Matt$"

CommonText_Courtney::
# 883 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 887 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 891 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 895 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 899 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 903 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 907 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 911 "data/global.pory"
	.string "Steven$"

CommonText_Scott::
# 915 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 919 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 923 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 927 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 931 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 935 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 939 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 943 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 947 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 951 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 955 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 959 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 963 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 967 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 971 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 975 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 979 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Victor::
# 983 "data/global.pory"
	.string "Victor$"

CommonText_Victoria::
# 987 "data/global.pory"
	.string "Victoria$"

CommonText_Vivi::
# 991 "data/global.pory"
	.string "Vivi$"

CommonText_Vicky::
# 995 "data/global.pory"
	.string "Vicky$"

CommonText_Baron::
# 1031 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 1035 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 1039 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 1043 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 1047 "data/global.pory"
	.string "Sakura$"

Text_PokevialSizeIncrease::
# 1051 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 1055 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 1059 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 1063 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 1067 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 1071 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 1075 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 1079 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 1083 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 1087 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 1091 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 1095 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 1099 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 1103 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 1107 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 1111 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1115 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1119 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1123 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1127 "data/global.pory"
	.string "Stellar Type$"

CommonText_RustboroCity::
# 1131 "data/global.pory"
	.string "Rustboro City$"

CommonText_DewfordTown::
# 1135 "data/global.pory"
	.string "Dewford Town$"

CommonText_MauvilleCity::
# 1139 "data/global.pory"
	.string "Mauville City$"

CommonText_LavaridgeTown::
# 1143 "data/global.pory"
	.string "Lavaridge Town$"

CommonText_PetalburgCity::
# 1147 "data/global.pory"
	.string "Petalburg City$"

CommonText_FortreeCity::
# 1151 "data/global.pory"
	.string "Fortree City$"

CommonText_MossdeepCity::
# 1155 "data/global.pory"
	.string "Mossdeep City$"

CommonText_SootopolisCity::
# 1159 "data/global.pory"
	.string "Sootopolis City$"

CommonText_Roxanne::
# 1163 "data/global.pory"
	.string "Roxanne$"

CommonText_Brawly::
# 1167 "data/global.pory"
	.string "Brawly$"

CommonText_Wattson::
# 1171 "data/global.pory"
	.string "Wattson$"

CommonText_Flannery::
# 1175 "data/global.pory"
	.string "Flannery$"

CommonText_Norman::
# 1179 "data/global.pory"
	.string "Norman$"

CommonText_Winona::
# 1183 "data/global.pory"
	.string "Winona$"

CommonText_LizaAndTate::
# 1187 "data/global.pory"
	.string "Liza & Tate$"

CommonText_Juan::
# 1191 "data/global.pory"
	.string "Juan$"

CommonText_Sidney::
# 1195 "data/global.pory"
	.string "Sidney$"

CommonText_Phoebe::
# 1199 "data/global.pory"
	.string "Phoebe$"

CommonText_Glacia::
# 1203 "data/global.pory"
	.string "Glacia$"

CommonText_Drake::
# 1207 "data/global.pory"
	.string "Drake$"

Text_TrickMasterIs_Puzzle1::
# 1211 "data/global.pory"
	.string "fabulous$"

Text_TrickMasterIs_Puzzle2::
# 1215 "data/global.pory"
	.string "based$"

Text_TrickMasterIs_Puzzle3::
# 1219 "data/global.pory"
	.string "coveted$"

Text_TrickMasterIs_Puzzle4::
# 1223 "data/global.pory"
	.string "cool$"

Text_TrickMasterIs_Puzzle5::
# 1227 "data/global.pory"
	.string "a genius$"

Text_TrickMasterIs_Puzzle6::
# 1231 "data/global.pory"
	.string "my life$"

Text_TrickMasterIs_Puzzle7::
# 1235 "data/global.pory"
	.string "huggable$"

Text_TrickMasterIs_Puzzle8::
# 1239 "data/global.pory"
	.string "my love$"

Text_TrickMasterIsBlank::
# 1243 "data/global.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“Trick Master is {STR_VAR_1}.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Text_2nd::
# 1251 "data/global.pory"
	.string "2nd$"

Text_3rd::
# 1255 "data/global.pory"
	.string "3rd$"

Text_4th::
# 1259 "data/global.pory"
	.string "4th$"

Text_5th::
# 1263 "data/global.pory"
	.string "5th$"

Text_6th::
# 1267 "data/global.pory"
	.string "6th$"

Text_7th::
# 1271 "data/global.pory"
	.string "7th$"

Text_System::
# 1299 "data/global.pory"
	.string "System$"
