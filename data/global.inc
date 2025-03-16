Mart_EventScript_Clerk::
# 2 "data/global.pory"
	lock
# 3 "data/global.pory"
	faceplayer
# 4 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 5 "data/global.pory"
	waitmessage
# 6 "data/global.pory"
	special GetNumberOfBadges
# 7 "data/global.pory"
	switch VAR_RESULT
# 8 "data/global.pory"
	case 0, Mart_EventScript_Clerk_3
# 10 "data/global.pory"
	case 1, Mart_EventScript_Clerk_4
# 12 "data/global.pory"
	case 2, Mart_EventScript_Clerk_5
# 14 "data/global.pory"
	case 3, Mart_EventScript_Clerk_6
# 16 "data/global.pory"
	case 4, Mart_EventScript_Clerk_7
# 18 "data/global.pory"
	case 5, Mart_EventScript_Clerk_8
# 20 "data/global.pory"
	case 6, Mart_EventScript_Clerk_9
# 22 "data/global.pory"
	case 7, Mart_EventScript_Clerk_10
# 23 "data/global.pory"
	case 8, Mart_EventScript_Clerk_10
Mart_EventScript_Clerk_1:
# 28 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 29 "data/global.pory"
	release
	end

Mart_EventScript_Clerk_3:
# 9 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_4:
# 11 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_5:
# 13 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 15 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 17 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 19 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 21 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 24 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 33 "data/global.pory"
BadgedPokemart0:
# 34 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 35 "data/global.pory"
	.2byte ITEM_POTION
# 36 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 37 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 38 "data/global.pory"
	.2byte ITEM_AWAKENING
# 39 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 40 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 41 "data/global.pory"
	.2byte ITEM_REPEL
# 42 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 45 "data/global.pory"
BadgedPokemart1:
# 46 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 47 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 48 "data/global.pory"
	.2byte ITEM_POTION
# 49 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 50 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 51 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 52 "data/global.pory"
	.2byte ITEM_AWAKENING
# 53 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 54 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 55 "data/global.pory"
	.2byte ITEM_REPEL
# 56 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 59 "data/global.pory"
BadgedPokemart2:
# 60 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 61 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 62 "data/global.pory"
	.2byte ITEM_POTION
# 63 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 64 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 65 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 66 "data/global.pory"
	.2byte ITEM_AWAKENING
# 67 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 68 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 69 "data/global.pory"
	.2byte ITEM_REPEL
# 70 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 71 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 72 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 73 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 76 "data/global.pory"
BadgedPokemart3:
# 77 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 78 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 79 "data/global.pory"
	.2byte ITEM_POTION
# 80 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 81 "data/global.pory"
	.2byte ITEM_REVIVE
# 82 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 83 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 84 "data/global.pory"
	.2byte ITEM_AWAKENING
# 85 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 86 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 87 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 88 "data/global.pory"
	.2byte ITEM_REPEL
# 89 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 90 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 91 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 92 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 93 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 96 "data/global.pory"
BadgedPokemart4:
# 97 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 98 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 99 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 100 "data/global.pory"
	.2byte ITEM_POTION
# 101 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 102 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 103 "data/global.pory"
	.2byte ITEM_REVIVE
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
	.2byte ITEM_FULL_HEAL
# 110 "data/global.pory"
	.2byte ITEM_REPEL
# 111 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 112 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 113 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 114 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 115 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 118 "data/global.pory"
BadgedPokemart5:
# 119 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 120 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 121 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 122 "data/global.pory"
	.2byte ITEM_POTION
# 123 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 124 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 125 "data/global.pory"
	.2byte ITEM_REVIVE
# 126 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 127 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 128 "data/global.pory"
	.2byte ITEM_AWAKENING
# 129 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 130 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 131 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 132 "data/global.pory"
	.2byte ITEM_REPEL
# 133 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 134 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 135 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 136 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 137 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 138 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 141 "data/global.pory"
BadgedPokemart6:
# 142 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 143 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 144 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 145 "data/global.pory"
	.2byte ITEM_POTION
# 146 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 147 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 148 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 149 "data/global.pory"
	.2byte ITEM_REVIVE
