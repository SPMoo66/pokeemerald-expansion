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


EventScript_DoNotDoor::
# 27 "data/global.pory"
	setflag FLAG_SYS_DO_NOT_DOOR
	return


EventScript_SpawnInvisible::
# 32 "data/global.pory"
	setflag FLAG_SYS_SPAWN_INVISIBLE
	return


Mart_EventScript_Clerk::
# 37 "data/global.pory"
	lock
# 38 "data/global.pory"
	faceplayer
# 39 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 40 "data/global.pory"
	waitmessage
# 41 "data/global.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Mart_EventScript_Clerk_2
# 45 "data/global.pory"
	special GetNumberOfBadges
# 46 "data/global.pory"
	switch VAR_RESULT
# 47 "data/global.pory"
	case 0, Mart_EventScript_Clerk_6
# 49 "data/global.pory"
	case 1, Mart_EventScript_Clerk_7
# 51 "data/global.pory"
	case 2, Mart_EventScript_Clerk_8
# 53 "data/global.pory"
	case 3, Mart_EventScript_Clerk_9
# 55 "data/global.pory"
	case 4, Mart_EventScript_Clerk_10
# 57 "data/global.pory"
	case 5, Mart_EventScript_Clerk_11
# 59 "data/global.pory"
	case 6, Mart_EventScript_Clerk_12
# 61 "data/global.pory"
	case 7, Mart_EventScript_Clerk_13
# 62 "data/global.pory"
	case 8, Mart_EventScript_Clerk_13
Mart_EventScript_Clerk_1:
# 68 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 69 "data/global.pory"
	release
	return

Mart_EventScript_Clerk_2:
# 42 "data/global.pory"
	pokemart BadgedPokemartClear
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_6:
# 48 "data/global.pory"
	pokemart BadgedPokemart0
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_7:
# 50 "data/global.pory"
	pokemart BadgedPokemart1
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_8:
# 52 "data/global.pory"
	pokemart BadgedPokemart2
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_9:
# 54 "data/global.pory"
	pokemart BadgedPokemart3
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_10:
# 56 "data/global.pory"
	pokemart BadgedPokemart4
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_11:
# 58 "data/global.pory"
	pokemart BadgedPokemart5
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_12:
# 60 "data/global.pory"
	pokemart BadgedPokemart6
	goto Mart_EventScript_Clerk_1

Mart_EventScript_Clerk_13:
# 63 "data/global.pory"
	pokemart BadgedPokemart7
	goto Mart_EventScript_Clerk_1


	.align 2
# 72 "data/global.pory"
BadgedPokemart0:
# 73 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 74 "data/global.pory"
	.2byte ITEM_POTION
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
BadgedPokemart1:
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
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_NONE

	.align 2
# 98 "data/global.pory"
BadgedPokemart2:
# 99 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 100 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 101 "data/global.pory"
	.2byte ITEM_POTION
# 102 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 103 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 104 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 105 "data/global.pory"
	.2byte ITEM_AWAKENING
# 106 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 107 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 108 "data/global.pory"
	.2byte ITEM_REPEL
# 109 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 110 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 111 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 112 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 115 "data/global.pory"
BadgedPokemart3:
# 116 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 117 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 118 "data/global.pory"
	.2byte ITEM_POTION
# 119 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 120 "data/global.pory"
	.2byte ITEM_REVIVE
# 121 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 122 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 123 "data/global.pory"
	.2byte ITEM_AWAKENING
# 124 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 125 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 126 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 127 "data/global.pory"
	.2byte ITEM_REPEL
# 128 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 129 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 130 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 131 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 132 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 135 "data/global.pory"
BadgedPokemart4:
# 136 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 137 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 138 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 139 "data/global.pory"
	.2byte ITEM_POTION
# 140 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 141 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 142 "data/global.pory"
	.2byte ITEM_REVIVE
# 143 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 144 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 145 "data/global.pory"
	.2byte ITEM_AWAKENING
# 146 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 147 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 148 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 149 "data/global.pory"
	.2byte ITEM_REPEL
# 150 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 151 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 152 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 153 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 154 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_NONE

	.align 2
# 157 "data/global.pory"
BadgedPokemart5:
# 158 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 159 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 160 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 161 "data/global.pory"
	.2byte ITEM_POTION
# 162 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 163 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 164 "data/global.pory"
	.2byte ITEM_REVIVE
# 165 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 166 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 167 "data/global.pory"
	.2byte ITEM_AWAKENING
# 168 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 169 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 170 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 171 "data/global.pory"
	.2byte ITEM_REPEL
# 172 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 173 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 174 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 175 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 176 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 177 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 180 "data/global.pory"
BadgedPokemart6:
# 181 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 182 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 183 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 184 "data/global.pory"
	.2byte ITEM_POTION
# 185 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 186 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 187 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 188 "data/global.pory"
	.2byte ITEM_REVIVE
# 189 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 190 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 191 "data/global.pory"
	.2byte ITEM_AWAKENING
# 192 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 193 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 194 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 195 "data/global.pory"
	.2byte ITEM_REPEL
# 196 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 197 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 198 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 199 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 200 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 201 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_NONE

	.align 2
# 204 "data/global.pory"
BadgedPokemart7:
# 205 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 206 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 207 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 208 "data/global.pory"
	.2byte ITEM_POTION
# 209 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 210 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 211 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 212 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 213 "data/global.pory"
	.2byte ITEM_REVIVE
# 214 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 215 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 216 "data/global.pory"
	.2byte ITEM_AWAKENING
# 217 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 218 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 219 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 220 "data/global.pory"
	.2byte ITEM_REPEL
# 221 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 222 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 223 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 224 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 225 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 226 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 227 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

	.align 2
# 230 "data/global.pory"
BadgedPokemartClear:
# 231 "data/global.pory"
	.2byte ITEM_POKE_BALL
# 232 "data/global.pory"
	.2byte ITEM_GREAT_BALL
# 233 "data/global.pory"
	.2byte ITEM_ULTRA_BALL
# 234 "data/global.pory"
	.2byte ITEM_POTION
# 235 "data/global.pory"
	.2byte ITEM_SUPER_POTION
# 236 "data/global.pory"
	.2byte ITEM_HYPER_POTION
# 237 "data/global.pory"
	.2byte ITEM_MAX_POTION
# 238 "data/global.pory"
	.2byte ITEM_FULL_RESTORE
# 239 "data/global.pory"
	.2byte ITEM_REVIVE
# 240 "data/global.pory"
	.2byte ITEM_ANTIDOTE
# 241 "data/global.pory"
	.2byte ITEM_PARALYZE_HEAL
# 242 "data/global.pory"
	.2byte ITEM_AWAKENING
# 243 "data/global.pory"
	.2byte ITEM_BURN_HEAL
# 244 "data/global.pory"
	.2byte ITEM_ICE_HEAL
# 245 "data/global.pory"
	.2byte ITEM_FULL_HEAL
# 246 "data/global.pory"
	.2byte ITEM_REPEL
# 247 "data/global.pory"
	.2byte ITEM_SUPER_REPEL
# 248 "data/global.pory"
	.2byte ITEM_MAX_REPEL
# 249 "data/global.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 250 "data/global.pory"
	.2byte ITEM_STELLAR_TERA_SHARD
# 251 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XS
# 252 "data/global.pory"
	.2byte ITEM_EXP_CANDY_S
