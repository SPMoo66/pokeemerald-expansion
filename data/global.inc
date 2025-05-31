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


EventScript_Clear_FlagTemp4::
# 17 "data/global.pory"
	clearflag FLAG_TEMP_4
	return


EventScript_HideMapNamePopup::
# 22 "data/global.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


Mart_EventScript_Clerk::
# 27 "data/global.pory"
	lock
# 28 "data/global.pory"
	faceplayer
# 29 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 30 "data/global.pory"
	waitmessage
# 31 "data/global.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Mart_EventScript_Clerk_2
# 35 "data/global.pory"
	special GetNumberOfBadges
# 36 "data/global.pory"
	switch VAR_RESULT
# 37 "data/global.pory"
	case 0, Mart_EventScript_Clerk_6
# 39 "data/global.pory"
	case 1, Mart_EventScript_Clerk_7
# 41 "data/global.pory"
	case 2, Mart_EventScript_Clerk_8
# 43 "data/global.pory"
	case 3, Mart_EventScript_Clerk_9
# 45 "data/global.pory"
	case 4, Mart_EventScript_Clerk_10
# 47 "data/global.pory"
	case 5, Mart_EventScript_Clerk_11
# 49 "data/global.pory"
	case 6, Mart_EventScript_Clerk_12
# 51 "data/global.pory"
	case 7, Mart_EventScript_Clerk_13
# 52 "data/global.pory"
	case 8, Mart_EventScript_Clerk_13
Mart_EventScript_Clerk_1:
# 58 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 59 "data/global.pory"
	release
	end

Mart_EventScript_Clerk_2:
# 32 "data/global.pory"
	pokemart BadgedPokemartClear
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 38 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 40 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 42 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 44 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 46 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 48 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_12:
# 50 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_13:
# 53 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 63 "data/global.pory"
BadgedPokemart0:
# 64 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 65 "data/global.pory"
	.2byte ITEM_POTION
# 66 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 67 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 68 "data/global.pory"
	.2byte ITEM_AWAKENING
# 69 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 70 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 71 "data/global.pory"
	.2byte ITEM_REPEL
# 72 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 75 "data/global.pory"
BadgedPokemart1:
# 76 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 77 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 78 "data/global.pory"
	.2byte ITEM_POTION
# 79 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 80 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 81 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 82 "data/global.pory"
	.2byte ITEM_AWAKENING
# 83 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 84 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 85 "data/global.pory"
	.2byte ITEM_REPEL
# 86 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 89 "data/global.pory"
BadgedPokemart2:
# 90 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 91 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 92 "data/global.pory"
	.2byte ITEM_POTION
# 93 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 94 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 95 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 96 "data/global.pory"
	.2byte ITEM_AWAKENING
# 97 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 98 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 99 "data/global.pory"
	.2byte ITEM_REPEL
# 100 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 101 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 102 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 103 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 106 "data/global.pory"
BadgedPokemart3:
# 107 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 108 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 109 "data/global.pory"
	.2byte ITEM_POTION
# 110 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 111 "data/global.pory"
	.2byte ITEM_REVIVE
# 112 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 113 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 114 "data/global.pory"
	.2byte ITEM_AWAKENING
# 115 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 116 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 117 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 118 "data/global.pory"
	.2byte ITEM_REPEL
# 119 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 120 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 121 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 122 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 123 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 126 "data/global.pory"
BadgedPokemart4:
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
	.2byte ITEM_REVIVE
# 134 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 135 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 136 "data/global.pory"
	.2byte ITEM_AWAKENING
# 137 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 138 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 139 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 140 "data/global.pory"
	.2byte ITEM_REPEL
# 141 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 142 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 143 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 144 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 145 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 148 "data/global.pory"
BadgedPokemart5:
# 149 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 150 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 151 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 152 "data/global.pory"
	.2byte ITEM_POTION
# 153 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 154 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 155 "data/global.pory"
	.2byte ITEM_REVIVE
# 156 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 157 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 158 "data/global.pory"
	.2byte ITEM_AWAKENING
# 159 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 160 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 161 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 162 "data/global.pory"
	.2byte ITEM_REPEL
# 163 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 164 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 165 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 166 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 167 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 168 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 171 "data/global.pory"
BadgedPokemart6:
# 172 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 173 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 174 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 175 "data/global.pory"
	.2byte ITEM_POTION
