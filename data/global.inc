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


EventScript_HideMapNamePopup::
# 17 "data/global.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Mart_EventScript_Clerk::
# 22 "data/global.pory"
	lock
# 23 "data/global.pory"
	faceplayer
# 24 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 25 "data/global.pory"
	waitmessage
# 26 "data/global.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Mart_EventScript_Clerk_2
# 30 "data/global.pory"
	special GetNumberOfBadges
# 31 "data/global.pory"
	switch VAR_RESULT
# 32 "data/global.pory"
	case 0, Mart_EventScript_Clerk_6
# 34 "data/global.pory"
	case 1, Mart_EventScript_Clerk_7
# 36 "data/global.pory"
	case 2, Mart_EventScript_Clerk_8
# 38 "data/global.pory"
	case 3, Mart_EventScript_Clerk_9
# 40 "data/global.pory"
	case 4, Mart_EventScript_Clerk_10
# 42 "data/global.pory"
	case 5, Mart_EventScript_Clerk_11
# 44 "data/global.pory"
	case 6, Mart_EventScript_Clerk_12
# 46 "data/global.pory"
	case 7, Mart_EventScript_Clerk_13
# 47 "data/global.pory"
	case 8, Mart_EventScript_Clerk_13
Mart_EventScript_Clerk_1:
# 53 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 54 "data/global.pory"
	release
	end

Mart_EventScript_Clerk_2:
# 27 "data/global.pory"
	pokemart BadgedPokemartClear
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 33 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 35 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 37 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 39 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 41 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 43 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_12:
# 45 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_13:
# 48 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 58 "data/global.pory"
BadgedPokemart0:
# 59 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 60 "data/global.pory"
	.2byte ITEM_POTION
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
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 70 "data/global.pory"
BadgedPokemart1:
# 71 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 72 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 73 "data/global.pory"
	.2byte ITEM_POTION
# 74 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 75 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 76 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 77 "data/global.pory"
	.2byte ITEM_AWAKENING
# 78 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 79 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 80 "data/global.pory"
	.2byte ITEM_REPEL
# 81 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 84 "data/global.pory"
BadgedPokemart2:
# 85 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 86 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 87 "data/global.pory"
	.2byte ITEM_POTION
# 88 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 89 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 90 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 91 "data/global.pory"
	.2byte ITEM_AWAKENING
# 92 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 93 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 94 "data/global.pory"
	.2byte ITEM_REPEL
# 95 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 96 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 97 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 98 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 101 "data/global.pory"
BadgedPokemart3:
# 102 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 103 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 104 "data/global.pory"
	.2byte ITEM_POTION
# 105 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 106 "data/global.pory"
	.2byte ITEM_REVIVE
# 107 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 108 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 109 "data/global.pory"
	.2byte ITEM_AWAKENING
# 110 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 111 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 112 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 113 "data/global.pory"
	.2byte ITEM_REPEL
# 114 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 115 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 116 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 117 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 118 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 121 "data/global.pory"
BadgedPokemart4:
# 122 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 123 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 124 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 125 "data/global.pory"
	.2byte ITEM_POTION
# 126 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 127 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 128 "data/global.pory"
	.2byte ITEM_REVIVE
# 129 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 130 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 131 "data/global.pory"
	.2byte ITEM_AWAKENING
# 132 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 133 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 134 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 135 "data/global.pory"
	.2byte ITEM_REPEL
# 136 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 137 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 138 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 139 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 140 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 143 "data/global.pory"
BadgedPokemart5:
# 144 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 145 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 146 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 147 "data/global.pory"
	.2byte ITEM_POTION
# 148 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 149 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 150 "data/global.pory"
	.2byte ITEM_REVIVE
# 151 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 152 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 153 "data/global.pory"
	.2byte ITEM_AWAKENING
# 154 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 155 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 156 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 157 "data/global.pory"
	.2byte ITEM_REPEL
# 158 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 159 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 160 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 161 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 162 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 163 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 166 "data/global.pory"
BadgedPokemart6:
# 167 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 168 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 169 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 170 "data/global.pory"
	.2byte ITEM_POTION
