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


Mart_EventScript_Clerk::
# 27 "data/global.pory"
	lock
# 28 "data/global.pory"
	faceplayer
# 29 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 30 "data/global.pory"
	waitmessage
# 31 "data/global.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Mart_EventScript_Clerk_2
# 35 "data/global.pory"
	special GetNumberOfBadges
# 36 "data/global.pory"
	switch VAR_RESULT
# 37 "data/global.pory"
	case 0, Mart_EventScript_Clerk_6
# 39 "data/global.pory"
	case 1, Mart_EventScript_Clerk_7
# 41 "data/global.pory"
	case 2, Mart_EventScript_Clerk_8
# 43 "data/global.pory"
	case 3, Mart_EventScript_Clerk_9
# 45 "data/global.pory"
	case 4, Mart_EventScript_Clerk_10
# 47 "data/global.pory"
	case 5, Mart_EventScript_Clerk_11
# 49 "data/global.pory"
	case 6, Mart_EventScript_Clerk_12
# 51 "data/global.pory"
	case 7, Mart_EventScript_Clerk_13
# 52 "data/global.pory"
	case 8, Mart_EventScript_Clerk_13
Mart_EventScript_Clerk_1:
# 58 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 59 "data/global.pory"
	release
	return

Mart_EventScript_Clerk_2:
# 32 "data/global.pory"
	pokemart BadgedPokemartClear
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 38 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 40 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 42 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 44 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 46 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 48 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_12:
# 50 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_13:
# 53 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 62 "data/global.pory"
BadgedPokemart0:
# 63 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 64 "data/global.pory"
	.2byte ITEM_POTION
# 65 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 66 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 67 "data/global.pory"
	.2byte ITEM_AWAKENING
# 68 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 69 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 70 "data/global.pory"
	.2byte ITEM_REPEL
# 71 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 74 "data/global.pory"
BadgedPokemart1:
# 75 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 76 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 77 "data/global.pory"
	.2byte ITEM_POTION
# 78 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 79 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 80 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 81 "data/global.pory"
	.2byte ITEM_AWAKENING
# 82 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 83 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 84 "data/global.pory"
	.2byte ITEM_REPEL
# 85 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 88 "data/global.pory"
BadgedPokemart2:
# 89 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 90 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 91 "data/global.pory"
	.2byte ITEM_POTION
# 92 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 93 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 94 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 95 "data/global.pory"
	.2byte ITEM_AWAKENING
# 96 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 97 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 98 "data/global.pory"
	.2byte ITEM_REPEL
# 99 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 100 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 101 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 102 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 105 "data/global.pory"
BadgedPokemart3:
# 106 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 107 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 108 "data/global.pory"
	.2byte ITEM_POTION
# 109 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 110 "data/global.pory"
	.2byte ITEM_REVIVE
# 111 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 112 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 113 "data/global.pory"
	.2byte ITEM_AWAKENING
# 114 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 115 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 116 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 117 "data/global.pory"
	.2byte ITEM_REPEL
# 118 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 119 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 120 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 121 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 122 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 125 "data/global.pory"
BadgedPokemart4:
# 126 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 127 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 128 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 129 "data/global.pory"
	.2byte ITEM_POTION
# 130 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 131 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 132 "data/global.pory"
	.2byte ITEM_REVIVE
# 133 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 134 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 135 "data/global.pory"
	.2byte ITEM_AWAKENING
# 136 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 137 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 138 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 139 "data/global.pory"
	.2byte ITEM_REPEL
# 140 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 141 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 142 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 143 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 144 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 147 "data/global.pory"
BadgedPokemart5:
# 148 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 149 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 150 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 151 "data/global.pory"
	.2byte ITEM_POTION
# 152 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 153 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 154 "data/global.pory"
	.2byte ITEM_REVIVE
# 155 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 156 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 157 "data/global.pory"
	.2byte ITEM_AWAKENING
# 158 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 159 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 160 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 161 "data/global.pory"
	.2byte ITEM_REPEL
# 162 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 163 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 164 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 165 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 166 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 167 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 170 "data/global.pory"
BadgedPokemart6:
# 171 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 172 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 173 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 174 "data/global.pory"
	.2byte ITEM_POTION
# 175 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 176 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 177 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 178 "data/global.pory"
	.2byte ITEM_REVIVE
