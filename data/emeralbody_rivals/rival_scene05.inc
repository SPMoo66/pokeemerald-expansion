Rival_Scene05_MapOnTransition::
# 9 "data/emeralbody_rivals/rival_scene05.pory"
	savebgm MUS_DP_HALL_OF_FAME_ROOM
	return


Rival_Scene05::
# 13 "data/emeralbody_rivals/rival_scene05.pory"
	lock
# 14 "data/emeralbody_rivals/rival_scene05.pory"
	special SpawnCameraObject
# 15 "data/emeralbody_rivals/rival_scene05.pory"
	checkplayergender
# 16 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_2
# 20 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_CAMERA, Scene05_Move_CameraFemale
Rival_Scene05_1:
# 22 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 23 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 25 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_Talking
# 26 "data/emeralbody_rivals/rival_scene05.pory"
	delay 80
# 27 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_SweatDrop
# 28 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_METRONOME
# 29 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_Thinking
# 30 "data/emeralbody_rivals/rival_scene05.pory"
	delay 40
# 31 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_Smile
# 32 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_MORNING_SUN
# 33 "data/emeralbody_rivals/rival_scene05.pory"
	delay 60
# 35 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_6
# 39 "data/emeralbody_rivals/rival_scene05.pory"
	opendoor 14, 8
Rival_Scene05_5:
# 41 "data/emeralbody_rivals/rival_scene05.pory"
	waitdooranim
# 42 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetVisible
# 43 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 44 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 45 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 46 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_10
# 50 "data/emeralbody_rivals/rival_scene05.pory"
	closedoor 14, 8
Rival_Scene05_9:
# 52 "data/emeralbody_rivals/rival_scene05.pory"
	waitdooranim
# 54 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_14
# 78 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterRight
# 79 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 80 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_PIN
# 81 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 82 "data/emeralbody_rivals/rival_scene05.pory"
	delay 40
# 83 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceRight
# 84 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 85 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 86 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 87 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 88 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 89 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Scene05_Text_Sakura1
# 90 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 91 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Scene05_Move_SakuraMove1Female
# 92 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft4
# 93 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 94 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 95 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
Rival_Scene05_13:
# 98 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 99 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_0
# 100 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 101 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_1
# 102 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 103 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_SweatDrop
# 104 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_METRONOME
# 105 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_2
# 106 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 107 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceDown
# 108 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_3
# 109 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 110 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceLeft
# 111 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_4
# 112 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 114 "data/emeralbody_rivals/rival_scene05.pory"
	opendoor 14, 8
# 115 "data/emeralbody_rivals/rival_scene05.pory"
	waitdooranim
# 116 "data/emeralbody_rivals/rival_scene05.pory"
	addobject 12
# 117 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkDown
# 118 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 119 "data/emeralbody_rivals/rival_scene05.pory"
	closedoor 14, 8
# 120 "data/emeralbody_rivals/rival_scene05.pory"
	waitdooranim
# 121 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 122 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Rival_Scene05_18
Rival_Scene05_17:
# 125 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceRight
# 126 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 127 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 128 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_Smile
# 129 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_MORNING_SUN
# 130 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 131 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 132 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 133 "data/emeralbody_rivals/rival_scene05.pory"
	delay 40
# 134 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkDown
# 135 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 136 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Scene05_Move_ReddFacing
# 137 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_21
# 141 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Scene05_Move_SakuraOrPlayerFacing
Rival_Scene05_20:
# 143 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkLeft4
# 144 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 146 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 147 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_5
# 148 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 149 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_QuestionMark
# 150 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 151 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_6
# 153 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 154 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_SweatDrop
# 155 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_METRONOME
# 156 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_7
# 157 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 158 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 159 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 160 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_Thinking
# 161 "data/emeralbody_rivals/rival_scene05.pory"
	delay 50
# 162 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_8
# 164 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 165 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 166 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_9
# 167 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 169 "data/emeralbody_rivals/rival_scene05.pory"
	opendoor 14, 8
# 170 "data/emeralbody_rivals/rival_scene05.pory"
	waitdooranim
# 171 "data/emeralbody_rivals/rival_scene05.pory"
	addobject 15
# 172 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkDown
# 173 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 174 "data/emeralbody_rivals/rival_scene05.pory"
	closedoor 14, 8
# 175 "data/emeralbody_rivals/rival_scene05.pory"
	waitdooranim