# 253 "data/global.pory"
	.2byte ITEM_EXP_CANDY_M
# 254 "data/global.pory"
	.2byte ITEM_EXP_CANDY_L
# 255 "data/global.pory"
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE

Mart_EventScript_TMClerk::
# 260 "data/global.pory"
	lock
# 261 "data/global.pory"
	faceplayer
# 262 "data/global.pory"
	goto_if_unset FLAG_BADGE01_GET, Mart_EventScript_TMClerk_2
# 268 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 269 "data/global.pory"
	waitmessage
# 270 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_1, 0
# 271 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_TMClerk_6
Mart_EventScript_TMClerk_5:
# 274 "data/global.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_TMClerk_9
Mart_EventScript_TMClerk_8:
# 277 "data/global.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_TMClerk_12
Mart_EventScript_TMClerk_11:
# 280 "data/global.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_TMClerk_15
Mart_EventScript_TMClerk_14:
# 283 "data/global.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_TMClerk_18
Mart_EventScript_TMClerk_17:
# 286 "data/global.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_EventScript_TMClerk_21
Mart_EventScript_TMClerk_20:
# 289 "data/global.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_EventScript_TMClerk_24
Mart_EventScript_TMClerk_23:
# 292 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_NONE
# 293 "data/global.pory"
	switch VAR_RESULT
# 294 "data/global.pory"
	case 0, Mart_EventScript_TMClerk_28
# 296 "data/global.pory"
	case 1, Mart_EventScript_TMClerk_29
# 298 "data/global.pory"
	case 2, Mart_EventScript_TMClerk_30
# 300 "data/global.pory"
	case 3, Mart_EventScript_TMClerk_31
# 302 "data/global.pory"
	case 4, Mart_EventScript_TMClerk_32
# 304 "data/global.pory"
	case 5, Mart_EventScript_TMClerk_33
# 306 "data/global.pory"
	case 6, Mart_EventScript_TMClerk_34
# 308 "data/global.pory"
	case 7, Mart_EventScript_TMClerk_35
Mart_EventScript_TMClerk_26:
# 313 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_TMClerk_1:
# 315 "data/global.pory"
	release
	return

Mart_EventScript_TMClerk_2:
# 264 "data/global.pory"
	msgbox Mart_EventScript_TMClerk_Text_0
	goto Mart_EventScript_TMClerk_1

Mart_EventScript_TMClerk_6:
# 272 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_2, 1
	goto Mart_EventScript_TMClerk_5

Mart_EventScript_TMClerk_9:
# 275 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_3, 2
	goto Mart_EventScript_TMClerk_8

Mart_EventScript_TMClerk_12:
# 278 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_4, 3
	goto Mart_EventScript_TMClerk_11

Mart_EventScript_TMClerk_15:
# 281 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_5, 4
	goto Mart_EventScript_TMClerk_14

Mart_EventScript_TMClerk_18:
# 284 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_6, 5
	goto Mart_EventScript_TMClerk_17

Mart_EventScript_TMClerk_21:
# 287 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_7, 6
	goto Mart_EventScript_TMClerk_20

Mart_EventScript_TMClerk_24:
# 290 "data/global.pory"
	dynmultipush Mart_EventScript_TMClerk_Text_8, 7
	goto Mart_EventScript_TMClerk_23

Mart_EventScript_TMClerk_28:
# 295 "data/global.pory"
	pokemart TMMart1
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_29:
# 297 "data/global.pory"
	pokemart TMMart2
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_30:
# 299 "data/global.pory"
	pokemart TMMart3
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_31:
# 301 "data/global.pory"
	pokemart TMMart4
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_32:
# 303 "data/global.pory"
	pokemart TMMart5
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_33:
# 305 "data/global.pory"
	pokemart TMMart6
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_34:
# 307 "data/global.pory"
	pokemart TMMart7
	goto Mart_EventScript_TMClerk_26

Mart_EventScript_TMClerk_35:
# 309 "data/global.pory"
	pokemart TMMart8
	goto Mart_EventScript_TMClerk_26


	.align 2
# 318 "data/global.pory"
TMMart1:
# 319 "data/global.pory"
	.2byte ITEM_TM33
# 320 "data/global.pory"
	.2byte ITEM_TM47
# 321 "data/global.pory"
	.2byte ITEM_TM93
	.2byte ITEM_NONE

	.align 2
# 324 "data/global.pory"
TMMart2:
# 325 "data/global.pory"
	.2byte ITEM_TM21
# 326 "data/global.pory"
	.2byte ITEM_TM26
# 327 "data/global.pory"
	.2byte ITEM_TM29
# 328 "data/global.pory"
	.2byte ITEM_TM31
# 329 "data/global.pory"
	.2byte ITEM_TM37
# 330 "data/global.pory"
	.2byte ITEM_TM81
# 331 "data/global.pory"
	.2byte ITEM_TM109
# 332 "data/global.pory"
	.2byte ITEM_TM110
# 333 "data/global.pory"
	.2byte ITEM_TM119
	.2byte ITEM_NONE

	.align 2
# 336 "data/global.pory"
TMMart3:
# 337 "data/global.pory"
	.2byte ITEM_TM01
# 338 "data/global.pory"
	.2byte ITEM_TM02
# 339 "data/global.pory"
	.2byte ITEM_TM03
# 340 "data/global.pory"
	.2byte ITEM_TM04
# 341 "data/global.pory"
	.2byte ITEM_TM19
# 342 "data/global.pory"
	.2byte ITEM_TM20
# 343 "data/global.pory"
	.2byte ITEM_TM30
# 344 "data/global.pory"
	.2byte ITEM_TM39
# 345 "data/global.pory"
	.2byte ITEM_TM44
# 346 "data/global.pory"
	.2byte ITEM_TM48
# 347 "data/global.pory"
	.2byte ITEM_TM64
# 348 "data/global.pory"
	.2byte ITEM_TM68
# 349 "data/global.pory"
	.2byte ITEM_TM76
# 350 "data/global.pory"
	.2byte ITEM_TM94
# 351 "data/global.pory"
	.2byte ITEM_TM103
# 352 "data/global.pory"
	.2byte ITEM_TM115
	.2byte ITEM_NONE

	.align 2
# 355 "data/global.pory"
TMMart4:
# 356 "data/global.pory"
	.2byte ITEM_TM10
# 357 "data/global.pory"
	.2byte ITEM_TM15
# 358 "data/global.pory"
	.2byte ITEM_TM16
# 359 "data/global.pory"
	.2byte ITEM_TM17
# 360 "data/global.pory"
	.2byte ITEM_TM18
# 361 "data/global.pory"
	.2byte ITEM_TM25
# 362 "data/global.pory"
	.2byte ITEM_TM32
# 363 "data/global.pory"
	.2byte ITEM_TM65
# 364 "data/global.pory"
	.2byte ITEM_TM73
# 365 "data/global.pory"
	.2byte ITEM_TM75
# 366 "data/global.pory"
	.2byte ITEM_TM82
# 367 "data/global.pory"
	.2byte ITEM_TM87
# 368 "data/global.pory"
	.2byte ITEM_TM101
# 369 "data/global.pory"
	.2byte ITEM_TM104
# 370 "data/global.pory"
	.2byte ITEM_TM108
# 371 "data/global.pory"
	.2byte ITEM_TM114
