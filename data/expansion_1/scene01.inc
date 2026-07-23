Expansion1_Rival_Scene01::
# 16 "data/expansion_1/scene01.pory"
	clearflag FLAG_UNUSED_0x34D
# 17 "data/expansion_1/scene01.pory"
	clearflag FLAG_UNUSED_0x34E
# 18 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_Talking
# 19 "data/expansion_1/scene01.pory"
	waitmovement 0
# 20 "data/expansion_1/scene01.pory"
	delay 20
# 21 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkInPlaceDown
# 22 "data/expansion_1/scene01.pory"
	waitmovement 0
# 23 "data/expansion_1/scene01.pory"
	delay 20
# 24 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 25 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceDown
# 27 "data/expansion_1/scene01.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 28 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 29 "data/expansion_1/scene01.pory"
	waitmovement 0
# 30 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkInPlaceRight
# 31 "data/expansion_1/scene01.pory"
	applymovement 11, Common_Movement_Smile
# 32 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 33 "data/expansion_1/scene01.pory"
	playse SE_M_MORNING_SUN
# 34 "data/expansion_1/scene01.pory"
	waitmovement 0
# 35 "data/expansion_1/scene01.pory"
	delay 40
# 36 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 37 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_1
# 38 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 39 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_2
# 40 "data/expansion_1/scene01.pory"
	applymovement 12, Common_Movement_Thinking
# 41 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 42 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_3, MSGBOX_AUTOCLOSE
# 44 "data/expansion_1/scene01.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 45 "data/expansion_1/scene01.pory"
	waitmovement 0
# 46 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 47 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_4, MSGBOX_AUTOCLOSE
# 48 "data/expansion_1/scene01.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 49 "data/expansion_1/scene01.pory"
	waitmovement 0
# 50 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 51 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_5
# 52 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 53 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_6
# 54 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 55 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_7, MSGBOX_AUTOCLOSE
# 56 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_SweatDrop
# 57 "data/expansion_1/scene01.pory"
	playse SE_M_METRONOME
# 58 "data/expansion_1/scene01.pory"
	delay 40
# 59 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 60 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_8
# 61 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 62 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_9, MSGBOX_AUTOCLOSE
# 63 "data/expansion_1/scene01.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 64 "data/expansion_1/scene01.pory"
	waitmovement 0
# 65 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 66 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_10, MSGBOX_AUTOCLOSE
# 67 "data/expansion_1/scene01.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 68 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceRight
# 69 "data/expansion_1/scene01.pory"
	waitmovement 0
# 70 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 71 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_11, MSGBOX_AUTOCLOSE
# 72 "data/expansion_1/scene01.pory"
	delay 30
# 73 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_QuestionMark
# 74 "data/expansion_1/scene01.pory"
	delay 10
# 75 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 76 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_12, MSGBOX_AUTOCLOSE
# 77 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_SweatDrop
# 78 "data/expansion_1/scene01.pory"
	playse SE_M_METRONOME
# 79 "data/expansion_1/scene01.pory"
	delay 40
# 80 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 81 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_13, MSGBOX_AUTOCLOSE
# 82 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceDown
# 83 "data/expansion_1/scene01.pory"
	applymovement 13, Common_Movement_WalkInPlaceLeft
# 84 "data/expansion_1/scene01.pory"
	waitmovement 0
# 85 "data/expansion_1/scene01.pory"
	delay 10
# 86 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 87 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_14
# 88 "data/expansion_1/scene01.pory"
	applymovement 12, Common_Movement_WalkLeft
# 89 "data/expansion_1/scene01.pory"
	waitmovement 0
# 90 "data/expansion_1/scene01.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 91 "data/expansion_1/scene01.pory"
	waitmovement 0
# 92 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 93 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_15, MSGBOX_AUTOCLOSE
# 95 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_QuestionMark
# 96 "data/expansion_1/scene01.pory"
	delay 40
# 97 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 98 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_16
# 99 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 100 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_17, MSGBOX_AUTOCLOSE
# 101 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 102 "data/expansion_1/scene01.pory"
	playse SE_PIN
# 103 "data/expansion_1/scene01.pory"
	delay 40
# 104 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 105 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_18, MSGBOX_AUTOCLOSE
# 109 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_Thinking
# 110 "data/expansion_1/scene01.pory"
	delay 40
# 111 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 112 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_19
# 114 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 115 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_20, MSGBOX_AUTOCLOSE
# 116 "data/expansion_1/scene01.pory"
	playse SE_LEDGE
# 117 "data/expansion_1/scene01.pory"
	applymovement 11, Common_Movement_JumpInPlaceUp
# 118 "data/expansion_1/scene01.pory"
	waitmovement 0
# 119 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 120 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_21
# 121 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 122 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_22
# 123 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 124 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_23, MSGBOX_AUTOCLOSE
# 125 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_SweatDrop
# 126 "data/expansion_1/scene01.pory"
	playse SE_M_METRONOME
# 127 "data/expansion_1/scene01.pory"
	delay 40
# 128 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 129 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_24
# 131 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 132 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_25
# 133 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 134 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_26, MSGBOX_AUTOCLOSE
# 135 "data/expansion_1/scene01.pory"
	applymovement 11, Common_Movement_DoubleExclamationMark
