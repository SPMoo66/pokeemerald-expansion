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
	.2byte ITEM_EXP_CANDY_XS
# 72 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 75 "data/global.pory"
BadgedPokemart3:
# 76 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 77 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 78 "data/global.pory"
	.2byte ITEM_POTION
# 79 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 80 "data/global.pory"
	.2byte ITEM_REVIVE
# 81 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 82 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 83 "data/global.pory"
	.2byte ITEM_AWAKENING
# 84 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 85 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 86 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 87 "data/global.pory"
	.2byte ITEM_REPEL
# 88 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 89 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 90 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 91 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 94 "data/global.pory"
BadgedPokemart4:
# 95 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 96 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 97 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 98 "data/global.pory"
	.2byte ITEM_POTION
# 99 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 100 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 101 "data/global.pory"
	.2byte ITEM_REVIVE
# 102 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 103 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 104 "data/global.pory"
	.2byte ITEM_AWAKENING
# 105 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 106 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 107 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 108 "data/global.pory"
	.2byte ITEM_REPEL
# 109 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 110 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 111 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 112 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 115 "data/global.pory"
BadgedPokemart5:
# 116 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 117 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 118 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 119 "data/global.pory"
	.2byte ITEM_POTION
# 120 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 121 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 122 "data/global.pory"
	.2byte ITEM_REVIVE
# 123 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 124 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 125 "data/global.pory"
	.2byte ITEM_AWAKENING
# 126 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 127 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 128 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 129 "data/global.pory"
	.2byte ITEM_REPEL
# 130 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 131 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 132 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 133 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 134 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 137 "data/global.pory"
BadgedPokemart6:
# 138 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 139 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 140 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 141 "data/global.pory"
	.2byte ITEM_POTION
# 142 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 143 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 144 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 145 "data/global.pory"
	.2byte ITEM_REVIVE
# 146 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 147 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 148 "data/global.pory"
	.2byte ITEM_AWAKENING
# 149 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 150 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 151 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 152 "data/global.pory"
	.2byte ITEM_REPEL
# 153 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 154 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 155 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 156 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 157 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 160 "data/global.pory"
BadgedPokemart7:
# 161 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 162 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 163 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 164 "data/global.pory"
	.2byte ITEM_POTION
# 165 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 166 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 167 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 168 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 169 "data/global.pory"
	.2byte ITEM_REVIVE
# 170 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 171 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 172 "data/global.pory"
	.2byte ITEM_AWAKENING
# 173 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 174 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 175 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 176 "data/global.pory"
	.2byte ITEM_REPEL
# 177 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 178 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 179 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 180 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 181 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 182 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 186 "data/global.pory"
	lock
# 187 "data/global.pory"
	faceplayer
# 188 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 194 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 195 "data/global.pory"
	waitmessage
# 196 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 197 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 200 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 203 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 206 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 209 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 212 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 215 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 218 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 219 "data/global.pory"
	switch VAR_RESULT
# 220 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 222 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 224 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 226 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 228 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 230 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 232 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 234 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 239 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 241 "data/global.pory"
	release
	end

Mart_EventScript_TMClerk_2:
# 190 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 198 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 201 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 204 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 207 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 210 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 213 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 216 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 221 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 223 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 225 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 227 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 229 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 231 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 233 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 235 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 245 "data/global.pory"
TMMart1:
# 246 "data/global.pory"
	.2byte ITEM_TM33
# 247 "data/global.pory"
	.2byte ITEM_TM47
# 248 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 251 "data/global.pory"
TMMart2:
# 252 "data/global.pory"
	.2byte ITEM_TM21
# 253 "data/global.pory"
	.2byte ITEM_TM26
# 254 "data/global.pory"
	.2byte ITEM_TM29
# 255 "data/global.pory"
	.2byte ITEM_TM31
# 256 "data/global.pory"
	.2byte ITEM_TM37
# 257 "data/global.pory"
	.2byte ITEM_TM81
# 258 "data/global.pory"
	.2byte ITEM_TM109
# 259 "data/global.pory"
	.2byte ITEM_TM110
# 260 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 263 "data/global.pory"
TMMart3:
# 264 "data/global.pory"
	.2byte ITEM_TM01
# 265 "data/global.pory"
	.2byte ITEM_TM02