# 372 "data/global.pory"
	.2byte ITEM_TM116
	.2byte ITEM_NONE

	.align 2
# 375 "data/global.pory"
TMMart5:
# 376 "data/global.pory"
	.2byte ITEM_TM05
# 377 "data/global.pory"
	.2byte ITEM_TM06
# 378 "data/global.pory"
	.2byte ITEM_TM07
# 379 "data/global.pory"
	.2byte ITEM_TM08
# 380 "data/global.pory"
	.2byte ITEM_TM11
# 381 "data/global.pory"
	.2byte ITEM_TM12
# 382 "data/global.pory"
	.2byte ITEM_TM13
# 383 "data/global.pory"
	.2byte ITEM_TM24
# 384 "data/global.pory"
	.2byte ITEM_TM28
# 385 "data/global.pory"
	.2byte ITEM_TM45
# 386 "data/global.pory"
	.2byte ITEM_TM50
# 387 "data/global.pory"
	.2byte ITEM_TM54
# 388 "data/global.pory"
	.2byte ITEM_TM60
# 389 "data/global.pory"
	.2byte ITEM_TM61
# 390 "data/global.pory"
	.2byte ITEM_TM66
# 391 "data/global.pory"
	.2byte ITEM_TM71
# 392 "data/global.pory"
	.2byte ITEM_TM78
# 393 "data/global.pory"
	.2byte ITEM_TM83
# 394 "data/global.pory"
	.2byte ITEM_TM85
# 395 "data/global.pory"
	.2byte ITEM_TM86
# 396 "data/global.pory"
	.2byte ITEM_TM88
# 397 "data/global.pory"
	.2byte ITEM_TM99
# 398 "data/global.pory"
	.2byte ITEM_TM111
# 399 "data/global.pory"
	.2byte ITEM_TM112
	.2byte ITEM_NONE

	.align 2
# 402 "data/global.pory"
TMMart6:
# 403 "data/global.pory"
	.2byte ITEM_TM09
# 404 "data/global.pory"
	.2byte ITEM_TM22
# 405 "data/global.pory"
	.2byte ITEM_TM23
# 406 "data/global.pory"
	.2byte ITEM_TM41
# 407 "data/global.pory"
	.2byte ITEM_TM49
# 408 "data/global.pory"
	.2byte ITEM_TM51
# 409 "data/global.pory"
	.2byte ITEM_TM52
# 410 "data/global.pory"
	.2byte ITEM_TM56
# 411 "data/global.pory"
	.2byte ITEM_TM57
# 412 "data/global.pory"
	.2byte ITEM_TM59
# 413 "data/global.pory"
	.2byte ITEM_TM62
# 414 "data/global.pory"
	.2byte ITEM_TM67
# 415 "data/global.pory"
	.2byte ITEM_TM69
# 416 "data/global.pory"
	.2byte ITEM_TM74
# 417 "data/global.pory"
	.2byte ITEM_TM79
# 418 "data/global.pory"
	.2byte ITEM_TM89
# 419 "data/global.pory"
	.2byte ITEM_TM90
# 420 "data/global.pory"
	.2byte ITEM_TM91
# 421 "data/global.pory"
	.2byte ITEM_TM92
# 422 "data/global.pory"
	.2byte ITEM_TM97
# 423 "data/global.pory"
	.2byte ITEM_TM98
# 424 "data/global.pory"
	.2byte ITEM_TM100
# 425 "data/global.pory"
	.2byte ITEM_TM102
# 426 "data/global.pory"
	.2byte ITEM_TM105
# 427 "data/global.pory"
	.2byte ITEM_TM106
# 428 "data/global.pory"
	.2byte ITEM_TM113
# 429 "data/global.pory"
	.2byte ITEM_TM117
# 430 "data/global.pory"
	.2byte ITEM_TM118
# 431 "data/global.pory"
	.2byte ITEM_TM120
	.2byte ITEM_NONE

	.align 2
# 434 "data/global.pory"
TMMart7:
# 435 "data/global.pory"
	.2byte ITEM_TM36
# 436 "data/global.pory"
	.2byte ITEM_TM38
# 437 "data/global.pory"
	.2byte ITEM_TM42
# 438 "data/global.pory"
	.2byte ITEM_TM53
# 439 "data/global.pory"
	.2byte ITEM_TM58
# 440 "data/global.pory"
	.2byte ITEM_TM63
# 441 "data/global.pory"
	.2byte ITEM_TM70
# 442 "data/global.pory"
	.2byte ITEM_TM72
# 443 "data/global.pory"
	.2byte ITEM_TM77
# 444 "data/global.pory"
	.2byte ITEM_TM84
# 445 "data/global.pory"
	.2byte ITEM_TM95
	.2byte ITEM_NONE

	.align 2
# 448 "data/global.pory"
TMMart8:
# 449 "data/global.pory"
	.2byte ITEM_TM43
# 450 "data/global.pory"
	.2byte ITEM_TM107
	.2byte ITEM_NONE

Common_EventScript_PlayEmRivalBgm::
# 455 "data/global.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq Common_EventScript_PlayEmRivalBgm_2
Common_EventScript_PlayEmRivalBgm_1:
# 458 "data/global.pory"
	switch VAR_TEMP_A
# 459 "data/global.pory"
	case 1, Common_EventScript_PlayEmRivalBgm_5
# 461 "data/global.pory"
	case 2, Common_EventScript_PlayEmRivalBgm_6
# 463 "data/global.pory"
	case 3, Common_EventScript_PlayEmRivalBgm_7
# 465 "data/global.pory"
	case 4, Common_EventScript_PlayEmRivalBgm_8
# 468 "data/global.pory"
	playbgm MUS_PL_B_HALL, FALSE
	return

Common_EventScript_PlayEmRivalBgm_2:
# 456 "data/global.pory"
	copyvar VAR_TEMP_A, VAR_EMERALBODY_RIVAL
	goto Common_EventScript_PlayEmRivalBgm_1

Common_EventScript_PlayEmRivalBgm_5:
# 460 "data/global.pory"
	playbgm MUS_DP_DAWN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_6:
# 462 "data/global.pory"
	playbgm MUS_HG_EUSINE, FALSE
	return

Common_EventScript_PlayEmRivalBgm_7:
# 464 "data/global.pory"
	playbgm MUS_HG_ETHAN, FALSE
	return

Common_EventScript_PlayEmRivalBgm_8:
# 466 "data/global.pory"
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
	return


# 472 "data/global.pory"

# 473 "data/global.pory"
Common_EventScript_GymNurse::
# 474 "data/global.pory"
	lock
# 475 "data/global.pory"
	faceplayer
# 476 "data/global.pory"
	msgbox gText_GymNurseHeal, MSGBOX_DEFAULT
# 477 "data/global.pory"
	closemessage
# 478 "data/global.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 479 "data/global.pory"
	releaseall
# 480 "data/global.pory"
	end
# 481 "data/global.pory"

# 482 "data/global.pory"
gText_GymNurseHeal::
# 483 "data/global.pory"
	.string "Allow me to heal your Pokémon.$"

Mart_EventScript_EvoClerk::
# 487 "data/global.pory"
	lock
# 488 "data/global.pory"
	faceplayer
# 489 "data/global.pory"
	special GetNumberOfBadges
# 490 "data/global.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 491 "data/global.pory"
	compare VAR_TEMP_0, 3
	goto_if_lt Mart_EventScript_EvoClerk_2
