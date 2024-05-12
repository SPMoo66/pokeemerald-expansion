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
# 17 "data/global.pory"
	case 5, Mart_EventScript_Clerk_7
# 19 "data/global.pory"
	case 6, Mart_EventScript_Clerk_8
# 21 "data/global.pory"
	case 7, Mart_EventScript_Clerk_9
# 22 "data/global.pory"
	case 8, Mart_EventScript_Clerk_9
Mart_EventScript_Clerk_1:
# 27 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 28 "data/global.pory"
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
# 18 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 20 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 23 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 32 "data/global.pory"
BadgedPokemart0:
# 33 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 34 "data/global.pory"
	.2byte ITEM_POTION
# 35 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 36 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 37 "data/global.pory"
	.2byte ITEM_AWAKENING
# 38 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 39 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 40 "data/global.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 43 "data/global.pory"
BadgedPokemart1:
# 44 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 45 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 46 "data/global.pory"
	.2byte ITEM_POTION
# 47 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 48 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 49 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 50 "data/global.pory"
	.2byte ITEM_AWAKENING
# 51 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 52 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 53 "data/global.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 56 "data/global.pory"
BadgedPokemart2:
# 57 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 58 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 59 "data/global.pory"
	.2byte ITEM_POTION
# 60 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 61 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 62 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 63 "data/global.pory"
	.2byte ITEM_AWAKENING
# 64 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 65 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 66 "data/global.pory"
	.2byte ITEM_REPEL
# 67 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

	.align 2
# 70 "data/global.pory"
BadgedPokemart3:
# 71 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 72 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 73 "data/global.pory"
	.2byte ITEM_POTION
# 74 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 75 "data/global.pory"
	.2byte ITEM_REVIVE
# 76 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 77 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 78 "data/global.pory"
	.2byte ITEM_AWAKENING
# 79 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 80 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 81 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 82 "data/global.pory"
	.2byte ITEM_REPEL
# 83 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 84 "data/global.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

	.align 2
# 87 "data/global.pory"
BadgedPokemart4:
# 88 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 89 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 90 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 91 "data/global.pory"
	.2byte ITEM_POTION
# 92 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 93 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 94 "data/global.pory"
	.2byte ITEM_REVIVE
# 95 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 96 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 97 "data/global.pory"
	.2byte ITEM_AWAKENING
# 98 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 99 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 100 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 101 "data/global.pory"
	.2byte ITEM_REPEL
# 102 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 103 "data/global.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

	.align 2
# 106 "data/global.pory"
BadgedPokemart6:
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
	.2byte ITEM_MAX_POTION
# 114 "data/global.pory"
	.2byte ITEM_REVIVE
# 115 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 116 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 117 "data/global.pory"
	.2byte ITEM_AWAKENING
# 118 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 119 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 120 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 121 "data/global.pory"
	.2byte ITEM_REPEL
# 122 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 123 "data/global.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

	.align 2
# 126 "data/global.pory"
BadgedPokemart7:
# 127 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 128 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 129 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 130 "data/global.pory"
	.2byte ITEM_POTION
# 131 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 132 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 133 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 134 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
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
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 148 "data/global.pory"
	lock
# 149 "data/global.pory"
	faceplayer
# 150 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 156 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 157 "data/global.pory"
	waitmessage
# 158 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 159 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 162 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 165 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 168 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 171 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 174 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 177 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 180 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 181 "data/global.pory"
	switch VAR_RESULT
# 182 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 184 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 186 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 188 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 190 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 192 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 194 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 196 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 201 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 203 "data/global.pory"
	release
	end

Mart_EventScript_TMClerk_2:
# 152 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 160 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 163 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 166 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 169 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 172 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 175 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 178 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 183 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 185 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 187 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 189 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 191 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 193 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 195 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 197 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 207 "data/global.pory"
TMMart1:
# 208 "data/global.pory"
	.2byte ITEM_TM33
# 209 "data/global.pory"
	.2byte ITEM_TM47
# 210 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 213 "data/global.pory"
TMMart2:
# 214 "data/global.pory"
	.2byte ITEM_TM21
# 215 "data/global.pory"
	.2byte ITEM_TM26
# 216 "data/global.pory"
	.2byte ITEM_TM29
# 217 "data/global.pory"
	.2byte ITEM_TM31
# 218 "data/global.pory"
	.2byte ITEM_TM37
