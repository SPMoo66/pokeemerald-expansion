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
	.2byte ITEM_TM17
# 287 "data/global.pory"
	.2byte ITEM_TM18
# 288 "data/global.pory"
	.2byte ITEM_TM25
# 289 "data/global.pory"
	.2byte ITEM_TM32
# 290 "data/global.pory"
	.2byte ITEM_TM65
# 291 "data/global.pory"
	.2byte ITEM_TM73
# 292 "data/global.pory"
	.2byte ITEM_TM75
# 293 "data/global.pory"
	.2byte ITEM_TM82
# 294 "data/global.pory"
	.2byte ITEM_TM87
# 295 "data/global.pory"
	.2byte ITEM_TM101
# 296 "data/global.pory"
	.2byte ITEM_TM104
# 297 "data/global.pory"
	.2byte ITEM_TM108
# 298 "data/global.pory"
	.2byte ITEM_TM114
# 299 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 302 "data/global.pory"
TMMart5:
# 303 "data/global.pory"
	.2byte ITEM_TM05
# 304 "data/global.pory"
	.2byte ITEM_TM06
# 305 "data/global.pory"
	.2byte ITEM_TM07
# 306 "data/global.pory"
	.2byte ITEM_TM08
# 307 "data/global.pory"
	.2byte ITEM_TM11
# 308 "data/global.pory"
	.2byte ITEM_TM12
# 309 "data/global.pory"
	.2byte ITEM_TM13
# 310 "data/global.pory"
	.2byte ITEM_TM24
# 311 "data/global.pory"
	.2byte ITEM_TM28
# 312 "data/global.pory"
	.2byte ITEM_TM45
# 313 "data/global.pory"
	.2byte ITEM_TM50
# 314 "data/global.pory"
	.2byte ITEM_TM54
# 315 "data/global.pory"
	.2byte ITEM_TM60
# 316 "data/global.pory"
	.2byte ITEM_TM61
# 317 "data/global.pory"
	.2byte ITEM_TM66
# 318 "data/global.pory"
	.2byte ITEM_TM71
# 319 "data/global.pory"
	.2byte ITEM_TM78
# 320 "data/global.pory"
	.2byte ITEM_TM83
# 321 "data/global.pory"
	.2byte ITEM_TM85
# 322 "data/global.pory"
	.2byte ITEM_TM86
# 323 "data/global.pory"
	.2byte ITEM_TM88
# 324 "data/global.pory"
	.2byte ITEM_TM99
# 325 "data/global.pory"
	.2byte ITEM_TM111
# 326 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 329 "data/global.pory"
TMMart6:
# 330 "data/global.pory"
	.2byte ITEM_TM09
# 331 "data/global.pory"
	.2byte ITEM_TM22
# 332 "data/global.pory"
	.2byte ITEM_TM23
# 333 "data/global.pory"
	.2byte ITEM_TM41
# 334 "data/global.pory"
	.2byte ITEM_TM49
# 335 "data/global.pory"
	.2byte ITEM_TM51
# 336 "data/global.pory"
	.2byte ITEM_TM52
# 337 "data/global.pory"
	.2byte ITEM_TM56
# 338 "data/global.pory"
	.2byte ITEM_TM57
# 339 "data/global.pory"
	.2byte ITEM_TM59
# 340 "data/global.pory"
	.2byte ITEM_TM62
# 341 "data/global.pory"
	.2byte ITEM_TM67
# 342 "data/global.pory"
	.2byte ITEM_TM69
# 343 "data/global.pory"
	.2byte ITEM_TM74
# 344 "data/global.pory"
	.2byte ITEM_TM79
# 345 "data/global.pory"
	.2byte ITEM_TM89
# 346 "data/global.pory"
	.2byte ITEM_TM90
# 347 "data/global.pory"
	.2byte ITEM_TM91
# 348 "data/global.pory"
	.2byte ITEM_TM92
# 349 "data/global.pory"
	.2byte ITEM_TM97
# 350 "data/global.pory"
	.2byte ITEM_TM98
# 351 "data/global.pory"
	.2byte ITEM_TM100
# 352 "data/global.pory"
	.2byte ITEM_TM102
# 353 "data/global.pory"
	.2byte ITEM_TM105
# 354 "data/global.pory"
	.2byte ITEM_TM106
