EventScript_Clear_FlagTemp1::
# 2 "data/global.pory"
	clearflag FLAG_TEMP_1
	return


Mart_EventScript_Clerk::
# 7 "data/global.pory"
	lock
# 8 "data/global.pory"
	faceplayer
# 9 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 10 "data/global.pory"
	waitmessage
# 11 "data/global.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Mart_EventScript_Clerk_2
# 15 "data/global.pory"
	special GetNumberOfBadges
# 16 "data/global.pory"
	switch VAR_RESULT
# 17 "data/global.pory"
	case 0, Mart_EventScript_Clerk_6
# 19 "data/global.pory"
	case 1, Mart_EventScript_Clerk_7
# 21 "data/global.pory"
	case 2, Mart_EventScript_Clerk_8
# 23 "data/global.pory"
	case 3, Mart_EventScript_Clerk_9
# 25 "data/global.pory"
	case 4, Mart_EventScript_Clerk_10
# 27 "data/global.pory"
	case 5, Mart_EventScript_Clerk_11
# 29 "data/global.pory"
	case 6, Mart_EventScript_Clerk_12
# 31 "data/global.pory"
	case 7, Mart_EventScript_Clerk_13
# 32 "data/global.pory"
	case 8, Mart_EventScript_Clerk_13
Mart_EventScript_Clerk_1:
# 38 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 39 "data/global.pory"
	release
	end

Mart_EventScript_Clerk_2:
# 12 "data/global.pory"
	pokemart BadgedPokemartClear
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 18 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 20 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 22 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 24 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 26 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 28 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_12:
# 30 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_13:
# 33 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 43 "data/global.pory"
BadgedPokemart0:
# 44 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 45 "data/global.pory"
	.2byte ITEM_POTION
# 46 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 47 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 48 "data/global.pory"
	.2byte ITEM_AWAKENING
# 49 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 50 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 51 "data/global.pory"
	.2byte ITEM_REPEL
# 52 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 55 "data/global.pory"
BadgedPokemart1:
# 56 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 57 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 58 "data/global.pory"
	.2byte ITEM_POTION
# 59 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 60 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 61 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 62 "data/global.pory"
	.2byte ITEM_AWAKENING
# 63 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 64 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 65 "data/global.pory"
	.2byte ITEM_REPEL
# 66 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 69 "data/global.pory"
BadgedPokemart2:
# 70 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 71 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 72 "data/global.pory"
	.2byte ITEM_POTION
# 73 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 74 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 75 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 76 "data/global.pory"
	.2byte ITEM_AWAKENING
# 77 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 78 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 79 "data/global.pory"
	.2byte ITEM_REPEL
# 80 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 81 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 82 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 83 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 86 "data/global.pory"
BadgedPokemart3:
# 87 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 88 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 89 "data/global.pory"
	.2byte ITEM_POTION
# 90 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 91 "data/global.pory"
	.2byte ITEM_REVIVE
# 92 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 93 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 94 "data/global.pory"
	.2byte ITEM_AWAKENING
# 95 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 96 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 97 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 98 "data/global.pory"
	.2byte ITEM_REPEL
# 99 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 100 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 101 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 102 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 103 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 106 "data/global.pory"
BadgedPokemart4:
# 107 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 108 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 109 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 110 "data/global.pory"
	.2byte ITEM_POTION
# 111 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 112 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 113 "data/global.pory"
	.2byte ITEM_REVIVE
# 114 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 115 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 116 "data/global.pory"
	.2byte ITEM_AWAKENING
# 117 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 118 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 119 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 120 "data/global.pory"
	.2byte ITEM_REPEL
# 121 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 122 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 123 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 124 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 125 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 128 "data/global.pory"
BadgedPokemart5:
# 129 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 130 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 131 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 132 "data/global.pory"
	.2byte ITEM_POTION
# 133 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 134 "data/global.pory"
	.2byte ITEM_HYPER_POTION
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
# 148 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 151 "data/global.pory"
BadgedPokemart6:
# 152 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 153 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 154 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 155 "data/global.pory"
	.2byte ITEM_POTION
