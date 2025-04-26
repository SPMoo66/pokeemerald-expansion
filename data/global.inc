EventScript_Clear_FlagTemp1::
# 2 "data/global.pory"
	clearflag FLAG_TEMP_1
	return


EventScript_Clear_FlagTemp2::
# 7 "data/global.pory"
	clearflag FLAG_TEMP_2
	return


EventScript_HideMapNamePopup::
# 12 "data/global.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Mart_EventScript_Clerk::
# 17 "data/global.pory"
	lock
# 18 "data/global.pory"
	faceplayer
# 19 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 20 "data/global.pory"
	waitmessage
# 21 "data/global.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Mart_EventScript_Clerk_2
# 25 "data/global.pory"
	special GetNumberOfBadges
# 26 "data/global.pory"
	switch VAR_RESULT
# 27 "data/global.pory"
	case 0, Mart_EventScript_Clerk_6
# 29 "data/global.pory"
	case 1, Mart_EventScript_Clerk_7
# 31 "data/global.pory"
	case 2, Mart_EventScript_Clerk_8
# 33 "data/global.pory"
	case 3, Mart_EventScript_Clerk_9
# 35 "data/global.pory"
	case 4, Mart_EventScript_Clerk_10
# 37 "data/global.pory"
	case 5, Mart_EventScript_Clerk_11
# 39 "data/global.pory"
	case 6, Mart_EventScript_Clerk_12
# 41 "data/global.pory"
	case 7, Mart_EventScript_Clerk_13
# 42 "data/global.pory"
	case 8, Mart_EventScript_Clerk_13
Mart_EventScript_Clerk_1:
# 48 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 49 "data/global.pory"
	release
	end

Mart_EventScript_Clerk_2:
# 22 "data/global.pory"
	pokemart BadgedPokemartClear
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 28 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 30 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 32 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 34 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 36 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 38 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_12:
# 40 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_13:
# 43 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 53 "data/global.pory"
BadgedPokemart0:
# 54 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 55 "data/global.pory"
	.2byte ITEM_POTION
# 56 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 57 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 58 "data/global.pory"
	.2byte ITEM_AWAKENING
# 59 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 60 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 61 "data/global.pory"
	.2byte ITEM_REPEL
# 62 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 65 "data/global.pory"
BadgedPokemart1:
# 66 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 67 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 68 "data/global.pory"
	.2byte ITEM_POTION
# 69 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 70 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 71 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 72 "data/global.pory"
	.2byte ITEM_AWAKENING
# 73 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 74 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 75 "data/global.pory"
	.2byte ITEM_REPEL
# 76 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 79 "data/global.pory"
BadgedPokemart2:
# 80 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 81 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 82 "data/global.pory"
	.2byte ITEM_POTION
# 83 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 84 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 85 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 86 "data/global.pory"
	.2byte ITEM_AWAKENING
# 87 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 88 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 89 "data/global.pory"
	.2byte ITEM_REPEL
# 90 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 91 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 92 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 93 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 96 "data/global.pory"
BadgedPokemart3:
# 97 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 98 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 99 "data/global.pory"
	.2byte ITEM_POTION
# 100 "data/global.pory"
	.2byte ITEM_SUPER_POTION
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
	.2byte ITEM_NORMAL_TERA_SHARD
# 112 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 113 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 116 "data/global.pory"
BadgedPokemart4:
# 117 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 118 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 119 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 120 "data/global.pory"
	.2byte ITEM_POTION
# 121 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 122 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 123 "data/global.pory"
	.2byte ITEM_REVIVE
# 124 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 125 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 126 "data/global.pory"
	.2byte ITEM_AWAKENING
# 127 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 128 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 129 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 130 "data/global.pory"
	.2byte ITEM_REPEL
# 131 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 132 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 133 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 134 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 135 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 138 "data/global.pory"
BadgedPokemart5:
# 139 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 140 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 141 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 142 "data/global.pory"
	.2byte ITEM_POTION
# 143 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 144 "data/global.pory"
	.2byte ITEM_HYPER_POTION
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
	.2byte ITEM_NORMAL_TERA_SHARD