# 150 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 151 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 152 "data/global.pory"
	.2byte ITEM_AWAKENING
# 153 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 154 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 155 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 156 "data/global.pory"
	.2byte ITEM_REPEL
# 157 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 158 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 159 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 160 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 161 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 162 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 165 "data/global.pory"
BadgedPokemart7:
# 166 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 167 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 168 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 169 "data/global.pory"
	.2byte ITEM_POTION
# 170 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 171 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 172 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 173 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
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
# 188 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 192 "data/global.pory"
	lock
# 193 "data/global.pory"
	faceplayer
# 194 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 200 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 201 "data/global.pory"
	waitmessage
# 202 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 203 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 206 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 209 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 212 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 215 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 218 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 221 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 224 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 225 "data/global.pory"
	switch VAR_RESULT
# 226 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 228 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 230 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 232 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 234 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 236 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 238 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 240 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 245 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 247 "data/global.pory"
	release
	end

Mart_EventScript_TMClerk_2:
# 196 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 204 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 207 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 210 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 213 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 216 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 219 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 222 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 227 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 229 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 231 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 233 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 235 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 237 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 239 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 241 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 251 "data/global.pory"
TMMart1:
# 252 "data/global.pory"
	.2byte ITEM_TM33
# 253 "data/global.pory"
	.2byte ITEM_TM47
# 254 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 257 "data/global.pory"
TMMart2:
# 258 "data/global.pory"
	.2byte ITEM_TM21
# 259 "data/global.pory"
	.2byte ITEM_TM26
# 260 "data/global.pory"
	.2byte ITEM_TM29
# 261 "data/global.pory"
	.2byte ITEM_TM31
# 262 "data/global.pory"
	.2byte ITEM_TM37
# 263 "data/global.pory"
	.2byte ITEM_TM81
# 264 "data/global.pory"
	.2byte ITEM_TM109
# 265 "data/global.pory"
	.2byte ITEM_TM110
# 266 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 269 "data/global.pory"
TMMart3:
# 270 "data/global.pory"
	.2byte ITEM_TM01
# 271 "data/global.pory"
	.2byte ITEM_TM02
# 272 "data/global.pory"
	.2byte ITEM_TM03
# 273 "data/global.pory"
	.2byte ITEM_TM04
# 274 "data/global.pory"
	.2byte ITEM_TM19
# 275 "data/global.pory"
	.2byte ITEM_TM20
# 276 "data/global.pory"
	.2byte ITEM_TM30
# 277 "data/global.pory"
	.2byte ITEM_TM39
# 278 "data/global.pory"
	.2byte ITEM_TM44
# 279 "data/global.pory"
	.2byte ITEM_TM48
# 280 "data/global.pory"
	.2byte ITEM_TM64
# 281 "data/global.pory"
	.2byte ITEM_TM68
# 282 "data/global.pory"
	.2byte ITEM_TM76
# 283 "data/global.pory"
	.2byte ITEM_TM94
# 284 "data/global.pory"
	.2byte ITEM_TM103
# 285 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 288 "data/global.pory"
TMMart4:
# 289 "data/global.pory"
	.2byte ITEM_TM10
# 290 "data/global.pory"
	.2byte ITEM_TM15
# 291 "data/global.pory"
	.2byte ITEM_TM16
# 292 "data/global.pory"
	.2byte ITEM_TM17
# 293 "data/global.pory"
	.2byte ITEM_TM18
# 294 "data/global.pory"
	.2byte ITEM_TM25
# 295 "data/global.pory"
	.2byte ITEM_TM32
# 296 "data/global.pory"
	.2byte ITEM_TM65
# 297 "data/global.pory"
	.2byte ITEM_TM73
# 298 "data/global.pory"
	.2byte ITEM_TM75
# 299 "data/global.pory"
	.2byte ITEM_TM82
# 300 "data/global.pory"
	.2byte ITEM_TM87
# 301 "data/global.pory"
	.2byte ITEM_TM101
# 302 "data/global.pory"
	.2byte ITEM_TM104
# 303 "data/global.pory"
	.2byte ITEM_TM108
# 304 "data/global.pory"
	.2byte ITEM_TM114