# 266 "data/global.pory"
	.2byte ITEM_TM03
# 267 "data/global.pory"
	.2byte ITEM_TM04
# 268 "data/global.pory"
	.2byte ITEM_TM19
# 269 "data/global.pory"
	.2byte ITEM_TM20
# 270 "data/global.pory"
	.2byte ITEM_TM30
# 271 "data/global.pory"
	.2byte ITEM_TM39
# 272 "data/global.pory"
	.2byte ITEM_TM44
# 273 "data/global.pory"
	.2byte ITEM_TM48
# 274 "data/global.pory"
	.2byte ITEM_TM64
# 275 "data/global.pory"
	.2byte ITEM_TM68
# 276 "data/global.pory"
	.2byte ITEM_TM76
# 277 "data/global.pory"
	.2byte ITEM_TM94
# 278 "data/global.pory"
	.2byte ITEM_TM103
# 279 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 282 "data/global.pory"
TMMart4:
# 283 "data/global.pory"
	.2byte ITEM_TM10
# 284 "data/global.pory"
	.2byte ITEM_TM15
# 285 "data/global.pory"
	.2byte ITEM_TM16
# 286 "data/global.pory"
	.2byte ITEM_TM16
# 287 "data/global.pory"
	.2byte ITEM_TM17
# 288 "data/global.pory"
	.2byte ITEM_TM18
# 289 "data/global.pory"
	.2byte ITEM_TM25
# 290 "data/global.pory"
	.2byte ITEM_TM32
# 291 "data/global.pory"
	.2byte ITEM_TM65
# 292 "data/global.pory"
	.2byte ITEM_TM73
# 293 "data/global.pory"
	.2byte ITEM_TM75
# 294 "data/global.pory"
	.2byte ITEM_TM82
# 295 "data/global.pory"
	.2byte ITEM_TM87
# 296 "data/global.pory"
	.2byte ITEM_TM101
# 297 "data/global.pory"
	.2byte ITEM_TM104
# 298 "data/global.pory"
	.2byte ITEM_TM108
# 299 "data/global.pory"
	.2byte ITEM_TM114
# 300 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 303 "data/global.pory"
TMMart5:
# 304 "data/global.pory"
	.2byte ITEM_TM05
# 305 "data/global.pory"
	.2byte ITEM_TM06
# 306 "data/global.pory"
	.2byte ITEM_TM07
# 307 "data/global.pory"
	.2byte ITEM_TM08
# 308 "data/global.pory"
	.2byte ITEM_TM11
# 309 "data/global.pory"
	.2byte ITEM_TM12
# 310 "data/global.pory"
	.2byte ITEM_TM13
# 311 "data/global.pory"
	.2byte ITEM_TM24
# 312 "data/global.pory"
	.2byte ITEM_TM28
# 313 "data/global.pory"
	.2byte ITEM_TM45
# 314 "data/global.pory"
	.2byte ITEM_TM50
# 315 "data/global.pory"
	.2byte ITEM_TM54
# 316 "data/global.pory"
	.2byte ITEM_TM60
# 317 "data/global.pory"
	.2byte ITEM_TM61
# 318 "data/global.pory"
	.2byte ITEM_TM66
# 319 "data/global.pory"
	.2byte ITEM_TM71
# 320 "data/global.pory"
	.2byte ITEM_TM78
# 321 "data/global.pory"
	.2byte ITEM_TM83
# 322 "data/global.pory"
	.2byte ITEM_TM85
# 323 "data/global.pory"
	.2byte ITEM_TM86
# 324 "data/global.pory"
	.2byte ITEM_TM88
# 325 "data/global.pory"
	.2byte ITEM_TM99
# 326 "data/global.pory"
	.2byte ITEM_TM111
# 327 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 330 "data/global.pory"
TMMart6:
# 331 "data/global.pory"
	.2byte ITEM_TM09
# 332 "data/global.pory"
	.2byte ITEM_TM22
# 333 "data/global.pory"
	.2byte ITEM_TM23
# 334 "data/global.pory"
	.2byte ITEM_TM41
# 335 "data/global.pory"
	.2byte ITEM_TM49
# 336 "data/global.pory"
	.2byte ITEM_TM51
# 337 "data/global.pory"
	.2byte ITEM_TM52
