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
	msgbox gText_HowMayIServeYou
# 377 "data/global.pory"
	waitmessage
# 378 "data/global.pory"
	special GetNumberOfBadges
# 379 "data/global.pory"
	switch VAR_RESULT
# 380 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_3
# 381 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_3
# 382 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_3
# 384 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_4
# 385 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_4
# 387 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_5
# 388 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_5
# 389 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_5
# 390 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_5
Mart_EventScript_EvoClerk_1:
# 395 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 396 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_3:
# 383 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_4:
# 386 "data/global.pory"
	pokemart BadgedEvoPokemart3
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_5:
# 391 "data/global.pory"
	pokemart BadgedEvoPokemart5
	goto Mart_EventScript_EvoClerk_1


	.align 2
# 400 "data/global.pory"
BadgedEvoPokemart3:
# 401 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 402 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 403 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 404 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 405 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 406 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 407 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 408 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 409 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_NONE

	.align 2
# 412 "data/global.pory"
BadgedEvoPokemart5:
# 413 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 414 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 415 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 416 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 417 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 418 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 419 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 420 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 421 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 422 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 423 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 424 "data/global.pory"
	.2byte ITEM_DAWN_STONE
# 425 "data/global.pory"
	.2byte ITEM_METAL_COAT
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
# 383 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"
