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


EventScript_Clear_FlagTemp5::
# 22 "data/global.pory"
	clearflag FLAG_TEMP_5
	return


EventScript_HideMapNamePopup::
# 27 "data/global.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


EventScript_DoNotDoor::
# 32 "data/global.pory"
	setflag FLAG_SYS_DO_NOT_DOOR
	return


EventScript_SpawnInvisible::
# 37 "data/global.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
	return


GetPlayerGfxNormal::
# 42 "data/global.pory"
	checkplayergender
# 43 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq GetPlayerGfxNormal_1
# 47 "data/global.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_MAY_NORMAL
	return

GetPlayerGfxNormal_1:
# 44 "data/global.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_BRENDAN_NORMAL
	return


Mart_EventScript_Clerk::
# 52 "data/global.pory"
	lock
# 53 "data/global.pory"
	faceplayer
# 54 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 55 "data/global.pory"
	waitmessage
# 56 "data/global.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Mart_EventScript_Clerk_2
# 60 "data/global.pory"
	special GetNumberOfBadges
# 61 "data/global.pory"
	switch VAR_RESULT
# 62 "data/global.pory"
	case 0, Mart_EventScript_Clerk_6
# 64 "data/global.pory"
	case 1, Mart_EventScript_Clerk_7
# 66 "data/global.pory"
	case 2, Mart_EventScript_Clerk_8
# 68 "data/global.pory"
	case 3, Mart_EventScript_Clerk_9
# 70 "data/global.pory"
	case 4, Mart_EventScript_Clerk_10
# 72 "data/global.pory"
	case 5, Mart_EventScript_Clerk_11
# 74 "data/global.pory"
	case 6, Mart_EventScript_Clerk_12
# 76 "data/global.pory"
	case 7, Mart_EventScript_Clerk_13
# 77 "data/global.pory"
	case 8, Mart_EventScript_Clerk_13
Mart_EventScript_Clerk_1:
# 83 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 84 "data/global.pory"
	release
	return

Mart_EventScript_Clerk_2:
# 57 "data/global.pory"
	pokemart BadgedPokemartClear
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 63 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 65 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 67 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 69 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 71 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 73 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_12:
# 75 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_13:
# 78 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 87 "data/global.pory"
BadgedPokemart0:
# 88 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 89 "data/global.pory"
	.2byte ITEM_POTION
# 90 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 91 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 92 "data/global.pory"
	.2byte ITEM_AWAKENING
# 93 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 94 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 95 "data/global.pory"
	.2byte ITEM_REPEL
# 96 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 99 "data/global.pory"
BadgedPokemart1:
# 100 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 101 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 102 "data/global.pory"
	.2byte ITEM_POTION
# 103 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 104 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 105 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 106 "data/global.pory"
	.2byte ITEM_AWAKENING
# 107 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 108 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 109 "data/global.pory"
	.2byte ITEM_REPEL
# 110 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 113 "data/global.pory"
BadgedPokemart2:
# 114 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 115 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 116 "data/global.pory"
	.2byte ITEM_POTION
# 117 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 118 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 119 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 120 "data/global.pory"
	.2byte ITEM_AWAKENING
# 121 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 122 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 123 "data/global.pory"
	.2byte ITEM_REPEL
# 124 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 125 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 126 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 127 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 130 "data/global.pory"
BadgedPokemart3:
# 131 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 132 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 133 "data/global.pory"
	.2byte ITEM_POTION
# 134 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 135 "data/global.pory"
	.2byte ITEM_REVIVE
# 136 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 137 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 138 "data/global.pory"
	.2byte ITEM_AWAKENING
# 139 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 140 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 141 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 142 "data/global.pory"
	.2byte ITEM_REPEL
# 143 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 144 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 145 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 146 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 147 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 150 "data/global.pory"
BadgedPokemart4:
# 151 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 152 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 153 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 154 "data/global.pory"
	.2byte ITEM_POTION
# 155 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 156 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 157 "data/global.pory"
	.2byte ITEM_REVIVE
# 158 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 159 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 160 "data/global.pory"
	.2byte ITEM_AWAKENING
# 161 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 162 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 163 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 164 "data/global.pory"
	.2byte ITEM_REPEL
# 165 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 166 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 167 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 168 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 169 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 172 "data/global.pory"
BadgedPokemart5:
# 173 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 174 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 175 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 176 "data/global.pory"
	.2byte ITEM_POTION
# 177 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 178 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 179 "data/global.pory"
	.2byte ITEM_REVIVE
# 180 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 181 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 182 "data/global.pory"
	.2byte ITEM_AWAKENING
# 183 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 184 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 185 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 186 "data/global.pory"
	.2byte ITEM_REPEL