# 179 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 180 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 181 "data/global.pory"
	.2byte ITEM_AWAKENING
# 182 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 183 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 184 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 185 "data/global.pory"
	.2byte ITEM_REPEL
# 186 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 187 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 188 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 189 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 190 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 191 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 194 "data/global.pory"
BadgedPokemart7:
# 195 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 196 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 197 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 198 "data/global.pory"
	.2byte ITEM_POTION
# 199 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 200 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 201 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 202 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
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
# 217 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

	.align 2
# 220 "data/global.pory"
BadgedPokemartClear:
# 221 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 222 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 223 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 224 "data/global.pory"
	.2byte ITEM_POTION
# 225 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 226 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 227 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 228 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 229 "data/global.pory"
	.2byte ITEM_REVIVE
# 230 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 231 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 232 "data/global.pory"
	.2byte ITEM_AWAKENING
# 233 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 234 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 235 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 236 "data/global.pory"
	.2byte ITEM_REPEL
# 237 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 238 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 239 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 240 "data/global.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
# 241 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 242 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 243 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 244 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
# 245 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 250 "data/global.pory"
	lock
# 251 "data/global.pory"
	faceplayer
# 252 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 258 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 259 "data/global.pory"
	waitmessage
# 260 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 261 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 264 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 267 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 270 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 273 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 276 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 279 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 282 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 283 "data/global.pory"
	switch VAR_RESULT
# 284 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 286 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 288 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 290 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 292 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 294 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 296 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 298 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 303 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 305 "data/global.pory"
	release
	return

Mart_EventScript_TMClerk_2:
# 254 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 262 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 265 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 268 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 271 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 274 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 277 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 280 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 285 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 287 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 289 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 291 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 293 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 295 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 297 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 299 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 308 "data/global.pory"
TMMart1:
# 309 "data/global.pory"
	.2byte ITEM_TM33
# 310 "data/global.pory"
	.2byte ITEM_TM47
# 311 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 314 "data/global.pory"
TMMart2:
# 315 "data/global.pory"
	.2byte ITEM_TM21
# 316 "data/global.pory"
	.2byte ITEM_TM26
# 317 "data/global.pory"
	.2byte ITEM_TM29
# 318 "data/global.pory"
	.2byte ITEM_TM31
# 319 "data/global.pory"
	.2byte ITEM_TM37
# 320 "data/global.pory"
	.2byte ITEM_TM81
# 321 "data/global.pory"
	.2byte ITEM_TM109
# 322 "data/global.pory"
	.2byte ITEM_TM110
# 323 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 326 "data/global.pory"
TMMart3:
# 327 "data/global.pory"
	.2byte ITEM_TM01
# 328 "data/global.pory"
	.2byte ITEM_TM02
# 329 "data/global.pory"
	.2byte ITEM_TM03
# 330 "data/global.pory"
	.2byte ITEM_TM04
# 331 "data/global.pory"
	.2byte ITEM_TM19
# 332 "data/global.pory"
	.2byte ITEM_TM20
# 333 "data/global.pory"
	.2byte ITEM_TM30
# 334 "data/global.pory"
	.2byte ITEM_TM39
# 335 "data/global.pory"
	.2byte ITEM_TM44
# 336 "data/global.pory"
	.2byte ITEM_TM48
# 337 "data/global.pory"
	.2byte ITEM_TM64
# 338 "data/global.pory"
	.2byte ITEM_TM68
# 339 "data/global.pory"
	.2byte ITEM_TM76
# 340 "data/global.pory"
	.2byte ITEM_TM94
# 341 "data/global.pory"
	.2byte ITEM_TM103
# 342 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 345 "data/global.pory"
TMMart4:
# 346 "data/global.pory"
	.2byte ITEM_TM10
# 347 "data/global.pory"
	.2byte ITEM_TM15
# 348 "data/global.pory"
	.2byte ITEM_TM16
# 349 "data/global.pory"
	.2byte ITEM_TM17
# 350 "data/global.pory"
	.2byte ITEM_TM18
# 351 "data/global.pory"
	.2byte ITEM_TM25
# 352 "data/global.pory"
	.2byte ITEM_TM32
# 353 "data/global.pory"
	.2byte ITEM_TM65