# 171 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 172 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 173 "data/global.pory"
	.2byte ITEM_MAX_POTION
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
	.2byte ITEM_NONE

	.align 2
# 190 "data/global.pory"
BadgedPokemart7:
# 191 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 192 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 193 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 194 "data/global.pory"
	.2byte ITEM_POTION
# 195 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 196 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 197 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 198 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 199 "data/global.pory"
	.2byte ITEM_REVIVE
# 200 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 201 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 202 "data/global.pory"
	.2byte ITEM_AWAKENING
# 203 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 204 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 205 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 206 "data/global.pory"
	.2byte ITEM_REPEL
# 207 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 208 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 209 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 210 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 211 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 212 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 213 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

	.align 2
# 216 "data/global.pory"
BadgedPokemartClear:
# 217 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 218 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 219 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 220 "data/global.pory"
	.2byte ITEM_POTION
# 221 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 222 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 223 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 224 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 225 "data/global.pory"
	.2byte ITEM_REVIVE
# 226 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 227 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 228 "data/global.pory"
	.2byte ITEM_AWAKENING
# 229 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 230 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 231 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 232 "data/global.pory"
	.2byte ITEM_REPEL
# 233 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 234 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 235 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 236 "data/global.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
# 237 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 238 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 239 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 240 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
# 241 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 246 "data/global.pory"
	lock
# 247 "data/global.pory"
	faceplayer
# 248 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 254 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 255 "data/global.pory"
	waitmessage
# 256 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 257 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 260 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 263 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 266 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 269 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 272 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 275 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 278 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 279 "data/global.pory"
	switch VAR_RESULT
# 280 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 282 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 284 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 286 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 288 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 290 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 292 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 294 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 299 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 301 "data/global.pory"
	release
	end

Mart_EventScript_TMClerk_2:
# 250 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 258 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 261 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 264 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 267 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 270 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 273 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 276 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 281 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 283 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 285 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 287 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 289 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 291 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 293 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 295 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 305 "data/global.pory"
TMMart1:
# 306 "data/global.pory"
	.2byte ITEM_TM33
# 307 "data/global.pory"
	.2byte ITEM_TM47
# 308 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 311 "data/global.pory"
TMMart2:
# 312 "data/global.pory"
	.2byte ITEM_TM21
# 313 "data/global.pory"
	.2byte ITEM_TM26
# 314 "data/global.pory"
	.2byte ITEM_TM29
# 315 "data/global.pory"
	.2byte ITEM_TM31
# 316 "data/global.pory"
	.2byte ITEM_TM37
# 317 "data/global.pory"
	.2byte ITEM_TM81
# 318 "data/global.pory"
	.2byte ITEM_TM109
# 319 "data/global.pory"
	.2byte ITEM_TM110
# 320 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 323 "data/global.pory"
TMMart3:
# 324 "data/global.pory"
	.2byte ITEM_TM01
# 325 "data/global.pory"
	.2byte ITEM_TM02
# 326 "data/global.pory"
	.2byte ITEM_TM03
# 327 "data/global.pory"
	.2byte ITEM_TM04
# 328 "data/global.pory"
	.2byte ITEM_TM19
# 329 "data/global.pory"
	.2byte ITEM_TM20
# 330 "data/global.pory"
	.2byte ITEM_TM30
# 331 "data/global.pory"
	.2byte ITEM_TM39
# 332 "data/global.pory"
	.2byte ITEM_TM44
# 333 "data/global.pory"
	.2byte ITEM_TM48
# 334 "data/global.pory"
	.2byte ITEM_TM64
# 335 "data/global.pory"
	.2byte ITEM_TM68
# 336 "data/global.pory"
	.2byte ITEM_TM76
# 337 "data/global.pory"
	.2byte ITEM_TM94
# 338 "data/global.pory"
	.2byte ITEM_TM103
# 339 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 342 "data/global.pory"
TMMart4:
# 343 "data/global.pory"
	.2byte ITEM_TM10
# 344 "data/global.pory"
	.2byte ITEM_TM15