# 187 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 188 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 189 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 190 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 191 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 192 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 195 "data/global.pory"
BadgedPokemart6:
# 196 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 197 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 198 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 199 "data/global.pory"
	.2byte ITEM_POTION
# 200 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 201 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 202 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 203 "data/global.pory"
	.2byte ITEM_REVIVE
# 204 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 205 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 206 "data/global.pory"
	.2byte ITEM_AWAKENING
# 207 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 208 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 209 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 210 "data/global.pory"
	.2byte ITEM_REPEL
# 211 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 212 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 213 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 214 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 215 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 216 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 219 "data/global.pory"
BadgedPokemart7:
# 220 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 221 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 222 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 223 "data/global.pory"
	.2byte ITEM_POTION
# 224 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 225 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 226 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 227 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 228 "data/global.pory"
	.2byte ITEM_REVIVE
# 229 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 230 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 231 "data/global.pory"
	.2byte ITEM_AWAKENING
# 232 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 233 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 234 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 235 "data/global.pory"
	.2byte ITEM_REPEL
# 236 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 237 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 238 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 239 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 240 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 241 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 242 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

	.align 2
# 245 "data/global.pory"
BadgedPokemartClear:
# 246 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 247 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 248 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 249 "data/global.pory"
	.2byte ITEM_POTION
# 250 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 251 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 252 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 253 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 254 "data/global.pory"
	.2byte ITEM_REVIVE
# 255 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 256 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 257 "data/global.pory"
	.2byte ITEM_AWAKENING
# 258 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 259 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 260 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 261 "data/global.pory"
	.2byte ITEM_REPEL
# 262 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 263 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 264 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 265 "data/global.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
# 266 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 267 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 268 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 269 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
# 270 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 275 "data/global.pory"
	lock
# 276 "data/global.pory"
	faceplayer
# 277 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 283 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 284 "data/global.pory"
	waitmessage
# 285 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 286 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 289 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 292 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 295 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 298 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 301 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 304 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 307 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 308 "data/global.pory"
	switch VAR_RESULT
# 309 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 311 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 313 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 315 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 317 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 319 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 321 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 323 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 328 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 330 "data/global.pory"
	release
	return

Mart_EventScript_TMClerk_2:
# 279 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 287 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 290 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 293 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 296 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 299 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 302 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 305 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 310 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 312 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 314 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 316 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 318 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 320 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 322 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 324 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 333 "data/global.pory"
TMMart1:
# 334 "data/global.pory"
	.2byte ITEM_TM33
# 335 "data/global.pory"
	.2byte ITEM_TM47
# 336 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 339 "data/global.pory"
TMMart2:
# 340 "data/global.pory"
	.2byte ITEM_TM21
# 341 "data/global.pory"
	.2byte ITEM_TM26
# 342 "data/global.pory"
	.2byte ITEM_TM29
# 343 "data/global.pory"
	.2byte ITEM_TM31
# 344 "data/global.pory"
	.2byte ITEM_TM37
# 345 "data/global.pory"
	.2byte ITEM_TM81
# 346 "data/global.pory"
	.2byte ITEM_TM109
# 347 "data/global.pory"
	.2byte ITEM_TM110
# 348 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 351 "data/global.pory"
TMMart3:
# 352 "data/global.pory"
	.2byte ITEM_TM01
# 353 "data/global.pory"
	.2byte ITEM_TM02
# 354 "data/global.pory"
	.2byte ITEM_TM03
# 355 "data/global.pory"
	.2byte ITEM_TM04
# 356 "data/global.pory"
	.2byte ITEM_TM19
# 357 "data/global.pory"
	.2byte ITEM_TM20
# 358 "data/global.pory"
	.2byte ITEM_TM30
# 359 "data/global.pory"
	.2byte ITEM_TM39
# 360 "data/global.pory"
	.2byte ITEM_TM44
# 361 "data/global.pory"
	.2byte ITEM_TM48
# 362 "data/global.pory"
	.2byte ITEM_TM64
# 363 "data/global.pory"
	.2byte ITEM_TM68
# 364 "data/global.pory"
	.2byte ITEM_TM76
# 365 "data/global.pory"
	.2byte ITEM_TM94
# 366 "data/global.pory"
	.2byte ITEM_TM103
# 367 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 370 "data/global.pory"
TMMart4:
# 371 "data/global.pory"
	.2byte ITEM_TM10
# 372 "data/global.pory"
	.2byte ITEM_TM15
# 373 "data/global.pory"
	.2byte ITEM_TM16
# 374 "data/global.pory"
	.2byte ITEM_TM17
# 375 "data/global.pory"
	.2byte ITEM_TM18
# 376 "data/global.pory"
	.2byte ITEM_TM25
# 377 "data/global.pory"
	.2byte ITEM_TM32
# 378 "data/global.pory"
	.2byte ITEM_TM65
