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
	goto_if_set FLAG_SYS_GAME_CLEAR, Mart_EventScript_Clerk_2
# 10 "data/global.pory"
	special GetNumberOfBadges
# 11 "data/global.pory"
	switch VAR_RESULT
# 12 "data/global.pory"
	case 0, Mart_EventScript_Clerk_6
# 14 "data/global.pory"
	case 1, Mart_EventScript_Clerk_7
# 16 "data/global.pory"
	case 2, Mart_EventScript_Clerk_8
# 18 "data/global.pory"
	case 3, Mart_EventScript_Clerk_9
# 20 "data/global.pory"
	case 4, Mart_EventScript_Clerk_10
# 22 "data/global.pory"
	case 5, Mart_EventScript_Clerk_11
# 24 "data/global.pory"
	case 6, Mart_EventScript_Clerk_12
# 26 "data/global.pory"
	case 7, Mart_EventScript_Clerk_13
# 27 "data/global.pory"
	case 8, Mart_EventScript_Clerk_13
Mart_EventScript_Clerk_1:
# 33 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 34 "data/global.pory"
	release
	end

Mart_EventScript_Clerk_2:
# 7 "data/global.pory"
	pokemart BadgedPokemartClear
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 13 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 15 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 17 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 19 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 21 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 23 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_12:
# 25 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_13:
# 28 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 38 "data/global.pory"
BadgedPokemart0:
# 39 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 40 "data/global.pory"
	.2byte ITEM_POTION
# 41 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 42 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 43 "data/global.pory"
	.2byte ITEM_AWAKENING
# 44 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 45 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 46 "data/global.pory"
	.2byte ITEM_REPEL
# 47 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 50 "data/global.pory"
BadgedPokemart1:
# 51 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 52 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 53 "data/global.pory"
	.2byte ITEM_POTION
# 54 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 55 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 56 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 57 "data/global.pory"
	.2byte ITEM_AWAKENING
# 58 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 59 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 60 "data/global.pory"
	.2byte ITEM_REPEL
# 61 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 64 "data/global.pory"
BadgedPokemart2:
# 65 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 66 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 67 "data/global.pory"
	.2byte ITEM_POTION
# 68 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 69 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 70 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 71 "data/global.pory"
	.2byte ITEM_AWAKENING
# 72 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 73 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 74 "data/global.pory"
	.2byte ITEM_REPEL
# 75 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 76 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 77 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 78 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 81 "data/global.pory"
BadgedPokemart3:
# 82 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 83 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 84 "data/global.pory"
	.2byte ITEM_POTION
# 85 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 86 "data/global.pory"
	.2byte ITEM_REVIVE
# 87 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 88 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 89 "data/global.pory"
	.2byte ITEM_AWAKENING
# 90 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 91 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 92 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 93 "data/global.pory"
	.2byte ITEM_REPEL
# 94 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 95 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 96 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 97 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 98 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 101 "data/global.pory"
BadgedPokemart4:
# 102 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 103 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 104 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 105 "data/global.pory"
	.2byte ITEM_POTION
# 106 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 107 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 108 "data/global.pory"
	.2byte ITEM_REVIVE
# 109 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 110 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 111 "data/global.pory"
	.2byte ITEM_AWAKENING
# 112 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 113 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 114 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 115 "data/global.pory"
	.2byte ITEM_REPEL
# 116 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 117 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 118 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 119 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 120 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 123 "data/global.pory"
BadgedPokemart5:
# 124 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 125 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 126 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 127 "data/global.pory"
	.2byte ITEM_POTION
# 128 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 129 "data/global.pory"
	.2byte ITEM_HYPER_POTION
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
# 143 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 146 "data/global.pory"
BadgedPokemart6:
# 147 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 148 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 149 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 150 "data/global.pory"
	.2byte ITEM_POTION
# 151 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 152 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 153 "data/global.pory"
	.2byte ITEM_MAX_POTION
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
BadgedPokemart7:
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
	.2byte ITEM_FULL_RESTORE
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
# 193 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

	.align 2
# 196 "data/global.pory"
BadgedPokemartClear:
# 197 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 198 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 199 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 200 "data/global.pory"
	.2byte ITEM_POTION
# 201 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 202 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 203 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 204 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 205 "data/global.pory"
	.2byte ITEM_REVIVE
# 206 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 207 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 208 "data/global.pory"
	.2byte ITEM_AWAKENING
# 209 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 210 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 211 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 212 "data/global.pory"
	.2byte ITEM_REPEL
