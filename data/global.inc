EventScript_Clear_FlagTemp1::
# 2 "data/global.pory"
	clearflag FLAG_TEMP_1
	return


EventScript_HideMapNamePopup::
# 7 "data/global.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Mart_EventScript_Clerk::
# 12 "data/global.pory"
	lock
# 13 "data/global.pory"
	faceplayer
# 14 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 15 "data/global.pory"
	waitmessage
# 16 "data/global.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Mart_EventScript_Clerk_2
# 20 "data/global.pory"
	special GetNumberOfBadges
# 21 "data/global.pory"
	switch VAR_RESULT
# 22 "data/global.pory"
	case 0, Mart_EventScript_Clerk_6
# 24 "data/global.pory"
	case 1, Mart_EventScript_Clerk_7
# 26 "data/global.pory"
	case 2, Mart_EventScript_Clerk_8
# 28 "data/global.pory"
	case 3, Mart_EventScript_Clerk_9
# 30 "data/global.pory"
	case 4, Mart_EventScript_Clerk_10
# 32 "data/global.pory"
	case 5, Mart_EventScript_Clerk_11
# 34 "data/global.pory"
	case 6, Mart_EventScript_Clerk_12
# 36 "data/global.pory"
	case 7, Mart_EventScript_Clerk_13
# 37 "data/global.pory"
	case 8, Mart_EventScript_Clerk_13
Mart_EventScript_Clerk_1:
# 43 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 44 "data/global.pory"
	release
	end

Mart_EventScript_Clerk_2:
# 17 "data/global.pory"
	pokemart BadgedPokemartClear
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 23 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 25 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 27 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 29 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 31 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 33 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_12:
# 35 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_13:
# 38 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 48 "data/global.pory"
BadgedPokemart0:
# 49 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 50 "data/global.pory"
	.2byte ITEM_POTION
# 51 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 52 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 53 "data/global.pory"
	.2byte ITEM_AWAKENING
# 54 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 55 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 56 "data/global.pory"
	.2byte ITEM_REPEL
# 57 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 60 "data/global.pory"
BadgedPokemart1:
# 61 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 62 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 63 "data/global.pory"
	.2byte ITEM_POTION
# 64 "data/global.pory"
	.2byte ITEM_SUPER_POTION
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
BadgedPokemart2:
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
	.2byte ITEM_SUPER_REPEL
# 86 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 87 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 88 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 91 "data/global.pory"
BadgedPokemart3:
# 92 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 93 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 94 "data/global.pory"
	.2byte ITEM_POTION
# 95 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 96 "data/global.pory"
	.2byte ITEM_REVIVE
# 97 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 98 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 99 "data/global.pory"
	.2byte ITEM_AWAKENING
# 100 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 101 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 102 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 103 "data/global.pory"
	.2byte ITEM_REPEL
# 104 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 105 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 106 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 107 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 108 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 111 "data/global.pory"
BadgedPokemart4:
# 112 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 113 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 114 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 115 "data/global.pory"
	.2byte ITEM_POTION
# 116 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 117 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 118 "data/global.pory"
	.2byte ITEM_REVIVE
# 119 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 120 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 121 "data/global.pory"
	.2byte ITEM_AWAKENING
# 122 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 123 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 124 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 125 "data/global.pory"
	.2byte ITEM_REPEL
# 126 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 127 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 128 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 129 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 130 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 133 "data/global.pory"
BadgedPokemart5:
# 134 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 135 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 136 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 137 "data/global.pory"
	.2byte ITEM_POTION
# 138 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 139 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 140 "data/global.pory"
	.2byte ITEM_REVIVE
# 141 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 142 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 143 "data/global.pory"
	.2byte ITEM_AWAKENING
# 144 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 145 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 146 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 147 "data/global.pory"
	.2byte ITEM_REPEL
# 148 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 149 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 150 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 151 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 152 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 153 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 156 "data/global.pory"
BadgedPokemart6:
# 157 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 158 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 159 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 160 "data/global.pory"
	.2byte ITEM_POTION
# 161 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 162 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 163 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 164 "data/global.pory"
	.2byte ITEM_REVIVE