# 176 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 177 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 178 "data/global.pory"
	.2byte ITEM_MAX_POTION
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
	.2byte ITEM_NONE

	.align 2
# 195 "data/global.pory"
BadgedPokemart7:
# 196 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 197 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 198 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 199 "data/global.pory"
	.2byte ITEM_POTION
# 200 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 201 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 202 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 203 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 204 "data/global.pory"
	.2byte ITEM_REVIVE
# 205 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 206 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 207 "data/global.pory"
	.2byte ITEM_AWAKENING
# 208 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 209 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 210 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 211 "data/global.pory"
	.2byte ITEM_REPEL
# 212 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 213 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 214 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 215 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 216 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 217 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 218 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

	.align 2
# 221 "data/global.pory"
BadgedPokemartClear:
# 222 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 223 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 224 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 225 "data/global.pory"
	.2byte ITEM_POTION
# 226 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 227 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 228 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 229 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 230 "data/global.pory"
	.2byte ITEM_REVIVE
# 231 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 232 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 233 "data/global.pory"
	.2byte ITEM_AWAKENING
# 234 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 235 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 236 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 237 "data/global.pory"
	.2byte ITEM_REPEL
# 238 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 239 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 240 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 241 "data/global.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
# 242 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 243 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 244 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 245 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
# 246 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 251 "data/global.pory"
	lock
# 252 "data/global.pory"
	faceplayer
# 253 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 259 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 260 "data/global.pory"
	waitmessage
# 261 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 262 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 265 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 268 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 271 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 274 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 277 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 280 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 283 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 284 "data/global.pory"
	switch VAR_RESULT
# 285 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 287 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 289 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 291 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 293 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 295 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 297 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 299 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 304 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 306 "data/global.pory"
	release
	end

Mart_EventScript_TMClerk_2:
# 255 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 263 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 266 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 269 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 272 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 275 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 278 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 281 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 286 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 288 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 290 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 292 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 294 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 296 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 298 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 300 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 310 "data/global.pory"
TMMart1:
# 311 "data/global.pory"
	.2byte ITEM_TM33
# 312 "data/global.pory"
	.2byte ITEM_TM47
# 313 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 316 "data/global.pory"
TMMart2:
# 317 "data/global.pory"
	.2byte ITEM_TM21
# 318 "data/global.pory"
	.2byte ITEM_TM26
# 319 "data/global.pory"
	.2byte ITEM_TM29
# 320 "data/global.pory"
	.2byte ITEM_TM31
# 321 "data/global.pory"
	.2byte ITEM_TM37
# 322 "data/global.pory"
	.2byte ITEM_TM81
# 323 "data/global.pory"
	.2byte ITEM_TM109
# 324 "data/global.pory"
	.2byte ITEM_TM110
# 325 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 328 "data/global.pory"
TMMart3:
# 329 "data/global.pory"
	.2byte ITEM_TM01
# 330 "data/global.pory"
	.2byte ITEM_TM02
# 331 "data/global.pory"
	.2byte ITEM_TM03
# 332 "data/global.pory"
	.2byte ITEM_TM04
# 333 "data/global.pory"
	.2byte ITEM_TM19
# 334 "data/global.pory"
	.2byte ITEM_TM20
# 335 "data/global.pory"
	.2byte ITEM_TM30
# 336 "data/global.pory"
	.2byte ITEM_TM39
# 337 "data/global.pory"
	.2byte ITEM_TM44
# 338 "data/global.pory"
	.2byte ITEM_TM48
# 339 "data/global.pory"
	.2byte ITEM_TM64
# 340 "data/global.pory"
	.2byte ITEM_TM68
# 341 "data/global.pory"
	.2byte ITEM_TM76
# 342 "data/global.pory"
	.2byte ITEM_TM94
# 343 "data/global.pory"
	.2byte ITEM_TM103
# 344 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 347 "data/global.pory"
TMMart4:
# 348 "data/global.pory"
	.2byte ITEM_TM10
# 349 "data/global.pory"
	.2byte ITEM_TM15
# 350 "data/global.pory"
	.2byte ITEM_TM16
# 351 "data/global.pory"
	.2byte ITEM_TM17
# 352 "data/global.pory"
	.2byte ITEM_TM18
# 353 "data/global.pory"
	.2byte ITEM_TM25