# 338 "data/global.pory"
	.2byte ITEM_TM56
# 339 "data/global.pory"
	.2byte ITEM_TM57
# 340 "data/global.pory"
	.2byte ITEM_TM59
# 341 "data/global.pory"
	.2byte ITEM_TM62
# 342 "data/global.pory"
	.2byte ITEM_TM67
# 343 "data/global.pory"
	.2byte ITEM_TM69
# 344 "data/global.pory"
	.2byte ITEM_TM74
# 345 "data/global.pory"
	.2byte ITEM_TM79
# 346 "data/global.pory"
	.2byte ITEM_TM89
# 347 "data/global.pory"
	.2byte ITEM_TM90
# 348 "data/global.pory"
	.2byte ITEM_TM91
# 349 "data/global.pory"
	.2byte ITEM_TM92
# 350 "data/global.pory"
	.2byte ITEM_TM97
# 351 "data/global.pory"
	.2byte ITEM_TM98
# 352 "data/global.pory"
	.2byte ITEM_TM100
# 353 "data/global.pory"
	.2byte ITEM_TM102
# 354 "data/global.pory"
	.2byte ITEM_TM105
# 355 "data/global.pory"
	.2byte ITEM_TM106
# 356 "data/global.pory"
	.2byte ITEM_TM113
# 357 "data/global.pory"
	.2byte ITEM_TM117
# 358 "data/global.pory"
	.2byte ITEM_TM118
# 359 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 362 "data/global.pory"
TMMart7:
# 363 "data/global.pory"
	.2byte ITEM_TM36
# 364 "data/global.pory"
	.2byte ITEM_TM38
# 365 "data/global.pory"
	.2byte ITEM_TM42
# 366 "data/global.pory"
	.2byte ITEM_TM53
# 367 "data/global.pory"
	.2byte ITEM_TM58
# 368 "data/global.pory"
	.2byte ITEM_TM63
# 369 "data/global.pory"
	.2byte ITEM_TM70
# 370 "data/global.pory"
	.2byte ITEM_TM72
# 371 "data/global.pory"
	.2byte ITEM_TM77
# 372 "data/global.pory"
	.2byte ITEM_TM84
# 373 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 376 "data/global.pory"
TMMart8:
# 377 "data/global.pory"
	.2byte ITEM_TM43
# 378 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 383 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 384 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 386 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 388 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 390 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 393 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 385 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 387 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 389 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 391 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 397 "data/global.pory"

# 398 "data/global.pory"
Common_EventScript_GymNurse::
# 399 "data/global.pory"
	lock
# 400 "data/global.pory"
	faceplayer
# 401 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 402 "data/global.pory"
	closemessage
# 403 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 404 "data/global.pory"
	releaseall
# 405 "data/global.pory"
	end
# 406 "data/global.pory"

# 407 "data/global.pory"
gText_GymNurseHeal::
# 408 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 412 "data/global.pory"
	lock
# 413 "data/global.pory"
	faceplayer
# 414 "data/global.pory"
	special GetNumberOfBadges
# 415 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 416 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 420 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 421 "data/global.pory"
	waitmessage
# 422 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 423 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 424 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 427 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 428 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 445 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 463 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 480 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 482 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_2:
# 417 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 425 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 429 "data/global.pory"
	switch VAR_TEMP_0
# 430 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 431 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 432 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 433 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 434 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 436 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 437 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 438 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 439 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 446 "data/global.pory"
	switch VAR_TEMP_0
# 447 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 448 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 449 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 450 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 452 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 454 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 455 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 456 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 457 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 464 "data/global.pory"
	switch VAR_TEMP_0
# 465 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 466 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 467 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 468 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 469 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 470 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 471 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 473 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 474 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 435 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 440 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 451 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 453 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 458 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 472 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 475 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 486 "data/global.pory"
EvoStonesPokemart3:
# 487 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 488 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 489 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 490 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 491 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 492 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 493 "data/global.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 496 "data/global.pory"
EvoStonesPokemart5:
# 497 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 498 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 499 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 500 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 501 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 502 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 503 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 504 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 505 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 506 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 509 "data/global.pory"
EvoOtherPokemart3:
# 510 "data/global.pory"
	.2byte ITEM_SACHET