# 136 "data/expansion_1/scene01.pory"
	playse SE_PIN
# 137 "data/expansion_1/scene01.pory"
	delay 40
# 138 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 139 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_27, MSGBOX_AUTOCLOSE
# 140 "data/expansion_1/scene01.pory"
	delay 40
# 141 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 142 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_28
# 144 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 145 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_29, MSGBOX_AUTOCLOSE
# 146 "data/expansion_1/scene01.pory"
	special DoDomeConfetti
# 147 "data/expansion_1/scene01.pory"
	playse SE_M_ENCORE2
# 148 "data/expansion_1/scene01.pory"
	delay 60
# 149 "data/expansion_1/scene01.pory"
	playse SE_LEDGE
# 150 "data/expansion_1/scene01.pory"
	applymovement 11, Common_Movement_JumpInPlaceUp
# 151 "data/expansion_1/scene01.pory"
	delay 40
# 152 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 153 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_30
# 154 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 155 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_31
# 157 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 158 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_32
# 159 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 160 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_33, MSGBOX_AUTOCLOSE
# 161 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterDown
# 162 "data/expansion_1/scene01.pory"
	waitmovement 0
# 163 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 164 "data/expansion_1/scene01.pory"
	playse SE_PIN
# 165 "data/expansion_1/scene01.pory"
	delay 20
# 166 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 167 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_34, MSGBOX_AUTOCLOSE
# 168 "data/expansion_1/scene01.pory"
	delay 20
# 169 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkInPlaceUp
# 170 "data/expansion_1/scene01.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 171 "data/expansion_1/scene01.pory"
	waitmovement 0
# 172 "data/expansion_1/scene01.pory"
	delay 60
# 173 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkInPlaceRight
# 174 "data/expansion_1/scene01.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 175 "data/expansion_1/scene01.pory"
	waitmovement 0
# 176 "data/expansion_1/scene01.pory"
	delay 20
# 177 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 178 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_35
# 180 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 181 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_36
# 182 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 183 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_37
# 185 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 186 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01_Text_38, MSGBOX_AUTOCLOSE
# 187 "data/expansion_1/scene01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 20
# 188 "data/expansion_1/scene01.pory"
	fadescreen FADE_TO_BLACK
# 189 "data/expansion_1/scene01.pory"
	warpcontinuescript MAP_SLATEPORT_CITY_HARBOR, 10, 13, Expansion1_Rival_Scene01b
	return


Expansion1_Rival_Scene01b::
# 193 "data/expansion_1/scene01.pory"
	fadescreen FADE_FROM_BLACK
# 194 "data/expansion_1/scene01.pory"
	delay 30
# 195 "data/expansion_1/scene01.pory"
	playse SE_PIN
# 196 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 197 "data/expansion_1/scene01.pory"
	delay 40
# 198 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 199 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01b_Text_0, MSGBOX_AUTOCLOSE
# 200 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 201 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkDown
# 202 "data/expansion_1/scene01.pory"
	waitmovement 0
# 203 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01b_Text_1, MSGBOX_AUTOCLOSE
# 207 "data/expansion_1/scene01.pory"
	buffernumberstring STR_VAR_1, 5
# 208 "data/expansion_1/scene01.pory"
	setvar VAR_0x8004, 5
# 209 "data/expansion_1/scene01.pory"
	special GiveFrontierBattlePoints
# 210 "data/expansion_1/scene01.pory"
	msgbox PlayerObtainedXBattlePoints, MSGBOX_GETPOINTS
# 211 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 212 "data/expansion_1/scene01.pory"
	msgbox Expansion1_Rival_Scene01b_Text_2, MSGBOX_AUTOCLOSE
# 214 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkUp
# 215 "data/expansion_1/scene01.pory"
	waitmovement 0
# 216 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 217 "data/expansion_1/scene01.pory"
	waitmovement 0
	return


SlateportHarbor_PostScene01_SetPositions::
# 221 "data/expansion_1/scene01.pory"
	setobjectxyperm 9, 10, 11
# 222 "data/expansion_1/scene01.pory"
	setobjectxyperm 10, 1, 10
# 223 "data/expansion_1/scene01.pory"
	setobjectxyperm 11, 2, 6
# 224 "data/expansion_1/scene01.pory"
	setobjectxyperm 13, 13, 12
# 225 "data/expansion_1/scene01.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
# 226 "data/expansion_1/scene01.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_WANDER_AROUND
# 227 "data/expansion_1/scene01.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 228 "data/expansion_1/scene01.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	return


SSTidal_Scene01_OnWarp::
# 233 "data/expansion_1/scene01.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


SSTidal_Scene01_OnFrame::
# 237 "data/expansion_1/scene01.pory"
	lock
# 239 "data/expansion_1/scene01.pory"
	playse SE_LEDGE
# 240 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_JumpInPlaceLeft
# 241 "data/expansion_1/scene01.pory"
	waitmovement 0
# 242 "data/expansion_1/scene01.pory"
	playse SE_LEDGE
# 243 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_JumpInPlaceLeft
# 244 "data/expansion_1/scene01.pory"
	waitmovement 0