# 219 "data/global.pory"
	.2byte ITEM_TM81
# 220 "data/global.pory"
	.2byte ITEM_TM109
# 221 "data/global.pory"
	.2byte ITEM_TM110
# 222 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 225 "data/global.pory"
TMMart3:
# 226 "data/global.pory"
	.2byte ITEM_TM01
# 227 "data/global.pory"
	.2byte ITEM_TM02
# 228 "data/global.pory"
	.2byte ITEM_TM03
# 229 "data/global.pory"
	.2byte ITEM_TM04
# 230 "data/global.pory"
	.2byte ITEM_TM19
# 231 "data/global.pory"
	.2byte ITEM_TM20
# 232 "data/global.pory"
	.2byte ITEM_TM30
# 233 "data/global.pory"
	.2byte ITEM_TM39
# 234 "data/global.pory"
	.2byte ITEM_TM44
# 235 "data/global.pory"
	.2byte ITEM_TM48
# 236 "data/global.pory"
	.2byte ITEM_TM64
# 237 "data/global.pory"
	.2byte ITEM_TM68
# 238 "data/global.pory"
	.2byte ITEM_TM76
# 239 "data/global.pory"
	.2byte ITEM_TM94
# 240 "data/global.pory"
	.2byte ITEM_TM103
# 241 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 244 "data/global.pory"
TMMart4:
# 245 "data/global.pory"
	.2byte ITEM_TM10
# 246 "data/global.pory"
	.2byte ITEM_TM15
# 247 "data/global.pory"
	.2byte ITEM_TM16
# 248 "data/global.pory"
	.2byte ITEM_TM16
# 249 "data/global.pory"
	.2byte ITEM_TM17
# 250 "data/global.pory"
	.2byte ITEM_TM18
# 251 "data/global.pory"
	.2byte ITEM_TM25
# 252 "data/global.pory"
	.2byte ITEM_TM32
# 253 "data/global.pory"
	.2byte ITEM_TM65
# 254 "data/global.pory"
	.2byte ITEM_TM73
# 255 "data/global.pory"
	.2byte ITEM_TM75
# 256 "data/global.pory"
	.2byte ITEM_TM82
# 257 "data/global.pory"
	.2byte ITEM_TM87
# 258 "data/global.pory"
	.2byte ITEM_TM101
# 259 "data/global.pory"
	.2byte ITEM_TM104
# 260 "data/global.pory"
	.2byte ITEM_TM108
# 261 "data/global.pory"
	.2byte ITEM_TM114
# 262 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 265 "data/global.pory"
TMMart5:
# 266 "data/global.pory"
	.2byte ITEM_TM05
# 267 "data/global.pory"
	.2byte ITEM_TM06
# 268 "data/global.pory"
	.2byte ITEM_TM07
# 269 "data/global.pory"
	.2byte ITEM_TM08
# 270 "data/global.pory"
	.2byte ITEM_TM11
# 271 "data/global.pory"
	.2byte ITEM_TM12
# 272 "data/global.pory"
	.2byte ITEM_TM13
# 273 "data/global.pory"
	.2byte ITEM_TM24
# 274 "data/global.pory"
	.2byte ITEM_TM28
# 275 "data/global.pory"
	.2byte ITEM_TM45
# 276 "data/global.pory"
	.2byte ITEM_TM50
# 277 "data/global.pory"
	.2byte ITEM_TM54
# 278 "data/global.pory"
	.2byte ITEM_TM60
# 279 "data/global.pory"
	.2byte ITEM_TM61
# 280 "data/global.pory"
	.2byte ITEM_TM66
# 281 "data/global.pory"
	.2byte ITEM_TM71
# 282 "data/global.pory"
	.2byte ITEM_TM78
# 283 "data/global.pory"
	.2byte ITEM_TM83
# 284 "data/global.pory"
	.2byte ITEM_TM85
# 285 "data/global.pory"
	.2byte ITEM_TM86
# 286 "data/global.pory"
	.2byte ITEM_TM88
# 287 "data/global.pory"
	.2byte ITEM_TM99
# 288 "data/global.pory"
	.2byte ITEM_TM111
# 289 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 292 "data/global.pory"
TMMart6:
# 293 "data/global.pory"
	.2byte ITEM_TM09
# 294 "data/global.pory"
	.2byte ITEM_TM22
# 295 "data/global.pory"
	.2byte ITEM_TM23