# 379 "data/global.pory"
	.2byte ITEM_TM73
# 380 "data/global.pory"
	.2byte ITEM_TM75
# 381 "data/global.pory"
	.2byte ITEM_TM82
# 382 "data/global.pory"
	.2byte ITEM_TM87
# 383 "data/global.pory"
	.2byte ITEM_TM101
# 384 "data/global.pory"
	.2byte ITEM_TM104
# 385 "data/global.pory"
	.2byte ITEM_TM108
# 386 "data/global.pory"
	.2byte ITEM_TM114
# 387 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 390 "data/global.pory"
TMMart5:
# 391 "data/global.pory"
	.2byte ITEM_TM05
# 392 "data/global.pory"
	.2byte ITEM_TM06
# 393 "data/global.pory"
	.2byte ITEM_TM07
# 394 "data/global.pory"
	.2byte ITEM_TM08
# 395 "data/global.pory"
	.2byte ITEM_TM11
# 396 "data/global.pory"
	.2byte ITEM_TM12
# 397 "data/global.pory"
	.2byte ITEM_TM13
# 398 "data/global.pory"
	.2byte ITEM_TM24
# 399 "data/global.pory"
	.2byte ITEM_TM28
# 400 "data/global.pory"
	.2byte ITEM_TM45
# 401 "data/global.pory"
	.2byte ITEM_TM50
# 402 "data/global.pory"
	.2byte ITEM_TM54
# 403 "data/global.pory"
	.2byte ITEM_TM60
# 404 "data/global.pory"
	.2byte ITEM_TM61
# 405 "data/global.pory"
	.2byte ITEM_TM66
# 406 "data/global.pory"
	.2byte ITEM_TM71
# 407 "data/global.pory"
	.2byte ITEM_TM78
# 408 "data/global.pory"
	.2byte ITEM_TM83
# 409 "data/global.pory"
	.2byte ITEM_TM85
# 410 "data/global.pory"
	.2byte ITEM_TM86
# 411 "data/global.pory"
	.2byte ITEM_TM88
# 412 "data/global.pory"
	.2byte ITEM_TM99
# 413 "data/global.pory"
	.2byte ITEM_TM111
# 414 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 417 "data/global.pory"
TMMart6:
# 418 "data/global.pory"
	.2byte ITEM_TM09
# 419 "data/global.pory"
	.2byte ITEM_TM22
# 420 "data/global.pory"
	.2byte ITEM_TM23
# 421 "data/global.pory"
	.2byte ITEM_TM41
# 422 "data/global.pory"
	.2byte ITEM_TM49
# 423 "data/global.pory"
	.2byte ITEM_TM51
# 424 "data/global.pory"
	.2byte ITEM_TM52
# 425 "data/global.pory"
	.2byte ITEM_TM56
# 426 "data/global.pory"
	.2byte ITEM_TM57
# 427 "data/global.pory"
	.2byte ITEM_TM59
# 428 "data/global.pory"
	.2byte ITEM_TM62
# 429 "data/global.pory"
	.2byte ITEM_TM67
# 430 "data/global.pory"
	.2byte ITEM_TM69
# 431 "data/global.pory"
	.2byte ITEM_TM74
# 432 "data/global.pory"
	.2byte ITEM_TM79
# 433 "data/global.pory"
	.2byte ITEM_TM89
# 434 "data/global.pory"
	.2byte ITEM_TM90
# 435 "data/global.pory"
	.2byte ITEM_TM91
# 436 "data/global.pory"
	.2byte ITEM_TM92
# 437 "data/global.pory"
	.2byte ITEM_TM97
# 438 "data/global.pory"
	.2byte ITEM_TM98
# 439 "data/global.pory"
	.2byte ITEM_TM100
# 440 "data/global.pory"
	.2byte ITEM_TM102
# 441 "data/global.pory"
	.2byte ITEM_TM105
# 442 "data/global.pory"
	.2byte ITEM_TM106
# 443 "data/global.pory"
	.2byte ITEM_TM113
# 444 "data/global.pory"
	.2byte ITEM_TM117
# 445 "data/global.pory"
	.2byte ITEM_TM118
# 446 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 449 "data/global.pory"
TMMart7:
# 450 "data/global.pory"
	.2byte ITEM_TM36
# 451 "data/global.pory"
	.2byte ITEM_TM38
# 452 "data/global.pory"
	.2byte ITEM_TM42
# 453 "data/global.pory"
	.2byte ITEM_TM53
# 454 "data/global.pory"
	.2byte ITEM_TM58
# 455 "data/global.pory"
	.2byte ITEM_TM63
# 456 "data/global.pory"
	.2byte ITEM_TM70
# 457 "data/global.pory"
	.2byte ITEM_TM72
# 458 "data/global.pory"
	.2byte ITEM_TM77