# 213 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 214 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 215 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 216 "data/global.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
# 217 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 218 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 219 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 220 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
# 221 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 226 "data/global.pory"
	lock
# 227 "data/global.pory"
	faceplayer
# 228 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 234 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 235 "data/global.pory"
	waitmessage
# 236 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 237 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 240 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 243 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 246 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 249 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 252 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 255 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 258 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 259 "data/global.pory"
	switch VAR_RESULT
# 260 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 262 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 264 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 266 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 268 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 270 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 272 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 274 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 279 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 281 "data/global.pory"
	release
	end

Mart_EventScript_TMClerk_2:
# 230 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 238 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 241 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 244 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 247 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 250 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 253 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 256 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 261 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 263 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 265 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 267 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 269 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 271 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 273 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 275 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 285 "data/global.pory"
TMMart1:
# 286 "data/global.pory"
	.2byte ITEM_TM33
# 287 "data/global.pory"
	.2byte ITEM_TM47
# 288 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 291 "data/global.pory"
TMMart2:
# 292 "data/global.pory"
	.2byte ITEM_TM21
# 293 "data/global.pory"
	.2byte ITEM_TM26
# 294 "data/global.pory"
	.2byte ITEM_TM29
# 295 "data/global.pory"
	.2byte ITEM_TM31
# 296 "data/global.pory"
	.2byte ITEM_TM37
# 297 "data/global.pory"
	.2byte ITEM_TM81
# 298 "data/global.pory"
	.2byte ITEM_TM109
# 299 "data/global.pory"
	.2byte ITEM_TM110
# 300 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 303 "data/global.pory"
TMMart3:
# 304 "data/global.pory"
	.2byte ITEM_TM01
# 305 "data/global.pory"
	.2byte ITEM_TM02
# 306 "data/global.pory"
	.2byte ITEM_TM03
# 307 "data/global.pory"
	.2byte ITEM_TM04
# 308 "data/global.pory"
	.2byte ITEM_TM19
# 309 "data/global.pory"
	.2byte ITEM_TM20
# 310 "data/global.pory"
	.2byte ITEM_TM30
# 311 "data/global.pory"
	.2byte ITEM_TM39
# 312 "data/global.pory"
	.2byte ITEM_TM44
# 313 "data/global.pory"
	.2byte ITEM_TM48
# 314 "data/global.pory"
	.2byte ITEM_TM64
# 315 "data/global.pory"
	.2byte ITEM_TM68
# 316 "data/global.pory"
	.2byte ITEM_TM76
# 317 "data/global.pory"
	.2byte ITEM_TM94
# 318 "data/global.pory"
	.2byte ITEM_TM103
# 319 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 322 "data/global.pory"
TMMart4:
# 323 "data/global.pory"
	.2byte ITEM_TM10
# 324 "data/global.pory"
	.2byte ITEM_TM15
# 325 "data/global.pory"
	.2byte ITEM_TM16
# 326 "data/global.pory"
	.2byte ITEM_TM17
# 327 "data/global.pory"
	.2byte ITEM_TM18
# 328 "data/global.pory"
	.2byte ITEM_TM25
# 329 "data/global.pory"
	.2byte ITEM_TM32
# 330 "data/global.pory"
	.2byte ITEM_TM65
# 331 "data/global.pory"
	.2byte ITEM_TM73
# 332 "data/global.pory"
	.2byte ITEM_TM75
# 333 "data/global.pory"
	.2byte ITEM_TM82
# 334 "data/global.pory"
	.2byte ITEM_TM87
# 335 "data/global.pory"
	.2byte ITEM_TM101
# 336 "data/global.pory"
	.2byte ITEM_TM104
# 337 "data/global.pory"
	.2byte ITEM_TM108
# 338 "data/global.pory"
	.2byte ITEM_TM114
# 339 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 342 "data/global.pory"
TMMart5:
# 343 "data/global.pory"
	.2byte ITEM_TM05
# 344 "data/global.pory"
	.2byte ITEM_TM06
# 345 "data/global.pory"
	.2byte ITEM_TM07
# 346 "data/global.pory"
	.2byte ITEM_TM08
# 347 "data/global.pory"
	.2byte ITEM_TM11
# 348 "data/global.pory"
	.2byte ITEM_TM12
# 349 "data/global.pory"
	.2byte ITEM_TM13
# 350 "data/global.pory"
	.2byte ITEM_TM24
# 351 "data/global.pory"
	.2byte ITEM_TM28