# 296 "data/global.pory"
	.2byte ITEM_TM41
# 297 "data/global.pory"
	.2byte ITEM_TM49
# 298 "data/global.pory"
	.2byte ITEM_TM51
# 299 "data/global.pory"
	.2byte ITEM_TM52
# 300 "data/global.pory"
	.2byte ITEM_TM56
# 301 "data/global.pory"
	.2byte ITEM_TM57
# 302 "data/global.pory"
	.2byte ITEM_TM59
# 303 "data/global.pory"
	.2byte ITEM_TM62
# 304 "data/global.pory"
	.2byte ITEM_TM67
# 305 "data/global.pory"
	.2byte ITEM_TM69
# 306 "data/global.pory"
	.2byte ITEM_TM74
# 307 "data/global.pory"
	.2byte ITEM_TM79
# 308 "data/global.pory"
	.2byte ITEM_TM89
# 309 "data/global.pory"
	.2byte ITEM_TM90
# 310 "data/global.pory"
	.2byte ITEM_TM91
# 311 "data/global.pory"
	.2byte ITEM_TM92
# 312 "data/global.pory"
	.2byte ITEM_TM97
# 313 "data/global.pory"
	.2byte ITEM_TM98
# 314 "data/global.pory"
	.2byte ITEM_TM100
# 315 "data/global.pory"
	.2byte ITEM_TM102
# 316 "data/global.pory"
	.2byte ITEM_TM105
# 317 "data/global.pory"
	.2byte ITEM_TM106
# 318 "data/global.pory"
	.2byte ITEM_TM113
# 319 "data/global.pory"
	.2byte ITEM_TM117
# 320 "data/global.pory"
	.2byte ITEM_TM118
# 321 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 324 "data/global.pory"
TMMart7:
# 325 "data/global.pory"
	.2byte ITEM_TM36
# 326 "data/global.pory"
	.2byte ITEM_TM38
# 327 "data/global.pory"
	.2byte ITEM_TM42
# 328 "data/global.pory"
	.2byte ITEM_TM53
# 329 "data/global.pory"
	.2byte ITEM_TM58
# 330 "data/global.pory"
	.2byte ITEM_TM63
# 331 "data/global.pory"
	.2byte ITEM_TM70
# 332 "data/global.pory"
	.2byte ITEM_TM72
# 333 "data/global.pory"
	.2byte ITEM_TM77
# 334 "data/global.pory"
	.2byte ITEM_TM84
# 335 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 338 "data/global.pory"
TMMart8:
# 339 "data/global.pory"
	.2byte ITEM_TM43
# 340 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 345 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 346 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 348 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 350 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 352 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 355 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 347 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 349 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 351 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 353 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 359 "data/global.pory"

# 360 "data/global.pory"
Common_EventScript_GymNurse::
# 361 "data/global.pory"
	lock
# 362 "data/global.pory"
	faceplayer
# 363 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 364 "data/global.pory"
	closemessage
# 365 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 366 "data/global.pory"
	releaseall
# 367 "data/global.pory"
	end
# 368 "data/global.pory"

# 369 "data/global.pory"
gText_GymNurseHeal::
# 370 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 374 "data/global.pory"
	lock
# 375 "data/global.pory"
	faceplayer
# 376 "data/global.pory"
	special GetNumberOfBadges
# 377 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 378 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 382 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 383 "data/global.pory"
	waitmessage
# 384 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 385 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 0
# 386 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_lt Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 389 "data/global.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 390 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 407 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 425 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 442 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 444 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_2:
# 379 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 387 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 0
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 391 "data/global.pory"
	switch VAR_TEMP_0
# 392 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 393 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 394 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 395 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 396 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 398 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 399 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 400 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 401 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 408 "data/global.pory"
	switch VAR_TEMP_0
# 409 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 410 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 411 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 412 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 414 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 416 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 417 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 418 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 419 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 426 "data/global.pory"
	switch VAR_TEMP_0
# 427 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 428 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 429 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 430 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 431 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 432 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 433 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 435 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 436 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 397 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 402 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 413 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 415 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 420 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 434 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 437 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 448 "data/global.pory"
EvoStonesPokemart3:
# 449 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 450 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 451 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 452 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 453 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 454 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 455 "data/global.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 458 "data/global.pory"
EvoStonesPokemart5:
# 459 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 460 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 461 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 462 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 463 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 464 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 465 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 466 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 467 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 468 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 471 "data/global.pory"
EvoOtherPokemart3:
# 472 "data/global.pory"
	.2byte ITEM_SACHET