# 245 "data/expansion_1/scene01.pory"
	playse SE_LEDGE
# 246 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_JumpInPlaceLeft
# 247 "data/expansion_1/scene01.pory"
	waitmovement 0
# 248 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 249 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_0, MSGBOX_AUTOCLOSE
# 250 "data/expansion_1/scene01.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 251 "data/expansion_1/scene01.pory"
	waitmovement 0
# 252 "data/expansion_1/scene01.pory"
	delay 40
# 253 "data/expansion_1/scene01.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 254 "data/expansion_1/scene01.pory"
	waitmovement 0
# 255 "data/expansion_1/scene01.pory"
	delay 60
# 256 "data/expansion_1/scene01.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 257 "data/expansion_1/scene01.pory"
	waitmovement 0
# 258 "data/expansion_1/scene01.pory"
	delay 10
# 259 "data/expansion_1/scene01.pory"
	applymovement 8, Common_Movement_QuestionMark
# 260 "data/expansion_1/scene01.pory"
	delay 20
# 261 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 262 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_1
# 264 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 265 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_2, MSGBOX_AUTOCLOSE
# 266 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkInPlaceUp
# 267 "data/expansion_1/scene01.pory"
	waitmovement 0
# 268 "data/expansion_1/scene01.pory"
	delay 20
# 269 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 270 "data/expansion_1/scene01.pory"
	waitmovement 0
# 271 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 272 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_3
# 273 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterUp
# 274 "data/expansion_1/scene01.pory"
	waitmovement 0
# 275 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_4, MSGBOX_AUTOCLOSE
# 276 "data/expansion_1/scene01.pory"
	delay 30
# 277 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_QuestionMark
# 278 "data/expansion_1/scene01.pory"
	delay 20
# 279 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 280 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_5, MSGBOX_AUTOCLOSE
# 281 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterLeft
# 282 "data/expansion_1/scene01.pory"
	waitmovement 0
# 283 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 284 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_6, MSGBOX_AUTOCLOSE
# 285 "data/expansion_1/scene01.pory"
	playse SE_LEDGE
# 286 "data/expansion_1/scene01.pory"
	applymovement 8, Common_Movement_JumpInPlaceRight
# 287 "data/expansion_1/scene01.pory"
	waitmovement 0
# 288 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 289 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_7, MSGBOX_AUTOCLOSE
# 290 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_SweatDrop
# 291 "data/expansion_1/scene01.pory"
	playse SE_M_METRONOME
# 292 "data/expansion_1/scene01.pory"
	delay 40
# 293 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 294 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_8, MSGBOX_AUTOCLOSE
# 295 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceLeft
# 296 "data/expansion_1/scene01.pory"
	waitmovement 0
# 297 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 298 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_9, MSGBOX_AUTOCLOSE
# 299 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterUp
# 300 "data/expansion_1/scene01.pory"
	waitmovement 0
# 301 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 302 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_10
# 303 "data/expansion_1/scene01.pory"
	applymovement 7, Common_Movement_WalkInPlaceDown
# 304 "data/expansion_1/scene01.pory"
	waitmovement 0
# 305 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_11, MSGBOX_AUTOCLOSE
# 306 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 307 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 308 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_12
# 310 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 311 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_13, MSGBOX_AUTOCLOSE
# 312 "data/expansion_1/scene01.pory"
	delay 10
# 313 "data/expansion_1/scene01.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 314 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 315 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_14
# 316 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 317 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_15, MSGBOX_AUTOCLOSE
# 319 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_Smile
# 320 "data/expansion_1/scene01.pory"
	playse SE_M_MORNING_SUN
# 321 "data/expansion_1/scene01.pory"
	delay 40
# 322 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 323 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_16, MSGBOX_AUTOCLOSE
# 324 "data/expansion_1/scene01.pory"
	applymovement 8, Common_Movement_WalkInPlaceUp
# 325 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 326 "data/expansion_1/scene01.pory"
	playse SE_PIN
# 327 "data/expansion_1/scene01.pory"
	delay 40
# 328 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterUp
# 329 "data/expansion_1/scene01.pory"
	waitmovement 0
# 330 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 331 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_17, MSGBOX_AUTOCLOSE
# 332 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterLeft
# 333 "data/expansion_1/scene01.pory"
	waitmovement 0
# 334 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 335 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_18, MSGBOX_AUTOCLOSE
# 336 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 337 "data/expansion_1/scene01.pory"
	waitmovement 0
# 338 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 339 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_19
# 340 "data/expansion_1/scene01.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterRight
# 341 "data/expansion_1/scene01.pory"
	waitmovement 0
# 342 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 343 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_20
# 344 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 345 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_21
# 346 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 347 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_22, MSGBOX_AUTOCLOSE
# 349 "data/expansion_1/scene01.pory"
	applymovement 8, Common_Movement_QuestionMark
# 350 "data/expansion_1/scene01.pory"
	fadeoutbgm 1
# 351 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 352 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_23, MSGBOX_AUTOCLOSE
# 354 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 355 "data/expansion_1/scene01.pory"
	applymovement 6, Common_Movement_QuestionMark
# 356 "data/expansion_1/scene01.pory"
	delay 20