# 156 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 157 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 158 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 161 "data/global.pory"
BadgedPokemart6:
# 162 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 163 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 164 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 165 "data/global.pory"
	.2byte ITEM_POTION
# 166 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 167 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 168 "data/global.pory"
	.2byte ITEM_MAX_POTION
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
	.2byte ITEM_NORMAL_TERA_SHARD
# 180 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 181 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 182 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 185 "data/global.pory"
BadgedPokemart7:
# 186 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 187 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 188 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 189 "data/global.pory"
	.2byte ITEM_POTION
# 190 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 191 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 192 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 193 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 194 "data/global.pory"
	.2byte ITEM_REVIVE
# 195 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 196 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 197 "data/global.pory"
	.2byte ITEM_AWAKENING
# 198 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 199 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 200 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 201 "data/global.pory"
	.2byte ITEM_REPEL
# 202 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 203 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 204 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 205 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 206 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 207 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 208 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

	.align 2
# 211 "data/global.pory"
BadgedPokemartClear:
# 212 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 213 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 214 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 215 "data/global.pory"
	.2byte ITEM_POTION
# 216 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 217 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 218 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 219 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 220 "data/global.pory"
	.2byte ITEM_REVIVE
# 221 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 222 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 223 "data/global.pory"
	.2byte ITEM_AWAKENING
# 224 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 225 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 226 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 227 "data/global.pory"
	.2byte ITEM_REPEL
# 228 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 229 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 230 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 231 "data/global.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
# 232 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 233 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 234 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 235 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
# 236 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 241 "data/global.pory"
	lock
# 242 "data/global.pory"
	faceplayer
# 243 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 249 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 250 "data/global.pory"
	waitmessage
# 251 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 252 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 255 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 258 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 261 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 264 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 267 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 270 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 273 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 274 "data/global.pory"
	switch VAR_RESULT
# 275 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 277 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 279 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 281 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 283 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 285 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 287 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 289 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 294 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 296 "data/global.pory"
	release
	end

Mart_EventScript_TMClerk_2:
# 245 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 253 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 256 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 259 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 262 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 265 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 268 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 271 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 276 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 278 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 280 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 282 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 284 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 286 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 288 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 290 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 300 "data/global.pory"
TMMart1:
# 301 "data/global.pory"
	.2byte ITEM_TM33
# 302 "data/global.pory"
	.2byte ITEM_TM47
# 303 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 306 "data/global.pory"
TMMart2:
# 307 "data/global.pory"
	.2byte ITEM_TM21
# 308 "data/global.pory"
	.2byte ITEM_TM26
# 309 "data/global.pory"
	.2byte ITEM_TM29
# 310 "data/global.pory"
	.2byte ITEM_TM31
# 311 "data/global.pory"
	.2byte ITEM_TM37
# 312 "data/global.pory"
	.2byte ITEM_TM81
# 313 "data/global.pory"
	.2byte ITEM_TM109
# 314 "data/global.pory"
	.2byte ITEM_TM110
# 315 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 318 "data/global.pory"
TMMart3:
# 319 "data/global.pory"
	.2byte ITEM_TM01
# 320 "data/global.pory"
	.2byte ITEM_TM02
# 321 "data/global.pory"
	.2byte ITEM_TM03
# 322 "data/global.pory"
	.2byte ITEM_TM04
# 323 "data/global.pory"
	.2byte ITEM_TM19
# 324 "data/global.pory"
	.2byte ITEM_TM20
# 325 "data/global.pory"
	.2byte ITEM_TM30
# 326 "data/global.pory"
	.2byte ITEM_TM39
# 327 "data/global.pory"
	.2byte ITEM_TM44
# 328 "data/global.pory"
	.2byte ITEM_TM48
# 329 "data/global.pory"
	.2byte ITEM_TM64
# 330 "data/global.pory"
	.2byte ITEM_TM68
# 331 "data/global.pory"
	.2byte ITEM_TM76
# 332 "data/global.pory"
	.2byte ITEM_TM94
# 333 "data/global.pory"
	.2byte ITEM_TM103