# 156 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 157 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 158 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 159 "data/global.pory"
	.2byte ITEM_REVIVE
# 160 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 161 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 162 "data/global.pory"
	.2byte ITEM_AWAKENING
# 163 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 164 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 165 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 166 "data/global.pory"
	.2byte ITEM_REPEL
# 167 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 168 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 169 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 170 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 171 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 172 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 175 "data/global.pory"
BadgedPokemart7:
# 176 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 177 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 178 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 179 "data/global.pory"
	.2byte ITEM_POTION
# 180 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 181 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 182 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 183 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 184 "data/global.pory"
	.2byte ITEM_REVIVE
# 185 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 186 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 187 "data/global.pory"
	.2byte ITEM_AWAKENING
# 188 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 189 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 190 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 191 "data/global.pory"
	.2byte ITEM_REPEL
# 192 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 193 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 194 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 195 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 196 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 197 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 198 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

	.align 2
# 201 "data/global.pory"
BadgedPokemartClear:
# 202 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 203 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 204 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 205 "data/global.pory"
	.2byte ITEM_POTION
# 206 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 207 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 208 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 209 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 210 "data/global.pory"
	.2byte ITEM_REVIVE
# 211 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 212 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 213 "data/global.pory"
	.2byte ITEM_AWAKENING
# 214 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 215 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 216 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 217 "data/global.pory"
	.2byte ITEM_REPEL
# 218 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 219 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 220 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 221 "data/global.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
# 222 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 223 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 224 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 225 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
# 226 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 231 "data/global.pory"
	lock
# 232 "data/global.pory"
	faceplayer
# 233 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 239 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 240 "data/global.pory"
	waitmessage
# 241 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 242 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 245 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 248 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 251 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 254 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 257 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 260 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 263 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 264 "data/global.pory"
	switch VAR_RESULT
# 265 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 267 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 269 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 271 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 273 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 275 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 277 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 279 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 284 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 286 "data/global.pory"
	release
	end

Mart_EventScript_TMClerk_2:
# 235 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 243 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 246 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 249 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 252 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 255 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 258 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 261 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 266 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 268 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 270 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 272 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 274 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 276 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 278 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 280 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 290 "data/global.pory"
TMMart1:
# 291 "data/global.pory"
	.2byte ITEM_TM33
# 292 "data/global.pory"
	.2byte ITEM_TM47
# 293 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 296 "data/global.pory"
TMMart2:
# 297 "data/global.pory"
	.2byte ITEM_TM21
# 298 "data/global.pory"
	.2byte ITEM_TM26
# 299 "data/global.pory"
	.2byte ITEM_TM29
# 300 "data/global.pory"
	.2byte ITEM_TM31
# 301 "data/global.pory"
	.2byte ITEM_TM37
# 302 "data/global.pory"
	.2byte ITEM_TM81
# 303 "data/global.pory"
	.2byte ITEM_TM109
# 304 "data/global.pory"
	.2byte ITEM_TM110
# 305 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 308 "data/global.pory"
TMMart3:
# 309 "data/global.pory"
	.2byte ITEM_TM01
# 310 "data/global.pory"
	.2byte ITEM_TM02
# 311 "data/global.pory"
	.2byte ITEM_TM03
# 312 "data/global.pory"
	.2byte ITEM_TM04
# 313 "data/global.pory"
	.2byte ITEM_TM19
# 314 "data/global.pory"
	.2byte ITEM_TM20
# 315 "data/global.pory"
	.2byte ITEM_TM30
# 316 "data/global.pory"
	.2byte ITEM_TM39
# 317 "data/global.pory"
	.2byte ITEM_TM44
# 318 "data/global.pory"
	.2byte ITEM_TM48
# 319 "data/global.pory"
	.2byte ITEM_TM64
# 320 "data/global.pory"
	.2byte ITEM_TM68
# 321 "data/global.pory"
	.2byte ITEM_TM76
# 322 "data/global.pory"
	.2byte ITEM_TM94
# 323 "data/global.pory"
	.2byte ITEM_TM103
# 324 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 327 "data/global.pory"
TMMart4:
# 328 "data/global.pory"
	.2byte ITEM_TM10