# 357 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 358 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_24
# 360 "data/expansion_1/scene01.pory"
	playbgm MUS_PL_TITLE, FALSE
# 361 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 362 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_25, MSGBOX_AUTOCLOSE
# 364 "data/expansion_1/scene01.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterUp
# 365 "data/expansion_1/scene01.pory"
	waitmovement 0
# 366 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 367 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_26, MSGBOX_AUTOCLOSE
# 368 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterRight
# 369 "data/expansion_1/scene01.pory"
	applymovement 6, Common_Movement_WalkLeft
# 370 "data/expansion_1/scene01.pory"
	waitmovement 0
# 371 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterUp
# 372 "data/expansion_1/scene01.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterUp
# 373 "data/expansion_1/scene01.pory"
	applymovement 6, Common_Movement_WalkUp
# 374 "data/expansion_1/scene01.pory"
	waitmovement 0
# 375 "data/expansion_1/scene01.pory"
	delay 20
# 376 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 377 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_27, MSGBOX_AUTOCLOSE
# 379 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterLeft
# 380 "data/expansion_1/scene01.pory"
	waitmovement 0
# 381 "data/expansion_1/scene01.pory"
	delay 20
# 382 "data/expansion_1/scene01.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterUp
# 383 "data/expansion_1/scene01.pory"
	waitmovement 0
# 384 "data/expansion_1/scene01.pory"
	delay 20
# 385 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 386 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_28, MSGBOX_AUTOCLOSE
# 387 "data/expansion_1/scene01.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 388 "data/expansion_1/scene01.pory"
	waitmovement 0
# 389 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 390 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_29, MSGBOX_AUTOCLOSE
# 391 "data/expansion_1/scene01.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 392 "data/expansion_1/scene01.pory"
	waitmovement 0
# 393 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 394 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_30
# 395 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 396 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_31
# 398 "data/expansion_1/scene01.pory"
	playse SE_M_SELF_DESTRUCT
# 399 "data/expansion_1/scene01.pory"
	waitse
# 400 "data/expansion_1/scene01.pory"
	playse SE_M_WHIRLPOOL
# 401 "data/expansion_1/scene01.pory"
	setvar VAR_0x8004, 3
# 402 "data/expansion_1/scene01.pory"
	setvar VAR_0x8005, 6
# 403 "data/expansion_1/scene01.pory"
	setvar VAR_0x8006, 16
# 404 "data/expansion_1/scene01.pory"
	setvar VAR_0x8007, 4
# 405 "data/expansion_1/scene01.pory"
	special ShakeCamera
# 406 "data/expansion_1/scene01.pory"
	waitstate
# 407 "data/expansion_1/scene01.pory"
	playbgm MUS_DP_TV_BROADCAST, FALSE
# 408 "data/expansion_1/scene01.pory"
	fadescreen FADE_TO_BLACK
# 409 "data/expansion_1/scene01.pory"
	speakername CommonText_Harper
# 410 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_32, MSGBOX_AUTOCLOSE
# 411 "data/expansion_1/scene01.pory"
	playse SE_THUNDER
# 412 "data/expansion_1/scene01.pory"
	waitse
# 413 "data/expansion_1/scene01.pory"
	speakername CommonText_Redd
# 414 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_33, MSGBOX_AUTOCLOSE
# 415 "data/expansion_1/scene01.pory"
	playse SE_THUNDER
# 416 "data/expansion_1/scene01.pory"
	waitse
# 417 "data/expansion_1/scene01.pory"
	speakername CommonText_Jakson
# 418 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_34, MSGBOX_AUTOCLOSE
# 419 "data/expansion_1/scene01.pory"
	playse SE_THUNDER
# 420 "data/expansion_1/scene01.pory"
	waitse
# 421 "data/expansion_1/scene01.pory"
	call GetBaronsName
# 422 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_35, MSGBOX_AUTOCLOSE
# 423 "data/expansion_1/scene01.pory"
	playse SE_THUNDER
# 424 "data/expansion_1/scene01.pory"
	waitse
# 425 "data/expansion_1/scene01.pory"
	speakername CommonText_Sakura
# 426 "data/expansion_1/scene01.pory"
	msgbox SSTidal_Scene01_OnFrame_Text_36, MSGBOX_AUTOCLOSE
# 427 "data/expansion_1/scene01.pory"
	playse SE_THUNDER
# 428 "data/expansion_1/scene01.pory"
	waitse
# 430 "data/expansion_1/scene01.pory"
	removeobject 6
# 431 "data/expansion_1/scene01.pory"
	removeobject 7
# 432 "data/expansion_1/scene01.pory"
	removeobject 8
# 433 "data/expansion_1/scene01.pory"
	removeobject 9
# 434 "data/expansion_1/scene01.pory"
	removeobject 10
# 435 "data/expansion_1/scene01.pory"
	removeobject 2
# 436 "data/expansion_1/scene01.pory"
	removeobject LOCALID_PLAYER
# 437 "data/expansion_1/scene01.pory"
	setflag FLAG_DONT_START_MUSIC_ON_WARP
# 438 "data/expansion_1/scene01.pory"
	warpsilent MAP_ILLUSORY_GROTTO_B4F_1R, 26, 7