# 459 "data/global.pory"
	.2byte ITEM_TM84
# 460 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 463 "data/global.pory"
TMMart8:
# 464 "data/global.pory"
	.2byte ITEM_TM43
# 465 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 470 "data/global.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq Common_EventScript_PlayEmRivalBgm_2
Common_EventScript_PlayEmRivalBgm_1:
# 473 "data/global.pory"
	switch VAR_TEMP_A
# 474 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_5
# 476 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_6
# 478 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_7
# 480 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_8
# 483 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 471 "data/global.pory"
	copyvar VAR_TEMP_A, VAR_EMERALBODY_RIVAL
	goto Common_EventScript_PlayEmRivalBgm_1

Common_EventScript_PlayEmRivalBgm_5:
# 475 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_6:
# 477 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_7:
# 479 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_8:
# 481 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 487 "data/global.pory"

# 488 "data/global.pory"
Common_EventScript_GymNurse::
# 489 "data/global.pory"
	lock
# 490 "data/global.pory"
	faceplayer
# 491 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 492 "data/global.pory"
	closemessage
# 493 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 494 "data/global.pory"
	releaseall
# 495 "data/global.pory"
	end
# 496 "data/global.pory"

# 497 "data/global.pory"
gText_GymNurseHeal::
# 498 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 502 "data/global.pory"
	lock
# 503 "data/global.pory"
	faceplayer
# 504 "data/global.pory"
	special GetNumberOfBadges
# 505 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 506 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 510 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 511 "data/global.pory"
	waitmessage
# 512 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 513 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 514 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 517 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 518 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 535 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 553 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 570 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 572 "data/global.pory"
	release
	return

Mart_EventScript_EvoClerk_2:
# 507 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 515 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 519 "data/global.pory"
	switch VAR_TEMP_0
# 520 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 521 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 522 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 523 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 524 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 526 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 527 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 528 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 529 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 536 "data/global.pory"
	switch VAR_TEMP_0
# 537 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 538 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 539 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 540 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 542 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 544 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 545 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 546 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 547 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 554 "data/global.pory"
	switch VAR_TEMP_0
# 555 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 556 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 557 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 558 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 559 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 560 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 561 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 563 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 564 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 525 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 530 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 541 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 543 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 548 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 562 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 565 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 575 "data/global.pory"
EvoStonesPokemart3:
# 576 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 577 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 578 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 579 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 580 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 581 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 582 "data/global.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 585 "data/global.pory"
EvoStonesPokemart5:
# 586 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 587 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 588 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 589 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 590 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 591 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 592 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 593 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 594 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 595 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 598 "data/global.pory"
EvoOtherPokemart3:
# 599 "data/global.pory"
	.2byte ITEM_SACHET
# 600 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 603 "data/global.pory"
EvoOtherPokemart4:
# 604 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 605 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 606 "data/global.pory"
	.2byte ITEM_SACHET
# 607 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 608 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 609 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 610 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 611 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 614 "data/global.pory"
EvoOtherPokemart5:
# 615 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 616 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 617 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 618 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 619 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 620 "data/global.pory"
	.2byte ITEM_UPGRADE
# 621 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 622 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 623 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 624 "data/global.pory"
	.2byte ITEM_SACHET
# 625 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 626 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 627 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 628 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 629 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 630 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 631 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 632 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 633 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 636 "data/global.pory"
EvoExtraPokemart6:
# 637 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 638 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 639 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 640 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 641 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 642 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 643 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 646 "data/global.pory"
EvoExtraPokemart7:
# 647 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 648 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 649 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 650 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 651 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 652 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 653 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 654 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 655 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 659 "data/global.pory"
	lock
# 660 "data/global.pory"
	faceplayer
# 661 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 664 "data/global.pory"
	setflag FLAG_TEMP_1
# 665 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 666 "data/global.pory"
	setvar VAR_RESULT, 2
# 667 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 668 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 671 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 672 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 673 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 677 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 681 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 682 "data/global.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 683 "data/global.pory"
	waitstate
# 684 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 689 "data/global.pory"
	special IsSelectedMonEgg
# 690 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_20
Common_EventScript_MoveReminder_19:
# 693 "data/global.pory"
	special Special_HasMoveToRelearn
# 694 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_MoveReminder_22
# 698 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 699 "data/global.pory"
	special TeachMoveRelearnerMove
# 700 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 706 "data/global.pory"
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
# 707 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 662 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 669 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 674 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 678 "data/global.pory"
	setmoverelearnerstate MOVE_RELEARNER_EGG_MOVES
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 685 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_20:
# 691 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_19

Common_EventScript_MoveReminder_22:
# 695 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 711 "data/global.pory"
	lock
# 712 "data/global.pory"
	faceplayer
# 713 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 717 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 718 "data/global.pory"
	waitmessage