# 176 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_25
# 180 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
Rival_Scene05_24:
# 182 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 183 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 184 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 185 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 186 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceLeft
# 187 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 188 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 189 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_PIN
# 190 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 191 "data/emeralbody_rivals/rival_scene05.pory"
	delay 30
# 192 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Scene05_Move_BaronRun
# 193 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 194 "data/emeralbody_rivals/rival_scene05.pory"
	call GetBaronsName
# 195 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_10
# 196 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 197 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_11
# 198 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_THUNDER
# 199 "data/emeralbody_rivals/rival_scene05.pory"
	call GetBaronsName
# 200 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_XMark
# 201 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 202 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceRight
# 203 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_12
# 204 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 205 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_13
# 206 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 207 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_Smile
# 208 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_MORNING_SUN
# 209 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_14
# 210 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 211 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 212 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceLeft
# 213 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 214 "data/emeralbody_rivals/rival_scene05.pory"
	delay 30
# 215 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_29
# 219 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Scene05_Move_SakuraOrPlayerFacing
Rival_Scene05_28:
# 221 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkLeft3
# 222 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Scene05_Move_HarperMove
# 223 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Scene05_Move_ReddMove
# 224 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 226 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 227 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 228 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 229 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_15
# 230 "data/emeralbody_rivals/rival_scene05.pory"
	call GetBaronsName
# 231 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceDown
# 232 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_16
# 233 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 234 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceUp
# 235 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_17
# 236 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 237 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 238 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_33
# 242 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceRight
Rival_Scene05_32:
# 244 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 245 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_18
# 246 "data/emeralbody_rivals/rival_scene05.pory"
	call GetBaronsName
# 247 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceRight
# 248 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_19
# 250 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceLeft
# 251 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_20
# 253 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 254 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_37
# 258 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceRight
Rival_Scene05_36:
# 260 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 261 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_21
# 262 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 263 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 264 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_22
# 265 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 266 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_23
# 267 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 268 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_SweatDrop
# 269 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_METRONOME
# 270 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_24
# 271 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 272 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_25
# 273 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 274 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_26
# 275 "data/emeralbody_rivals/rival_scene05.pory"
	call GetBaronsName
# 276 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 277 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_27
# 278 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 279 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceDown
# 280 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_28
# 281 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 282 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_PIN
# 283 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 284 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 285 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 286 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_29
# 287 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 288 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_30
# 289 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 290 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_31
# 291 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 292 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_32
# 293 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 294 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 295 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_33
# 296 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 297 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_34
# 298 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 299 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_35
# 300 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 301 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 302 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_36
# 303 "data/emeralbody_rivals/rival_scene05.pory"
	call GetBaronsName
# 304 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_Smile
# 305 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_MORNING_SUN
# 306 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_37
# 307 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 308 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 309 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_38
# 312 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 313 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_39
# 314 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 315 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceFasterRight
# 316 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_40
# 317 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 318 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_41
# 319 "data/emeralbody_rivals/rival_scene05.pory"
	call GetBaronsName
# 320 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_42
# 321 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 323 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 324 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_PIN
# 325 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 326 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 327 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 328 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_43
# 329 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 330 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SweatDrop
# 331 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_SweatDrop
# 332 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_SweatDrop
# 333 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_SweatDrop
# 334 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_SweatDrop
# 335 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_METRONOME
# 336 "data/emeralbody_rivals/rival_scene05.pory"
	delay 80
# 337 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 338 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 339 "data/emeralbody_rivals/rival_scene05.pory"
	delay 60
# 340 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 341 "data/emeralbody_rivals/rival_scene05.pory"
	delay 60
# 342 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 343 "data/emeralbody_rivals/rival_scene05.pory"
	delay 60
# 344 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 345 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_44
# 346 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 347 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 348 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_Smile
# 349 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_MORNING_SUN
# 350 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 351 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_MusicNote
# 352 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 353 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_41
# 357 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceRight
Rival_Scene05_40:
# 359 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 360 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 361 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Scene05_Move_BaronFacing
# 362 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Scene05_Move_JaksonEndAnim
# 363 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkFastUp7
# 364 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 365 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 366 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_Thinking
# 367 "data/emeralbody_rivals/rival_scene05.pory"
	delay 60
# 368 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_Talking
# 369 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceDown
# 370 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Scene05_Move_JaksonEndMove
# 371 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Scene05_Move_ReddLeaves
# 372 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 373 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_MusicNote
# 374 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_45
# 378 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
Rival_Scene05_44:
# 380 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 381 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 382 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_Talking
# 383 "data/emeralbody_rivals/rival_scene05.pory"
	delay 40