# 165 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 166 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 167 "data/global.pory"
	.2byte ITEM_AWAKENING
# 168 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 169 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 170 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 171 "data/global.pory"
	.2byte ITEM_REPEL
# 172 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 173 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 174 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 175 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 176 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 177 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 180 "data/global.pory"
BadgedPokemart7:
# 181 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 182 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 183 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 184 "data/global.pory"
	.2byte ITEM_POTION
# 185 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 186 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 187 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 188 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 189 "data/global.pory"
	.2byte ITEM_REVIVE
# 190 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 191 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 192 "data/global.pory"
	.2byte ITEM_AWAKENING
# 193 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 194 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 195 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 196 "data/global.pory"
	.2byte ITEM_REPEL
# 197 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 198 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 199 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 200 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 201 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 202 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 203 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

	.align 2
# 206 "data/global.pory"
BadgedPokemartClear:
# 207 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 208 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 209 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 210 "data/global.pory"
	.2byte ITEM_POTION
# 211 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 212 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 213 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 214 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 215 "data/global.pory"
	.2byte ITEM_REVIVE
# 216 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 217 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 218 "data/global.pory"
	.2byte ITEM_AWAKENING
# 219 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 220 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 221 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 222 "data/global.pory"
	.2byte ITEM_REPEL
# 223 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 224 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 225 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 226 "data/global.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
# 227 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 228 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 229 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 230 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
# 231 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 236 "data/global.pory"
	lock
# 237 "data/global.pory"
	faceplayer
# 238 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 244 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 245 "data/global.pory"
	waitmessage
# 246 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 247 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 250 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 253 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 256 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 259 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 262 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 265 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 268 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 269 "data/global.pory"
	switch VAR_RESULT
# 270 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 272 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 274 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 276 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 278 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 280 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 282 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 284 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 289 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 291 "data/global.pory"
	release
	end

Mart_EventScript_TMClerk_2:
# 240 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 248 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 251 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 254 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 257 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 260 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 263 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 266 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 271 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 273 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 275 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 277 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 279 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 281 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 283 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 285 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 295 "data/global.pory"
TMMart1:
# 296 "data/global.pory"
	.2byte ITEM_TM33
# 297 "data/global.pory"
	.2byte ITEM_TM47
# 298 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 301 "data/global.pory"
TMMart2:
# 302 "data/global.pory"
	.2byte ITEM_TM21
# 303 "data/global.pory"
	.2byte ITEM_TM26
# 304 "data/global.pory"
	.2byte ITEM_TM29
# 305 "data/global.pory"
	.2byte ITEM_TM31
# 306 "data/global.pory"
	.2byte ITEM_TM37
# 307 "data/global.pory"
	.2byte ITEM_TM81
# 308 "data/global.pory"
	.2byte ITEM_TM109
# 309 "data/global.pory"
	.2byte ITEM_TM110
# 310 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 313 "data/global.pory"
TMMart3:
# 314 "data/global.pory"
	.2byte ITEM_TM01
# 315 "data/global.pory"
	.2byte ITEM_TM02
# 316 "data/global.pory"
	.2byte ITEM_TM03
# 317 "data/global.pory"
	.2byte ITEM_TM04
# 318 "data/global.pory"
	.2byte ITEM_TM19
# 319 "data/global.pory"
	.2byte ITEM_TM20
# 320 "data/global.pory"
	.2byte ITEM_TM30
# 321 "data/global.pory"
	.2byte ITEM_TM39
# 322 "data/global.pory"
	.2byte ITEM_TM44
# 323 "data/global.pory"
	.2byte ITEM_TM48
# 324 "data/global.pory"
	.2byte ITEM_TM64
# 325 "data/global.pory"
	.2byte ITEM_TM68
# 326 "data/global.pory"
	.2byte ITEM_TM76
# 327 "data/global.pory"
	.2byte ITEM_TM94
# 328 "data/global.pory"
	.2byte ITEM_TM103
# 329 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 332 "data/global.pory"
TMMart4:
# 333 "data/global.pory"
	.2byte ITEM_TM10