# 354 "data/global.pory"
	.2byte ITEM_TM73
# 355 "data/global.pory"
	.2byte ITEM_TM75
# 356 "data/global.pory"
	.2byte ITEM_TM82
# 357 "data/global.pory"
	.2byte ITEM_TM87
# 358 "data/global.pory"
	.2byte ITEM_TM101
# 359 "data/global.pory"
	.2byte ITEM_TM104
# 360 "data/global.pory"
	.2byte ITEM_TM108
# 361 "data/global.pory"
	.2byte ITEM_TM114
# 362 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 365 "data/global.pory"
TMMart5:
# 366 "data/global.pory"
	.2byte ITEM_TM05
# 367 "data/global.pory"
	.2byte ITEM_TM06
# 368 "data/global.pory"
	.2byte ITEM_TM07
# 369 "data/global.pory"
	.2byte ITEM_TM08
# 370 "data/global.pory"
	.2byte ITEM_TM11
# 371 "data/global.pory"
	.2byte ITEM_TM12
# 372 "data/global.pory"
	.2byte ITEM_TM13
# 373 "data/global.pory"
	.2byte ITEM_TM24
# 374 "data/global.pory"
	.2byte ITEM_TM28
# 375 "data/global.pory"
	.2byte ITEM_TM45
# 376 "data/global.pory"
	.2byte ITEM_TM50
# 377 "data/global.pory"
	.2byte ITEM_TM54
# 378 "data/global.pory"
	.2byte ITEM_TM60
# 379 "data/global.pory"
	.2byte ITEM_TM61
# 380 "data/global.pory"
	.2byte ITEM_TM66
# 381 "data/global.pory"
	.2byte ITEM_TM71
# 382 "data/global.pory"
	.2byte ITEM_TM78
# 383 "data/global.pory"
	.2byte ITEM_TM83
# 384 "data/global.pory"
	.2byte ITEM_TM85
# 385 "data/global.pory"
	.2byte ITEM_TM86
# 386 "data/global.pory"
	.2byte ITEM_TM88
# 387 "data/global.pory"
	.2byte ITEM_TM99
# 388 "data/global.pory"
	.2byte ITEM_TM111
# 389 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 392 "data/global.pory"
TMMart6:
# 393 "data/global.pory"
	.2byte ITEM_TM09
# 394 "data/global.pory"
	.2byte ITEM_TM22
# 395 "data/global.pory"
	.2byte ITEM_TM23
# 396 "data/global.pory"
	.2byte ITEM_TM41
# 397 "data/global.pory"
	.2byte ITEM_TM49
# 398 "data/global.pory"
	.2byte ITEM_TM51
# 399 "data/global.pory"
	.2byte ITEM_TM52
# 400 "data/global.pory"
	.2byte ITEM_TM56
# 401 "data/global.pory"
	.2byte ITEM_TM57
# 402 "data/global.pory"
	.2byte ITEM_TM59
# 403 "data/global.pory"
	.2byte ITEM_TM62
# 404 "data/global.pory"
	.2byte ITEM_TM67
# 405 "data/global.pory"
	.2byte ITEM_TM69
# 406 "data/global.pory"
	.2byte ITEM_TM74
# 407 "data/global.pory"
	.2byte ITEM_TM79
# 408 "data/global.pory"
	.2byte ITEM_TM89
# 409 "data/global.pory"
	.2byte ITEM_TM90
# 410 "data/global.pory"
	.2byte ITEM_TM91
# 411 "data/global.pory"
	.2byte ITEM_TM92
# 412 "data/global.pory"
	.2byte ITEM_TM97
# 413 "data/global.pory"
	.2byte ITEM_TM98
# 414 "data/global.pory"
	.2byte ITEM_TM100
# 415 "data/global.pory"
	.2byte ITEM_TM102
# 416 "data/global.pory"
	.2byte ITEM_TM105
# 417 "data/global.pory"
	.2byte ITEM_TM106
# 418 "data/global.pory"
	.2byte ITEM_TM113
# 419 "data/global.pory"
	.2byte ITEM_TM117
# 420 "data/global.pory"
	.2byte ITEM_TM118
# 421 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 424 "data/global.pory"
TMMart7:
# 425 "data/global.pory"
	.2byte ITEM_TM36