# 719 "data/global.pory"
	special GetNumberOfBadges
# 720 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
# 724 "data/global.pory"
	capmart BottleCapMart1
EventScript_CapCollector_4:
# 726 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 727 "data/global.pory"
	release
	return

EventScript_CapCollector_2:
# 714 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 715 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 721 "data/global.pory"
	capmart BottleCapMart2
	goto EventScript_CapCollector_4


	.align 2
# 730 "data/global.pory"
BottleCapMart1:
# 731 "data/global.pory"
	.2byte ITEM_METRONOME
# 732 "data/global.pory"
	.2byte ITEM_GRIP_CLAW
# 733 "data/global.pory"
	.2byte ITEM_STICKY_BARB
# 734 "data/global.pory"
	.2byte ITEM_BURNT_FANG
# 735 "data/global.pory"
	.2byte ITEM_SHED_SHELL
# 736 "data/global.pory"
	.2byte ITEM_BIG_ROOT
# 737 "data/global.pory"
	.2byte ITEM_LIGHT_CLAY
# 738 "data/global.pory"
	.2byte ITEM_AIR_BALLOON
# 739 "data/global.pory"
	.2byte ITEM_WHITE_HERB
# 740 "data/global.pory"
	.2byte ITEM_RED_CARD
# 741 "data/global.pory"
	.2byte ITEM_EJECT_BUTTON
# 742 "data/global.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 743 "data/global.pory"
	.2byte ITEM_THROAT_SPRAY
# 744 "data/global.pory"
	.2byte ITEM_MENTAL_HERB
# 745 "data/global.pory"
	.2byte ITEM_NORMAL_GEM
# 746 "data/global.pory"
	.2byte ITEM_FLAME_ORB
# 747 "data/global.pory"
	.2byte ITEM_FROST_ORB
# 748 "data/global.pory"
	.2byte ITEM_TOXIC_ORB
# 749 "data/global.pory"
	.2byte ITEM_EVIOLITE
# 750 "data/global.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 751 "data/global.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 752 "data/global.pory"
	.2byte ITEM_BINDING_BAND
# 753 "data/global.pory"
	.2byte ITEM_EJECT_PACK
# 754 "data/global.pory"
	.2byte ITEM_ABILITY_SHIELD
# 755 "data/global.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 756 "data/global.pory"
	.2byte ITEM_COVERT_CLOAK
# 757 "data/global.pory"
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_NONE

	.align 2
# 761 "data/global.pory"
BottleCapMart2:
# 762 "data/global.pory"
	.2byte ITEM_METRONOME
# 763 "data/global.pory"
	.2byte ITEM_GRIP_CLAW
# 764 "data/global.pory"
	.2byte ITEM_STICKY_BARB
# 765 "data/global.pory"
	.2byte ITEM_BURNT_FANG
# 766 "data/global.pory"
	.2byte ITEM_SHED_SHELL
# 767 "data/global.pory"
	.2byte ITEM_BIG_ROOT
# 768 "data/global.pory"
	.2byte ITEM_LIGHT_CLAY
# 769 "data/global.pory"
	.2byte ITEM_AIR_BALLOON
# 770 "data/global.pory"
	.2byte ITEM_WHITE_HERB
# 771 "data/global.pory"
	.2byte ITEM_RED_CARD
# 772 "data/global.pory"
	.2byte ITEM_EJECT_BUTTON
# 773 "data/global.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 774 "data/global.pory"
	.2byte ITEM_THROAT_SPRAY
# 775 "data/global.pory"
	.2byte ITEM_MENTAL_HERB
# 776 "data/global.pory"
	.2byte ITEM_NORMAL_GEM
# 777 "data/global.pory"
	.2byte ITEM_FLAME_ORB
# 778 "data/global.pory"
	.2byte ITEM_FROST_ORB
# 779 "data/global.pory"
	.2byte ITEM_TOXIC_ORB
# 780 "data/global.pory"
	.2byte ITEM_EVIOLITE
# 781 "data/global.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 782 "data/global.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 783 "data/global.pory"
	.2byte ITEM_BINDING_BAND
# 784 "data/global.pory"
	.2byte ITEM_EJECT_PACK
# 785 "data/global.pory"
	.2byte ITEM_ABILITY_SHIELD
# 786 "data/global.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 787 "data/global.pory"
	.2byte ITEM_COVERT_CLOAK
# 788 "data/global.pory"
	.2byte ITEM_BLUNDER_POLICY
# 790 "data/global.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 791 "data/global.pory"
	.2byte ITEM_MIRROR_HERB
# 792 "data/global.pory"
	.2byte ITEM_POWER_HERB
	.2byte ITEM_NONE

Mart_EventScript_AbilityNatureClerk::
# 805 "data/global.pory"
	lock