# 334 "data/global.pory"
	.2byte ITEM_TM15
# 335 "data/global.pory"
	.2byte ITEM_TM16
# 336 "data/global.pory"
	.2byte ITEM_TM17
# 337 "data/global.pory"
	.2byte ITEM_TM18
# 338 "data/global.pory"
	.2byte ITEM_TM25
# 339 "data/global.pory"
	.2byte ITEM_TM32
# 340 "data/global.pory"
	.2byte ITEM_TM65
# 341 "data/global.pory"
	.2byte ITEM_TM73
# 342 "data/global.pory"
	.2byte ITEM_TM75
# 343 "data/global.pory"
	.2byte ITEM_TM82
# 344 "data/global.pory"
	.2byte ITEM_TM87
# 345 "data/global.pory"
	.2byte ITEM_TM101
# 346 "data/global.pory"
	.2byte ITEM_TM104
# 347 "data/global.pory"
	.2byte ITEM_TM108
# 348 "data/global.pory"
	.2byte ITEM_TM114
# 349 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 352 "data/global.pory"
TMMart5:
# 353 "data/global.pory"
	.2byte ITEM_TM05
# 354 "data/global.pory"
	.2byte ITEM_TM06
# 355 "data/global.pory"
	.2byte ITEM_TM07
# 356 "data/global.pory"
	.2byte ITEM_TM08
# 357 "data/global.pory"
	.2byte ITEM_TM11
# 358 "data/global.pory"
	.2byte ITEM_TM12
# 359 "data/global.pory"
	.2byte ITEM_TM13
# 360 "data/global.pory"
	.2byte ITEM_TM24
# 361 "data/global.pory"
	.2byte ITEM_TM28
# 362 "data/global.pory"
	.2byte ITEM_TM45
# 363 "data/global.pory"
	.2byte ITEM_TM50
# 364 "data/global.pory"
	.2byte ITEM_TM54
# 365 "data/global.pory"
	.2byte ITEM_TM60
# 366 "data/global.pory"
	.2byte ITEM_TM61
# 367 "data/global.pory"
	.2byte ITEM_TM66
# 368 "data/global.pory"
	.2byte ITEM_TM71
# 369 "data/global.pory"
	.2byte ITEM_TM78
# 370 "data/global.pory"
	.2byte ITEM_TM83
# 371 "data/global.pory"
	.2byte ITEM_TM85
# 372 "data/global.pory"
	.2byte ITEM_TM86
# 373 "data/global.pory"
	.2byte ITEM_TM88
# 374 "data/global.pory"
	.2byte ITEM_TM99
# 375 "data/global.pory"
	.2byte ITEM_TM111
# 376 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 379 "data/global.pory"
TMMart6:
# 380 "data/global.pory"
	.2byte ITEM_TM09
# 381 "data/global.pory"
	.2byte ITEM_TM22
# 382 "data/global.pory"
	.2byte ITEM_TM23
# 383 "data/global.pory"
	.2byte ITEM_TM41
# 384 "data/global.pory"
	.2byte ITEM_TM49
# 385 "data/global.pory"
	.2byte ITEM_TM51
# 386 "data/global.pory"
	.2byte ITEM_TM52
# 387 "data/global.pory"
	.2byte ITEM_TM56
# 388 "data/global.pory"
	.2byte ITEM_TM57
# 389 "data/global.pory"
	.2byte ITEM_TM59
# 390 "data/global.pory"
	.2byte ITEM_TM62
# 391 "data/global.pory"
	.2byte ITEM_TM67
# 392 "data/global.pory"
	.2byte ITEM_TM69
# 393 "data/global.pory"
	.2byte ITEM_TM74
# 394 "data/global.pory"
	.2byte ITEM_TM79
# 395 "data/global.pory"
	.2byte ITEM_TM89
# 396 "data/global.pory"
	.2byte ITEM_TM90
# 397 "data/global.pory"
	.2byte ITEM_TM91
# 398 "data/global.pory"
	.2byte ITEM_TM92
# 399 "data/global.pory"
	.2byte ITEM_TM97