# 511 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 514 "data/global.pory"
EvoOtherPokemart4:
# 515 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 516 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 517 "data/global.pory"
	.2byte ITEM_SACHET
# 518 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 519 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 520 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 521 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 522 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 525 "data/global.pory"
EvoOtherPokemart5:
# 526 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 527 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 528 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 529 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 530 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 531 "data/global.pory"
	.2byte ITEM_UPGRADE
# 532 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 533 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 534 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 535 "data/global.pory"
	.2byte ITEM_SACHET
# 536 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 537 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 538 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 539 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 540 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 541 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 542 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 543 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 544 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 547 "data/global.pory"
EvoExtraPokemart6:
# 548 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 549 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 550 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 551 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 552 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 553 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 554 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 557 "data/global.pory"
EvoExtraPokemart7:
# 558 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 559 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 560 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 561 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 562 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 563 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 564 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 565 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 566 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 570 "data/global.pory"
	lock
# 571 "data/global.pory"
	faceplayer
# 572 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 575 "data/global.pory"
	setflag FLAG_TEMP_1
# 576 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 577 "data/global.pory"
	setvar VAR_RESULT, 2
# 578 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 579 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 582 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 583 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 584 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 588 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 592 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 593 "data/global.pory"
	special ChooseMonForMoveRelearner
# 594 "data/global.pory"
	waitstate
# 595 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 600 "data/global.pory"
	special IsSelectedMonEgg
# 601 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 604 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 608 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 609 "data/global.pory"
	special TeachMoveRelearnerMove
# 610 "data/global.pory"
	waitstate
# 611 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 617 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 618 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 573 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 580 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 585 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 589 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 596 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 602 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 605 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 622 "data/global.pory"
	lock
# 623 "data/global.pory"
	faceplayer
# 624 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 628 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 629 "data/global.pory"
	waitmessage
# 630 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 631 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 632 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 633 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 634 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 635 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 636 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 637 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 638 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 639 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 640 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 641 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 642 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 643 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 644 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 645 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 646 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 647 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 648 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 649 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 650 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 651 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 652 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 653 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 654 "data/global.pory"
	special GetNumberOfBadges
# 655 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 660 "data/global.pory"
	special ShowBottleCapsWindow
# 661 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 662 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 683 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 684 "data/global.pory"
	special CloseBattlePointsWindow
# 685 "data/global.pory"
	release
	end

EventScript_CapCollector_2:
# 625 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 626 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 656 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BOOSTER_ENERGY
# 657 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_MIRROR_HERB
# 658 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 663 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 664 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 665 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 671 "data/global.pory"
	checkitemspace VAR_0x8009
# 672 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 678 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 679 "data/global.pory"
	additem VAR_0x8009
# 680 "data/global.pory"
	special UpdateBottleCapsWindow
# 681 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 666 "data/global.pory"
	msgbox EventScript_CapCollector_Text_27
# 667 "data/global.pory"
	special CloseBattlePointsWindow
# 668 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 673 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 674 "data/global.pory"
	special CloseBattlePointsWindow
# 675 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 699 "data/global.pory"
	lock
# 700 "data/global.pory"
	faceplayer
# 701 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 702 "data/global.pory"
	waitmessage
# 703 "data/global.pory"
	pokemart AbilityNaturePokemart
# 704 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 705 "data/global.pory"
	release
	end


	.align 2
# 709 "data/global.pory"
AbilityNaturePokemart:
# 710 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 711 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 712 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 713 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 714 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 715 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 716 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 717 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 718 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 719 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 720 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 721 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 722 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 723 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 724 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 725 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 726 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 727 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 728 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 729 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_NONE

Mart_EventScript_TMClerk_Text_0:
# 190 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 196 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 198 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 201 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 204 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 207 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 210 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 213 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 216 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 417 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 422 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 423 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 425 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 573 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 576 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 578 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 580 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 582 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 585 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 592 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 602 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 605 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 608 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 630 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 631 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 632 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 633 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 634 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 635 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 636 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 637 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 638 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 639 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 640 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 641 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 642 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 643 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 644 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 645 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 646 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 647 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 648 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 649 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 650 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 651 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 652 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 653 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 656 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_25:
# 657 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_26:
# 658 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_27:
# 666 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_28:
# 673 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 690 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 694 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"