# 495 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 496 "data/global.pory"
	waitmessage
# 497 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_1, 0
# 498 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_2, 1
# 499 "data/global.pory"
	compare VAR_TEMP_0, 5
	goto_if_ge Mart_EventScript_EvoClerk_6
Mart_EventScript_EvoClerk_5:
# 502 "data/global.pory"
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 503 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq Mart_EventScript_EvoClerk_9
# 520 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Mart_EventScript_EvoClerk_10
# 538 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_eq Mart_EventScript_EvoClerk_11
Mart_EventScript_EvoClerk_8:
# 555 "data/global.pory"
	msgbox gText_PleaseComeAgain
Mart_EventScript_EvoClerk_1:
# 557 "data/global.pory"
	release
	return

Mart_EventScript_EvoClerk_2:
# 492 "data/global.pory"
	msgbox Mart_EventScript_EvoClerk_Text_0
	goto Mart_EventScript_EvoClerk_1

Mart_EventScript_EvoClerk_6:
# 500 "data/global.pory"
	dynmultipush Mart_EventScript_EvoClerk_Text_3, 2
	goto Mart_EventScript_EvoClerk_5

Mart_EventScript_EvoClerk_9:
# 504 "data/global.pory"
	switch VAR_TEMP_0
# 505 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_16
# 506 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_16
# 507 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_16
# 508 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_16
# 509 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_16
# 511 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_17
# 512 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_17
# 513 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_17
# 514 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_17
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_10:
# 521 "data/global.pory"
	switch VAR_TEMP_0
# 522 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_20
# 523 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_20
# 524 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_20
# 525 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_20
# 527 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_21
# 529 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_22
# 530 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_22
# 531 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_22
# 532 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_22
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_11:
# 539 "data/global.pory"
	switch VAR_TEMP_0
# 540 "data/global.pory"
	case 0, Mart_EventScript_EvoClerk_25
# 541 "data/global.pory"
	case 1, Mart_EventScript_EvoClerk_25
# 542 "data/global.pory"
	case 2, Mart_EventScript_EvoClerk_25
# 543 "data/global.pory"
	case 3, Mart_EventScript_EvoClerk_25
# 544 "data/global.pory"
	case 4, Mart_EventScript_EvoClerk_25
# 545 "data/global.pory"
	case 5, Mart_EventScript_EvoClerk_25
# 546 "data/global.pory"
	case 6, Mart_EventScript_EvoClerk_25
# 548 "data/global.pory"
	case 7, Mart_EventScript_EvoClerk_26
# 549 "data/global.pory"
	case 8, Mart_EventScript_EvoClerk_26
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_16:
# 510 "data/global.pory"
	pokemart EvoStonesPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_17:
# 515 "data/global.pory"
	pokemart EvoStonesPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_20:
# 526 "data/global.pory"
	pokemart EvoOtherPokemart3
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_21:
# 528 "data/global.pory"
	pokemart EvoOtherPokemart4
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_22:
# 533 "data/global.pory"
	pokemart EvoOtherPokemart5
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_25:
# 547 "data/global.pory"
	pokemart EvoExtraPokemart6
	goto Mart_EventScript_EvoClerk_8

Mart_EventScript_EvoClerk_26:
# 550 "data/global.pory"
	pokemart EvoExtraPokemart7
	goto Mart_EventScript_EvoClerk_8


	.align 2
# 560 "data/global.pory"
EvoStonesPokemart3:
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
	.2byte ITEM_NONE

	.align 2
# 570 "data/global.pory"
EvoStonesPokemart5:
# 571 "data/global.pory"
	.2byte ITEM_FIRE_STONE
# 572 "data/global.pory"
	.2byte ITEM_WATER_STONE
# 573 "data/global.pory"
	.2byte ITEM_THUNDER_STONE
# 574 "data/global.pory"
	.2byte ITEM_LEAF_STONE
# 575 "data/global.pory"
	.2byte ITEM_ICE_STONE
# 576 "data/global.pory"
	.2byte ITEM_MOON_STONE
# 577 "data/global.pory"
	.2byte ITEM_SUN_STONE
# 578 "data/global.pory"
	.2byte ITEM_SHINY_STONE
# 579 "data/global.pory"
	.2byte ITEM_DUSK_STONE
# 580 "data/global.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

	.align 2
# 583 "data/global.pory"
EvoOtherPokemart3:
# 584 "data/global.pory"
	.2byte ITEM_SACHET
# 585 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_NONE

	.align 2
# 588 "data/global.pory"
EvoOtherPokemart4:
# 589 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 590 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 591 "data/global.pory"
	.2byte ITEM_SACHET
# 592 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 593 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 594 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 595 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 596 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_NONE

	.align 2
# 599 "data/global.pory"
EvoOtherPokemart5:
# 600 "data/global.pory"
	.2byte ITEM_LINKING_CORD
# 601 "data/global.pory"
	.2byte ITEM_KINGS_ROCK
# 602 "data/global.pory"
	.2byte ITEM_METAL_ALLOY
# 603 "data/global.pory"
	.2byte ITEM_BLACK_AUGURITE
# 604 "data/global.pory"
	.2byte ITEM_DRAGON_SCALE
# 605 "data/global.pory"
	.2byte ITEM_UPGRADE
# 606 "data/global.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 607 "data/global.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 608 "data/global.pory"
	.2byte ITEM_PRISM_SCALE
# 609 "data/global.pory"
	.2byte ITEM_SACHET
# 610 "data/global.pory"
	.2byte ITEM_WHIPPED_DREAM
# 611 "data/global.pory"
	.2byte ITEM_CHIPPED_POT
# 612 "data/global.pory"
	.2byte ITEM_TART_APPLE
# 613 "data/global.pory"
	.2byte ITEM_SWEET_APPLE
# 614 "data/global.pory"
	.2byte ITEM_SYRUPY_APPLE
# 615 "data/global.pory"
	.2byte ITEM_GALARICA_CUFF
# 616 "data/global.pory"
	.2byte ITEM_GALARICA_WREATH
# 617 "data/global.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 618 "data/global.pory"
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_NONE

	.align 2
# 621 "data/global.pory"
EvoExtraPokemart6:
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
	.2byte ITEM_NONE

	.align 2
# 631 "data/global.pory"
EvoExtraPokemart7:
# 632 "data/global.pory"
	.2byte ITEM_DUBIOUS_DISC
# 633 "data/global.pory"
	.2byte ITEM_ELECTIRIZER
# 634 "data/global.pory"
	.2byte ITEM_MAGMARIZER
# 635 "data/global.pory"
	.2byte ITEM_PROTECTOR
# 636 "data/global.pory"
	.2byte ITEM_RAZOR_CLAW
# 637 "data/global.pory"
	.2byte ITEM_RAZOR_FANG
# 638 "data/global.pory"
	.2byte ITEM_REAPER_CLOTH
# 639 "data/global.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 640 "data/global.pory"
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_NONE

Common_EventScript_MoveReminder::
# 644 "data/global.pory"
	lock
# 645 "data/global.pory"
	faceplayer
# 646 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_MoveReminder_2
Common_EventScript_MoveReminder_1:
# 649 "data/global.pory"
	setflag FLAG_TEMP_1
# 650 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_1
# 651 "data/global.pory"
	setvar VAR_RESULT, 2