# 354 "data/global.pory"
	.2byte ITEM_TM32
# 355 "data/global.pory"
	.2byte ITEM_TM65
# 356 "data/global.pory"
	.2byte ITEM_TM73
# 357 "data/global.pory"
	.2byte ITEM_TM75
# 358 "data/global.pory"
	.2byte ITEM_TM82
# 359 "data/global.pory"
	.2byte ITEM_TM87
# 360 "data/global.pory"
	.2byte ITEM_TM101
# 361 "data/global.pory"
	.2byte ITEM_TM104
# 362 "data/global.pory"
	.2byte ITEM_TM108
# 363 "data/global.pory"
	.2byte ITEM_TM114
# 364 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 367 "data/global.pory"
TMMart5:
# 368 "data/global.pory"
	.2byte ITEM_TM05
# 369 "data/global.pory"
	.2byte ITEM_TM06
# 370 "data/global.pory"
	.2byte ITEM_TM07
# 371 "data/global.pory"
	.2byte ITEM_TM08
# 372 "data/global.pory"
	.2byte ITEM_TM11
# 373 "data/global.pory"
	.2byte ITEM_TM12
# 374 "data/global.pory"
	.2byte ITEM_TM13
# 375 "data/global.pory"
	.2byte ITEM_TM24
# 376 "data/global.pory"
	.2byte ITEM_TM28
# 377 "data/global.pory"
	.2byte ITEM_TM45
# 378 "data/global.pory"
	.2byte ITEM_TM50
# 379 "data/global.pory"
	.2byte ITEM_TM54
# 380 "data/global.pory"
	.2byte ITEM_TM60
# 381 "data/global.pory"
	.2byte ITEM_TM61
# 382 "data/global.pory"
	.2byte ITEM_TM66
# 383 "data/global.pory"
	.2byte ITEM_TM71
# 384 "data/global.pory"
	.2byte ITEM_TM78
# 385 "data/global.pory"
	.2byte ITEM_TM83
# 386 "data/global.pory"
	.2byte ITEM_TM85
# 387 "data/global.pory"
	.2byte ITEM_TM86
# 388 "data/global.pory"
	.2byte ITEM_TM88
# 389 "data/global.pory"
	.2byte ITEM_TM99
# 390 "data/global.pory"
	.2byte ITEM_TM111
# 391 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 394 "data/global.pory"
TMMart6:
# 395 "data/global.pory"
	.2byte ITEM_TM09
# 396 "data/global.pory"
	.2byte ITEM_TM22
# 397 "data/global.pory"
	.2byte ITEM_TM23
# 398 "data/global.pory"
	.2byte ITEM_TM41
# 399 "data/global.pory"
	.2byte ITEM_TM49
# 400 "data/global.pory"
	.2byte ITEM_TM51
# 401 "data/global.pory"
	.2byte ITEM_TM52
# 402 "data/global.pory"
	.2byte ITEM_TM56
# 403 "data/global.pory"
	.2byte ITEM_TM57
# 404 "data/global.pory"
	.2byte ITEM_TM59
# 405 "data/global.pory"
	.2byte ITEM_TM62
# 406 "data/global.pory"
	.2byte ITEM_TM67
# 407 "data/global.pory"
	.2byte ITEM_TM69
# 408 "data/global.pory"
	.2byte ITEM_TM74
# 409 "data/global.pory"
	.2byte ITEM_TM79
# 410 "data/global.pory"
	.2byte ITEM_TM89
# 411 "data/global.pory"
	.2byte ITEM_TM90
# 412 "data/global.pory"
	.2byte ITEM_TM91
# 413 "data/global.pory"
	.2byte ITEM_TM92
# 414 "data/global.pory"
	.2byte ITEM_TM97
# 415 "data/global.pory"
	.2byte ITEM_TM98
# 416 "data/global.pory"
	.2byte ITEM_TM100
# 417 "data/global.pory"
	.2byte ITEM_TM102
# 418 "data/global.pory"
	.2byte ITEM_TM105
# 419 "data/global.pory"
	.2byte ITEM_TM106
# 420 "data/global.pory"
	.2byte ITEM_TM113
# 421 "data/global.pory"
	.2byte ITEM_TM117
# 422 "data/global.pory"
	.2byte ITEM_TM118
# 423 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 426 "data/global.pory"
TMMart7:
# 427 "data/global.pory"
	.2byte ITEM_TM36