# 305 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 308 "data/global.pory"
TMMart5:
# 309 "data/global.pory"
	.2byte ITEM_TM05
# 310 "data/global.pory"
	.2byte ITEM_TM06
# 311 "data/global.pory"
	.2byte ITEM_TM07
# 312 "data/global.pory"
	.2byte ITEM_TM08
# 313 "data/global.pory"
	.2byte ITEM_TM11
# 314 "data/global.pory"
	.2byte ITEM_TM12
# 315 "data/global.pory"
	.2byte ITEM_TM13
# 316 "data/global.pory"
	.2byte ITEM_TM24
# 317 "data/global.pory"
	.2byte ITEM_TM28
# 318 "data/global.pory"
	.2byte ITEM_TM45
# 319 "data/global.pory"
	.2byte ITEM_TM50
# 320 "data/global.pory"
	.2byte ITEM_TM54
# 321 "data/global.pory"
	.2byte ITEM_TM60
# 322 "data/global.pory"
	.2byte ITEM_TM61
# 323 "data/global.pory"
	.2byte ITEM_TM66
# 324 "data/global.pory"
	.2byte ITEM_TM71
# 325 "data/global.pory"
	.2byte ITEM_TM78
# 326 "data/global.pory"
	.2byte ITEM_TM83
# 327 "data/global.pory"
	.2byte ITEM_TM85
# 328 "data/global.pory"
	.2byte ITEM_TM86
# 329 "data/global.pory"
	.2byte ITEM_TM88
# 330 "data/global.pory"
	.2byte ITEM_TM99
# 331 "data/global.pory"
	.2byte ITEM_TM111
# 332 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 335 "data/global.pory"
TMMart6:
# 336 "data/global.pory"
	.2byte ITEM_TM09
# 337 "data/global.pory"
	.2byte ITEM_TM22
# 338 "data/global.pory"
	.2byte ITEM_TM23
# 339 "data/global.pory"
	.2byte ITEM_TM41
# 340 "data/global.pory"
	.2byte ITEM_TM49
# 341 "data/global.pory"
	.2byte ITEM_TM51
# 342 "data/global.pory"
	.2byte ITEM_TM52
# 343 "data/global.pory"
	.2byte ITEM_TM56
# 344 "data/global.pory"
	.2byte ITEM_TM57
# 345 "data/global.pory"
	.2byte ITEM_TM59
# 346 "data/global.pory"
	.2byte ITEM_TM62
# 347 "data/global.pory"
	.2byte ITEM_TM67
# 348 "data/global.pory"
	.2byte ITEM_TM69
# 349 "data/global.pory"
	.2byte ITEM_TM74
# 350 "data/global.pory"
	.2byte ITEM_TM79
# 351 "data/global.pory"
	.2byte ITEM_TM89
# 352 "data/global.pory"
	.2byte ITEM_TM90
# 353 "data/global.pory"
	.2byte ITEM_TM91
# 354 "data/global.pory"
	.2byte ITEM_TM92
# 355 "data/global.pory"
	.2byte ITEM_TM97
# 356 "data/global.pory"
	.2byte ITEM_TM98
# 357 "data/global.pory"
	.2byte ITEM_TM100
# 358 "data/global.pory"
	.2byte ITEM_TM102
# 359 "data/global.pory"
	.2byte ITEM_TM105
# 360 "data/global.pory"
	.2byte ITEM_TM106
# 361 "data/global.pory"
	.2byte ITEM_TM113
# 362 "data/global.pory"
	.2byte ITEM_TM117
# 363 "data/global.pory"
	.2byte ITEM_TM118
# 364 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 367 "data/global.pory"
TMMart7:
# 368 "data/global.pory"
	.2byte ITEM_TM36
# 369 "data/global.pory"
	.2byte ITEM_TM38
# 370 "data/global.pory"
	.2byte ITEM_TM42
# 371 "data/global.pory"
	.2byte ITEM_TM53
# 372 "data/global.pory"
	.2byte ITEM_TM58
# 373 "data/global.pory"
	.2byte ITEM_TM63
# 374 "data/global.pory"
	.2byte ITEM_TM70
# 375 "data/global.pory"
	.2byte ITEM_TM72
# 376 "data/global.pory"
	.2byte ITEM_TM77