# 652 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_2, 0
# 653 "data/global.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MoveReminder_5
Common_EventScript_MoveReminder_4:
# 656 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_4, 2
# 657 "data/global.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 658 "data/global.pory"
	compare VAR_RESULT, 2
	goto_if_ge Common_EventScript_MoveReminder_8
# 662 "data/global.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_MoveReminder_12
Common_EventScript_MoveReminder_11:
Common_EventScript_MoveReminder_14:
# 666 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_6
# 667 "data/global.pory"
	special ChooseMonForMoveRelearner
# 668 "data/global.pory"
	waitstate
# 669 "data/global.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Common_EventScript_MoveReminder_16
# 674 "data/global.pory"
	special IsSelectedMonEgg
# 675 "data/global.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_MoveReminder_19
# 678 "data/global.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_MoveReminder_20
# 682 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_9
# 683 "data/global.pory"
	special TeachMoveRelearnerMove
# 684 "data/global.pory"
	waitstate
# 685 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
Common_EventScript_MoveReminder_7:
# 691 "data/global.pory"
	clearflag FLAG_EGG_MOVE_TUTOR
# 692 "data/global.pory"
	release
	return

Common_EventScript_MoveReminder_2:
# 647 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_0
	goto Common_EventScript_MoveReminder_1

Common_EventScript_MoveReminder_5:
# 654 "data/global.pory"
	dynmultipush Common_EventScript_MoveReminder_Text_3, 1
	goto Common_EventScript_MoveReminder_4

Common_EventScript_MoveReminder_8:
# 659 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_12:
# 663 "data/global.pory"
	setflag FLAG_EGG_MOVE_TUTOR
	goto Common_EventScript_MoveReminder_11

Common_EventScript_MoveReminder_16:
# 670 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_5
	goto Common_EventScript_MoveReminder_7

Common_EventScript_MoveReminder_19:
# 676 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_7
	goto Common_EventScript_MoveReminder_14

Common_EventScript_MoveReminder_20:
# 679 "data/global.pory"
	msgbox Common_EventScript_MoveReminder_Text_8
	goto Common_EventScript_MoveReminder_14


EventScript_CapCollector::
# 696 "data/global.pory"
	lock
# 697 "data/global.pory"
	faceplayer
# 698 "data/global.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_CapCollector_2
EventScript_CapCollector_1:
# 702 "data/global.pory"
	msgbox DoYouHaveAnyCaps
# 703 "data/global.pory"
	waitmessage
# 704 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_0, ITEM_METRONOME
# 705 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_1, ITEM_GRIP_CLAW
# 706 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_2, ITEM_STICKY_BARB
# 707 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_3, ITEM_SHED_SHELL
# 708 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_4, ITEM_BIG_ROOT
# 709 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_5, ITEM_LIGHT_CLAY
# 710 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_6, ITEM_AIR_BALLOON
# 711 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_7, ITEM_WHITE_HERB
# 712 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_8, ITEM_RED_CARD
# 713 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_9, ITEM_EJECT_BUTTON
# 714 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_10, ITEM_SAFETY_GOGGLES
# 715 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_11, ITEM_THROAT_SPRAY
# 716 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_12, ITEM_MENTAL_HERB
# 717 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_13, ITEM_NORMAL_GEM
# 718 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_14, ITEM_FLAME_ORB
# 719 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_15, ITEM_TOXIC_ORB
# 720 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_16, ITEM_EVIOLITE
# 721 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_17, ITEM_TERRAIN_EXTENDER
# 722 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_18, ITEM_PROTECTIVE_PADS
# 723 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_19, ITEM_BINDING_BAND
# 724 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_20, ITEM_EJECT_PACK
# 725 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_21, ITEM_ABILITY_SHIELD
# 726 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_22, ITEM_PUNCHING_GLOVE
# 727 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_23, ITEM_COVERT_CLOAK
# 728 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_24, ITEM_BLUNDER_POLICY
# 729 "data/global.pory"
	special GetNumberOfBadges
# 730 "data/global.pory"
	compare VAR_RESULT, 5
	goto_if_ge EventScript_CapCollector_5
EventScript_CapCollector_4:
# 735 "data/global.pory"
	special ShowBottleCapsWindow
# 736 "data/global.pory"
	dynmultistack 17, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 737 "data/global.pory"
	compare VAR_RESULT, 127
	goto_if_ne EventScript_CapCollector_8
EventScript_CapCollector_7:
# 758 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 759 "data/global.pory"
	special CloseBattlePointsWindow
# 760 "data/global.pory"
	release
	return

EventScript_CapCollector_2:
# 699 "data/global.pory"
	msgbox BottleCapCollectorIntro
# 700 "data/global.pory"
	setflag FLAG_TEMP_1
	goto EventScript_CapCollector_1

EventScript_CapCollector_5:
# 731 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_25, ITEM_BOOSTER_ENERGY
# 732 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_26, ITEM_MIRROR_HERB
# 733 "data/global.pory"
	dynmultipush EventScript_CapCollector_Text_27, ITEM_POWER_HERB
	goto EventScript_CapCollector_4

EventScript_CapCollector_8:
# 738 "data/global.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 739 "data/global.pory"
	checkitem ITEM_BOTTLE_CAP
# 740 "data/global.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CapCollector_11
# 746 "data/global.pory"
	checkitemspace VAR_0x8009
# 747 "data/global.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CapCollector_14
# 753 "data/global.pory"
	removeitem ITEM_BOTTLE_CAP
# 754 "data/global.pory"
	additem VAR_0x8009
# 755 "data/global.pory"
	special UpdateBottleCapsWindow
# 756 "data/global.pory"
	playse SE_SHOP
	goto EventScript_CapCollector_7

EventScript_CapCollector_11:
# 741 "data/global.pory"
	msgbox EventScript_CapCollector_Text_28
# 742 "data/global.pory"
	special CloseBattlePointsWindow
# 743 "data/global.pory"
	release
	end

EventScript_CapCollector_14:
# 748 "data/global.pory"
	msgbox EventScript_CapCollector_Text_29
# 749 "data/global.pory"
	special CloseBattlePointsWindow
# 750 "data/global.pory"
	release
	end


Mart_EventScript_AbilityNatureClerk::
# 773 "data/global.pory"
	lock
# 774 "data/global.pory"
	faceplayer
# 775 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 776 "data/global.pory"
	waitmessage
# 777 "data/global.pory"
	pokemart AbilityNaturePokemart
# 778 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 779 "data/global.pory"
	release
	return


	.align 2
# 782 "data/global.pory"
AbilityNaturePokemart:
# 783 "data/global.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 784 "data/global.pory"
	.2byte ITEM_ABILITY_PATCH
# 785 "data/global.pory"
	.2byte ITEM_LONELY_MINT
# 786 "data/global.pory"
	.2byte ITEM_ADAMANT_MINT
# 787 "data/global.pory"
	.2byte ITEM_NAUGHTY_MINT
# 788 "data/global.pory"
	.2byte ITEM_BRAVE_MINT
# 789 "data/global.pory"
	.2byte ITEM_BOLD_MINT
# 790 "data/global.pory"
	.2byte ITEM_IMPISH_MINT
# 791 "data/global.pory"
	.2byte ITEM_LAX_MINT
# 792 "data/global.pory"
	.2byte ITEM_RELAXED_MINT
# 793 "data/global.pory"
	.2byte ITEM_MODEST_MINT