# 334 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 337 "data/global.pory"
TMMart4:
# 338 "data/global.pory"
	.2byte ITEM_TM10
# 339 "data/global.pory"
	.2byte ITEM_TM15
# 340 "data/global.pory"
	.2byte ITEM_TM16
# 341 "data/global.pory"
	.2byte ITEM_TM17
# 342 "data/global.pory"
	.2byte ITEM_TM18
# 343 "data/global.pory"
	.2byte ITEM_TM25
# 344 "data/global.pory"
	.2byte ITEM_TM32
# 345 "data/global.pory"
	.2byte ITEM_TM65
# 346 "data/global.pory"
	.2byte ITEM_TM73
# 347 "data/global.pory"
	.2byte ITEM_TM75
# 348 "data/global.pory"
	.2byte ITEM_TM82
# 349 "data/global.pory"
	.2byte ITEM_TM87
# 350 "data/global.pory"
	.2byte ITEM_TM101
# 351 "data/global.pory"
	.2byte ITEM_TM104
# 352 "data/global.pory"
	.2byte ITEM_TM108
# 353 "data/global.pory"
	.2byte ITEM_TM114
# 354 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 357 "data/global.pory"
TMMart5:
# 358 "data/global.pory"
	.2byte ITEM_TM05
# 359 "data/global.pory"
	.2byte ITEM_TM06
# 360 "data/global.pory"
	.2byte ITEM_TM07
# 361 "data/global.pory"
	.2byte ITEM_TM08
# 362 "data/global.pory"
	.2byte ITEM_TM11
# 363 "data/global.pory"
	.2byte ITEM_TM12
# 364 "data/global.pory"
	.2byte ITEM_TM13
# 365 "data/global.pory"
	.2byte ITEM_TM24
# 366 "data/global.pory"
	.2byte ITEM_TM28
# 367 "data/global.pory"
	.2byte ITEM_TM45
# 368 "data/global.pory"
	.2byte ITEM_TM50
# 369 "data/global.pory"
	.2byte ITEM_TM54
# 370 "data/global.pory"
	.2byte ITEM_TM60
# 371 "data/global.pory"
	.2byte ITEM_TM61
# 372 "data/global.pory"
	.2byte ITEM_TM66
# 373 "data/global.pory"
	.2byte ITEM_TM71
# 374 "data/global.pory"
	.2byte ITEM_TM78
# 375 "data/global.pory"
	.2byte ITEM_TM83
# 376 "data/global.pory"
	.2byte ITEM_TM85
# 377 "data/global.pory"
	.2byte ITEM_TM86
# 378 "data/global.pory"
	.2byte ITEM_TM88
# 379 "data/global.pory"
	.2byte ITEM_TM99
# 380 "data/global.pory"
	.2byte ITEM_TM111
# 381 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 384 "data/global.pory"
TMMart6:
# 385 "data/global.pory"
	.2byte ITEM_TM09
# 386 "data/global.pory"
	.2byte ITEM_TM22
# 387 "data/global.pory"
	.2byte ITEM_TM23
# 388 "data/global.pory"
	.2byte ITEM_TM41
# 389 "data/global.pory"
	.2byte ITEM_TM49
# 390 "data/global.pory"
	.2byte ITEM_TM51
# 391 "data/global.pory"
	.2byte ITEM_TM52
# 392 "data/global.pory"
	.2byte ITEM_TM56
# 393 "data/global.pory"
	.2byte ITEM_TM57
# 394 "data/global.pory"
	.2byte ITEM_TM59
# 395 "data/global.pory"
	.2byte ITEM_TM62
# 396 "data/global.pory"
	.2byte ITEM_TM67
# 397 "data/global.pory"
	.2byte ITEM_TM69
# 398 "data/global.pory"
	.2byte ITEM_TM74
# 399 "data/global.pory"
	.2byte ITEM_TM79
# 400 "data/global.pory"
	.2byte ITEM_TM89
# 401 "data/global.pory"
	.2byte ITEM_TM90
# 402 "data/global.pory"
	.2byte ITEM_TM91
# 403 "data/global.pory"
	.2byte ITEM_TM92