# 806 "data/global.pory"
	faceplayer
# 807 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 808 "data/global.pory"
	waitmessage
# 809 "data/global.pory"
	pokemart AbilityNaturePokemart
# 810 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 811 "data/global.pory"
	release
	return


	.align 2
# 814 "data/global.pory"
AbilityNaturePokemart:
# 815 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 816 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 817 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 818 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 819 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
# 820 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 821 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 822 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 823 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 824 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 825 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 826 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 827 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 828 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 829 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 830 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 831 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 832 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 833 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 834 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 835 "data/global.pory"
	.2byte ITEM_JOLLY_MINT
# 836 "data/global.pory"
	.2byte ITEM_NAIVE_MINT
# 837 "data/global.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 841 "data/global.pory"
	lock
# 842 "data/global.pory"
	faceplayer
# 843 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 844 "data/global.pory"
	waitmessage
# 845 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 846 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 847 "data/global.pory"
	release
	return


	.align 2
# 850 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 851 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 852 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 853 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 854 "data/global.pory"
	.2byte ITEM_MAGNET
# 855 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 856 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 857 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 858 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 859 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 860 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 861 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 862 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 863 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 864 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 865 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 866 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 867 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 868 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetBaronsName::
# 1025 "data/global.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 24
	goto_if_ge GetBaronsName_3
GetBaronsName_2:
# 1029 "data/global.pory"
	speakername CommonText_Baron
	return

GetBaronsName_1:
# 1026 "data/global.pory"
	speakername CommonText_BaronsMom
	return

GetBaronsName_3:
# 1025 "data/global.pory"
	compare VAR_EMERALBODY_RIVAL, 0
	goto_if_eq GetBaronsName_1
# 1025 "data/global.pory"
	compare VAR_EMERALBODY_RIVAL, 5
	goto_if_eq GetBaronsName_1
	goto GetBaronsName_2


GetRivalForNameBox::
# 1034 "data/global.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq GetRivalForNameBox_2
GetRivalForNameBox_1:
# 1037 "data/global.pory"
	switch VAR_TEMP_A
# 1038 "data/global.pory"
	case 1, GetRivalForNameBox_5
# 1040 "data/global.pory"
	case 2, GetRivalForNameBox_6
# 1042 "data/global.pory"
	case 3, GetRivalForNameBox_7
# 1044 "data/global.pory"
	case 4, GetRivalForNameBox_8
# 1047 "data/global.pory"
	compare VAR_EMERALBODY_RIVAL_BATTLE_STATE, 24
	goto_if_lt GetRivalForNameBox_10
# 1051 "data/global.pory"
	speakername CommonText_BaronsMom
	return

GetRivalForNameBox_2:
# 1035 "data/global.pory"
	copyvar VAR_TEMP_A, VAR_EMERALBODY_RIVAL
	goto GetRivalForNameBox_1

GetRivalForNameBox_5:
# 1039 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_6:
# 1041 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_7:
# 1043 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_8:
# 1045 "data/global.pory"
	speakername CommonText_Sakura
	return

GetRivalForNameBox_10:
# 1048 "data/global.pory"
	speakername CommonText_Baron
	return


GetRivalMusic::
# 1057 "data/global.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 1058 "data/global.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq GetRivalMusic_2
GetRivalMusic_1:
# 1061 "data/global.pory"
	switch VAR_TEMP_A
# 1062 "data/global.pory"
	case 1, GetRivalMusic_5
# 1064 "data/global.pory"
	case 2, GetRivalMusic_6
# 1066 "data/global.pory"
	case 3, GetRivalMusic_7
# 1068 "data/global.pory"
	case 4, GetRivalMusic_8
# 1071 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_RIVAL
	return

GetRivalMusic_2:
# 1059 "data/global.pory"
	copyvar VAR_TEMP_A, VAR_EMERALBODY_RIVAL
	goto GetRivalMusic_1

GetRivalMusic_5:
# 1063 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_TRAINER
	return

GetRivalMusic_6:
# 1065 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_ELITE_FOUR
	return

GetRivalMusic_7:
# 1067 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_WILD_KANTO
	return

GetRivalMusic_8:
# 1069 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_PL_VS_FRONTIER_BRAIN
	return


IncreasePokevialSize::
# 1328 "data/global.pory"
	speakername NULL
# 1329 "data/global.pory"
	pokevialincreasesize
# 1330 "data/global.pory"
	message Text_PokevialSizeIncrease
# 1331 "data/global.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1332 "data/global.pory"
	waitmessage
# 1333 "data/global.pory"
	delay 60
	return


BufferNumberSring0::
# 1342 "data/global.pory"
	buffernumberstring 0, VAR_TEMP_0
# 1343 "data/global.pory"
	msgbox BufferNumberSring0_Text_0
# 1344 "data/global.pory"
	closemessage
	return