# 329 "data/global.pory"
	.2byte ITEM_TM15
# 330 "data/global.pory"
	.2byte ITEM_TM16
# 331 "data/global.pory"
	.2byte ITEM_TM17
# 332 "data/global.pory"
	.2byte ITEM_TM18
# 333 "data/global.pory"
	.2byte ITEM_TM25
# 334 "data/global.pory"
	.2byte ITEM_TM32
# 335 "data/global.pory"
	.2byte ITEM_TM65
# 336 "data/global.pory"
	.2byte ITEM_TM73
# 337 "data/global.pory"
	.2byte ITEM_TM75
# 338 "data/global.pory"
	.2byte ITEM_TM82
# 339 "data/global.pory"
	.2byte ITEM_TM87
# 340 "data/global.pory"
	.2byte ITEM_TM101
# 341 "data/global.pory"
	.2byte ITEM_TM104
# 342 "data/global.pory"
	.2byte ITEM_TM108
# 343 "data/global.pory"
	.2byte ITEM_TM114
# 344 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 347 "data/global.pory"
TMMart5:
# 348 "data/global.pory"
	.2byte ITEM_TM05
# 349 "data/global.pory"
	.2byte ITEM_TM06
# 350 "data/global.pory"
	.2byte ITEM_TM07
# 351 "data/global.pory"
	.2byte ITEM_TM08
# 352 "data/global.pory"
	.2byte ITEM_TM11
# 353 "data/global.pory"
	.2byte ITEM_TM12
# 354 "data/global.pory"
	.2byte ITEM_TM13
# 355 "data/global.pory"
	.2byte ITEM_TM24
# 356 "data/global.pory"
	.2byte ITEM_TM28
# 357 "data/global.pory"
	.2byte ITEM_TM45
# 358 "data/global.pory"
	.2byte ITEM_TM50
# 359 "data/global.pory"
	.2byte ITEM_TM54
# 360 "data/global.pory"
	.2byte ITEM_TM60
# 361 "data/global.pory"
	.2byte ITEM_TM61
# 362 "data/global.pory"
	.2byte ITEM_TM66
# 363 "data/global.pory"
	.2byte ITEM_TM71
# 364 "data/global.pory"
	.2byte ITEM_TM78
# 365 "data/global.pory"
	.2byte ITEM_TM83
# 366 "data/global.pory"
	.2byte ITEM_TM85
# 367 "data/global.pory"
	.2byte ITEM_TM86
# 368 "data/global.pory"
	.2byte ITEM_TM88
# 369 "data/global.pory"
	.2byte ITEM_TM99
# 370 "data/global.pory"
	.2byte ITEM_TM111
# 371 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 374 "data/global.pory"
TMMart6:
# 375 "data/global.pory"
	.2byte ITEM_TM09
# 376 "data/global.pory"
	.2byte ITEM_TM22
# 377 "data/global.pory"
	.2byte ITEM_TM23
# 378 "data/global.pory"
	.2byte ITEM_TM41
# 379 "data/global.pory"
	.2byte ITEM_TM49
# 380 "data/global.pory"
	.2byte ITEM_TM51
# 381 "data/global.pory"
	.2byte ITEM_TM52
# 382 "data/global.pory"
	.2byte ITEM_TM56
# 383 "data/global.pory"
	.2byte ITEM_TM57
# 384 "data/global.pory"
	.2byte ITEM_TM59
# 385 "data/global.pory"
	.2byte ITEM_TM62
# 386 "data/global.pory"
	.2byte ITEM_TM67
# 387 "data/global.pory"
	.2byte ITEM_TM69
# 388 "data/global.pory"
	.2byte ITEM_TM74
# 389 "data/global.pory"
	.2byte ITEM_TM79
# 390 "data/global.pory"
	.2byte ITEM_TM89
# 391 "data/global.pory"
	.2byte ITEM_TM90
# 392 "data/global.pory"
	.2byte ITEM_TM91
# 393 "data/global.pory"
	.2byte ITEM_TM92