# 404 "data/global.pory"
	.2byte ITEM_TM97
# 405 "data/global.pory"
	.2byte ITEM_TM98
# 406 "data/global.pory"
	.2byte ITEM_TM100
# 407 "data/global.pory"
	.2byte ITEM_TM102
# 408 "data/global.pory"
	.2byte ITEM_TM105
# 409 "data/global.pory"
	.2byte ITEM_TM106
# 410 "data/global.pory"
	.2byte ITEM_TM113
# 411 "data/global.pory"
	.2byte ITEM_TM117
# 412 "data/global.pory"
	.2byte ITEM_TM118
# 413 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 416 "data/global.pory"
TMMart7:
# 417 "data/global.pory"
	.2byte ITEM_TM36
# 418 "data/global.pory"
	.2byte ITEM_TM38
# 419 "data/global.pory"
	.2byte ITEM_TM42
# 420 "data/global.pory"
	.2byte ITEM_TM53
# 421 "data/global.pory"
	.2byte ITEM_TM58
# 422 "data/global.pory"
	.2byte ITEM_TM63
# 423 "data/global.pory"
	.2byte ITEM_TM70
# 424 "data/global.pory"
	.2byte ITEM_TM72
# 425 "data/global.pory"
	.2byte ITEM_TM77
# 426 "data/global.pory"
	.2byte ITEM_TM84
# 427 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 430 "data/global.pory"
TMMart8:
# 431 "data/global.pory"
	.2byte ITEM_TM43
# 432 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 437 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 438 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 440 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 442 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 444 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 447 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 439 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 441 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 443 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 445 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 451 "data/global.pory"

# 452 "data/global.pory"
Common_EventScript_GymNurse::
# 453 "data/global.pory"
	lock
# 454 "data/global.pory"
	faceplayer
# 455 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 456 "data/global.pory"
	closemessage
# 457 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 458 "data/global.pory"
	releaseall
# 459 "data/global.pory"
	end
# 460 "data/global.pory"

# 461 "data/global.pory"
gText_GymNurseHeal::
# 462 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 466 "data/global.pory"
	lock
# 467 "data/global.pory"
	faceplayer
# 468 "data/global.pory"
	special GetNumberOfBadges
# 469 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 470 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 474 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 475 "data/global.pory"
	waitmessage
# 476 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 477 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 478 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 481 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 482 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 499 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 517 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 534 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 536 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_2:
# 471 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 479 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 483 "data/global.pory"
	switch VAR_TEMP_0
# 484 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 485 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 486 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 487 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 488 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 490 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 491 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 492 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 493 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 500 "data/global.pory"
	switch VAR_TEMP_0
# 501 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 502 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 503 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 504 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 506 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 508 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 509 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 510 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 511 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 518 "data/global.pory"
	switch VAR_TEMP_0
# 519 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 520 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 521 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 522 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 523 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 524 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 525 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 527 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 528 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 489 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 494 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 505 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 507 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 512 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 526 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 529 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 540 "data/global.pory"
EvoStonesPokemart3:
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
	.2byte ITEM_NONE

	.align 2
# 550 "data/global.pory"
EvoStonesPokemart5:
# 551 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 552 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 553 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 554 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 555 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 556 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 557 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 558 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 559 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 560 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 563 "data/global.pory"
EvoOtherPokemart3:
# 564 "data/global.pory"
	.2byte ITEM_SACHET
# 565 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 568 "data/global.pory"
EvoOtherPokemart4:
# 569 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 570 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 571 "data/global.pory"
	.2byte ITEM_SACHET
# 572 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 573 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 574 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 575 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 576 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 579 "data/global.pory"
EvoOtherPokemart5:
# 580 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 581 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 582 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 583 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 584 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 585 "data/global.pory"
	.2byte ITEM_UPGRADE
# 586 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 587 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 588 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 589 "data/global.pory"
	.2byte ITEM_SACHET
# 590 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 591 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 592 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 593 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 594 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 595 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 596 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 597 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 598 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 601 "data/global.pory"
EvoExtraPokemart6:
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
	.2byte ITEM_NONE

	.align 2