PlayersHouse_2F_EventScript_Notebook::
# 1348 "data/global.pory"
	msgbox PlayersHouse_2F_EventScript_Notebook_Text_0
# 1350 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_1, 0
# 1351 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_2, 1
# 1352 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_3, 2
# 1353 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_4, 3
# 1354 "data/global.pory"
	goto_if_set FLAG_TERA_ENABLED, PlayersHouse_2F_EventScript_Notebook_2
PlayersHouse_2F_EventScript_Notebook_1:
# 1357 "data/global.pory"
	goto_if_set FLAG_ITEM_REALMS_FRAY_MEGA_RING, PlayersHouse_2F_EventScript_Notebook_5
PlayersHouse_2F_EventScript_Notebook_4:
# 1360 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 1361 "data/global.pory"
	closemessage
# 1362 "data/global.pory"
	switch VAR_RESULT
# 1363 "data/global.pory"
	case 0, PlayersHouse_2F_EventScript_Notebook_8
# 1365 "data/global.pory"
	case 1, PlayersHouse_2F_EventScript_Notebook_9
# 1367 "data/global.pory"
	case 2, PlayersHouse_2F_EventScript_Notebook_10
# 1369 "data/global.pory"
	case 3, PlayersHouse_2F_EventScript_Notebook_11
# 1371 "data/global.pory"
	case 4, PlayersHouse_2F_EventScript_Notebook_12
# 1373 "data/global.pory"
	case 5, PlayersHouse_2F_EventScript_Notebook_13
	return

PlayersHouse_2F_EventScript_Notebook_2:
# 1355 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_5, 4
	goto PlayersHouse_2F_EventScript_Notebook_1

PlayersHouse_2F_EventScript_Notebook_5:
# 1358 "data/global.pory"
	dynmultipush PlayersHouse_2F_EventScript_Notebook_Text_6, 5
	goto PlayersHouse_2F_EventScript_Notebook_4

PlayersHouse_2F_EventScript_Notebook_8:
# 1364 "data/global.pory"
	helpwindow HELP_BATTLE_CONTROLS
	return

PlayersHouse_2F_EventScript_Notebook_9:
# 1366 "data/global.pory"
	helpwindow HELP_POKEDEX
	return

PlayersHouse_2F_EventScript_Notebook_10:
# 1368 "data/global.pory"
	helpwindow HELP_SHOP_INVENTORY
	return

PlayersHouse_2F_EventScript_Notebook_11:
# 1370 "data/global.pory"
	helpwindow HELP_FLYING
	return

PlayersHouse_2F_EventScript_Notebook_12:
# 1372 "data/global.pory"
	helpwindow HELP_TERASTALLIZATION
	return

PlayersHouse_2F_EventScript_Notebook_13:
# 1374 "data/global.pory"
	helpwindow HELP_MEGA_EVOLUTION
	return


Mart_EventScript_TMClerk_Text_0:
# 279 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 285 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 287 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 290 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 293 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 296 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 299 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 302 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 305 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 507 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 512 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 513 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 515 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 662 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 665 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 667 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 669 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 671 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 674 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 681 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 691 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 695 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 698 "data/global.pory"
	.string "Which move should I teach?$"

BufferNumberSring0_Text_0:
# 1343 "data/global.pory"
	.string "{STR_VAR_1}$"

PlayersHouse_2F_EventScript_Notebook_Text_0:
# 1348 "data/global.pory"
	.string "{PLAYER} flipped open the notebook.\n"
	.string "Which section would you like to view?$"

PlayersHouse_2F_EventScript_Notebook_Text_1:
# 1350 "data/global.pory"
	.string "Battle Controls$"

PlayersHouse_2F_EventScript_Notebook_Text_2:
# 1351 "data/global.pory"
	.string "Pokédex$"

PlayersHouse_2F_EventScript_Notebook_Text_3:
# 1352 "data/global.pory"
	.string "Shop Inventory$"

PlayersHouse_2F_EventScript_Notebook_Text_4:
# 1353 "data/global.pory"
	.string "Flying$"

PlayersHouse_2F_EventScript_Notebook_Text_5:
# 1355 "data/global.pory"
	.string "Terastallization$"

PlayersHouse_2F_EventScript_Notebook_Text_6:
# 1358 "data/global.pory"
	.string "Mega Evolution$"

BottleCapCollectorIntro::
# 796 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 800 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 871 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 875 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 879 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 883 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 887 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 891 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 895 "data/global.pory"
	.string "Giovanni$"

CommonText_Shelly::
# 899 "data/global.pory"
	.string "Shelly$"

CommonText_Matt::
# 903 "data/global.pory"
	.string "Matt$"

CommonText_Courtney::
# 907 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 911 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 915 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 919 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 923 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 927 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 931 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 935 "data/global.pory"
	.string "Steven$"