# 394 "data/global.pory"
	.2byte ITEM_TM97
# 395 "data/global.pory"
	.2byte ITEM_TM98
# 396 "data/global.pory"
	.2byte ITEM_TM100
# 397 "data/global.pory"
	.2byte ITEM_TM102
# 398 "data/global.pory"
	.2byte ITEM_TM105
# 399 "data/global.pory"
	.2byte ITEM_TM106
# 400 "data/global.pory"
	.2byte ITEM_TM113
# 401 "data/global.pory"
	.2byte ITEM_TM117
# 402 "data/global.pory"
	.2byte ITEM_TM118
# 403 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 406 "data/global.pory"
TMMart7:
# 407 "data/global.pory"
	.2byte ITEM_TM36
# 408 "data/global.pory"
	.2byte ITEM_TM38
# 409 "data/global.pory"
	.2byte ITEM_TM42
# 410 "data/global.pory"
	.2byte ITEM_TM53
# 411 "data/global.pory"
	.2byte ITEM_TM58
# 412 "data/global.pory"
	.2byte ITEM_TM63
# 413 "data/global.pory"
	.2byte ITEM_TM70
# 414 "data/global.pory"
	.2byte ITEM_TM72
# 415 "data/global.pory"
	.2byte ITEM_TM77
# 416 "data/global.pory"
	.2byte ITEM_TM84
# 417 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 420 "data/global.pory"
TMMart8:
# 421 "data/global.pory"
	.2byte ITEM_TM43
# 422 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 427 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 428 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 430 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 432 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 434 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 437 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 429 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 431 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 433 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 435 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 441 "data/global.pory"

# 442 "data/global.pory"
Common_EventScript_GymNurse::
# 443 "data/global.pory"
	lock
# 444 "data/global.pory"
	faceplayer
# 445 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 446 "data/global.pory"
	closemessage
# 447 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 448 "data/global.pory"
	releaseall
# 449 "data/global.pory"
	end
# 450 "data/global.pory"

# 451 "data/global.pory"
gText_GymNurseHeal::
# 452 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 456 "data/global.pory"
	lock
# 457 "data/global.pory"
	faceplayer
# 458 "data/global.pory"
	special GetNumberOfBadges
# 459 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 460 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 464 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 465 "data/global.pory"
	waitmessage
# 466 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 467 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 468 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 471 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 472 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 489 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 507 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 524 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 526 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_2:
# 461 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 469 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 473 "data/global.pory"
	switch VAR_TEMP_0
# 474 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 475 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 476 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 477 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 478 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 480 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 481 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 482 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 483 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 490 "data/global.pory"
	switch VAR_TEMP_0
# 491 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 492 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 493 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 494 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 496 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 498 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 499 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 500 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 501 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 508 "data/global.pory"
	switch VAR_TEMP_0
# 509 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 510 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 511 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 512 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 513 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 514 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 515 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 517 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 518 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 479 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 484 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 495 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 497 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 502 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 516 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 519 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 530 "data/global.pory"
EvoStonesPokemart3:
# 531 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 532 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 533 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 534 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 535 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 536 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 537 "data/global.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 540 "data/global.pory"
EvoStonesPokemart5:
# 541 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 542 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 543 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 544 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 545 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 546 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 547 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 548 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 549 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 550 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 553 "data/global.pory"
EvoOtherPokemart3:
# 554 "data/global.pory"
	.2byte ITEM_SACHET
# 555 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 558 "data/global.pory"
EvoOtherPokemart4:
# 559 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 560 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 561 "data/global.pory"
	.2byte ITEM_SACHET
# 562 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 563 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 564 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 565 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 566 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 569 "data/global.pory"
EvoOtherPokemart5:
# 570 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 571 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 572 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 573 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 574 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 575 "data/global.pory"
	.2byte ITEM_UPGRADE
# 576 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 577 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 578 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 579 "data/global.pory"
	.2byte ITEM_SACHET