# 439 "data/expansion_1/scene01.pory"
	waitstate
	return


IllusoryGrotto_B4F_1R_Scene01_OnFrame::
# 443 "data/expansion_1/scene01.pory"
	lock
# 444 "data/expansion_1/scene01.pory"
	clearflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
# 445 "data/expansion_1/scene01.pory"
	delay 40
# 446 "data/expansion_1/scene01.pory"
	playse SE_RAIN
# 447 "data/expansion_1/scene01.pory"
	delay 50
# 448 "data/expansion_1/scene01.pory"
	playse SE_RAIN_STOP
# 449 "data/expansion_1/scene01.pory"
	delay 60
# 450 "data/expansion_1/scene01.pory"
	playse SE_RAIN
# 451 "data/expansion_1/scene01.pory"
	delay 50
# 452 "data/expansion_1/scene01.pory"
	playse SE_RAIN_STOP
# 453 "data/expansion_1/scene01.pory"
	delay 60
# 454 "data/expansion_1/scene01.pory"
	playse SE_RAIN
# 455 "data/expansion_1/scene01.pory"
	delay 50
# 456 "data/expansion_1/scene01.pory"
	playse SE_RAIN_STOP
# 457 "data/expansion_1/scene01.pory"
	delay 30
# 459 "data/expansion_1/scene01.pory"
	msgbox IllusoryGrotto_B4F_1R_Scene01_OnFrame_Text_0, MSGBOX_AUTOCLOSE
# 462 "data/expansion_1/scene01.pory"
	setflashlevel 8
# 463 "data/expansion_1/scene01.pory"
	animateflash 4
# 464 "data/expansion_1/scene01.pory"
	setflashlevel 4
# 465 "data/expansion_1/scene01.pory"
	delay 20
# 467 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 468 "data/expansion_1/scene01.pory"
	waitmovement 0
# 469 "data/expansion_1/scene01.pory"
	delay 20
# 470 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
# 471 "data/expansion_1/scene01.pory"
	delay 60
# 472 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 473 "data/expansion_1/scene01.pory"
	waitmovement 0
# 474 "data/expansion_1/scene01.pory"
	delay 20
# 475 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 476 "data/expansion_1/scene01.pory"
	waitmovement 0
# 477 "data/expansion_1/scene01.pory"
	delay 20
# 478 "data/expansion_1/scene01.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
# 479 "data/expansion_1/scene01.pory"
	waitmovement 0
# 480 "data/expansion_1/scene01.pory"
	msgbox IllusoryGrotto_B4F_1R_Scene01_OnFrame_Text_1, MSGBOX_AUTOCLOSE
# 483 "data/expansion_1/scene01.pory"
	animateflash 0
# 484 "data/expansion_1/scene01.pory"
	setflashlevel 0
# 486 "data/expansion_1/scene01.pory"
	playbgm MUS_DP_VICTORY_ROAD, FALSE
# 487 "data/expansion_1/scene01.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 21
# 488 "data/expansion_1/scene01.pory"
	clearflag FLAG_DONT_START_MUSIC_ON_WARP
# 489 "data/expansion_1/scene01.pory"
	setflag FLAG_CANT_USE_ESCAPE_ROPE
# 490 "data/expansion_1/scene01.pory"
	setflag FLAG_EXPANSION_1_LEVEL_CAP
# 491 "data/expansion_1/scene01.pory"
	special ShowMapNamePopup
# 492 "data/expansion_1/scene01.pory"
	release
	return


Expansion1_Rival_Scene01_Text_0:
# 25 "data/expansion_1/scene01.pory"
	.string "Oh, {PLAYER}?\nOver here.$"

Expansion1_Rival_Scene01_Text_1:
# 37 "data/expansion_1/scene01.pory"
	.string "H- {PAUSE 30}Hello again, {PLAYER}.$"

Expansion1_Rival_Scene01_Text_2:
# 39 "data/expansion_1/scene01.pory"
	.string "Alright, Jakson, {PAUSE 30}let's {PAUSE 30}get {PAUSE 30}started!$"

Expansion1_Rival_Scene01_Text_3:
# 42 "data/expansion_1/scene01.pory"
	.string "You said we were waiting until {PLAYER}\ngot here, right?\p"
	.string "Then no more delays! Let's hear this\n surprise of yours.$"

Expansion1_Rival_Scene01_Text_4:
# 47 "data/expansion_1/scene01.pory"
	.string "Yeah, I logged on just for this. With all\nthe noise Sakura was making this\lmorning…$"

Expansion1_Rival_Scene01_Text_5:
# 51 "data/expansion_1/scene01.pory"
	.string "And you still took {PAUSE 30}forever {PAUSE 60}to log-on!$"

Expansion1_Rival_Scene01_Text_6:
# 53 "data/expansion_1/scene01.pory"
	.string "It spent forever {PAUSE 30}“compiling shaders”!{PAUSE 60}\nWhy did it take like {PAUSE 30}an HOUR for that?!$"

Expansion1_Rival_Scene01_Text_7:
# 55 "data/expansion_1/scene01.pory"
	.string "Skill issue?$"