# 428 "data/global.pory"
	.2byte ITEM_TM38
# 429 "data/global.pory"
	.2byte ITEM_TM42
# 430 "data/global.pory"
	.2byte ITEM_TM53
# 431 "data/global.pory"
	.2byte ITEM_TM58
# 432 "data/global.pory"
	.2byte ITEM_TM63
# 433 "data/global.pory"
	.2byte ITEM_TM70
# 434 "data/global.pory"
	.2byte ITEM_TM72
# 435 "data/global.pory"
	.2byte ITEM_TM77
# 436 "data/global.pory"
	.2byte ITEM_TM84
# 437 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 440 "data/global.pory"
TMMart8:
# 441 "data/global.pory"
	.2byte ITEM_TM43
# 442 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 447 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 448 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_2
# 450 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_3
# 452 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_4
# 454 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_5
# 457 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 449 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_3:
# 451 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_4:
# 453 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_5:
# 455 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 461 "data/global.pory"

# 462 "data/global.pory"
Common_EventScript_GymNurse::
# 463 "data/global.pory"
	lock
# 464 "data/global.pory"
	faceplayer
# 465 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 466 "data/global.pory"
	closemessage
# 467 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 468 "data/global.pory"
	releaseall
# 469 "data/global.pory"
	end
# 470 "data/global.pory"

# 471 "data/global.pory"
gText_GymNurseHeal::
# 472 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 476 "data/global.pory"
	lock
# 477 "data/global.pory"
	faceplayer
# 478 "data/global.pory"
	special GetNumberOfBadges
# 479 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 480 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 484 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 485 "data/global.pory"
	waitmessage
# 486 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 487 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 488 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 491 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 492 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 509 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 527 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 544 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 546 "data/global.pory"
	release
	end

Mart_EventScript_EvoClerk_2:
# 481 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 489 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 493 "data/global.pory"
	switch VAR_TEMP_0
# 494 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 495 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 496 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 497 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 498 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 500 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 501 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 502 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 503 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 510 "data/global.pory"
	switch VAR_TEMP_0
# 511 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 512 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 513 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 514 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 516 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 518 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 519 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 520 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 521 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 528 "data/global.pory"
	switch VAR_TEMP_0
# 529 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 530 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 531 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 532 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 533 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 534 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 535 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 537 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 538 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 499 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 504 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 515 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 517 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 522 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 536 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 539 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 550 "data/global.pory"
EvoStonesPokemart3:
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
	.2byte ITEM_NONE

	.align 2
# 560 "data/global.pory"
EvoStonesPokemart5:
# 561 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 562 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 563 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 564 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 565 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 566 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 567 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 568 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 569 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 570 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 573 "data/global.pory"
EvoOtherPokemart3:
# 574 "data/global.pory"
	.2byte ITEM_SACHET
# 575 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 578 "data/global.pory"
EvoOtherPokemart4:
# 579 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 580 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 581 "data/global.pory"
	.2byte ITEM_SACHET
# 582 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 583 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 584 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 585 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 586 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 589 "data/global.pory"
EvoOtherPokemart5:
# 590 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 591 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 592 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 593 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 594 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 595 "data/global.pory"
	.2byte ITEM_UPGRADE
# 596 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 597 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 598 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 599 "data/global.pory"
	.2byte ITEM_SACHET
# 600 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 601 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 602 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 603 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 604 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 605 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 606 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 607 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 608 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 611 "data/global.pory"
EvoExtraPokemart6:
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
	.2byte ITEM_NONE

	.align 2
# 621 "data/global.pory"
EvoExtraPokemart7:
# 622 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 623 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 624 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 625 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 626 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 627 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 628 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 629 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 630 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 634 "data/global.pory"
	lock
# 635 "data/global.pory"
	faceplayer
# 636 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 639 "data/global.pory"
	setflag FLAG_TEMP_1
# 640 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 641 "data/global.pory"
	setvar VAR_RESULT, 2
# 642 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 643 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 646 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 647 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 648 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 652 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 656 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 657 "data/global.pory"
	special ChooseMonForMoveRelearner
# 658 "data/global.pory"
	waitstate
# 659 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 664 "data/global.pory"
	special IsSelectedMonEgg
# 665 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 668 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 672 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 673 "data/global.pory"
	special TeachMoveRelearnerMove