# 384 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Smile
# 385 "data/emeralbody_rivals/rival_scene05.pory"
	delay 30
# 386 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkUp5
# 387 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 389 "data/emeralbody_rivals/rival_scene05.pory"
	fadedefaultbgm
# 390 "data/emeralbody_rivals/rival_scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 391 "data/emeralbody_rivals/rival_scene05.pory"
	removeobject 11
# 392 "data/emeralbody_rivals/rival_scene05.pory"
	removeobject 13
# 393 "data/emeralbody_rivals/rival_scene05.pory"
	removeobject 14
# 394 "data/emeralbody_rivals/rival_scene05.pory"
	removeobject 12
# 395 "data/emeralbody_rivals/rival_scene05.pory"
	removeobject 15
# 396 "data/emeralbody_rivals/rival_scene05.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 18
# 397 "data/emeralbody_rivals/rival_scene05.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 398 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_49
# 402 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
Rival_Scene05_48:
# 404 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 405 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 406 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 407 "data/emeralbody_rivals/rival_scene05.pory"
	special RemoveCameraObject
# 408 "data/emeralbody_rivals/rival_scene05.pory"
	release
	return

Rival_Scene05_2:
# 17 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_CAMERA, Scene05_Move_CameraMale
	goto Rival_Scene05_1

Rival_Scene05_6:
# 36 "data/emeralbody_rivals/rival_scene05.pory"
	opendoor 5, 8
	goto Rival_Scene05_5

Rival_Scene05_10:
# 47 "data/emeralbody_rivals/rival_scene05.pory"
	closedoor 5, 8
	goto Rival_Scene05_9

Rival_Scene05_14:
# 55 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterLeft
# 56 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 57 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_PIN
# 58 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 59 "data/emeralbody_rivals/rival_scene05.pory"
	delay 40
# 60 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceLeft
# 61 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 62 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 63 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceLeft
# 64 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 65 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 66 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 67 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Scene05_Text_Sakura1
# 68 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 69 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Scene05_Move_SakuraMove1Male
# 70 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Scene05_Move_JaksonFacingMale
# 71 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 72 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 73 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 74 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 75 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
	goto Rival_Scene05_13

Rival_Scene05_18:
# 123 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
	goto Rival_Scene05_17

Rival_Scene05_21:
# 138 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Scene05_Move_SakuraOrPlayerFacing
	goto Rival_Scene05_20

Rival_Scene05_25:
# 177 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceRight
	goto Rival_Scene05_24

Rival_Scene05_29:
# 216 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Scene05_Move_SakuraOrPlayerFacing
	goto Rival_Scene05_28

Rival_Scene05_33:
# 239 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceLeft
	goto Rival_Scene05_32

Rival_Scene05_37:
# 255 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceLeft
	goto Rival_Scene05_36

Rival_Scene05_41:
# 354 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceLeft
	goto Rival_Scene05_40

Rival_Scene05_45:
# 375 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
	goto Rival_Scene05_44

Rival_Scene05_49:
# 399 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto Rival_Scene05_48


# 411 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_CameraMale:
# 412 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_diag_southeast
# 412 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_diag_southeast
# 413 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_right
# 413 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_right
	step_end

# 416 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_CameraFemale:
# 417 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_diag_southwest
# 417 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_diag_southwest
# 418 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_left
# 418 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_left
# 418 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_left
	step_end

# 421 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_JaksonFacingMale:
# 422 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 422 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 423 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_up
# 424 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_right
	step_end

# 427 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_SakuraMove1Male:
# 428 "data/emeralbody_rivals/rival_scene05.pory"
	lock_facing_direction
# 429 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 430 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 431 "data/emeralbody_rivals/rival_scene05.pory"
	walk_right
# 432 "data/emeralbody_rivals/rival_scene05.pory"
	unlock_facing_direction
	step_end

# 435 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_SakuraMove1Female:
# 436 "data/emeralbody_rivals/rival_scene05.pory"
	lock_facing_direction
# 437 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 437 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 438 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 439 "data/emeralbody_rivals/rival_scene05.pory"
	walk_left
# 440 "data/emeralbody_rivals/rival_scene05.pory"
	unlock_facing_direction
	step_end

# 443 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_ReddFacing:
# 444 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 444 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 444 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 444 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 445 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_up
	step_end

# 448 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_SakuraOrPlayerFacing:
# 449 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 449 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 449 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 450 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_down
# 451 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_left
	step_end