Expansion1_Rival_Scene01_Text_8:
# 60 "data/expansion_1/scene01.pory"
	.string "Haha… {PAUSE 100}sorry about that, everyone.$"

Expansion1_Rival_Scene01_Text_9:
# 62 "data/expansion_1/scene01.pory"
	.string "This is why you don't uninstall it\nevery time you log-off…$"

Expansion1_Rival_Scene01_Text_10:
# 66 "data/expansion_1/scene01.pory"
	.string "Huh?! Unlike you, I don't play Pokémon\nevery day of the week.$"

Expansion1_Rival_Scene01_Text_11:
# 71 "data/expansion_1/scene01.pory"
	.string "Tsk tsk. I've seen you messing with\nthe contests. Jakson didn't even\lmod those this time.$"

Expansion1_Rival_Scene01_Text_12:
# 76 "data/expansion_1/scene01.pory"
	.string "…{PAUSE 100}this time?$"

Expansion1_Rival_Scene01_Text_13:
# 81 "data/expansion_1/scene01.pory"
	.string "A- {PAUSE 30}Ahahaha… {PAUSE 100}Just a… {PAUSE 100}test thing I did\nwith a different game before.$"

Expansion1_Rival_Scene01_Text_14:
# 87 "data/expansion_1/scene01.pory"
	.string "{EMOJI_BIGWHEEL}Clears throat{EMOJI_BIGWHEEL}{UNK_SPACER}$"

Expansion1_Rival_Scene01_Text_15:
# 93 "data/expansion_1/scene01.pory"
	.string "What I do know is that we all made it.\nWe're all here and ready to go, yeah?\p"
	.string "I'll just jump to the point…{PAUSE 100}\nI made {PAUSE 60}an “expansion”.$"

Expansion1_Rival_Scene01_Text_16:
# 98 "data/expansion_1/scene01.pory"
	.string "“Ex{PAUSE 30}pan{PAUSE 30}sion”…?$"

Expansion1_Rival_Scene01_Text_17:
# 100 "data/expansion_1/scene01.pory"
	.string "Like… {PAUSE 100}DLC? It's not gonna cost money\nor something, is it?$"

Expansion1_Rival_Scene01_Text_18:
# 105 "data/expansion_1/scene01.pory"
	.string "Ah, no! Nothing like that.\nJust more mods.\p"
	.string "It {PAUSE 30}IS {PAUSE 60}sort of like a DLC expansion in\nflavor, though.\p"
	.string "I found a premade content pack with a\nstory for us to jump into.\p"
	.string "After some customizations, I think it's\nready to set sail. We can jump into\lanother adventure together.$"

Expansion1_Rival_Scene01_Text_19:
# 112 "data/expansion_1/scene01.pory"
	.string "Wow… {PAUSE 100}it's not been that long since we\nfinished up the main story.\p"
	.string "I was sure there'd be more of a gap\nbefore the group started playing a\lbunch again.$"

Expansion1_Rival_Scene01_Text_20:
# 115 "data/expansion_1/scene01.pory"
	.string "Leave it to Jakson to make the\nimposssible possible.$"

Expansion1_Rival_Scene01_Text_21:
# 120 "data/expansion_1/scene01.pory"
	.string "Hell yeah! I can't wait to see what\nyou got in store.$"

Expansion1_Rival_Scene01_Text_22:
# 122 "data/expansion_1/scene01.pory"
	.string "Yeah, this kind of thing can't be easy.\nYour efforts are appreciated.$"

Expansion1_Rival_Scene01_Text_23:
# 124 "data/expansion_1/scene01.pory"
	.string "Indeed. I can only imagine how strong\nyou must feel about everyone to make\lsuch a valiant effort.$"

Expansion1_Rival_Scene01_Text_24:
# 129 "data/expansion_1/scene01.pory"
	.string "…\p"
	.string "This is too much praise for an edit of\nsomeone else's content pack…$"

Expansion1_Rival_Scene01_Text_25:
# 132 "data/expansion_1/scene01.pory"
	.string "More than I can do, haha. Just take\nthe praise before it gets cold.$"

Expansion1_Rival_Scene01_Text_26:
# 134 "data/expansion_1/scene01.pory"
	.string "I'm sure you could…$"

Expansion1_Rival_Scene01_Text_27:
# 139 "data/expansion_1/scene01.pory"
	.string "So what's it gonna be this time? Are\nwe going to space? {PAUSE 30}The Himalayas?\lThe fiery pits of hell?!$"

Expansion1_Rival_Scene01_Text_28:
# 142 "data/expansion_1/scene01.pory"
	.string "Those would certainly all be\ninteresting…\p"
	.string "Even if it would be a drastic shift\nfrom Pokémon.$"

Expansion1_Rival_Scene01_Text_29:
# 145 "data/expansion_1/scene01.pory"
	.string "Glad to see the excitement!\nThe theme is…\lA treasure hunt on a remote island\lchain!$"

Expansion1_Rival_Scene01_Text_30:
# 153 "data/expansion_1/scene01.pory"
	.string "Baron! Quick! Where's me cutlass?$"