# 674 "data/global.pory"
	waitstate
# 675 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 681 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 682 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 637 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 644 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 649 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 653 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 660 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 666 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 669 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 686 "data/global.pory"
	lock
# 687 "data/global.pory"
	faceplayer
# 688 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 692 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 693 "data/global.pory"
	waitmessage
# 694 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 695 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 696 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 697 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 698 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 699 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 700 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 701 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 702 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 703 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 704 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 705 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 706 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 707 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 708 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 709 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 710 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 711 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 712 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 713 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 714 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 715 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 716 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 717 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 718 "data/global.pory"
	special GetNumberOfBadges
# 719 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 724 "data/global.pory"
	special ShowBottleCapsWindow
# 725 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 726 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 747 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 748 "data/global.pory"
	special CloseBattlePointsWindow
# 749 "data/global.pory"
	release
	end

EventScript_CapCollector_2:
# 689 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 690 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 720 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BOOSTER_ENERGY
# 721 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_MIRROR_HERB
# 722 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 727 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 728 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 729 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 735 "data/global.pory"
	checkitemspace VAR_0x8009
# 736 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 742 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 743 "data/global.pory"
	additem VAR_0x8009
# 744 "data/global.pory"
	special UpdateBottleCapsWindow
# 745 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 730 "data/global.pory"
	msgbox EventScript_CapCollector_Text_27
# 731 "data/global.pory"
	special CloseBattlePointsWindow
# 732 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 737 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 738 "data/global.pory"
	special CloseBattlePointsWindow
# 739 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 763 "data/global.pory"
	lock
# 764 "data/global.pory"
	faceplayer
# 765 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 766 "data/global.pory"
	waitmessage
# 767 "data/global.pory"
	pokemart AbilityNaturePokemart
# 768 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 769 "data/global.pory"
	release
	end


	.align 2
# 773 "data/global.pory"
AbilityNaturePokemart:
# 774 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 775 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 776 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 777 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 778 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
# 779 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 780 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 781 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 782 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 783 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 784 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 785 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 786 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 787 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 788 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 789 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 790 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 791 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 792 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 793 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 794 "data/global.pory"
	.2byte ITEM_JOLLY_MINT
# 795 "data/global.pory"
	.2byte ITEM_NAIVE_MINT
# 796 "data/global.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 800 "data/global.pory"
	lock
# 801 "data/global.pory"
	faceplayer
# 802 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 803 "data/global.pory"
	waitmessage
# 804 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 805 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 806 "data/global.pory"
	release
	end


	.align 2
# 810 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 811 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 812 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 813 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 814 "data/global.pory"
	.2byte ITEM_MAGNET
# 815 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 816 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 817 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 818 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 819 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 820 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 821 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 822 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 823 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 824 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 825 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 826 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 827 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 828 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 961 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 962 "data/global.pory"
	case 1, GetRivalForNameBox_2
# 964 "data/global.pory"
	case 2, GetRivalForNameBox_3
# 966 "data/global.pory"
	case 3, GetRivalForNameBox_4
# 968 "data/global.pory"
	case 4, GetRivalForNameBox_5
# 971 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 963 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_3:
# 965 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_4:
# 967 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_5:
# 969 "data/global.pory"
	speakername CommonText_Sakura
	return


GetRivalMusic::
# 976 "data/global.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 977 "data/global.pory"
	switch VAR_EMERALBODY_RIVAL
# 978 "data/global.pory"
	case 1, GetRivalMusic_2
# 980 "data/global.pory"
	case 2, GetRivalMusic_3
# 982 "data/global.pory"
	case 3, GetRivalMusic_4
# 984 "data/global.pory"
	case 4, GetRivalMusic_5
# 987 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_RIVAL
	return

GetRivalMusic_2:
# 979 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_TRAINER
	return

GetRivalMusic_3:
# 981 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_ELITE_FOUR
	return

GetRivalMusic_4:
# 983 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_WILD_KANTO
	return

GetRivalMusic_5:
# 985 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_PL_VS_FRONTIER_BRAIN
	return