# 454 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_BaronRun:
# 455 "data/emeralbody_rivals/rival_scene05.pory"
	walk_fast_down
# 456 "data/emeralbody_rivals/rival_scene05.pory"
	walk_fast_left
	step_end

# 459 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_HarperMove:
# 460 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 461 "data/emeralbody_rivals/rival_scene05.pory"
	lock_facing_direction
# 462 "data/emeralbody_rivals/rival_scene05.pory"
	walk_down
# 463 "data/emeralbody_rivals/rival_scene05.pory"
	unlock_facing_direction
# 464 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_up
# 465 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 466 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 466 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 467 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_left
	step_end

# 470 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_ReddMove:
# 471 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 471 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 471 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 471 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 471 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 471 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 471 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 471 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 472 "data/emeralbody_rivals/rival_scene05.pory"
	face_left
# 473 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 474 "data/emeralbody_rivals/rival_scene05.pory"
	face_right
# 475 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 476 "data/emeralbody_rivals/rival_scene05.pory"
	lock_facing_direction
# 477 "data/emeralbody_rivals/rival_scene05.pory"
	jump_left
# 478 "data/emeralbody_rivals/rival_scene05.pory"
	unlock_facing_direction
	step_end

# 481 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_BaronFacing:
# 482 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 483 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_up
	step_end

# 486 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_JaksonEndAnim:
# 487 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 488 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 489 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_up
# 490 "data/emeralbody_rivals/rival_scene05.pory"
	emote_sweat_drop
	step_end

# 493 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_JaksonEndMove:
# 494 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 494 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 494 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 494 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 494 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 494 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 495 "data/emeralbody_rivals/rival_scene05.pory"
	walk_right
# 496 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
	step_end

# 499 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_ReddLeaves:
# 500 "data/emeralbody_rivals/rival_scene05.pory"
	walk_right
# 501 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 501 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 501 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 501 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 501 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 501 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 501 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
	step_end

Rival_Scene05_Text_0:
# 99 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Oh, come on, you know I was right on\nyour heels, Sakura! If only they didn't\lput you on rails in the Hall of Fame!$"

Rival_Scene05_Text_1:
# 101 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Then she would've been able to sprint\nthrough it too. We both lost fair and\lsquare, Redd.$"

Rival_Scene05_Text_2:
# 105 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Yeah, I know… {PAUSE 100}I just thought I might\nhave a chance after all that research\land training…$"

Rival_Scene05_Text_3:
# 108 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Don't sell yourself short. You did\nimprove! A whole lot, Redd.$"

Rival_Scene05_Text_4:
# 111 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Yeah, but- {PAUSE 30}…{PAUSE 60}But I didn't need to\nimprove! This was but a new horizon\lto conquer!$"

Rival_Scene05_Text_5:
# 147 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I win! See, Redd, I told you Harper\nwould be next! Pay up{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene05_Text_6:
# 151 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Ah… {PAUSE 100}now they're making bets? I don't\nrecall giving you all permission to bet\lon me.\p"
	.string "Get your rowdy bunch of ne'er-do-wells\nunder control, why don't you, Jakson?$"

Rival_Scene05_Text_7:
# 156 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Haha… {PAUSE 100}for what it's worth, I did have my\nmoney on you next…$"

Rival_Scene05_Text_8:
# 162 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Damn, I really thought Baron would\ncome through in the end.\p"
	.string "He was my dark horse for being awesome\nat this before we started. Didn't you\lthink so, too, {PLAYER}?$"

Rival_Scene05_Text_9:
# 166 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Well, he should be here any-$"

Rival_Scene05_Text_10:
# 195 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Oh! You're all here. Does that mean\nyou've all finished before me?$"

Rival_Scene05_Text_11:
# 197 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Indeed. We've all completed it\nsuccessfully now.$"

Rival_Scene05_Text_12:
# 203 "data/emeralbody_rivals/rival_scene05.pory"
	.string "And I'm last to complete it… {PAUSE 100}Agh!\nI thought I'd gotten better.$"

Rival_Scene05_Text_13:
# 205 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Of course you did. We all did.$"

Rival_Scene05_Text_14:
# 209 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Aw, you did great, my cute ol' friendo.\nCome over here{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene05_Text_15:
# 229 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Eh? Be careful who you trust, Baron…$"

Rival_Scene05_Text_16:
# 232 "data/emeralbody_rivals/rival_scene05.pory"
	.string "…{PAUSE 60}Huh? What do you mean?$"