# 426 "data/global.pory"
	.2byte ITEM_TM38
# 427 "data/global.pory"
	.2byte ITEM_TM42
# 428 "data/global.pory"
	.2byte ITEM_TM53
# 429 "data/global.pory"
	.2byte ITEM_TM58
# 430 "data/global.pory"
	.2byte ITEM_TM63
# 431 "data/global.pory"
	.2byte ITEM_TM70
# 432 "data/global.pory"
	.2byte ITEM_TM72
# 433 "data/global.pory"
	.2byte ITEM_TM77
# 434 "data/global.pory"
	.2byte ITEM_TM84
# 435 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 438 "data/global.pory"
TMMart8:
# 439 "data/global.pory"
	.2byte ITEM_TM43
# 440 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 445 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 446 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 448 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 450 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 452 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 455 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 447 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 449 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 451 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 453 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 459 "data/global.pory"

# 460 "data/global.pory"
Common_EventScript_GymNurse::
# 461 "data/global.pory"
	lock
# 462 "data/global.pory"
	faceplayer
# 463 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 464 "data/global.pory"
	closemessage
# 465 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 466 "data/global.pory"
	releaseall
# 467 "data/global.pory"
	end
# 468 "data/global.pory"

# 469 "data/global.pory"
gText_GymNurseHeal::
# 470 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 474 "data/global.pory"
	lock
# 475 "data/global.pory"
	faceplayer
# 476 "data/global.pory"
	special GetNumberOfBadges
# 477 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 478 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 482 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 483 "data/global.pory"
	waitmessage
# 484 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 485 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 486 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 489 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 490 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 507 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 525 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 542 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 544 "data/global.pory"
	release
	return

Mart_EventScript_EvoClerk_2:
# 479 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 487 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 491 "data/global.pory"
	switch VAR_TEMP_0
# 492 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 493 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 494 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 495 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 496 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 498 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 499 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 500 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 501 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 508 "data/global.pory"
	switch VAR_TEMP_0
# 509 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 510 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 511 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 512 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 514 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 516 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 517 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 518 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 519 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 526 "data/global.pory"
	switch VAR_TEMP_0
# 527 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 528 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 529 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 530 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 531 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 532 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 533 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 535 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 536 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 497 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 502 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 513 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 515 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 520 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 534 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 537 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 547 "data/global.pory"
EvoStonesPokemart3:
# 548 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 549 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 550 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 551 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 552 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 553 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 554 "data/global.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 557 "data/global.pory"
EvoStonesPokemart5:
# 558 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 559 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 560 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 561 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 562 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 563 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 564 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 565 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 566 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 567 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 570 "data/global.pory"
EvoOtherPokemart3:
# 571 "data/global.pory"
	.2byte ITEM_SACHET
# 572 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 575 "data/global.pory"
EvoOtherPokemart4:
# 576 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 577 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 578 "data/global.pory"
	.2byte ITEM_SACHET
# 579 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 580 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 581 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 582 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 583 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 586 "data/global.pory"
EvoOtherPokemart5:
# 587 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 588 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 589 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 590 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 591 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 592 "data/global.pory"
	.2byte ITEM_UPGRADE
# 593 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 594 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 595 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 596 "data/global.pory"
	.2byte ITEM_SACHET
# 597 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 598 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 599 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 600 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 601 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 602 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 603 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 604 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 605 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 608 "data/global.pory"
EvoExtraPokemart6:
# 609 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 610 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 611 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 612 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 613 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 614 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 615 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 618 "data/global.pory"
EvoExtraPokemart7:
# 619 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 620 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 621 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 622 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 623 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 624 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 625 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 626 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 627 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 631 "data/global.pory"
	lock
# 632 "data/global.pory"
	faceplayer
# 633 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 636 "data/global.pory"
	setflag FLAG_TEMP_1
# 637 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 638 "data/global.pory"
	setvar VAR_RESULT, 2
# 639 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 640 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 643 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 644 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 645 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 649 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 653 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 654 "data/global.pory"
	special ChooseMonForMoveRelearner
# 655 "data/global.pory"
	waitstate
# 656 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 661 "data/global.pory"
	special IsSelectedMonEgg
# 662 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 665 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 669 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 670 "data/global.pory"
	special TeachMoveRelearnerMove