# 400 "data/global.pory"
	.2byte ITEM_TM98
# 401 "data/global.pory"
	.2byte ITEM_TM100
# 402 "data/global.pory"
	.2byte ITEM_TM102
# 403 "data/global.pory"
	.2byte ITEM_TM105
# 404 "data/global.pory"
	.2byte ITEM_TM106
# 405 "data/global.pory"
	.2byte ITEM_TM113
# 406 "data/global.pory"
	.2byte ITEM_TM117
# 407 "data/global.pory"
	.2byte ITEM_TM118
# 408 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 411 "data/global.pory"
TMMart7:
# 412 "data/global.pory"
	.2byte ITEM_TM36
# 413 "data/global.pory"
	.2byte ITEM_TM38
# 414 "data/global.pory"
	.2byte ITEM_TM42
# 415 "data/global.pory"
	.2byte ITEM_TM53
# 416 "data/global.pory"
	.2byte ITEM_TM58
# 417 "data/global.pory"
	.2byte ITEM_TM63
# 418 "data/global.pory"
	.2byte ITEM_TM70
# 419 "data/global.pory"
	.2byte ITEM_TM72
# 420 "data/global.pory"
	.2byte ITEM_TM77
# 421 "data/global.pory"
	.2byte ITEM_TM84
# 422 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 425 "data/global.pory"
TMMart8:
# 426 "data/global.pory"
	.2byte ITEM_TM43
# 427 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 432 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 433 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 435 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 437 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 439 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 442 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 434 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 436 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 438 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 440 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 446 "data/global.pory"

# 447 "data/global.pory"
Common_EventScript_GymNurse::
# 448 "data/global.pory"
	lock
# 449 "data/global.pory"
	faceplayer
# 450 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 451 "data/global.pory"
	closemessage
# 452 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 453 "data/global.pory"
	releaseall
# 454 "data/global.pory"
	end
# 455 "data/global.pory"

# 456 "data/global.pory"
gText_GymNurseHeal::
# 457 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 461 "data/global.pory"
	lock
# 462 "data/global.pory"
	faceplayer
# 463 "data/global.pory"
	special GetNumberOfBadges
# 464 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 465 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 469 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 470 "data/global.pory"
	waitmessage
# 471 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 472 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 473 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 476 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 477 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 494 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 512 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 529 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 531 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_2:
# 466 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 474 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 478 "data/global.pory"
	switch VAR_TEMP_0
# 479 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 480 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 481 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 482 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 483 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 485 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 486 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 487 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 488 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 495 "data/global.pory"
	switch VAR_TEMP_0
# 496 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 497 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 498 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 499 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 501 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 503 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 504 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 505 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 506 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 513 "data/global.pory"
	switch VAR_TEMP_0
# 514 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 515 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 516 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 517 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 518 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 519 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 520 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 522 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 523 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 484 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 489 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 500 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 502 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 507 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 521 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 524 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 535 "data/global.pory"
EvoStonesPokemart3:
# 536 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 537 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 538 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 539 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 540 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 541 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 542 "data/global.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 545 "data/global.pory"
EvoStonesPokemart5:
# 546 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 547 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 548 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 549 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 550 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 551 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 552 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 553 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 554 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 555 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 558 "data/global.pory"
EvoOtherPokemart3:
# 559 "data/global.pory"
	.2byte ITEM_SACHET
# 560 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 563 "data/global.pory"
EvoOtherPokemart4:
# 564 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 565 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 566 "data/global.pory"
	.2byte ITEM_SACHET
# 567 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 568 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 569 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 570 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 571 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 574 "data/global.pory"
EvoOtherPokemart5:
# 575 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 576 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 577 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 578 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 579 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 580 "data/global.pory"
	.2byte ITEM_UPGRADE
# 581 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 582 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 583 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 584 "data/global.pory"
	.2byte ITEM_SACHET
# 585 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 586 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 587 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 588 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 589 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 590 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 591 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 592 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 593 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 596 "data/global.pory"
EvoExtraPokemart6:
# 597 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 598 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 599 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 600 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 601 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 602 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 603 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 606 "data/global.pory"
EvoExtraPokemart7:
# 607 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 608 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 609 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 610 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 611 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 612 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 613 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 614 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 615 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 619 "data/global.pory"
	lock