# 611 "data/global.pory"
EvoExtraPokemart7:
# 612 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 613 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 614 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 615 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 616 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 617 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 618 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 619 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 620 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 624 "data/global.pory"
	lock
# 625 "data/global.pory"
	faceplayer
# 626 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 629 "data/global.pory"
	setflag FLAG_TEMP_1
# 630 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 631 "data/global.pory"
	setvar VAR_RESULT, 2
# 632 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 633 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 636 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 637 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 638 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 642 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 646 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 647 "data/global.pory"
	special ChooseMonForMoveRelearner
# 648 "data/global.pory"
	waitstate
# 649 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 654 "data/global.pory"
	special IsSelectedMonEgg
# 655 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 658 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 662 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 663 "data/global.pory"
	special TeachMoveRelearnerMove
# 664 "data/global.pory"
	waitstate
# 665 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 671 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 672 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 627 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 634 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 639 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 643 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 650 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 656 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 659 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 676 "data/global.pory"
	lock
# 677 "data/global.pory"
	faceplayer
# 678 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 682 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 683 "data/global.pory"
	waitmessage
# 684 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 685 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 686 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 687 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 688 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 689 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 690 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 691 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 692 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 693 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 694 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 695 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 696 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 697 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 698 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 699 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 700 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 701 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 702 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 703 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 704 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 705 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 706 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 707 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 708 "data/global.pory"
	special GetNumberOfBadges
# 709 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 714 "data/global.pory"
	special ShowBottleCapsWindow
# 715 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 716 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 737 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 738 "data/global.pory"
	special CloseBattlePointsWindow
# 739 "data/global.pory"
	release
	end

EventScript_CapCollector_2:
# 679 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 680 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 710 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BOOSTER_ENERGY
# 711 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_MIRROR_HERB
# 712 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 717 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 718 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 719 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 725 "data/global.pory"
	checkitemspace VAR_0x8009
# 726 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 732 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 733 "data/global.pory"
	additem VAR_0x8009
# 734 "data/global.pory"
	special UpdateBottleCapsWindow
# 735 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 720 "data/global.pory"
	msgbox EventScript_CapCollector_Text_27
# 721 "data/global.pory"
	special CloseBattlePointsWindow
# 722 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 727 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 728 "data/global.pory"
	special CloseBattlePointsWindow
# 729 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 753 "data/global.pory"
	lock
# 754 "data/global.pory"
	faceplayer
# 755 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 756 "data/global.pory"
	waitmessage
# 757 "data/global.pory"
	pokemart AbilityNaturePokemart
# 758 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 759 "data/global.pory"
	release
	end


	.align 2
# 763 "data/global.pory"
AbilityNaturePokemart:
# 764 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 765 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 766 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 767 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 768 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
# 769 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 770 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 771 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 772 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 773 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 774 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 775 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 776 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 777 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 778 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 779 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 780 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 781 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 782 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 783 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 784 "data/global.pory"
	.2byte ITEM_JOLLY_MINT
# 785 "data/global.pory"
	.2byte ITEM_NAIVE_MINT
# 786 "data/global.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 790 "data/global.pory"
	lock
# 791 "data/global.pory"
	faceplayer
# 792 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 793 "data/global.pory"
	waitmessage
# 794 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 795 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 796 "data/global.pory"
	release
	end


	.align 2
# 800 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 801 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 802 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 803 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 804 "data/global.pory"
	.2byte ITEM_MAGNET
# 805 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 806 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 807 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 808 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 809 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 810 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 811 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 812 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 813 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 814 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 815 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 816 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 817 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 818 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 951 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 952 "data/global.pory"
	case 1, GetRivalForNameBox_2
# 954 "data/global.pory"
	case 2, GetRivalForNameBox_3
# 956 "data/global.pory"
	case 3, GetRivalForNameBox_4
# 958 "data/global.pory"
	case 4, GetRivalForNameBox_5
# 961 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 953 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_3:
# 955 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_4:
# 957 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_5:
# 959 "data/global.pory"
	speakername CommonText_Sakura
	return