# 671 "data/global.pory"
	waitstate
# 672 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 678 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 679 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 634 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 641 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 646 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 650 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 657 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 663 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 666 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 683 "data/global.pory"
	lock
# 684 "data/global.pory"
	faceplayer
# 685 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 689 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 690 "data/global.pory"
	waitmessage
# 691 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 692 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 693 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 694 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 695 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 696 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 697 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 698 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 699 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 700 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 701 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 702 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 703 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 704 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 705 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 706 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 707 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 708 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 709 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 710 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 711 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 712 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 713 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 714 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 715 "data/global.pory"
	special GetNumberOfBadges
# 716 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 721 "data/global.pory"
	special ShowBottleCapsWindow
# 722 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 723 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 744 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 745 "data/global.pory"
	special CloseBattlePointsWindow
# 746 "data/global.pory"
	release
	return

EventScript_CapCollector_2:
# 686 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 687 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 717 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BOOSTER_ENERGY
# 718 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_MIRROR_HERB
# 719 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 724 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 725 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 726 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 732 "data/global.pory"
	checkitemspace VAR_0x8009
# 733 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 739 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 740 "data/global.pory"
	additem VAR_0x8009
# 741 "data/global.pory"
	special UpdateBottleCapsWindow
# 742 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 727 "data/global.pory"
	msgbox EventScript_CapCollector_Text_27
# 728 "data/global.pory"
	special CloseBattlePointsWindow
# 729 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 734 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 735 "data/global.pory"
	special CloseBattlePointsWindow
# 736 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 759 "data/global.pory"
	lock
# 760 "data/global.pory"
	faceplayer
# 761 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 762 "data/global.pory"
	waitmessage
# 763 "data/global.pory"
	pokemart AbilityNaturePokemart
# 764 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 765 "data/global.pory"
	release
	return


	.align 2
# 768 "data/global.pory"
AbilityNaturePokemart:
# 769 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 770 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 771 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 772 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 773 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
# 774 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 775 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 776 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 777 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 778 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 779 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 780 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 781 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 782 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 783 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 784 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 785 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 786 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 787 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 788 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 789 "data/global.pory"
	.2byte ITEM_JOLLY_MINT
# 790 "data/global.pory"
	.2byte ITEM_NAIVE_MINT
# 791 "data/global.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 795 "data/global.pory"
	lock
# 796 "data/global.pory"
	faceplayer
# 797 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 798 "data/global.pory"
	waitmessage
# 799 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 800 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 801 "data/global.pory"
	release
	return


	.align 2
# 804 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 805 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 806 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 807 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 808 "data/global.pory"
	.2byte ITEM_MAGNET
# 809 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 810 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 811 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 812 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 813 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 814 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 815 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 816 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 817 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 818 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 819 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 820 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 821 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 822 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 955 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 956 "data/global.pory"
	case 1, GetRivalForNameBox_2
# 958 "data/global.pory"
	case 2, GetRivalForNameBox_3
# 960 "data/global.pory"
	case 3, GetRivalForNameBox_4
# 962 "data/global.pory"
	case 4, GetRivalForNameBox_5
# 965 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 957 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_3:
# 959 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_4:
# 961 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_5:
# 963 "data/global.pory"
	speakername CommonText_Sakura
	return


GetRivalMusic::
# 970 "data/global.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 971 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 972 "data/global.pory"
	case 1, GetRivalMusic_2
# 974 "data/global.pory"
	case 2, GetRivalMusic_3
# 976 "data/global.pory"
	case 3, GetRivalMusic_4
# 978 "data/global.pory"
	case 4, GetRivalMusic_5
# 981 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_RIVAL
	return

GetRivalMusic_2:
# 973 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_TRAINER
	return

GetRivalMusic_3:
# 975 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_ELITE_FOUR
	return

GetRivalMusic_4:
# 977 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_WILD_KANTO
	return

GetRivalMusic_5:
# 979 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_PL_VS_FRONTIER_BRAIN
	return