Expansion1_Rival_Scene01_Text_31:
# 155 "data/expansion_1/scene01.pory"
	.string "Oh, please don't tell me you're going\nto keep that up…\p"
	.string "A treasure hunt though…{PAUSE 100}\nYeah, that sounds fun enough.$"

Expansion1_Rival_Scene01_Text_32:
# 158 "data/expansion_1/scene01.pory"
	.string "An island, huh?\nI {PAUSE 30}could {PAUSE 60}use a vacation.$"

Expansion1_Rival_Scene01_Text_33:
# 160 "data/expansion_1/scene01.pory"
	.string "I could use a tan.$"

Expansion1_Rival_Scene01_Text_34:
# 167 "data/expansion_1/scene01.pory"
	.string "Wait, does that mean I have to pack?\nOh gosh, what do I need to bring…?$"

Expansion1_Rival_Scene01_Text_35:
# 178 "data/expansion_1/scene01.pory"
	.string "Well, you should do some prep work,\nyeah. You all should, really.\p"
	.string "This is going to be a pretty good chunk of\ncontent, so get your teams together,\lbring your best, you know.$"

Expansion1_Rival_Scene01_Text_36:
# 181 "data/expansion_1/scene01.pory"
	.string "How big is this expansion…?$"

Expansion1_Rival_Scene01_Text_37:
# 183 "data/expansion_1/scene01.pory"
	.string "We might be out there for a while.\nA nice, long journey.\p"
	.string "When you're all ready to go, come see\nme and we'll get started!$"

Expansion1_Rival_Scene01_Text_38:
# 186 "data/expansion_1/scene01.pory"
	.string "Aye aye, Captain!$"

Expansion1_Rival_Scene01b_Text_0:
# 199 "data/expansion_1/scene01.pory"
	.string "Oh, {PLAYER}!$"

Expansion1_Rival_Scene01b_Text_1:
# 203 "data/expansion_1/scene01.pory"
	.string "I almost forgot.\p"
	.string "I already gave these to the others\n"
	.string "earlier, but this is a small gift to\l"
	.string "help you get ready.$"

Expansion1_Rival_Scene01b_Text_2:
# 212 "data/expansion_1/scene01.pory"
	.string "Like I said, come see when you're\n"
	.string "ready to get going.$"

SSTidal_Scene01_OnFrame_Text_0:
# 249 "data/expansion_1/scene01.pory"
	.string "Alright, alright, ALRIGHT!!!!!!\nOn our way to… {PAUSE 100}ADVENTURE!!!!!!$"

SSTidal_Scene01_OnFrame_Text_1:
# 262 "data/expansion_1/scene01.pory"
	.string "Huh? {PAUSE 60}Isn't this the same boat sprite\nused in the base game?\p"
	.string "Why are you so excited off the rip?$"

SSTidal_Scene01_OnFrame_Text_2:
# 265 "data/expansion_1/scene01.pory"
	.string "Oh, the dearest and Reddest of my\nfriends… {PAUSE 100}it is elementary.$"

SSTidal_Scene01_OnFrame_Text_3:
# 272 "data/expansion_1/scene01.pory"
	.string "We head to open seas, where pirates\ncall home and fair game for plunder.$"

SSTidal_Scene01_OnFrame_Text_4:
# 275 "data/expansion_1/scene01.pory"
	.string "Where “too much water” overflows\nback into the positives, and it\lbecomes {PAUSE 60}“just the right amount”.$"

SSTidal_Scene01_OnFrame_Text_5:
# 280 "data/expansion_1/scene01.pory"
	.string "Is that how it works…?$"

SSTidal_Scene01_OnFrame_Text_6:
# 284 "data/expansion_1/scene01.pory"
	.string "It does.$"

SSTidal_Scene01_OnFrame_Text_7:
# 289 "data/expansion_1/scene01.pory"
	.string "It does {PAUSE 60}NOT!$"

SSTidal_Scene01_OnFrame_Text_8:
# 294 "data/expansion_1/scene01.pory"
	.string "Haha… {PAUSE 100}I see.$"

SSTidal_Scene01_OnFrame_Text_9:
# 298 "data/expansion_1/scene01.pory"
	.string "Are you excited, {PLAYER}?\nI'm feeling a little nervous.$"

SSTidal_Scene01_OnFrame_Text_10:
# 302 "data/expansion_1/scene01.pory"
	.string "He did say we'd be away for a while…{PAUSE 100}\nSo I can get that feeling, at least.$"

SSTidal_Scene01_OnFrame_Text_11:
# 305 "data/expansion_1/scene01.pory"
	.string "Though I'm still thinking about that\nwarning message from before… {PAUSE 100}I wonder\lif Jakson was trying to spook us.$"

SSTidal_Scene01_OnFrame_Text_12:
# 308 "data/expansion_1/scene01.pory"
	.string "Ah… {PAUSE 100}that. Well, there is an explanation\nbehind it.\p"
	.string "Would you believe me if I said that I\nonly said it because I didn't\lmake the content pack myself?$"

SSTidal_Scene01_OnFrame_Text_13:
# 311 "data/expansion_1/scene01.pory"
	.string "Ol’ Jakson buddy didn't play this\nbefore the rest of us… {PAUSE 100}Isn't that\ldaring?$"