# 345 "data/global.pory"
	.2byte ITEM_TM16
# 346 "data/global.pory"
	.2byte ITEM_TM17
# 347 "data/global.pory"
	.2byte ITEM_TM18
# 348 "data/global.pory"
	.2byte ITEM_TM25
# 349 "data/global.pory"
	.2byte ITEM_TM32
# 350 "data/global.pory"
	.2byte ITEM_TM65
# 351 "data/global.pory"
	.2byte ITEM_TM73
# 352 "data/global.pory"
	.2byte ITEM_TM75
# 353 "data/global.pory"
	.2byte ITEM_TM82
# 354 "data/global.pory"
	.2byte ITEM_TM87
# 355 "data/global.pory"
	.2byte ITEM_TM101
# 356 "data/global.pory"
	.2byte ITEM_TM104
# 357 "data/global.pory"
	.2byte ITEM_TM108
# 358 "data/global.pory"
	.2byte ITEM_TM114
# 359 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 362 "data/global.pory"
TMMart5:
# 363 "data/global.pory"
	.2byte ITEM_TM05
# 364 "data/global.pory"
	.2byte ITEM_TM06
# 365 "data/global.pory"
	.2byte ITEM_TM07
# 366 "data/global.pory"
	.2byte ITEM_TM08
# 367 "data/global.pory"
	.2byte ITEM_TM11
# 368 "data/global.pory"
	.2byte ITEM_TM12
# 369 "data/global.pory"
	.2byte ITEM_TM13
# 370 "data/global.pory"
	.2byte ITEM_TM24
# 371 "data/global.pory"
	.2byte ITEM_TM28
# 372 "data/global.pory"
	.2byte ITEM_TM45
# 373 "data/global.pory"
	.2byte ITEM_TM50
# 374 "data/global.pory"
	.2byte ITEM_TM54
# 375 "data/global.pory"
	.2byte ITEM_TM60
# 376 "data/global.pory"
	.2byte ITEM_TM61
# 377 "data/global.pory"
	.2byte ITEM_TM66
# 378 "data/global.pory"
	.2byte ITEM_TM71
# 379 "data/global.pory"
	.2byte ITEM_TM78
# 380 "data/global.pory"
	.2byte ITEM_TM83
# 381 "data/global.pory"
	.2byte ITEM_TM85
# 382 "data/global.pory"
	.2byte ITEM_TM86
# 383 "data/global.pory"
	.2byte ITEM_TM88
# 384 "data/global.pory"
	.2byte ITEM_TM99
# 385 "data/global.pory"
	.2byte ITEM_TM111
# 386 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 389 "data/global.pory"
TMMart6:
# 390 "data/global.pory"
	.2byte ITEM_TM09
# 391 "data/global.pory"
	.2byte ITEM_TM22
# 392 "data/global.pory"
	.2byte ITEM_TM23
# 393 "data/global.pory"
	.2byte ITEM_TM41
# 394 "data/global.pory"
	.2byte ITEM_TM49
# 395 "data/global.pory"
	.2byte ITEM_TM51
# 396 "data/global.pory"
	.2byte ITEM_TM52
# 397 "data/global.pory"
	.2byte ITEM_TM56
# 398 "data/global.pory"
	.2byte ITEM_TM57
# 399 "data/global.pory"
	.2byte ITEM_TM59
# 400 "data/global.pory"
	.2byte ITEM_TM62
# 401 "data/global.pory"
	.2byte ITEM_TM67
# 402 "data/global.pory"
	.2byte ITEM_TM69
# 403 "data/global.pory"
	.2byte ITEM_TM74
# 404 "data/global.pory"
	.2byte ITEM_TM79
# 405 "data/global.pory"
	.2byte ITEM_TM89
# 406 "data/global.pory"
	.2byte ITEM_TM90
# 407 "data/global.pory"
	.2byte ITEM_TM91
# 408 "data/global.pory"
	.2byte ITEM_TM92
# 409 "data/global.pory"
	.2byte ITEM_TM97
# 410 "data/global.pory"
	.2byte ITEM_TM98