# 352 "data/global.pory"
	.2byte ITEM_TM45
# 353 "data/global.pory"
	.2byte ITEM_TM50
# 354 "data/global.pory"
	.2byte ITEM_TM54
# 355 "data/global.pory"
	.2byte ITEM_TM60
# 356 "data/global.pory"
	.2byte ITEM_TM61
# 357 "data/global.pory"
	.2byte ITEM_TM66
# 358 "data/global.pory"
	.2byte ITEM_TM71
# 359 "data/global.pory"
	.2byte ITEM_TM78
# 360 "data/global.pory"
	.2byte ITEM_TM83
# 361 "data/global.pory"
	.2byte ITEM_TM85
# 362 "data/global.pory"
	.2byte ITEM_TM86
# 363 "data/global.pory"
	.2byte ITEM_TM88
# 364 "data/global.pory"
	.2byte ITEM_TM99
# 365 "data/global.pory"
	.2byte ITEM_TM111
# 366 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 369 "data/global.pory"
TMMart6:
# 370 "data/global.pory"
	.2byte ITEM_TM09
# 371 "data/global.pory"
	.2byte ITEM_TM22
# 372 "data/global.pory"
	.2byte ITEM_TM23
# 373 "data/global.pory"
	.2byte ITEM_TM41
# 374 "data/global.pory"
	.2byte ITEM_TM49
# 375 "data/global.pory"
	.2byte ITEM_TM51
# 376 "data/global.pory"
	.2byte ITEM_TM52
# 377 "data/global.pory"
	.2byte ITEM_TM56
# 378 "data/global.pory"
	.2byte ITEM_TM57
# 379 "data/global.pory"
	.2byte ITEM_TM59
# 380 "data/global.pory"
	.2byte ITEM_TM62
# 381 "data/global.pory"
	.2byte ITEM_TM67
# 382 "data/global.pory"
	.2byte ITEM_TM69
# 383 "data/global.pory"
	.2byte ITEM_TM74
# 384 "data/global.pory"
	.2byte ITEM_TM79
# 385 "data/global.pory"
	.2byte ITEM_TM89
# 386 "data/global.pory"
	.2byte ITEM_TM90
# 387 "data/global.pory"
	.2byte ITEM_TM91
# 388 "data/global.pory"
	.2byte ITEM_TM92
# 389 "data/global.pory"
	.2byte ITEM_TM97
# 390 "data/global.pory"
	.2byte ITEM_TM98
# 391 "data/global.pory"
	.2byte ITEM_TM100
# 392 "data/global.pory"
	.2byte ITEM_TM102
# 393 "data/global.pory"
	.2byte ITEM_TM105
# 394 "data/global.pory"
	.2byte ITEM_TM106
# 395 "data/global.pory"
	.2byte ITEM_TM113
# 396 "data/global.pory"
	.2byte ITEM_TM117
# 397 "data/global.pory"
	.2byte ITEM_TM118
# 398 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 401 "data/global.pory"
TMMart7:
# 402 "data/global.pory"
	.2byte ITEM_TM36
# 403 "data/global.pory"
	.2byte ITEM_TM38
# 404 "data/global.pory"
	.2byte ITEM_TM42
# 405 "data/global.pory"
	.2byte ITEM_TM53
# 406 "data/global.pory"
	.2byte ITEM_TM58
# 407 "data/global.pory"
	.2byte ITEM_TM63
# 408 "data/global.pory"
	.2byte ITEM_TM70
# 409 "data/global.pory"
	.2byte ITEM_TM72
# 410 "data/global.pory"
	.2byte ITEM_TM77
# 411 "data/global.pory"
	.2byte ITEM_TM84
# 412 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 415 "data/global.pory"
TMMart8:
# 416 "data/global.pory"
	.2byte ITEM_TM43
# 417 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 422 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 423 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 425 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 427 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 429 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 432 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 424 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 426 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 428 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 430 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 436 "data/global.pory"

# 437 "data/global.pory"
Common_EventScript_GymNurse::
# 438 "data/global.pory"
	lock
# 439 "data/global.pory"
	faceplayer
# 440 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 441 "data/global.pory"
	closemessage
# 442 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 443 "data/global.pory"
	releaseall
# 444 "data/global.pory"
	end
# 445 "data/global.pory"

# 446 "data/global.pory"
gText_GymNurseHeal::
# 447 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 451 "data/global.pory"
	lock
# 452 "data/global.pory"
	faceplayer
# 453 "data/global.pory"
	special GetNumberOfBadges