# 355 "data/global.pory"
	.2byte ITEM_TM113
# 356 "data/global.pory"
	.2byte ITEM_TM117
# 357 "data/global.pory"
	.2byte ITEM_TM118
# 358 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 361 "data/global.pory"
TMMart7:
# 362 "data/global.pory"
	.2byte ITEM_TM36
# 363 "data/global.pory"
	.2byte ITEM_TM38
# 364 "data/global.pory"
	.2byte ITEM_TM42
# 365 "data/global.pory"
	.2byte ITEM_TM53
# 366 "data/global.pory"
	.2byte ITEM_TM58
# 367 "data/global.pory"
	.2byte ITEM_TM63
# 368 "data/global.pory"
	.2byte ITEM_TM70
# 369 "data/global.pory"
	.2byte ITEM_TM72
# 370 "data/global.pory"
	.2byte ITEM_TM77
# 371 "data/global.pory"
	.2byte ITEM_TM84
# 372 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 375 "data/global.pory"
TMMart8:
# 376 "data/global.pory"
	.2byte ITEM_TM43
# 377 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 382 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 383 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 385 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 387 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 389 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 392 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 384 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 386 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 388 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 390 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 396 "data/global.pory"

# 397 "data/global.pory"
Common_EventScript_GymNurse::
# 398 "data/global.pory"
	lock
# 399 "data/global.pory"
	faceplayer
# 400 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 401 "data/global.pory"
	closemessage
# 402 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 403 "data/global.pory"
	releaseall
# 404 "data/global.pory"
	end
# 405 "data/global.pory"

# 406 "data/global.pory"
gText_GymNurseHeal::
# 407 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 411 "data/global.pory"
	lock
# 412 "data/global.pory"
	faceplayer
# 413 "data/global.pory"
	special GetNumberOfBadges
# 414 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 415 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 419 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 420 "data/global.pory"
	waitmessage
# 421 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 422 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 423 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 426 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 427 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 444 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 462 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 479 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 481 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_2:
# 416 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 424 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 428 "data/global.pory"
	switch VAR_TEMP_0
# 429 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 430 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 431 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 432 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 433 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 435 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 436 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 437 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 438 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 445 "data/global.pory"
	switch VAR_TEMP_0
# 446 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 447 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 448 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 449 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 451 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 453 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 454 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 455 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 456 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 463 "data/global.pory"
	switch VAR_TEMP_0
# 464 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 465 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 466 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 467 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 468 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 469 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 470 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 472 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 473 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 434 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 439 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 450 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 452 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 457 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 471 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 474 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 485 "data/global.pory"
EvoStonesPokemart3:
# 486 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 487 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 488 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 489 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 490 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 491 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 492 "data/global.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 495 "data/global.pory"
EvoStonesPokemart5:
# 496 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 497 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 498 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 499 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 500 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 501 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 502 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 503 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 504 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 505 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 508 "data/global.pory"
EvoOtherPokemart3:
# 509 "data/global.pory"
	.2byte ITEM_SACHET
# 510 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 513 "data/global.pory"
EvoOtherPokemart4:
# 514 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 515 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 516 "data/global.pory"
	.2byte ITEM_SACHET
# 517 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 518 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 519 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 520 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 521 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 524 "data/global.pory"
EvoOtherPokemart5:
# 525 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 526 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 527 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 528 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 529 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 530 "data/global.pory"
	.2byte ITEM_UPGRADE
# 531 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 532 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 533 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 534 "data/global.pory"
	.2byte ITEM_SACHET
# 535 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 536 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 537 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 538 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 539 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 540 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 541 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 542 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 543 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 546 "data/global.pory"
EvoExtraPokemart6:
# 547 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 548 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 549 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 550 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 551 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 552 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 553 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 556 "data/global.pory"
EvoExtraPokemart7:
# 557 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 558 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 559 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 560 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 561 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 562 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 563 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 564 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 565 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 569 "data/global.pory"
	lock
# 570 "data/global.pory"
	faceplayer
# 571 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 574 "data/global.pory"
	setflag FLAG_TEMP_1
# 575 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 576 "data/global.pory"
	setvar VAR_RESULT, 2
# 577 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 578 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 581 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 582 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 583 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 587 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 591 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 592 "data/global.pory"
	special ChooseMonForMoveRelearner
# 593 "data/global.pory"
	waitstate