Mart_EventScript_TMClerk_Text_0:
# 254 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 260 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 262 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 265 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 268 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 271 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 274 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 277 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 280 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 479 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 484 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 485 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 487 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 634 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 637 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 639 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 641 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 643 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 646 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 653 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 663 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 666 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 669 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 691 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 692 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 693 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 694 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 695 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 696 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 697 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 698 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 699 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 700 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 701 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 702 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 703 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 704 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 705 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 706 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 707 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 708 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 709 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 710 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 711 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 712 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 713 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 714 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 717 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_25:
# 718 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_26:
# 719 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_27:
# 727 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_28:
# 734 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 750 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 754 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 825 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 829 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 833 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 837 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 841 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 845 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 849 "data/global.pory"
	.string "Giovanni$"

CommonText_Courtney::
# 853 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 857 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 861 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 865 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 869 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 873 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 877 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 881 "data/global.pory"
	.string "Steven$"

CommonText_Scott::
# 885 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 889 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 893 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 897 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 901 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 905 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 909 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 913 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 917 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 921 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 925 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 929 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 933 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 937 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 941 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 945 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 949 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Baron::
# 985 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 989 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 993 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 997 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 1001 "data/global.pory"
	.string "Sakura$"

Text_PokevialSizeIncrease::
# 1005 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 1009 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 1013 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 1017 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 1021 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 1025 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 1029 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 1033 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 1037 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 1041 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 1045 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 1049 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 1053 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 1057 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 1061 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 1065 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1069 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1073 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1077 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1081 "data/global.pory"
	.string "Stellar Type$"

CommonText_RustboroCity::
# 1085 "data/global.pory"
	.string "Rustboro City$"

CommonText_DewfordTown::
# 1089 "data/global.pory"
	.string "Dewford Town$"

CommonText_MauvilleCity::
# 1093 "data/global.pory"
	.string "Mauville City$"

CommonText_LavaridgeTown::
# 1097 "data/global.pory"
	.string "Lavaridge Town$"

CommonText_PetalburgCity::
# 1101 "data/global.pory"
	.string "Petalburg City$"

CommonText_FortreeCity::
# 1105 "data/global.pory"
	.string "Fortree City$"

CommonText_MossdeepCity::
# 1109 "data/global.pory"
	.string "Mossdeep City$"

CommonText_SootopolisCity::
# 1113 "data/global.pory"
	.string "Sootopolis City$"

CommonText_Roxanne::
# 1117 "data/global.pory"
	.string "Roxanne$"

CommonText_Brawly::
# 1121 "data/global.pory"
	.string "Brawly$"

CommonText_Wattson::
# 1125 "data/global.pory"
	.string "Wattson$"

CommonText_Flannery::
# 1129 "data/global.pory"
	.string "Flannery$"

CommonText_Norman::
# 1133 "data/global.pory"
	.string "Norman$"

CommonText_Winona::
# 1137 "data/global.pory"
	.string "Winona$"

CommonText_LizaAndTate::
# 1141 "data/global.pory"
	.string "Liza & Tate$"

CommonText_Juan::
# 1145 "data/global.pory"
	.string "Juan$"

Text_TrickMasterIs_Puzzle1::
# 1149 "data/global.pory"
	.string "fabulous$"

Text_TrickMasterIs_Puzzle2::
# 1153 "data/global.pory"
	.string "based$"

Text_TrickMasterIs_Puzzle3::
# 1157 "data/global.pory"
	.string "coveted$"

Text_TrickMasterIs_Puzzle4::
# 1161 "data/global.pory"
	.string "cool$"

Text_TrickMasterIs_Puzzle5::
# 1165 "data/global.pory"
	.string "a genius$"

Text_TrickMasterIs_Puzzle6::
# 1169 "data/global.pory"
	.string "my life$"

Text_TrickMasterIs_Puzzle7::
# 1173 "data/global.pory"
	.string "huggable$"

Text_TrickMasterIs_Puzzle8::
# 1177 "data/global.pory"
	.string "my love$"

Text_TrickMasterIsBlank::
# 1181 "data/global.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“Trick Master is {STR_VAR_1}.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Text_2nd::
# 1189 "data/global.pory"
	.string "2nd$"

Text_3rd::
# 1193 "data/global.pory"
	.string "3rd$"

Text_4th::
# 1197 "data/global.pory"
	.string "4th$"

Text_5th::
# 1201 "data/global.pory"
	.string "5th$"

Text_6th::
# 1205 "data/global.pory"
	.string "6th$"

Text_7th::
# 1209 "data/global.pory"
	.string "7th$"