Mart_EventScript_TMClerk_Text_0:
# 255 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 261 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 263 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 266 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 269 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 272 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 275 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 278 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 281 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 481 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 486 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 487 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 489 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 637 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 640 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 642 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 644 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 646 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 649 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 656 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 666 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 669 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 672 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 694 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 695 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 696 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 697 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 698 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 699 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 700 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 701 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 702 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 703 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 704 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 705 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 706 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 707 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 708 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 709 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 710 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 711 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 712 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 713 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 714 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 715 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 716 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 717 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 720 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_25:
# 721 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_26:
# 722 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_27:
# 730 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_28:
# 737 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 754 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 758 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 831 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 835 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 839 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 843 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 847 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 851 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 855 "data/global.pory"
	.string "Giovanni$"

CommonText_Courtney::
# 859 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 863 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 867 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 871 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 875 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 879 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 883 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 887 "data/global.pory"
	.string "Steven$"

CommonText_Scott::
# 891 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 895 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 899 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 903 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 907 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 911 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 915 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 919 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 923 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 927 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 931 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 935 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 939 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 943 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 947 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 951 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 955 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Baron::
# 991 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 995 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 999 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 1003 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 1007 "data/global.pory"
	.string "Sakura$"

Text_PokevialSizeIncrease::
# 1011 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 1015 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 1019 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 1023 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 1027 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 1031 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 1035 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 1039 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 1043 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 1047 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 1051 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 1055 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 1059 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 1063 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 1067 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 1071 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1075 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1079 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1083 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1087 "data/global.pory"
	.string "Stellar Type$"

CommonText_RustboroCity::
# 1091 "data/global.pory"
	.string "Rustboro City$"

CommonText_DewfordTown::
# 1095 "data/global.pory"
	.string "Dewford Town$"

CommonText_MauvilleCity::
# 1099 "data/global.pory"
	.string "Mauville City$"

CommonText_LavaridgeTown::
# 1103 "data/global.pory"
	.string "Lavaridge Town$"

CommonText_PetalburgCity::
# 1107 "data/global.pory"
	.string "Petalburg City$"

CommonText_FortreeCity::
# 1111 "data/global.pory"
	.string "Fortree City$"

CommonText_MossdeepCity::
# 1115 "data/global.pory"
	.string "Mossdeep City$"

CommonText_SootopolisCity::
# 1119 "data/global.pory"
	.string "Sootopolis City$"

CommonText_Roxanne::
# 1123 "data/global.pory"
	.string "Roxanne$"

CommonText_Brawly::
# 1127 "data/global.pory"
	.string "Brawly$"

CommonText_Wattson::
# 1131 "data/global.pory"
	.string "Wattson$"

CommonText_Flannery::
# 1135 "data/global.pory"
	.string "Flannery$"

CommonText_Norman::
# 1139 "data/global.pory"
	.string "Norman$"

CommonText_Winona::
# 1143 "data/global.pory"
	.string "Winona$"

CommonText_LizaAndTate::
# 1147 "data/global.pory"
	.string "Liza & Tate$"

CommonText_Juan::
# 1151 "data/global.pory"
	.string "Juan$"

Text_TrickMasterIs_Puzzle1::
# 1155 "data/global.pory"
	.string "fabulous$"

Text_TrickMasterIs_Puzzle2::
# 1159 "data/global.pory"
	.string "based$"

Text_TrickMasterIs_Puzzle3::
# 1163 "data/global.pory"
	.string "coveted$"

Text_TrickMasterIs_Puzzle4::
# 1167 "data/global.pory"
	.string "cool$"

Text_TrickMasterIs_Puzzle5::
# 1171 "data/global.pory"
	.string "a genius$"

Text_TrickMasterIs_Puzzle6::
# 1175 "data/global.pory"
	.string "my life$"

Text_TrickMasterIs_Puzzle7::
# 1179 "data/global.pory"
	.string "huggable$"

Text_TrickMasterIs_Puzzle8::
# 1183 "data/global.pory"
	.string "my love$"

Text_TrickMasterIsBlank::
# 1187 "data/global.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“Trick Master is {STR_VAR_1}.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Text_2nd::
# 1195 "data/global.pory"
	.string "2nd$"

Text_3rd::
# 1199 "data/global.pory"
	.string "3rd$"

Text_4th::
# 1203 "data/global.pory"
	.string "4th$"

Text_5th::
# 1207 "data/global.pory"
	.string "5th$"

Text_6th::
# 1211 "data/global.pory"
	.string "6th$"

Text_7th::
# 1215 "data/global.pory"
	.string "7th$"