# 377 "data/global.pory"
	.2byte ITEM_TM84
# 378 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 381 "data/global.pory"
TMMart8:
# 382 "data/global.pory"
	.2byte ITEM_TM43
# 383 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 388 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 389 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 391 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 393 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 395 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 398 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 390 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 392 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 394 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 396 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 402 "data/global.pory"

# 403 "data/global.pory"
Common_EventScript_GymNurse::
# 404 "data/global.pory"
	lock
# 405 "data/global.pory"
	faceplayer
# 406 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 407 "data/global.pory"
	closemessage
# 408 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 409 "data/global.pory"
	releaseall
# 410 "data/global.pory"
	end
# 411 "data/global.pory"

# 412 "data/global.pory"
gText_GymNurseHeal::
# 413 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 417 "data/global.pory"
	lock
# 418 "data/global.pory"
	faceplayer
# 419 "data/global.pory"
	special GetNumberOfBadges
# 420 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 421 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 425 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 426 "data/global.pory"
	waitmessage
# 427 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 428 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 429 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 432 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 433 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 450 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 468 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 485 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 487 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_2:
# 422 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 430 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 434 "data/global.pory"
	switch VAR_TEMP_0
# 435 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 436 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 437 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 438 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 439 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 441 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 442 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 443 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 444 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 451 "data/global.pory"
	switch VAR_TEMP_0
# 452 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 453 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 454 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 455 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 457 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 459 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 460 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 461 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 462 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 469 "data/global.pory"
	switch VAR_TEMP_0
# 470 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 471 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 472 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 473 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 474 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 475 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 476 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 478 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 479 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 440 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 445 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 456 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 458 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 463 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 477 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 480 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 491 "data/global.pory"
EvoStonesPokemart3:
# 492 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 493 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 494 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 495 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 496 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 497 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 498 "data/global.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 501 "data/global.pory"
EvoStonesPokemart5:
# 502 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 503 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 504 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 505 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 506 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 507 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 508 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 509 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 510 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 511 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 514 "data/global.pory"
EvoOtherPokemart3:
# 515 "data/global.pory"
	.2byte ITEM_SACHET
# 516 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 519 "data/global.pory"
EvoOtherPokemart4:
# 520 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 521 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 522 "data/global.pory"
	.2byte ITEM_SACHET
# 523 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 524 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 525 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 526 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 527 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 530 "data/global.pory"
EvoOtherPokemart5:
# 531 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 532 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 533 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 534 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 535 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 536 "data/global.pory"
	.2byte ITEM_UPGRADE
# 537 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 538 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 539 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 540 "data/global.pory"
	.2byte ITEM_SACHET
# 541 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 542 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 543 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 544 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 545 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 546 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 547 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 548 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 549 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 552 "data/global.pory"
EvoExtraPokemart6:
# 553 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 554 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 555 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 556 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 557 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 558 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 559 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 562 "data/global.pory"
EvoExtraPokemart7:
# 563 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 564 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 565 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 566 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 567 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 568 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 569 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 570 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 571 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 575 "data/global.pory"
	lock
# 576 "data/global.pory"
	faceplayer
# 577 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 580 "data/global.pory"
	setflag FLAG_TEMP_1
# 581 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 582 "data/global.pory"
	setvar VAR_RESULT, 2
# 583 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 584 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 587 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 588 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 589 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 593 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 597 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 598 "data/global.pory"
	special ChooseMonForMoveRelearner
# 599 "data/global.pory"
	waitstate
# 600 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 605 "data/global.pory"
	special IsSelectedMonEgg
# 606 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 609 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 613 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 614 "data/global.pory"
	special TeachMoveRelearnerMove
# 615 "data/global.pory"
	waitstate
# 616 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 622 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 623 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 578 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 585 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 590 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 594 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 601 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 607 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 610 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 627 "data/global.pory"
	lock
# 628 "data/global.pory"
	faceplayer
# 629 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 633 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 634 "data/global.pory"
	waitmessage
# 635 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 636 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 637 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 638 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 639 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 640 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 641 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 642 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 643 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 644 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 645 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 646 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 647 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 648 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 649 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 650 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 651 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 652 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 653 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 654 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 655 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 656 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 657 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 658 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 659 "data/global.pory"
	special GetNumberOfBadges