# 594 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 599 "data/global.pory"
	special IsSelectedMonEgg
# 600 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 603 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 607 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 608 "data/global.pory"
	special TeachMoveRelearnerMove
# 609 "data/global.pory"
	waitstate
# 610 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 616 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 617 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 572 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 579 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 584 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 588 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 595 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 601 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 604 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 621 "data/global.pory"
	lock
# 622 "data/global.pory"
	faceplayer
# 623 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 627 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 628 "data/global.pory"
	waitmessage
# 629 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 630 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 631 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 632 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 633 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 634 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 635 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 636 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 637 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 638 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 639 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 640 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 641 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 642 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 643 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 644 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 645 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 646 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 647 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 648 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 649 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 650 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 651 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 652 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 653 "data/global.pory"
	special GetNumberOfBadges
# 654 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 659 "data/global.pory"
	special ShowBottleCapsWindow
# 660 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 661 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 682 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 683 "data/global.pory"
	special CloseBattlePointsWindow
# 684 "data/global.pory"
	release
	end

EventScript_CapCollector_2:
# 624 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 625 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 655 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BOOSTER_ENERGY
# 656 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_MIRROR_HERB
# 657 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 662 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 663 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 664 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 670 "data/global.pory"
	checkitemspace VAR_0x8009
# 671 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 677 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 678 "data/global.pory"
	additem VAR_0x8009
# 679 "data/global.pory"
	special UpdateBottleCapsWindow
# 680 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 665 "data/global.pory"
	msgbox EventScript_CapCollector_Text_27
# 666 "data/global.pory"
	special CloseBattlePointsWindow
# 667 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 672 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 673 "data/global.pory"
	special CloseBattlePointsWindow
# 674 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 698 "data/global.pory"
	lock
# 699 "data/global.pory"
	faceplayer
# 700 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 701 "data/global.pory"
	waitmessage
# 702 "data/global.pory"
	pokemart AbilityNaturePokemart
# 703 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 704 "data/global.pory"
	release
	end


	.align 2
# 708 "data/global.pory"
AbilityNaturePokemart:
# 709 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 710 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 711 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 712 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 713 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 714 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 715 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 716 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 717 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 718 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 719 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 720 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 721 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 722 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 723 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 724 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 725 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 726 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 727 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 728 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 732 "data/global.pory"
	lock
# 733 "data/global.pory"
	faceplayer
# 734 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 735 "data/global.pory"
	waitmessage
# 736 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 737 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 738 "data/global.pory"
	release
	end


	.align 2
# 742 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 743 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 744 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 745 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 746 "data/global.pory"
	.2byte ITEM_MAGNET
# 747 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 748 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 749 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 750 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 751 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 752 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 753 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 754 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 755 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 756 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 757 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 758 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 759 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 760 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 814 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 815 "data/global.pory"
	case 1, GetRivalForNameBox_2
# 817 "data/global.pory"
	case 2, GetRivalForNameBox_3
# 819 "data/global.pory"
	case 3, GetRivalForNameBox_4
# 821 "data/global.pory"
	case 4, GetRivalForNameBox_5
# 824 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 816 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_3:
# 818 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_4:
# 820 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_5:
# 822 "data/global.pory"
	speakername CommonText_Sakura
	return


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
# 416 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 421 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 422 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 424 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 572 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 575 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 577 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 579 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 581 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 584 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 591 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 601 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 604 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 607 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 629 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 630 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 631 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 632 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 633 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 634 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 635 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 636 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 637 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 638 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 639 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 640 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 641 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 642 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 643 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 644 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 645 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 646 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 647 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 648 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 649 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 650 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 651 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 652 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 655 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_25:
# 656 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_26:
# 657 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_27:
# 665 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_28:
# 672 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 689 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 693 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 763 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 767 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 771 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Archie::
# 775 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 779 "data/global.pory"
	.string "Maxie$"

CommonText_May::
# 783 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 787 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 791 "data/global.pory"
	.string "Wally$"

CommonText_Scott::
# 795 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 799 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 803 "data/global.pory"
	.string "Mr. Stone$"

CommonText_Peeko::
# 807 "data/global.pory"
	.string "Peeko$"

CommonText_Baron::
# 828 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 832 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 836 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 840 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 844 "data/global.pory"
	.string "Sakura$"