SSTidal_Scene01_OnFrame_Text_14:
# 315 "data/expansion_1/scene01.pory"
	.string "…{PAUSE 100}Wait. Doesn't that mean you didn't\ntest it before, either?$"

SSTidal_Scene01_OnFrame_Text_15:
# 317 "data/expansion_1/scene01.pory"
	.string "I usually try to give it a full\nplaythrough before I try something\lthis custom, but I did test individual\lparts of it.\p"
	.string "Crossing my fingers that it all meshes\ntogether well.$"

SSTidal_Scene01_OnFrame_Text_16:
# 323 "data/expansion_1/scene01.pory"
	.string "Hmm… {PAUSE 100}you've got my Sakura Senses\ntingling with that mention.$"

SSTidal_Scene01_OnFrame_Text_17:
# 331 "data/expansion_1/scene01.pory"
	.string "Wait, are those a real thing?\nDo I get Baron Senses too?$"

SSTidal_Scene01_OnFrame_Text_18:
# 335 "data/expansion_1/scene01.pory"
	.string "Yup. Just keep an eye out for when\nyou have a {PAUSE 30}“!” {PAUSE 60}above your head.$"

SSTidal_Scene01_OnFrame_Text_19:
# 339 "data/expansion_1/scene01.pory"
	.string "Oh, I see… {PAUSE 100}Though you don't…$"

SSTidal_Scene01_OnFrame_Text_20:
# 343 "data/expansion_1/scene01.pory"
	.string "She's just messing with you.$"

SSTidal_Scene01_OnFrame_Text_21:
# 345 "data/expansion_1/scene01.pory"
	.string "Really? You've never seen any of us\nwith a “!” icon above our heads?$"

SSTidal_Scene01_OnFrame_Text_22:
# 347 "data/expansion_1/scene01.pory"
	.string "…{PAUSE 100}Well, I certainly don't have any\nspecial sensory powers, at least.$"

SSTidal_Scene01_OnFrame_Text_23:
# 352 "data/expansion_1/scene01.pory"
	.string "…{PAUSE 60} …{PAUSE 60} …\p"
	.string "The hell is… {PAUSE 100}that?$"

SSTidal_Scene01_OnFrame_Text_24:
# 358 "data/expansion_1/scene01.pory"
	.string "The {PAUSE 30}“hell” {PAUSE 60}is what?$"

SSTidal_Scene01_OnFrame_Text_25:
# 362 "data/expansion_1/scene01.pory"
	.string "That blur on the horizon.\p"
	.string "It's like a Dragonite appearing\nthrough the fog.$"

SSTidal_Scene01_OnFrame_Text_26:
# 367 "data/expansion_1/scene01.pory"
	.string "Huh. {PAUSE 60}There is a blur.$"

SSTidal_Scene01_OnFrame_Text_27:
# 377 "data/expansion_1/scene01.pory"
	.string "I know I said I didn't test it, but\nI did test the opening sequence.\p"
	.string "That… {PAUSE 100}wasn't… {PAUSE 100}there…$"

SSTidal_Scene01_OnFrame_Text_28:
# 386 "data/expansion_1/scene01.pory"
	.string "Uh…$"

SSTidal_Scene01_OnFrame_Text_29:
# 390 "data/expansion_1/scene01.pory"
	.string "One sec, I'm pretty sure I have\nthe debug menu turned on for me.$"

SSTidal_Scene01_OnFrame_Text_30:
# 394 "data/expansion_1/scene01.pory"
	.string "How does that line of all things\nlook and sound foreboding…?!$"

SSTidal_Scene01_OnFrame_Text_31:
# 396 "data/expansion_1/scene01.pory"
	.string "It'll be fine. I just need to-$"

SSTidal_Scene01_OnFrame_Text_32:
# 410 "data/expansion_1/scene01.pory"
	.string "…?!$"

SSTidal_Scene01_OnFrame_Text_33:
# 414 "data/expansion_1/scene01.pory"
	.string "W- {PAUSE 30}Woah?! The boat…{PAUSE 100}the floor?!$"

SSTidal_Scene01_OnFrame_Text_34:
# 418 "data/expansion_1/scene01.pory"
	.string "I- {PAUSE 30}I did enable the debug menu,\ndidn't I…?$"

SSTidal_Scene01_OnFrame_Text_35:
# 422 "data/expansion_1/scene01.pory"
	.string "W- {PAUSE 30}Water…!? {PAUSE 100}Where… {PAUSE 100}wait…!$"

SSTidal_Scene01_OnFrame_Text_36:
# 426 "data/expansion_1/scene01.pory"
	.string "Baron! Watch out!$"

IllusoryGrotto_B4F_1R_Scene01_OnFrame_Text_0:
# 459 "data/expansion_1/scene01.pory"
	.string "… {PAUSE 60}… {PAUSE 60}…\p"
	.string "You wake in a dark cave, the gentle\nsounds of waves crashing against a\lshoreline.$"

IllusoryGrotto_B4F_1R_Scene01_OnFrame_Text_1:
# 480 "data/expansion_1/scene01.pory"
	.string "… {PAUSE 60}… {PAUSE 60}…\p"
	.string "Where is everyone?$"