# 620 "data/global.pory"
	faceplayer
# 621 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 624 "data/global.pory"
	setflag FLAG_TEMP_1
# 625 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 626 "data/global.pory"
	setvar VAR_RESULT, 2
# 627 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 628 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 631 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 632 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 633 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 637 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 641 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 642 "data/global.pory"
	special ChooseMonForMoveRelearner
# 643 "data/global.pory"
	waitstate
# 644 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 649 "data/global.pory"
	special IsSelectedMonEgg
# 650 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 653 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 657 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 658 "data/global.pory"
	special TeachMoveRelearnerMove
# 659 "data/global.pory"
	waitstate
# 660 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 666 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 667 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 622 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 629 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 634 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 638 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 645 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 651 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 654 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 671 "data/global.pory"
	lock
# 672 "data/global.pory"
	faceplayer
# 673 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 677 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 678 "data/global.pory"
	waitmessage
# 679 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 680 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 681 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 682 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 683 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 684 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 685 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 686 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 687 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 688 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 689 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 690 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 691 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 692 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 693 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 694 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 695 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 696 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 697 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 698 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 699 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 700 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 701 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 702 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 703 "data/global.pory"
	special GetNumberOfBadges
# 704 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 709 "data/global.pory"
	special ShowBottleCapsWindow
# 710 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 711 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 732 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 733 "data/global.pory"
	special CloseBattlePointsWindow
# 734 "data/global.pory"
	release
	end

EventScript_CapCollector_2:
# 674 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 675 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 705 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BOOSTER_ENERGY
# 706 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_MIRROR_HERB
# 707 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 712 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 713 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 714 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 720 "data/global.pory"
	checkitemspace VAR_0x8009
# 721 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 727 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 728 "data/global.pory"
	additem VAR_0x8009
# 729 "data/global.pory"
	special UpdateBottleCapsWindow
# 730 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 715 "data/global.pory"
	msgbox EventScript_CapCollector_Text_27
# 716 "data/global.pory"
	special CloseBattlePointsWindow
# 717 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 722 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 723 "data/global.pory"
	special CloseBattlePointsWindow
# 724 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 748 "data/global.pory"
	lock
# 749 "data/global.pory"
	faceplayer
# 750 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 751 "data/global.pory"
	waitmessage
# 752 "data/global.pory"
	pokemart AbilityNaturePokemart
# 753 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 754 "data/global.pory"
	release
	end


	.align 2
# 758 "data/global.pory"
AbilityNaturePokemart:
# 759 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 760 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 761 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 762 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 763 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
# 764 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 765 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 766 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 767 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 768 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 769 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 770 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 771 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 772 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 773 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 774 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 775 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 776 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 777 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 778 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 779 "data/global.pory"
	.2byte ITEM_JOLLY_MINT
# 780 "data/global.pory"
	.2byte ITEM_NAIVE_MINT
# 781 "data/global.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 785 "data/global.pory"
	lock
# 786 "data/global.pory"
	faceplayer
# 787 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 788 "data/global.pory"
	waitmessage
# 789 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 790 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 791 "data/global.pory"
	release
	end


	.align 2
# 795 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 796 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 797 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 798 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 799 "data/global.pory"
	.2byte ITEM_MAGNET
# 800 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 801 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 802 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 803 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 804 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 805 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 806 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 807 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 808 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 809 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 810 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 811 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 812 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 813 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 946 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 947 "data/global.pory"
	case 1, GetRivalForNameBox_2
# 949 "data/global.pory"
	case 2, GetRivalForNameBox_3
# 951 "data/global.pory"
	case 3, GetRivalForNameBox_4
# 953 "data/global.pory"
	case 4, GetRivalForNameBox_5
# 956 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 948 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_3:
# 950 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_4:
# 952 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_5:
# 954 "data/global.pory"
	speakername CommonText_Sakura
	return