# 411 "data/global.pory"
	.2byte ITEM_TM100
# 412 "data/global.pory"
	.2byte ITEM_TM102
# 413 "data/global.pory"
	.2byte ITEM_TM105
# 414 "data/global.pory"
	.2byte ITEM_TM106
# 415 "data/global.pory"
	.2byte ITEM_TM113
# 416 "data/global.pory"
	.2byte ITEM_TM117
# 417 "data/global.pory"
	.2byte ITEM_TM118
# 418 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 421 "data/global.pory"
TMMart7:
# 422 "data/global.pory"
	.2byte ITEM_TM36
# 423 "data/global.pory"
	.2byte ITEM_TM38
# 424 "data/global.pory"
	.2byte ITEM_TM42
# 425 "data/global.pory"
	.2byte ITEM_TM53
# 426 "data/global.pory"
	.2byte ITEM_TM58
# 427 "data/global.pory"
	.2byte ITEM_TM63
# 428 "data/global.pory"
	.2byte ITEM_TM70
# 429 "data/global.pory"
	.2byte ITEM_TM72
# 430 "data/global.pory"
	.2byte ITEM_TM77
# 431 "data/global.pory"
	.2byte ITEM_TM84
# 432 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 435 "data/global.pory"
TMMart8:
# 436 "data/global.pory"
	.2byte ITEM_TM43
# 437 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 442 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 443 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 445 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 447 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 449 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 452 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 444 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 446 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 448 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 450 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 456 "data/global.pory"

# 457 "data/global.pory"
Common_EventScript_GymNurse::
# 458 "data/global.pory"
	lock
# 459 "data/global.pory"
	faceplayer
# 460 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 461 "data/global.pory"
	closemessage
# 462 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 463 "data/global.pory"
	releaseall
# 464 "data/global.pory"
	end
# 465 "data/global.pory"

# 466 "data/global.pory"
gText_GymNurseHeal::
# 467 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 471 "data/global.pory"
	lock
# 472 "data/global.pory"
	faceplayer
# 473 "data/global.pory"
	special GetNumberOfBadges
# 474 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 475 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 479 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 480 "data/global.pory"
	waitmessage
# 481 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 482 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 483 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 486 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 487 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 504 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 522 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 539 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 541 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_2:
# 476 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 484 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 488 "data/global.pory"
	switch VAR_TEMP_0
# 489 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 490 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 491 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 492 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 493 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 495 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 496 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 497 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 498 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 505 "data/global.pory"
	switch VAR_TEMP_0
# 506 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 507 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 508 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 509 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 511 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 513 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 514 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 515 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 516 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 523 "data/global.pory"
	switch VAR_TEMP_0
# 524 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 525 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 526 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 527 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 528 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 529 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 530 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 532 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 533 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 494 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 499 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 510 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 512 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 517 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 531 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 534 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 545 "data/global.pory"
EvoStonesPokemart3:
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
	.2byte ITEM_NONE

	.align 2
# 555 "data/global.pory"
EvoStonesPokemart5:
# 556 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 557 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 558 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 559 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 560 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 561 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 562 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 563 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 564 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 565 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 568 "data/global.pory"
EvoOtherPokemart3:
# 569 "data/global.pory"
	.2byte ITEM_SACHET
# 570 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 573 "data/global.pory"
EvoOtherPokemart4:
# 574 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 575 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 576 "data/global.pory"
	.2byte ITEM_SACHET
# 577 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 578 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 579 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 580 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 581 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 584 "data/global.pory"
EvoOtherPokemart5:
# 585 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 586 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 587 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 588 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 589 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 590 "data/global.pory"
	.2byte ITEM_UPGRADE
# 591 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 592 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 593 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 594 "data/global.pory"
	.2byte ITEM_SACHET
# 595 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 596 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 597 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 598 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 599 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 600 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 601 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 602 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 603 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 606 "data/global.pory"
EvoExtraPokemart6:
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
	.2byte ITEM_NONE

	.align 2