# 580 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 581 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 582 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 583 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 584 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 585 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 586 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 587 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 588 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 591 "data/global.pory"
EvoExtraPokemart6:
# 592 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 593 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 594 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 595 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 596 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 597 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 598 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 601 "data/global.pory"
EvoExtraPokemart7:
# 602 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 603 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 604 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 605 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 606 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 607 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 608 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 609 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 610 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 614 "data/global.pory"
	lock
# 615 "data/global.pory"
	faceplayer
# 616 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 619 "data/global.pory"
	setflag FLAG_TEMP_1
# 620 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 621 "data/global.pory"
	setvar VAR_RESULT, 2
# 622 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 623 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 626 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 627 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 628 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 632 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 636 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 637 "data/global.pory"
	special ChooseMonForMoveRelearner
# 638 "data/global.pory"
	waitstate
# 639 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 644 "data/global.pory"
	special IsSelectedMonEgg
# 645 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 648 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 652 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 653 "data/global.pory"
	special TeachMoveRelearnerMove
# 654 "data/global.pory"
	waitstate
# 655 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 661 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 662 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 617 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 624 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 629 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 633 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 640 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 646 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 649 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 666 "data/global.pory"
	lock
# 667 "data/global.pory"
	faceplayer
# 668 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 672 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 673 "data/global.pory"
	waitmessage
# 674 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 675 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 676 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 677 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 678 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 679 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 680 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 681 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 682 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 683 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 684 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 685 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 686 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 687 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 688 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 689 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 690 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 691 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 692 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 693 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 694 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 695 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 696 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 697 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 698 "data/global.pory"
	special GetNumberOfBadges
# 699 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 704 "data/global.pory"
	special ShowBottleCapsWindow
# 705 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 706 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 727 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 728 "data/global.pory"
	special CloseBattlePointsWindow
# 729 "data/global.pory"
	release
	end

EventScript_CapCollector_2:
# 669 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 670 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 700 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BOOSTER_ENERGY
# 701 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_MIRROR_HERB
# 702 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 707 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 708 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 709 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 715 "data/global.pory"
	checkitemspace VAR_0x8009
# 716 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 722 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 723 "data/global.pory"
	additem VAR_0x8009
# 724 "data/global.pory"
	special UpdateBottleCapsWindow
# 725 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 710 "data/global.pory"
	msgbox EventScript_CapCollector_Text_27
# 711 "data/global.pory"
	special CloseBattlePointsWindow
# 712 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 717 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 718 "data/global.pory"
	special CloseBattlePointsWindow
# 719 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 743 "data/global.pory"
	lock
# 744 "data/global.pory"
	faceplayer
# 745 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 746 "data/global.pory"
	waitmessage
# 747 "data/global.pory"
	pokemart AbilityNaturePokemart
# 748 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 749 "data/global.pory"
	release
	end


	.align 2
# 753 "data/global.pory"
AbilityNaturePokemart:
# 754 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 755 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 756 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 757 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 758 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
# 759 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 760 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 761 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 762 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 763 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 764 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 765 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 766 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 767 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 768 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 769 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 770 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 771 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 772 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 773 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 774 "data/global.pory"
	.2byte ITEM_JOLLY_MINT
# 775 "data/global.pory"
	.2byte ITEM_NAIVE_MINT
# 776 "data/global.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 780 "data/global.pory"
	lock
# 781 "data/global.pory"
	faceplayer
# 782 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 783 "data/global.pory"
	waitmessage
# 784 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 785 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 786 "data/global.pory"
	release
	end


	.align 2
# 790 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 791 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 792 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 793 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 794 "data/global.pory"
	.2byte ITEM_MAGNET
# 795 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 796 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 797 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 798 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 799 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 800 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 801 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 802 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 803 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 804 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 805 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 806 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 807 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 808 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 941 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 942 "data/global.pory"
	case 1, GetRivalForNameBox_2
# 944 "data/global.pory"
	case 2, GetRivalForNameBox_3
# 946 "data/global.pory"
	case 3, GetRivalForNameBox_4
# 948 "data/global.pory"
	case 4, GetRivalForNameBox_5
# 951 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 943 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_3:
# 945 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_4:
# 947 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_5:
# 949 "data/global.pory"
	speakername CommonText_Sakura
	return