CommonText_Scott::
# 939 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 943 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 947 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 951 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 955 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 959 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 963 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 967 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 971 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 975 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 979 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 983 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 987 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 991 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 995 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 999 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 1003 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Victor::
# 1007 "data/global.pory"
	.string "Victor$"

CommonText_Victoria::
# 1011 "data/global.pory"
	.string "Victoria$"

CommonText_Vivi::
# 1015 "data/global.pory"
	.string "Vivi$"

CommonText_Vicky::
# 1019 "data/global.pory"
	.string "Vicky$"

CommonText_Baron::
# 1075 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 1079 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 1083 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 1087 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 1091 "data/global.pory"
	.string "Sakura$"

CommonText_BaronsMom::
# 1095 "data/global.pory"
	.string "Baron's Mom$"

Text_PokevialSizeIncrease::
# 1099 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 1103 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 1107 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 1111 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 1115 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 1119 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 1123 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 1127 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 1131 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 1135 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 1139 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 1143 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 1147 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 1151 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 1155 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 1159 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1163 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1167 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1171 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1175 "data/global.pory"
	.string "Stellar Type$"

CommonText_RustboroCity::
# 1179 "data/global.pory"
	.string "Rustboro City$"

CommonText_DewfordTown::
# 1183 "data/global.pory"
	.string "Dewford Town$"

CommonText_MauvilleCity::
# 1187 "data/global.pory"
	.string "Mauville City$"

CommonText_LavaridgeTown::
# 1191 "data/global.pory"
	.string "Lavaridge Town$"

CommonText_PetalburgCity::
# 1195 "data/global.pory"
	.string "Petalburg City$"

CommonText_FortreeCity::
# 1199 "data/global.pory"
	.string "Fortree City$"

CommonText_MossdeepCity::
# 1203 "data/global.pory"
	.string "Mossdeep City$"

CommonText_SootopolisCity::
# 1207 "data/global.pory"
	.string "Sootopolis City$"

CommonText_Roxanne::
# 1211 "data/global.pory"
	.string "Roxanne$"

CommonText_Brawly::
# 1215 "data/global.pory"
	.string "Brawly$"

CommonText_Wattson::
# 1219 "data/global.pory"
	.string "Wattson$"

CommonText_Flannery::
# 1223 "data/global.pory"
	.string "Flannery$"

CommonText_Norman::
# 1227 "data/global.pory"
	.string "Norman$"

CommonText_Winona::
# 1231 "data/global.pory"
	.string "Winona$"

CommonText_LizaAndTate::
# 1235 "data/global.pory"
	.string "Liza & Tate$"

CommonText_Juan::
# 1239 "data/global.pory"
	.string "Juan$"

CommonText_Sidney::
# 1243 "data/global.pory"
	.string "Sidney$"

CommonText_Phoebe::
# 1247 "data/global.pory"
	.string "Phoebe$"

CommonText_Glacia::
# 1251 "data/global.pory"
	.string "Glacia$"

CommonText_Drake::
# 1255 "data/global.pory"
	.string "Drake$"

Text_TrickMasterIs_Puzzle1::
# 1259 "data/global.pory"
	.string "fabulous$"

Text_TrickMasterIs_Puzzle2::
# 1263 "data/global.pory"
	.string "based$"

Text_TrickMasterIs_Puzzle3::
# 1267 "data/global.pory"
	.string "coveted$"

Text_TrickMasterIs_Puzzle4::
# 1271 "data/global.pory"
	.string "cool$"

Text_TrickMasterIs_Puzzle5::
# 1275 "data/global.pory"
	.string "a genius$"

Text_TrickMasterIs_Puzzle6::
# 1279 "data/global.pory"
	.string "my life$"

Text_TrickMasterIs_Puzzle7::
# 1283 "data/global.pory"
	.string "huggable$"

Text_TrickMasterIs_Puzzle8::
# 1287 "data/global.pory"
	.string "my love$"

Text_TrickMasterIsBlank::
# 1291 "data/global.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“Trick Master is {STR_VAR_1}.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Text_2nd::
# 1299 "data/global.pory"
	.string "2nd$"

Text_3rd::
# 1303 "data/global.pory"
	.string "3rd$"

Text_4th::
# 1307 "data/global.pory"
	.string "4th$"

Text_5th::
# 1311 "data/global.pory"
	.string "5th$"

Text_6th::
# 1315 "data/global.pory"
	.string "6th$"

Text_7th::
# 1319 "data/global.pory"
	.string "7th$"

PlayerObtainedXBattlePoints::
# 1323 "data/global.pory"
	.string "{PLAYER} obtained\n{STR_VAR_1} Battle Points.$"

Text_System::
# 1336 "data/global.pory"
	.string "System$"