# 616 "data/global.pory"
EvoExtraPokemart7:
# 617 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 618 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 619 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 620 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 621 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 622 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 623 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 624 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 625 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 629 "data/global.pory"
	lock
# 630 "data/global.pory"
	faceplayer
# 631 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 634 "data/global.pory"
	setflag FLAG_TEMP_1
# 635 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 636 "data/global.pory"
	setvar VAR_RESULT, 2
# 637 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 638 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 641 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 642 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 643 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 647 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 651 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 652 "data/global.pory"
	special ChooseMonForMoveRelearner
# 653 "data/global.pory"
	waitstate
# 654 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 659 "data/global.pory"
	special IsSelectedMonEgg
# 660 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 663 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 667 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 668 "data/global.pory"
	special TeachMoveRelearnerMove
# 669 "data/global.pory"
	waitstate
# 670 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 676 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 677 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 632 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 639 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 644 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 648 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 655 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 661 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 664 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 681 "data/global.pory"
	lock
# 682 "data/global.pory"
	faceplayer
# 683 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 687 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 688 "data/global.pory"
	waitmessage
# 689 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 690 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 691 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 692 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 693 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 694 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 695 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 696 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 697 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 698 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 699 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 700 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 701 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 702 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 703 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 704 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 705 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 706 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 707 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 708 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 709 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 710 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 711 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 712 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 713 "data/global.pory"
	special GetNumberOfBadges
# 714 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 719 "data/global.pory"
	special ShowBottleCapsWindow
# 720 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 721 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 742 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 743 "data/global.pory"
	special CloseBattlePointsWindow
# 744 "data/global.pory"
	release
	end

EventScript_CapCollector_2:
# 684 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 685 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 715 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BOOSTER_ENERGY
# 716 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_MIRROR_HERB
# 717 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 722 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 723 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 724 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 730 "data/global.pory"
	checkitemspace VAR_0x8009
# 731 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 737 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 738 "data/global.pory"
	additem VAR_0x8009
# 739 "data/global.pory"
	special UpdateBottleCapsWindow
# 740 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 725 "data/global.pory"
	msgbox EventScript_CapCollector_Text_27
# 726 "data/global.pory"
	special CloseBattlePointsWindow
# 727 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 732 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 733 "data/global.pory"
	special CloseBattlePointsWindow
# 734 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 758 "data/global.pory"
	lock
# 759 "data/global.pory"
	faceplayer
# 760 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 761 "data/global.pory"
	waitmessage
# 762 "data/global.pory"
	pokemart AbilityNaturePokemart
# 763 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 764 "data/global.pory"
	release
	end


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
	end


	.align 2
# 805 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 806 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 807 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 808 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 809 "data/global.pory"
	.2byte ITEM_MAGNET
# 810 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 811 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 812 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 813 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 814 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 815 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 816 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 817 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 818 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 819 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 820 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 821 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 822 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 823 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 956 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 957 "data/global.pory"
	case 1, GetRivalForNameBox_2
# 959 "data/global.pory"
	case 2, GetRivalForNameBox_3
# 961 "data/global.pory"
	case 3, GetRivalForNameBox_4
# 963 "data/global.pory"
	case 4, GetRivalForNameBox_5
# 966 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 958 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_3:
# 960 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_4:
# 962 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_5:
# 964 "data/global.pory"
	speakername CommonText_Sakura
	return


GetRivalMusic::
# 971 "data/global.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 972 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 973 "data/global.pory"
	case 1, GetRivalMusic_2
# 975 "data/global.pory"
	case 2, GetRivalMusic_3
# 977 "data/global.pory"
	case 3, GetRivalMusic_4
# 979 "data/global.pory"
	case 4, GetRivalMusic_5
# 982 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_RIVAL
	return

GetRivalMusic_2:
# 974 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_TRAINER
	return

GetRivalMusic_3:
# 976 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_ELITE_FOUR
	return

GetRivalMusic_4:
# 978 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_WILD_KANTO
	return

GetRivalMusic_5:
# 980 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_PL_VS_FRONTIER_BRAIN
	return