# 454 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 455 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 459 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 460 "data/global.pory"
	waitmessage
# 461 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 462 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 463 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 466 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 467 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 484 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 502 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 519 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 521 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_2:
# 456 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 464 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 468 "data/global.pory"
	switch VAR_TEMP_0
# 469 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 470 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 471 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 472 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 473 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 475 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 476 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 477 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 478 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 485 "data/global.pory"
	switch VAR_TEMP_0
# 486 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 487 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 488 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 489 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 491 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 493 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 494 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 495 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 496 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 503 "data/global.pory"
	switch VAR_TEMP_0
# 504 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 505 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 506 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 507 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 508 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 509 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 510 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 512 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 513 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 474 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 479 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 490 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 492 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 497 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 511 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 514 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 525 "data/global.pory"
EvoStonesPokemart3:
# 526 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 527 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 528 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 529 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 530 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 531 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 532 "data/global.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 535 "data/global.pory"
EvoStonesPokemart5:
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
# 543 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 544 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 545 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 548 "data/global.pory"
EvoOtherPokemart3:
# 549 "data/global.pory"
	.2byte ITEM_SACHET
# 550 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 553 "data/global.pory"
EvoOtherPokemart4:
# 554 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 555 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 556 "data/global.pory"
	.2byte ITEM_SACHET
# 557 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 558 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 559 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 560 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 561 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 564 "data/global.pory"
EvoOtherPokemart5:
# 565 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 566 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 567 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 568 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 569 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 570 "data/global.pory"
	.2byte ITEM_UPGRADE
# 571 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 572 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 573 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 574 "data/global.pory"
	.2byte ITEM_SACHET
# 575 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 576 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 577 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 578 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 579 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 580 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 581 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 582 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 583 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 586 "data/global.pory"
EvoExtraPokemart6:
# 587 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 588 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 589 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 590 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 591 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 592 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 593 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 596 "data/global.pory"
EvoExtraPokemart7:
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
# 604 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 605 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 609 "data/global.pory"
	lock
# 610 "data/global.pory"
	faceplayer
# 611 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 614 "data/global.pory"
	setflag FLAG_TEMP_1
# 615 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 616 "data/global.pory"
	setvar VAR_RESULT, 2
# 617 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 618 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 621 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 622 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 623 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 627 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 631 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 632 "data/global.pory"
	special ChooseMonForMoveRelearner
# 633 "data/global.pory"
	waitstate
# 634 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 639 "data/global.pory"
	special IsSelectedMonEgg
# 640 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 643 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 647 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 648 "data/global.pory"
	special TeachMoveRelearnerMove
# 649 "data/global.pory"
	waitstate
# 650 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 656 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 657 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 612 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 619 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 624 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 628 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 635 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 641 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 644 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 661 "data/global.pory"
	lock
# 662 "data/global.pory"
	faceplayer
# 663 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 667 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 668 "data/global.pory"
	waitmessage
# 669 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 670 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 671 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 672 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 673 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 674 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 675 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 676 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 677 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 678 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 679 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 680 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 681 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 682 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 683 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 684 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 685 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 686 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 687 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 688 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 689 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 690 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 691 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 692 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 693 "data/global.pory"
	special GetNumberOfBadges
# 694 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 699 "data/global.pory"
	special ShowBottleCapsWindow
# 700 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 701 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 722 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 723 "data/global.pory"
	special CloseBattlePointsWindow
# 724 "data/global.pory"
	release
	end

EventScript_CapCollector_2:
# 664 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 665 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 695 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BOOSTER_ENERGY
# 696 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_MIRROR_HERB
# 697 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 702 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 703 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 704 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 710 "data/global.pory"
	checkitemspace VAR_0x8009
# 711 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 717 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 718 "data/global.pory"
	additem VAR_0x8009
# 719 "data/global.pory"
	special UpdateBottleCapsWindow
# 720 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 705 "data/global.pory"
	msgbox EventScript_CapCollector_Text_27
# 706 "data/global.pory"
	special CloseBattlePointsWindow
# 707 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 712 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 713 "data/global.pory"
	special CloseBattlePointsWindow
# 714 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 738 "data/global.pory"
	lock
# 739 "data/global.pory"
	faceplayer
# 740 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 741 "data/global.pory"
	waitmessage
# 742 "data/global.pory"
	pokemart AbilityNaturePokemart
# 743 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 744 "data/global.pory"
	release
	end


	.align 2