Mart_EventScript_TMClerk_Text_0:
# 240 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 246 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 248 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 251 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 254 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 257 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 260 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 263 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 266 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 466 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 471 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 472 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 474 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 622 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 625 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 627 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 629 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 631 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 634 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 641 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 651 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 654 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 657 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 679 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 680 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 681 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 682 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 683 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 684 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 685 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 686 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 687 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 688 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 689 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 690 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 691 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 692 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 693 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 694 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 695 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 696 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 697 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 698 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 699 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 700 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 701 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 702 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 705 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_25:
# 706 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_26:
# 707 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_27:
# 715 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_28:
# 722 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 739 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 743 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 816 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 820 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 824 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 828 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 832 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 836 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 840 "data/global.pory"
	.string "Giovanni$"

CommonText_Courtney::
# 844 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 848 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 852 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 856 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 860 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 864 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 868 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 872 "data/global.pory"
	.string "Steven$"

CommonText_Scott::
# 876 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 880 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 884 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 888 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 892 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 896 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 900 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 904 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 908 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 912 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 916 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 920 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 924 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 928 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 932 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 936 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 940 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Baron::
# 960 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 964 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 968 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 972 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 976 "data/global.pory"
	.string "Sakura$"

Text_PokevialSizeIncrease::
# 980 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 984 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 988 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 992 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 996 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 1000 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 1004 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 1008 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 1012 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 1016 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 1020 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 1024 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 1028 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 1032 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 1036 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 1040 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1044 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1048 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1052 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1056 "data/global.pory"
	.string "Stellar Type$"

CommonText_RustboroCity::
# 1060 "data/global.pory"
	.string "Rustboro City$"

CommonText_DewfordTown::
# 1064 "data/global.pory"
	.string "Dewford Town$"

CommonText_MauvilleCity::
# 1068 "data/global.pory"
	.string "Mauville City$"

CommonText_LavaridgeTown::
# 1072 "data/global.pory"
	.string "Lavaridge Town$"

CommonText_PetalburgCity::
# 1076 "data/global.pory"
	.string "Petalburg City$"

CommonText_FortreeCity::
# 1080 "data/global.pory"
	.string "Fortree City$"

CommonText_MossdeepCity::
# 1084 "data/global.pory"
	.string "Mossdeep City$"

CommonText_SootopolisCity::
# 1088 "data/global.pory"
	.string "Sootopolis City$"

CommonText_Roxanne::
# 1092 "data/global.pory"
	.string "Roxanne$"

CommonText_Brawly::
# 1096 "data/global.pory"
	.string "Brawly$"

CommonText_Wattson::
# 1100 "data/global.pory"
	.string "Wattson$"

CommonText_Flannery::
# 1104 "data/global.pory"
	.string "Flannery$"

CommonText_Norman::
# 1108 "data/global.pory"
	.string "Norman$"

CommonText_Winona::
# 1112 "data/global.pory"
	.string "Winona$"

CommonText_LizaAndTate::
# 1116 "data/global.pory"
	.string "Liza & Tate$"

CommonText_Juan::
# 1120 "data/global.pory"
	.string "Juan$"

Text_TrickMasterIs_Puzzle1::
# 1124 "data/global.pory"
	.string "fabulous$"

Text_TrickMasterIs_Puzzle2::
# 1128 "data/global.pory"
	.string "based$"

Text_TrickMasterIs_Puzzle3::
# 1132 "data/global.pory"
	.string "coveted$"

Text_TrickMasterIs_Puzzle4::
# 1136 "data/global.pory"
	.string "cool$"

Text_TrickMasterIs_Puzzle5::
# 1140 "data/global.pory"
	.string "a genius$"

Text_TrickMasterIs_Puzzle6::
# 1144 "data/global.pory"
	.string "my life$"

Text_TrickMasterIs_Puzzle7::
# 1148 "data/global.pory"
	.string "huggable$"

Text_TrickMasterIs_Puzzle8::
# 1152 "data/global.pory"
	.string "my love$"

Text_TrickMasterIsBlank::
# 1156 "data/global.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“Trick Master is {STR_VAR_1}.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"