# 660 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 665 "data/global.pory"
	special ShowBottleCapsWindow
# 666 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 667 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 688 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 689 "data/global.pory"
	special CloseBattlePointsWindow
# 690 "data/global.pory"
	release
	end

EventScript_CapCollector_2:
# 630 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 631 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 661 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BOOSTER_ENERGY
# 662 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_MIRROR_HERB
# 663 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 668 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 669 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 670 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 676 "data/global.pory"
	checkitemspace VAR_0x8009
# 677 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 683 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 684 "data/global.pory"
	additem VAR_0x8009
# 685 "data/global.pory"
	special UpdateBottleCapsWindow
# 686 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 671 "data/global.pory"
	msgbox EventScript_CapCollector_Text_27
# 672 "data/global.pory"
	special CloseBattlePointsWindow
# 673 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 678 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 679 "data/global.pory"
	special CloseBattlePointsWindow
# 680 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 704 "data/global.pory"
	lock
# 705 "data/global.pory"
	faceplayer
# 706 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 707 "data/global.pory"
	waitmessage
# 708 "data/global.pory"
	pokemart AbilityNaturePokemart
# 709 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 710 "data/global.pory"
	release
	end


	.align 2
# 714 "data/global.pory"
AbilityNaturePokemart:
# 715 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 716 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 717 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 718 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 719 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 720 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 721 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 722 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 723 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 724 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 725 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 726 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 727 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 728 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 729 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 730 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 731 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 732 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 733 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 734 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 738 "data/global.pory"
	lock
# 739 "data/global.pory"
	faceplayer
# 740 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 741 "data/global.pory"
	waitmessage
# 742 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 743 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 744 "data/global.pory"
	release
	end


	.align 2
# 748 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 749 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 750 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 751 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 752 "data/global.pory"
	.2byte ITEM_MAGNET
# 753 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 754 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 755 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 756 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 757 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 758 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 759 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 760 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 761 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 762 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 763 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 764 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 765 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 766 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 903 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 904 "data/global.pory"
	case 1, GetRivalForNameBox_2
# 906 "data/global.pory"
	case 2, GetRivalForNameBox_3
# 908 "data/global.pory"
	case 3, GetRivalForNameBox_4
# 910 "data/global.pory"
	case 4, GetRivalForNameBox_5
# 913 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 905 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_3:
# 907 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_4:
# 909 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_5:
# 911 "data/global.pory"
	speakername CommonText_Sakura
	return


Mart_EventScript_TMClerk_Text_0:
# 196 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 202 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 204 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 207 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 210 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 213 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 216 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 219 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 222 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 422 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 427 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 428 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 430 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 578 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 581 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 583 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 585 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 587 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 590 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 597 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 607 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 610 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 613 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 635 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 636 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 637 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 638 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 639 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 640 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 641 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 642 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 643 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 644 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 645 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 646 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 647 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 648 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 649 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 650 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 651 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 652 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 653 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 654 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 655 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 656 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 657 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 658 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 661 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_25:
# 662 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_26:
# 663 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_27:
# 671 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_28:
# 678 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 695 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 699 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 769 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 773 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 777 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 781 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 785 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 789 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 793 "data/global.pory"
	.string "Giovanni$"

CommonText_Courtney::
# 797 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 801 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 805 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 809 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 813 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 817 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 821 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 825 "data/global.pory"
	.string "Steven$"

CommonText_Wattson::
# 829 "data/global.pory"
	.string "Wattson$"

CommonText_Scott::
# 833 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 837 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 841 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 845 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 849 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 853 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 857 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 861 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 865 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 869 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 873 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 877 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 881 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 885 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 889 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 893 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 897 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Baron::
# 917 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 921 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 925 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 929 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 933 "data/global.pory"
	.string "Sakura$"

Text_PokevialSizeIncrease::
# 937 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 941 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 945 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 949 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 953 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 957 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 961 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 965 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 969 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 973 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 977 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 981 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 985 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 989 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 993 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 997 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1001 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1005 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1009 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1013 "data/global.pory"
	.string "Stellar Type$"