Mart_EventScript_TMClerk_Text_0:
# 250 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 256 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 258 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 261 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 264 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 267 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 270 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 273 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 276 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 476 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 481 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 482 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 484 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 632 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 635 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 637 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 639 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 641 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 644 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 651 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 661 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 664 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 667 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 689 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 690 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 691 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 692 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 693 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 694 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 695 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 696 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 697 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 698 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 699 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 700 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 701 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 702 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 703 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 704 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 705 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 706 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 707 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 708 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 709 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 710 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 711 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 712 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 715 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_25:
# 716 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_26:
# 717 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_27:
# 725 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_28:
# 732 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 749 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 753 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 826 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 830 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 834 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 838 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 842 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 846 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 850 "data/global.pory"
	.string "Giovanni$"

CommonText_Courtney::
# 854 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 858 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 862 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 866 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 870 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 874 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 878 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 882 "data/global.pory"
	.string "Steven$"

CommonText_Scott::
# 886 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 890 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 894 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 898 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 902 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 906 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 910 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 914 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 918 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 922 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 926 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 930 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 934 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 938 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 942 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 946 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 950 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Baron::
# 986 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 990 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 994 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 998 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 1002 "data/global.pory"
	.string "Sakura$"

Text_PokevialSizeIncrease::
# 1006 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 1010 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 1014 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 1018 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 1022 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 1026 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 1030 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 1034 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 1038 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 1042 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 1046 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 1050 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 1054 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 1058 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 1062 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 1066 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1070 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1074 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1078 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1082 "data/global.pory"
	.string "Stellar Type$"

CommonText_RustboroCity::
# 1086 "data/global.pory"
	.string "Rustboro City$"

CommonText_DewfordTown::
# 1090 "data/global.pory"
	.string "Dewford Town$"

CommonText_MauvilleCity::
# 1094 "data/global.pory"
	.string "Mauville City$"

CommonText_LavaridgeTown::
# 1098 "data/global.pory"
	.string "Lavaridge Town$"

CommonText_PetalburgCity::
# 1102 "data/global.pory"
	.string "Petalburg City$"

CommonText_FortreeCity::
# 1106 "data/global.pory"
	.string "Fortree City$"

CommonText_MossdeepCity::
# 1110 "data/global.pory"
	.string "Mossdeep City$"

CommonText_SootopolisCity::
# 1114 "data/global.pory"
	.string "Sootopolis City$"

CommonText_Roxanne::
# 1118 "data/global.pory"
	.string "Roxanne$"

CommonText_Brawly::
# 1122 "data/global.pory"
	.string "Brawly$"

CommonText_Wattson::
# 1126 "data/global.pory"
	.string "Wattson$"

CommonText_Flannery::
# 1130 "data/global.pory"
	.string "Flannery$"

CommonText_Norman::
# 1134 "data/global.pory"
	.string "Norman$"

CommonText_Winona::
# 1138 "data/global.pory"
	.string "Winona$"

CommonText_LizaAndTate::
# 1142 "data/global.pory"
	.string "Liza & Tate$"

CommonText_Juan::
# 1146 "data/global.pory"
	.string "Juan$"

Text_TrickMasterIs_Puzzle1::
# 1150 "data/global.pory"
	.string "fabulous$"

Text_TrickMasterIs_Puzzle2::
# 1154 "data/global.pory"
	.string "based$"

Text_TrickMasterIs_Puzzle3::
# 1158 "data/global.pory"
	.string "coveted$"

Text_TrickMasterIs_Puzzle4::
# 1162 "data/global.pory"
	.string "cool$"

Text_TrickMasterIs_Puzzle5::
# 1166 "data/global.pory"
	.string "a genius$"

Text_TrickMasterIs_Puzzle6::
# 1170 "data/global.pory"
	.string "my life$"

Text_TrickMasterIs_Puzzle7::
# 1174 "data/global.pory"
	.string "huggable$"

Text_TrickMasterIs_Puzzle8::
# 1178 "data/global.pory"
	.string "my love$"

Text_TrickMasterIsBlank::
# 1182 "data/global.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“Trick Master is {STR_VAR_1}.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"