# 473 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 476 "data/global.pory"
EvoOtherPokemart4:
# 477 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 478 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 479 "data/global.pory"
	.2byte ITEM_SACHET
# 480 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 481 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 482 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 483 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 484 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 487 "data/global.pory"
EvoOtherPokemart5:
# 488 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 489 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 490 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 491 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 492 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 493 "data/global.pory"
	.2byte ITEM_UPGRADE
# 494 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 495 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 496 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 497 "data/global.pory"
	.2byte ITEM_SACHET
# 498 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 499 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 500 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 501 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 502 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 503 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 504 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 505 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 506 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 509 "data/global.pory"
EvoExtraPokemart6:
# 510 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 511 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 512 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 513 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 514 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 515 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 516 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 519 "data/global.pory"
EvoExtraPokemart7:
# 520 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 521 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 522 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 523 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 524 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 525 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 526 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 527 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 528 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 532 "data/global.pory"
	lock
# 533 "data/global.pory"
	faceplayer
# 534 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 537 "data/global.pory"
	setflag FLAG_TEMP_1
# 538 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 539 "data/global.pory"
	setvar VAR_RESULT, 2
# 540 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 541 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 544 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 545 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 546 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 550 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 554 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 555 "data/global.pory"
	special ChooseMonForMoveRelearner
# 556 "data/global.pory"
	waitstate
# 557 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 562 "data/global.pory"
	special IsSelectedMonEgg
# 563 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 566 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 570 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 571 "data/global.pory"
	special TeachMoveRelearnerMove
# 572 "data/global.pory"
	waitstate
# 573 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 579 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 580 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 535 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 542 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 547 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 551 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 558 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 564 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 567 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 584 "data/global.pory"
	lock
# 585 "data/global.pory"
	faceplayer
# 586 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 590 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 591 "data/global.pory"
	waitmessage
# 592 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 593 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 594 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 595 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 596 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 597 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 598 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 599 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 600 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 601 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 602 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 603 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 604 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 605 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 606 "data/global.pory"
	special GetNumberOfBadges
# 607 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 612 "data/global.pory"
	special ShowBottleCapsWindow
# 613 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 614 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 635 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 636 "data/global.pory"
	special CloseBattlePointsWindow
# 637 "data/global.pory"
	release
	end

EventScript_CapCollector_2:
# 587 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 588 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 608 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_BOOSTER_ENERGY
# 609 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_MIRROR_HERB
# 610 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 615 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 616 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 617 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 623 "data/global.pory"
	checkitemspace VAR_0x8009
# 624 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 630 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 631 "data/global.pory"
	additem VAR_0x8009
# 632 "data/global.pory"
	special UpdateBottleCapsWindow
# 633 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 618 "data/global.pory"
	msgbox EventScript_CapCollector_Text_17
# 619 "data/global.pory"
	special CloseBattlePointsWindow
# 620 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 625 "data/global.pory"
	msgbox EventScript_CapCollector_Text_18
# 626 "data/global.pory"
	special CloseBattlePointsWindow
# 627 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 651 "data/global.pory"
	lock
# 652 "data/global.pory"
	faceplayer
# 653 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 654 "data/global.pory"
	waitmessage
# 655 "data/global.pory"
	pokemart AbilityNaturePokemart
# 656 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 657 "data/global.pory"
	release
	end


	.align 2
# 661 "data/global.pory"
AbilityNaturePokemart:
# 662 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 663 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 664 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 665 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 666 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 667 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 668 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 669 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 670 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 671 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 672 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 673 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 674 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 675 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 676 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 677 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 678 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 679 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 680 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 681 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_NONE

Mart_EventScript_TMClerk_Text_0:
# 152 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 158 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 160 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 163 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 166 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 169 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 172 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 175 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 178 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 379 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 384 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 385 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 387 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 535 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 538 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 540 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 542 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 544 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 547 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 554 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 564 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 567 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 570 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 592 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 593 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 594 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 595 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 596 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 597 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 598 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 599 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 600 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 601 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 602 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 603 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 604 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 605 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 608 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_15:
# 609 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_16:
# 610 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_17:
# 618 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_18:
# 625 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 642 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 646 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"