# 794 "data/global.pory"
	.2byte ITEM_MILD_MINT
# 795 "data/global.pory"
	.2byte ITEM_RASH_MINT
# 796 "data/global.pory"
	.2byte ITEM_QUIET_MINT
# 797 "data/global.pory"
	.2byte ITEM_CALM_MINT
# 798 "data/global.pory"
	.2byte ITEM_GENTLE_MINT
# 799 "data/global.pory"
	.2byte ITEM_CAREFUL_MINT
# 800 "data/global.pory"
	.2byte ITEM_SASSY_MINT
# 801 "data/global.pory"
	.2byte ITEM_TIMID_MINT
# 802 "data/global.pory"
	.2byte ITEM_HASTY_MINT
# 803 "data/global.pory"
	.2byte ITEM_JOLLY_MINT
# 804 "data/global.pory"
	.2byte ITEM_NAIVE_MINT
# 805 "data/global.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Mart_EventScript_TypeEnhancingHeldItems::
# 809 "data/global.pory"
	lock
# 810 "data/global.pory"
	faceplayer
# 811 "data/global.pory"
	msgbox gText_HowMayIServeYou
# 812 "data/global.pory"
	waitmessage
# 813 "data/global.pory"
	pokemart TypeEnhancingHeldItemsPokemart
# 814 "data/global.pory"
	msgbox gText_PleaseComeAgain
# 815 "data/global.pory"
	release
	return


	.align 2
# 818 "data/global.pory"
TypeEnhancingHeldItemsPokemart:
# 819 "data/global.pory"
	.2byte ITEM_SILK_SCARF
# 820 "data/global.pory"
	.2byte ITEM_CHARCOAL
# 821 "data/global.pory"
	.2byte ITEM_MYSTIC_WATER
# 822 "data/global.pory"
	.2byte ITEM_MAGNET
# 823 "data/global.pory"
	.2byte ITEM_MIRACLE_SEED
# 824 "data/global.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 825 "data/global.pory"
	.2byte ITEM_BLACK_BELT
# 826 "data/global.pory"
	.2byte ITEM_POISON_BARB
# 827 "data/global.pory"
	.2byte ITEM_SOFT_SAND
# 828 "data/global.pory"
	.2byte ITEM_SHARP_BEAK
# 829 "data/global.pory"
	.2byte ITEM_TWISTED_SPOON
# 830 "data/global.pory"
	.2byte ITEM_SILVER_POWDER
# 831 "data/global.pory"
	.2byte ITEM_HARD_STONE
# 832 "data/global.pory"
	.2byte ITEM_SPELL_TAG
# 833 "data/global.pory"
	.2byte ITEM_DRAGON_FANG
# 834 "data/global.pory"
	.2byte ITEM_BLACK_GLASSES
# 835 "data/global.pory"
	.2byte ITEM_METAL_COAT
# 836 "data/global.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

GetRivalForNameBox::
# 993 "data/global.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq GetRivalForNameBox_2
GetRivalForNameBox_1:
# 996 "data/global.pory"
	switch VAR_TEMP_A
# 997 "data/global.pory"
	case 1, GetRivalForNameBox_5
# 999 "data/global.pory"
	case 2, GetRivalForNameBox_6
# 1001 "data/global.pory"
	case 3, GetRivalForNameBox_7
# 1003 "data/global.pory"
	case 4, GetRivalForNameBox_8
# 1006 "data/global.pory"
	speakername CommonText_Baron
	return

GetRivalForNameBox_2:
# 994 "data/global.pory"
	copyvar VAR_TEMP_A, VAR_EMERALBODY_RIVAL
	goto GetRivalForNameBox_1

GetRivalForNameBox_5:
# 998 "data/global.pory"
	speakername CommonText_Harper
	return

GetRivalForNameBox_6:
# 1000 "data/global.pory"
	speakername CommonText_Jakson
	return

GetRivalForNameBox_7:
# 1002 "data/global.pory"
	speakername CommonText_Redd
	return

GetRivalForNameBox_8:
# 1004 "data/global.pory"
	speakername CommonText_Sakura
	return


GetRivalMusic::
# 1011 "data/global.pory"
	setflag FLAG_SYS_SET_BATTLE_BGM
# 1012 "data/global.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq GetRivalMusic_2
GetRivalMusic_1:
# 1015 "data/global.pory"
	switch VAR_TEMP_A
# 1016 "data/global.pory"
	case 1, GetRivalMusic_5
# 1018 "data/global.pory"
	case 2, GetRivalMusic_6
# 1020 "data/global.pory"
	case 3, GetRivalMusic_7
# 1022 "data/global.pory"
	case 4, GetRivalMusic_8
# 1025 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_RIVAL
	return

GetRivalMusic_2:
# 1013 "data/global.pory"
	copyvar VAR_TEMP_A, VAR_EMERALBODY_RIVAL
	goto GetRivalMusic_1

GetRivalMusic_5:
# 1017 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_TRAINER
	return

GetRivalMusic_6:
# 1019 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_DP_VS_ELITE_FOUR
	return

GetRivalMusic_7:
# 1021 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_HG_VS_WILD_KANTO
	return

GetRivalMusic_8:
# 1023 "data/global.pory"
	setvar VAR_BATTLE_BGM, MUS_PL_VS_FRONTIER_BRAIN
	return


Emote_Test::
# 1274 "data/global.pory"
	lock
# 1275 "data/global.pory"
	applymovement 11, Common_Movement_MusicNote
# 1276 "data/global.pory"
	delay 70
# 1277 "data/global.pory"
	applymovement 11, Common_Movement_Smile
# 1278 "data/global.pory"
	delay 70
# 1279 "data/global.pory"
	applymovement 11, Common_Movement_SweatDrop
# 1280 "data/global.pory"
	delay 70
# 1281 "data/global.pory"
	applymovement 11, Common_Movement_Talking
# 1282 "data/global.pory"
	delay 70
# 1283 "data/global.pory"
	applymovement 11, Common_Movement_Thinking
# 1284 "data/global.pory"
	delay 70
# 1285 "data/global.pory"
	release
	return


IncreasePokevialSize::
# 1289 "data/global.pory"
	speakername NULL
# 1290 "data/global.pory"
	pokevialincreasesize
# 1291 "data/global.pory"
	message Text_PokevialSizeIncrease
# 1292 "data/global.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1293 "data/global.pory"
	waitmessage
# 1294 "data/global.pory"
	delay 60
	return


Mart_EventScript_TMClerk_Text_0:
# 264 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least one Gym Badge.$"

Mart_EventScript_TMClerk_Text_1:
# 270 "data/global.pory"
	.string "Badge 1 TMs$"

Mart_EventScript_TMClerk_Text_2:
# 272 "data/global.pory"
	.string "Badge 2 TMs$"

Mart_EventScript_TMClerk_Text_3:
# 275 "data/global.pory"
	.string "Badge 3 TMs$"

Mart_EventScript_TMClerk_Text_4:
# 278 "data/global.pory"
	.string "Badge 4 TMs$"

Mart_EventScript_TMClerk_Text_5:
# 281 "data/global.pory"
	.string "Badge 5 TMs$"

Mart_EventScript_TMClerk_Text_6:
# 284 "data/global.pory"
	.string "Badge 6 TMs$"

Mart_EventScript_TMClerk_Text_7:
# 287 "data/global.pory"
	.string "Badge 7 TMs$"