# 748 "data/global.pory"
AbilityNaturePokemart:
# 749 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 750 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 751 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 752 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 753 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
# 754 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 755 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 756 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 757 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 758 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 759 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 760 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 761 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 762 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 763 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 764 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 765 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 766 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 767 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 768 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 769 "data/global.pory"
	.2byte ITEM_JOLLY_MINT
# 770 "data/global.pory"
	.2byte ITEM_NAIVE_MINT
# 771 "data/global.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 775 "data/global.pory"
	lock
# 776 "data/global.pory"
	faceplayer
# 777 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 778 "data/global.pory"
	waitmessage
# 779 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 780 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 781 "data/global.pory"
	release
	end


	.align 2
# 785 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 786 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 787 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 788 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 789 "data/global.pory"
	.2byte ITEM_MAGNET
# 790 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 791 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 792 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 793 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 794 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 795 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 796 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 797 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 798 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 799 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 800 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 801 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 802 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 803 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 936 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 937 "data/global.pory"
	case 1, GetRivalForNameBox_2
# 939 "data/global.pory"
	case 2, GetRivalForNameBox_3
# 941 "data/global.pory"
	case 3, GetRivalForNameBox_4
# 943 "data/global.pory"
	case 4, GetRivalForNameBox_5
# 946 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 938 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_3:
# 940 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_4:
# 942 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_5:
# 944 "data/global.pory"
	speakername CommonText_Sakura
	return


Mart_EventScript_TMClerk_Text_0:
# 230 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 236 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 238 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 241 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 244 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 247 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 250 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 253 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 256 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 456 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 461 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 462 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 464 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 612 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 615 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 617 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 619 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 621 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 624 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 631 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 641 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 644 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 647 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 669 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 670 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 671 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 672 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 673 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 674 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 675 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 676 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 677 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 678 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 679 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 680 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 681 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 682 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 683 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 684 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 685 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 686 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 687 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 688 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 689 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 690 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 691 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 692 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 695 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_25:
# 696 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_26:
# 697 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_27:
# 705 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_28:
# 712 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 729 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 733 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 806 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 810 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 814 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 818 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 822 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 826 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 830 "data/global.pory"
	.string "Giovanni$"

CommonText_Courtney::
# 834 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 838 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 842 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 846 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 850 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 854 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 858 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 862 "data/global.pory"
	.string "Steven$"

CommonText_Scott::
# 866 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 870 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 874 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 878 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 882 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 886 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 890 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 894 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 898 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 902 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 906 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 910 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 914 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 918 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 922 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 926 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 930 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Baron::
# 950 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 954 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 958 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 962 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 966 "data/global.pory"
	.string "Sakura$"

Text_PokevialSizeIncrease::
# 970 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 974 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 978 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 982 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 986 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 990 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 994 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 998 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 1002 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 1006 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 1010 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 1014 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 1018 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 1022 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 1026 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 1030 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1034 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1038 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1042 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1046 "data/global.pory"
	.string "Stellar Type$"

CommonText_RustboroCity::
# 1050 "data/global.pory"
	.string "Rustboro City$"

CommonText_DewfordTown::
# 1054 "data/global.pory"
	.string "Dewford Town$"

CommonText_MauvilleCity::
# 1058 "data/global.pory"
	.string "Mauville City$"

CommonText_LavaridgeTown::
# 1062 "data/global.pory"
	.string "Lavaridge Town$"

CommonText_PetalburgCity::
# 1066 "data/global.pory"
	.string "Petalburg City$"

CommonText_FortreeCity::
# 1070 "data/global.pory"
	.string "Fortree City$"

CommonText_MossdeepCity::
# 1074 "data/global.pory"
	.string "Mossdeep City$"

CommonText_SootopolisCity::
# 1078 "data/global.pory"
	.string "Sootopolis City$"

CommonText_Roxanne::
# 1082 "data/global.pory"
	.string "Roxanne$"

CommonText_Brawly::
# 1086 "data/global.pory"
	.string "Brawly$"

CommonText_Wattson::
# 1090 "data/global.pory"
	.string "Wattson$"

CommonText_Flannery::
# 1094 "data/global.pory"
	.string "Flannery$"

CommonText_Norman::
# 1098 "data/global.pory"
	.string "Norman$"

CommonText_Winona::
# 1102 "data/global.pory"
	.string "Winona$"

CommonText_LizaAndTate::
# 1106 "data/global.pory"
	.string "Liza and Tate$"

CommonText_Juan::
# 1110 "data/global.pory"
	.string "Juan$"