Rival_Scene05_Text_17:
# 235 "data/emeralbody_rivals/rival_scene05.pory"
	.string "{EMOJI_BIGWHEEL}Whistles nonchalantly{EMOJI_BIGWHEEL}{UNK_SPACER}$"

Rival_Scene05_Text_18:
# 245 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Pay them no mind, Baron. You and Harper\nwere neck and neck. It makes me wish I\lcould've seen the battles.$"

Rival_Scene05_Text_19:
# 248 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Trust me, you didn't want to see…\p"
	.string "{DOTS_WITH_PAUSES}$"

Rival_Scene05_Text_20:
# 251 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Well, maybe it would've been nice to\nhave you all watching.\p"
	.string "Maybe you could work on that next,\nJakson?$"

Rival_Scene05_Text_21:
# 261 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Ooh, yeah! What did you have planned\nnext, Jakson?$"

Rival_Scene05_Text_22:
# 264 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Yeah, I was wondering about that, too.\nBeen thinking about trying Gen 20.\lAny plans to mod that?$"

Rival_Scene05_Text_23:
# 266 "data/emeralbody_rivals/rival_scene05.pory"
	.string "After we spent all this time building\nup our teams here? Nah, it's gotta be\llike story DLC adventures.$"

Rival_Scene05_Text_24:
# 270 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Haha… {PAUSE 100}Well… {PAUSE 100}This is pretty much it for\nnow. As much as I wish there were more,\lthis is all I've gotten done so far.$"

Rival_Scene05_Text_25:
# 272 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Aww, phooie{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene05_Text_26:
# 274 "data/emeralbody_rivals/rival_scene05.pory"
	.string "How are you all so up for the next\nround already? Give Jakson a break.\lSheesh. Give me a break, too.$"

Rival_Scene05_Text_27:
# 277 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I suppose a break is warranted. Even if\nit felt like I was just getting into the\lswing of things.$"

Rival_Scene05_Text_28:
# 280 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Alright, if Jakson says we can't play\nanymore…$"

Rival_Scene05_Text_29:
# 286 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Hold on! I didn't say I was done!$"

Rival_Scene05_Text_30:
# 288 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I've got a few ideas left, and Emerald\nhas a decent post-game to it!$"

Rival_Scene05_Text_31:
# 290 "data/emeralbody_rivals/rival_scene05.pory"
	.string "There's the Battle Frontier for you\nall to challenge, plus some post-game\lfights.$"

Rival_Scene05_Text_32:
# 292 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Maybe I even snuck in one or two more\nsurprises!$"

Rival_Scene05_Text_33:
# 295 "data/emeralbody_rivals/rival_scene05.pory"
	.string "That sounds a little better!$"

Rival_Scene05_Text_34:
# 297 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Something more? That's what I would\nexpect from Jakson{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene05_Text_35:
# 299 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Wow, you really went hard on this\nmod-pack over like… {PAUSE 100}a week, was it?$"

Rival_Scene05_Text_36:
# 302 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I… {PAUSE 100}may have started on it a while\nbefore I asked if you all were in\lor not.$"

Rival_Scene05_Text_37:
# 306 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Haha, an understandable insecurity.\nYou did a good job!$"

Rival_Scene05_Text_38:
# 309 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I- {PAUSE 30}Well… {PAUSE 100}{EMOJI_BIGWHEEL}Clears throat{EMOJI_BIGWHEEL}\nI'm happy you all enjoyed it.\p"
	.string "And I hope that continues for the\nendgame content I managed to do.\p"
	.string "I hope you all… Baron, Sakura, Redd,\nHarper… and {PLAYER}. I hope you\lgive it a shot.$"

Rival_Scene05_Text_39:
# 313 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Well after that sap show, how could\nwe say no?$"

Rival_Scene05_Text_40:
# 316 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Ah, don't be like that. It does sound fun.$"

Rival_Scene05_Text_41:
# 318 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Heh, I didn't say it didn't.$"

Rival_Scene05_Text_42:
# 320 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I suppose you didn't. I for one\nthink it sounds lovely.$"

Rival_Scene05_Text_43:
# 328 "data/emeralbody_rivals/rival_scene05.pory"
	.string "First post game challenge?\nRace to the Battle Frontier!\lGo go go!$"

Rival_Scene05_Text_44:
# 345 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Alright then… {PAUSE 100}Shall we begin?\nOne more time.$"

Scene05_Text_Sakura1::
# 504 "data/emeralbody_rivals/rival_scene05.pory"
	.string "{PLAYER}! You'll never guess who won{EMOJI_TILDE}{UNK_SPACER}$"