Mart_EventScript_TMClerk_Text_8:
# 290 "data/global.pory"
	.string "Badge 8 TMs$"

Mart_EventScript_EvoClerk_Text_0:
# 492 "data/global.pory"
	.string "Sorry, I can only sell to trainers who\n"
	.string "have earned at least three Gym Badges.$"

Mart_EventScript_EvoClerk_Text_1:
# 497 "data/global.pory"
	.string "Stones$"

Mart_EventScript_EvoClerk_Text_2:
# 498 "data/global.pory"
	.string "Other$"

Mart_EventScript_EvoClerk_Text_3:
# 500 "data/global.pory"
	.string "Extra$"

Common_EventScript_MoveReminder_Text_0:
# 647 "data/global.pory"
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.$"

Common_EventScript_MoveReminder_Text_1:
# 650 "data/global.pory"
	.string "Would you like me to teach a move?$"

Common_EventScript_MoveReminder_Text_2:
# 652 "data/global.pory"
	.string "Move Relearner$"

Common_EventScript_MoveReminder_Text_3:
# 654 "data/global.pory"
	.string "Egg Moves$"

Common_EventScript_MoveReminder_Text_4:
# 656 "data/global.pory"
	.string "Cancel$"

Common_EventScript_MoveReminder_Text_5:
# 659 "data/global.pory"
	.string "Come back if your Pokémon need to learn\n"
	.string "another move.$"

Common_EventScript_MoveReminder_Text_6:
# 666 "data/global.pory"
	.string "Which Pokémon needs tutoring?$"

Common_EventScript_MoveReminder_Text_7:
# 676 "data/global.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an Egg.$"

Common_EventScript_MoveReminder_Text_8:
# 679 "data/global.pory"
	.string "Sorry, it doesn't appear as if I have\n"
	.string "any move I can teach that Pokémon.$"

Common_EventScript_MoveReminder_Text_9:
# 682 "data/global.pory"
	.string "Which move should I teach?$"

EventScript_CapCollector_Text_0:
# 704 "data/global.pory"
	.string "Metronome$"

EventScript_CapCollector_Text_1:
# 705 "data/global.pory"
	.string "Grip Claw$"

EventScript_CapCollector_Text_2:
# 706 "data/global.pory"
	.string "Sticky Barb$"

EventScript_CapCollector_Text_3:
# 707 "data/global.pory"
	.string "Shed Shell$"

EventScript_CapCollector_Text_4:
# 708 "data/global.pory"
	.string "Big Root$"

EventScript_CapCollector_Text_5:
# 709 "data/global.pory"
	.string "Light Clay$"

EventScript_CapCollector_Text_6:
# 710 "data/global.pory"
	.string "Air Balloon$"

EventScript_CapCollector_Text_7:
# 711 "data/global.pory"
	.string "White Herb$"

EventScript_CapCollector_Text_8:
# 712 "data/global.pory"
	.string "Red Card$"

EventScript_CapCollector_Text_9:
# 713 "data/global.pory"
	.string "Eject Button$"

EventScript_CapCollector_Text_10:
# 714 "data/global.pory"
	.string "Safety Goggles$"

EventScript_CapCollector_Text_11:
# 715 "data/global.pory"
	.string "Throat Spray$"

EventScript_CapCollector_Text_12:
# 716 "data/global.pory"
	.string "Mental Herb$"

EventScript_CapCollector_Text_13:
# 717 "data/global.pory"
	.string "Normal Gem$"

EventScript_CapCollector_Text_14:
# 718 "data/global.pory"
	.string "Flame Orb$"

EventScript_CapCollector_Text_15:
# 719 "data/global.pory"
	.string "Toxic Orb$"

EventScript_CapCollector_Text_16:
# 720 "data/global.pory"
	.string "Eviolite$"

EventScript_CapCollector_Text_17:
# 721 "data/global.pory"
	.string "Terrain Extender$"

EventScript_CapCollector_Text_18:
# 722 "data/global.pory"
	.string "Protective Pads$"

EventScript_CapCollector_Text_19:
# 723 "data/global.pory"
	.string "Binding Band$"

EventScript_CapCollector_Text_20:
# 724 "data/global.pory"
	.string "Eject Pack$"

EventScript_CapCollector_Text_21:
# 725 "data/global.pory"
	.string "Ability Shield$"

EventScript_CapCollector_Text_22:
# 726 "data/global.pory"
	.string "Punching Glove$"

EventScript_CapCollector_Text_23:
# 727 "data/global.pory"
	.string "Covert Cloak$"

EventScript_CapCollector_Text_24:
# 728 "data/global.pory"
	.string "Blunder Policy$"

EventScript_CapCollector_Text_25:
# 731 "data/global.pory"
	.string "Booster Energy$"

EventScript_CapCollector_Text_26:
# 732 "data/global.pory"
	.string "Mirror Herb$"

EventScript_CapCollector_Text_27:
# 733 "data/global.pory"
	.string "Power Herb$"

EventScript_CapCollector_Text_28:
# 741 "data/global.pory"
	.string "You don't seem to have any Bottle Caps,\nthus I have nothing to give you.$"

EventScript_CapCollector_Text_29:
# 748 "data/global.pory"
	.string "You don't have any room in your Bag for\n"
	.string "this item.$"

BottleCapCollectorIntro::
# 764 "data/global.pory"
	.string "I'm a collector of Bottle Caps.\n"
	.string "If you happen to come across any, I'll\l"
	.string "gladly trade you some rare items in\l"
	.string "exchange for them.$"

DoYouHaveAnyCaps::
# 768 "data/global.pory"
	.string "Do you have any Bottle Caps you'd like\n"
	.string "to trade?$"

CommonText_Mom::
# 839 "data/global.pory"
	.string "Mom$"

CommonText_Dad::
# 843 "data/global.pory"
	.string "Dad$"

CommonText_Birch::
# 847 "data/global.pory"
	.string "Prof. Birch$"

CommonText_Rowan::
# 851 "data/global.pory"
	.string "Prof. Rowan$"

CommonText_Archie::
# 855 "data/global.pory"
	.string "Archie$"

CommonText_Maxie::
# 859 "data/global.pory"
	.string "Maxie$"

CommonText_Giovanni::
# 863 "data/global.pory"
	.string "Giovanni$"

CommonText_Shelly::
# 867 "data/global.pory"
	.string "Shelly$"

CommonText_Matt::
# 871 "data/global.pory"
	.string "Matt$"

CommonText_Courtney::
# 875 "data/global.pory"
	.string "Courtney$"

CommonText_Tabitha::
# 879 "data/global.pory"
	.string "Tabitha$"

CommonText_May::
# 883 "data/global.pory"
	.string "May$"

CommonText_Brendan::
# 887 "data/global.pory"
	.string "Brendan$"

CommonText_Wally::
# 891 "data/global.pory"
	.string "Wally$"

CommonText_Uncle::
# 895 "data/global.pory"
	.string "Uncle$"

CommonText_Wanda::
# 899 "data/global.pory"
	.string "Wanda$"

CommonText_Steven::
# 903 "data/global.pory"
	.string "Steven$"

CommonText_Scott::
# 907 "data/global.pory"
	.string "Scott$"

CommonText_Q::
# 911 "data/global.pory"
	.string "?????$"

CommonText_MrStone::
# 915 "data/global.pory"
	.string "Mr. Stone$"