Mart_EventScript_TMClerk_Text_0:
# 245 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 251 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 253 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 256 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 259 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 262 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 265 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 268 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 271 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 471 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 476 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 477 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 479 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 627 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 630 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 632 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 634 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 636 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 639 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 646 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 656 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 659 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 662 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 684 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 685 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 686 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 687 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 688 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 689 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 690 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 691 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 692 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 693 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 694 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 695 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 696 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 697 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 698 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 699 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 700 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 701 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 702 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 703 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 704 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 705 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 706 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 707 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 710 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_25:
# 711 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_26:
# 712 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_27:
# 720 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_28:
# 727 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 744 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 748 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 821 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 825 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 829 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 833 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 837 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 841 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 845 "data/global.pory"
	.string "Giovanni$"

CommonText_Courtney::
# 849 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 853 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 857 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 861 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 865 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 869 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 873 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 877 "data/global.pory"
	.string "Steven$"

CommonText_Scott::
# 881 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 885 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 889 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 893 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 897 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 901 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 905 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 909 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 913 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 917 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 921 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 925 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 929 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 933 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 937 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 941 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 945 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Baron::
# 965 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 969 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 973 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 977 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 981 "data/global.pory"
	.string "Sakura$"

Text_PokevialSizeIncrease::
# 985 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 989 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 993 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 997 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 1001 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 1005 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 1009 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 1013 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 1017 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 1021 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 1025 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 1029 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 1033 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 1037 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 1041 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 1045 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1049 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1053 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1057 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1061 "data/global.pory"
	.string "Stellar Type$"

CommonText_RustboroCity::
# 1065 "data/global.pory"
	.string "Rustboro City$"

CommonText_DewfordTown::
# 1069 "data/global.pory"
	.string "Dewford Town$"

CommonText_MauvilleCity::
# 1073 "data/global.pory"
	.string "Mauville City$"

CommonText_LavaridgeTown::
# 1077 "data/global.pory"
	.string "Lavaridge Town$"

CommonText_PetalburgCity::
# 1081 "data/global.pory"
	.string "Petalburg City$"

CommonText_FortreeCity::
# 1085 "data/global.pory"
	.string "Fortree City$"

CommonText_MossdeepCity::
# 1089 "data/global.pory"
	.string "Mossdeep City$"

CommonText_SootopolisCity::
# 1093 "data/global.pory"
	.string "Sootopolis City$"

CommonText_Roxanne::
# 1097 "data/global.pory"
	.string "Roxanne$"

CommonText_Brawly::
# 1101 "data/global.pory"
	.string "Brawly$"

CommonText_Wattson::
# 1105 "data/global.pory"
	.string "Wattson$"

CommonText_Flannery::
# 1109 "data/global.pory"
	.string "Flannery$"

CommonText_Norman::
# 1113 "data/global.pory"
	.string "Norman$"

CommonText_Winona::
# 1117 "data/global.pory"
	.string "Winona$"

CommonText_LizaAndTate::
# 1121 "data/global.pory"
	.string "Liza & Tate$"

CommonText_Juan::
# 1125 "data/global.pory"
	.string "Juan$"

Text_TrickMasterIs_Puzzle1::
# 1129 "data/global.pory"
	.string "fabulous$"

Text_TrickMasterIs_Puzzle2::
# 1133 "data/global.pory"
	.string "based$"

Text_TrickMasterIs_Puzzle3::
# 1137 "data/global.pory"
	.string "coveted$"

Text_TrickMasterIs_Puzzle4::
# 1141 "data/global.pory"
	.string "cool$"

Text_TrickMasterIs_Puzzle5::
# 1145 "data/global.pory"
	.string "a genius$"

Text_TrickMasterIs_Puzzle6::
# 1149 "data/global.pory"
	.string "my life$"

Text_TrickMasterIs_Puzzle7::
# 1153 "data/global.pory"
	.string "huggable$"

Text_TrickMasterIs_Puzzle8::
# 1157 "data/global.pory"
	.string "my love$"

Text_TrickMasterIsBlank::
# 1161 "data/global.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“Trick Master is {STR_VAR_1}.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"