Mart_EventScript_TMClerk_Text_0:
# 235 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 241 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 243 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 246 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 249 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 252 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 255 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 258 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 261 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 461 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 466 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 467 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 469 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 617 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 620 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 622 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 624 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 626 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 629 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 636 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 646 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 649 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 652 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 674 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 675 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 676 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 677 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 678 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 679 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 680 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 681 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 682 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 683 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 684 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 685 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 686 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 687 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 688 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 689 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 690 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 691 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 692 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 693 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 694 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 695 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 696 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 697 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 700 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_25:
# 701 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_26:
# 702 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_27:
# 710 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_28:
# 717 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 734 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 738 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 811 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 815 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 819 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 823 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 827 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 831 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 835 "data/global.pory"
	.string "Giovanni$"

CommonText_Courtney::
# 839 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 843 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 847 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 851 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 855 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 859 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 863 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 867 "data/global.pory"
	.string "Steven$"

CommonText_Scott::
# 871 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 875 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 879 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 883 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 887 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 891 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 895 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 899 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 903 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 907 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 911 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 915 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 919 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 923 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 927 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 931 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 935 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Baron::
# 955 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 959 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 963 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 967 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 971 "data/global.pory"
	.string "Sakura$"

Text_PokevialSizeIncrease::
# 975 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 979 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 983 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 987 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 991 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 995 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 999 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 1003 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 1007 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 1011 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 1015 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 1019 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 1023 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 1027 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 1031 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 1035 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1039 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1043 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1047 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1051 "data/global.pory"
	.string "Stellar Type$"

CommonText_RustboroCity::
# 1055 "data/global.pory"
	.string "Rustboro City$"

CommonText_DewfordTown::
# 1059 "data/global.pory"
	.string "Dewford Town$"

CommonText_MauvilleCity::
# 1063 "data/global.pory"
	.string "Mauville City$"

CommonText_LavaridgeTown::
# 1067 "data/global.pory"
	.string "Lavaridge Town$"

CommonText_PetalburgCity::
# 1071 "data/global.pory"
	.string "Petalburg City$"

CommonText_FortreeCity::
# 1075 "data/global.pory"
	.string "Fortree City$"

CommonText_MossdeepCity::
# 1079 "data/global.pory"
	.string "Mossdeep City$"

CommonText_SootopolisCity::
# 1083 "data/global.pory"
	.string "Sootopolis City$"

CommonText_Roxanne::
# 1087 "data/global.pory"
	.string "Roxanne$"

CommonText_Brawly::
# 1091 "data/global.pory"
	.string "Brawly$"

CommonText_Wattson::
# 1095 "data/global.pory"
	.string "Wattson$"

CommonText_Flannery::
# 1099 "data/global.pory"
	.string "Flannery$"

CommonText_Norman::
# 1103 "data/global.pory"
	.string "Norman$"

CommonText_Winona::
# 1107 "data/global.pory"
	.string "Winona$"

CommonText_LizaAndTate::
# 1111 "data/global.pory"
	.string "Liza & Tate$"

CommonText_Juan::
# 1115 "data/global.pory"
	.string "Juan$"

Text_TrickMasterIs_Puzzle1::
# 1119 "data/global.pory"
	.string "fabulous$"

Text_TrickMasterIs_Puzzle2::
# 1123 "data/global.pory"
	.string "based$"

Text_TrickMasterIs_Puzzle3::
# 1127 "data/global.pory"
	.string "coveted$"

Text_TrickMasterIs_Puzzle4::
# 1131 "data/global.pory"
	.string "cool$"

Text_TrickMasterIs_Puzzle5::
# 1135 "data/global.pory"
	.string "a genius$"

Text_TrickMasterIs_Puzzle6::
# 1139 "data/global.pory"
	.string "my life$"

Text_TrickMasterIs_Puzzle7::
# 1143 "data/global.pory"
	.string "huggable$"

Text_TrickMasterIs_Puzzle8::
# 1147 "data/global.pory"
	.string "my love$"

Text_TrickMasterIsBlank::
# 1151 "data/global.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“Trick Master is {STR_VAR_1}.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"