CommonText_MrBriney::
# 919 "data/global.pory"
	.string "Mr. Briney$"

CommonText_Peeko::
# 923 "data/global.pory"
	.string "Peeko$"

CommonText_CaptStern::
# 927 "data/global.pory"
	.string "Capt. Stern$"

CommonText_Dock::
# 931 "data/global.pory"
	.string "Dock$"

CommonText_Gabby::
# 935 "data/global.pory"
	.string "Gabby$"

CommonText_Ty::
# 939 "data/global.pory"
	.string "Ty$"

CommonText_Rydel::
# 943 "data/global.pory"
	.string "Rydel$"

CommonText_Cozmo::
# 947 "data/global.pory"
	.string "Prof. Cozmo$"

CommonText_Lanette::
# 951 "data/global.pory"
	.string "Lanette$"

CommonText_Wallace::
# 955 "data/global.pory"
	.string "Wallace$"

CommonText_Looker::
# 959 "data/global.pory"
	.string "Looker$"

CommonText_Bianca::
# 963 "data/global.pory"
	.string "Bianca$"

CommonText_MagmaGrunt::
# 967 "data/global.pory"
	.string "Magma Grunt$"

CommonText_AquaGrunt::
# 971 "data/global.pory"
	.string "Aqua Grunt$"

CommonText_Victor::
# 975 "data/global.pory"
	.string "Victor$"

CommonText_Victoria::
# 979 "data/global.pory"
	.string "Victoria$"

CommonText_Vivi::
# 983 "data/global.pory"
	.string "Vivi$"

CommonText_Vicky::
# 987 "data/global.pory"
	.string "Vicky$"

CommonText_Baron::
# 1029 "data/global.pory"
	.string "Baron$"

CommonText_Harper::
# 1033 "data/global.pory"
	.string "Harper$"

CommonText_Jakson::
# 1037 "data/global.pory"
	.string "Jakson$"

CommonText_Redd::
# 1041 "data/global.pory"
	.string "Redd$"

CommonText_Sakura::
# 1045 "data/global.pory"
	.string "Sakura$"

Text_PokevialSizeIncrease::
# 1049 "data/global.pory"
	.string "The Pokévial's size was increased!$"

CommonText_NormalType::
# 1053 "data/global.pory"
	.string "Normal Type$"

CommonText_FightingType::
# 1057 "data/global.pory"
	.string "Fighting Type$"

CommonText_FlyingType::
# 1061 "data/global.pory"
	.string "Flying Type$"

CommonText_PoisonType::
# 1065 "data/global.pory"
	.string "Poison Type$"

CommonText_GroundType::
# 1069 "data/global.pory"
	.string "Ground Type$"

CommonText_RockType::
# 1073 "data/global.pory"
	.string "Rock Type$"

CommonText_BugType::
# 1077 "data/global.pory"
	.string "Bug Type$"

CommonText_GhostType::
# 1081 "data/global.pory"
	.string "Ghost Type$"

CommonText_SteelType::
# 1085 "data/global.pory"
	.string "Steel Type$"

CommonText_FireType::
# 1089 "data/global.pory"
	.string "Fire Type$"

CommonText_WaterType::
# 1093 "data/global.pory"
	.string "Water Type$"

CommonText_GrassType::
# 1097 "data/global.pory"
	.string "Grass Type$"

CommonText_ElectricType::
# 1101 "data/global.pory"
	.string "Electric Type$"

CommonText_PsychicType::
# 1105 "data/global.pory"
	.string "Psychic Type$"

CommonText_IceType::
# 1109 "data/global.pory"
	.string "Ice Type$"

CommonText_DragonType::
# 1113 "data/global.pory"
	.string "Dragon Type$"

CommonText_DarkType::
# 1117 "data/global.pory"
	.string "Dark Type$"

CommonText_FairyType::
# 1121 "data/global.pory"
	.string "Fairy Type$"

CommonText_StellarType::
# 1125 "data/global.pory"
	.string "Stellar Type$"

CommonText_RustboroCity::
# 1129 "data/global.pory"
	.string "Rustboro City$"

CommonText_DewfordTown::
# 1133 "data/global.pory"
	.string "Dewford Town$"

CommonText_MauvilleCity::
# 1137 "data/global.pory"
	.string "Mauville City$"

CommonText_LavaridgeTown::
# 1141 "data/global.pory"
	.string "Lavaridge Town$"

CommonText_PetalburgCity::
# 1145 "data/global.pory"
	.string "Petalburg City$"

CommonText_FortreeCity::
# 1149 "data/global.pory"
	.string "Fortree City$"

CommonText_MossdeepCity::
# 1153 "data/global.pory"
	.string "Mossdeep City$"

CommonText_SootopolisCity::
# 1157 "data/global.pory"
	.string "Sootopolis City$"

CommonText_Roxanne::
# 1161 "data/global.pory"
	.string "Roxanne$"

CommonText_Brawly::
# 1165 "data/global.pory"
	.string "Brawly$"

CommonText_Wattson::
# 1169 "data/global.pory"
	.string "Wattson$"

CommonText_Flannery::
# 1173 "data/global.pory"
	.string "Flannery$"

CommonText_Norman::
# 1177 "data/global.pory"
	.string "Norman$"

CommonText_Winona::
# 1181 "data/global.pory"
	.string "Winona$"

CommonText_LizaAndTate::
# 1185 "data/global.pory"
	.string "Liza & Tate$"

CommonText_Juan::
# 1189 "data/global.pory"
	.string "Juan$"

CommonText_Sidney::
# 1193 "data/global.pory"
	.string "Sidney$"

CommonText_Phoebe::
# 1197 "data/global.pory"
	.string "Phoebe$"

CommonText_Glacia::
# 1201 "data/global.pory"
	.string "Glacia$"

CommonText_Drake::
# 1205 "data/global.pory"
	.string "Drake$"

Text_TrickMasterIs_Puzzle1::
# 1209 "data/global.pory"
	.string "fabulous$"

Text_TrickMasterIs_Puzzle2::
# 1213 "data/global.pory"
	.string "based$"

Text_TrickMasterIs_Puzzle3::
# 1217 "data/global.pory"
	.string "coveted$"

Text_TrickMasterIs_Puzzle4::
# 1221 "data/global.pory"
	.string "cool$"

Text_TrickMasterIs_Puzzle5::
# 1225 "data/global.pory"
	.string "a genius$"

Text_TrickMasterIs_Puzzle6::
# 1229 "data/global.pory"
	.string "my life$"

Text_TrickMasterIs_Puzzle7::
# 1233 "data/global.pory"
	.string "huggable$"

Text_TrickMasterIs_Puzzle8::
# 1237 "data/global.pory"
	.string "my love$"

Text_TrickMasterIsBlank::
# 1241 "data/global.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“Trick Master is {STR_VAR_1}.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Text_2nd::
# 1249 "data/global.pory"
	.string "2nd$"

Text_3rd::
# 1253 "data/global.pory"
	.string "3rd$"

Text_4th::
# 1257 "data/global.pory"
	.string "4th$"

Text_5th::
# 1261 "data/global.pory"
	.string "5th$"

Text_6th::
# 1265 "data/global.pory"
	.string "6th$"

Text_7th::
# 1269 "data/global.pory"
	.string "7th$"

Text_System::
# 1297 "data/global.pory"
	.string "System$"
