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
# 77 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterRight
# 78 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 79 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_PIN
# 80 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 81 "data/emeralbody_rivals/rival_scene05.pory"
	delay 40
# 82 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceRight
# 83 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 84 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 85 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceLeft
# 86 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 87 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Scene05_Text_Sakura1
# 88 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 89 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Scene05_Move_SakuraMove1Female
# 90 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft4
# 91 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 92 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 93 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
Rival_Scene05_13:
# 96 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 97 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_0
# 98 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 99 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_1
# 100 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 101 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_SweatDrop
# 102 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_METRONOME
# 103 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_2
# 104 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 105 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceDown
# 106 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_3
# 107 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 108 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceLeft
# 109 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_4
# 110 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 112 "data/emeralbody_rivals/rival_scene05.pory"
	opendoor 14, 8
# 113 "data/emeralbody_rivals/rival_scene05.pory"
	waitdooranim
# 114 "data/emeralbody_rivals/rival_scene05.pory"
	addobject 12
# 115 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkDown
# 116 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 117 "data/emeralbody_rivals/rival_scene05.pory"
	closedoor 14, 8
# 118 "data/emeralbody_rivals/rival_scene05.pory"
	waitdooranim
# 119 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 120 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Rival_Scene05_18
Rival_Scene05_17:
# 123 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceRight
# 124 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 125 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 126 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_Smile
# 127 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_MORNING_SUN
# 128 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 129 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 130 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 131 "data/emeralbody_rivals/rival_scene05.pory"
	delay 40
# 132 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkDown
# 133 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 134 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Scene05_Move_ReddFacing
# 135 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_21
# 139 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Scene05_Move_SakuraOrPlayerFacing
Rival_Scene05_20:
# 141 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkLeft4
# 142 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 144 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 145 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_5
# 146 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 147 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_QuestionMark
# 148 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 149 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_6
# 151 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 152 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_SweatDrop
# 153 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_METRONOME
# 154 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_7
# 155 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 156 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 157 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 158 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_Thinking
# 159 "data/emeralbody_rivals/rival_scene05.pory"
	delay 50
# 160 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_8
# 162 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 163 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 164 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_9
# 165 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 167 "data/emeralbody_rivals/rival_scene05.pory"
	opendoor 14, 8
# 168 "data/emeralbody_rivals/rival_scene05.pory"
	waitdooranim
# 169 "data/emeralbody_rivals/rival_scene05.pory"
	addobject 15
# 170 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkDown
# 171 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 172 "data/emeralbody_rivals/rival_scene05.pory"
	closedoor 14, 8
# 173 "data/emeralbody_rivals/rival_scene05.pory"
	waitdooranim
# 174 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_25
# 178 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
Rival_Scene05_24:
# 180 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceRight
# 181 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 182 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 183 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 184 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceLeft
# 185 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 186 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 187 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_PIN
# 188 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 189 "data/emeralbody_rivals/rival_scene05.pory"
	delay 30
# 190 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Scene05_Move_BaronRun
# 191 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 192 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Baron
# 193 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_10
# 194 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 195 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_11
# 196 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_THUNDER
# 197 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Baron
# 198 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_XMark
# 199 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 200 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceRight
# 201 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_12
# 202 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 203 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_13
# 204 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 205 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_Smile
# 206 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_MORNING_SUN
# 207 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_14
# 208 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 209 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 210 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceLeft
# 211 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 212 "data/emeralbody_rivals/rival_scene05.pory"
	delay 30
# 213 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_29
# 217 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Scene05_Move_SakuraOrPlayerFacing
Rival_Scene05_28:
# 219 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkLeft3
# 220 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Scene05_Move_HarperMove
# 221 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Scene05_Move_ReddMove
# 222 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 224 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 225 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 226 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 227 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_15
# 228 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Baron
# 229 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceDown
# 230 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_16
# 231 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 232 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceUp
# 233 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_17
# 234 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 235 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceLeft
# 236 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_33
# 240 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceRight
Rival_Scene05_32:
# 242 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 243 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_18
# 244 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Baron
# 245 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceRight
# 246 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_19
# 248 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceLeft
# 249 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_20
# 251 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 252 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_37
# 256 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceRight
Rival_Scene05_36:
# 258 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 259 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_21
# 260 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 261 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 262 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_22
# 263 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 264 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_23
# 265 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 266 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_SweatDrop
# 267 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_METRONOME
# 268 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_24
# 269 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 270 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_25
# 271 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 272 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_26
# 273 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Baron
# 274 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 275 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_27
# 276 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 277 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceDown
# 278 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_28
# 279 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 280 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_PIN
# 281 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 282 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 283 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 284 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_29
# 285 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 286 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_30
# 287 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 288 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_31
# 289 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 290 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_32
# 291 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 292 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceRight
# 293 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_33
# 294 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 295 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_34
# 296 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 297 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_35
# 298 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 299 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 300 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_36
# 301 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Baron
# 302 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_Smile
# 303 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_MORNING_SUN
# 304 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_37
# 305 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 306 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 307 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_38
# 310 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 311 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_39
# 312 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Redd
# 313 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceFasterRight
# 314 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_40
# 315 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Harper
# 316 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_41
# 317 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Baron
# 318 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_42
# 319 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 321 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 322 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_PIN
# 323 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 324 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 325 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Sakura
# 326 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_43
# 327 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 328 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SweatDrop
# 329 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_SweatDrop
# 330 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_SweatDrop
# 331 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_SweatDrop
# 332 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_SweatDrop
# 333 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_METRONOME
# 334 "data/emeralbody_rivals/rival_scene05.pory"
	delay 80
# 335 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 336 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 337 "data/emeralbody_rivals/rival_scene05.pory"
	delay 60
# 338 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 339 "data/emeralbody_rivals/rival_scene05.pory"
	delay 60
# 340 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 341 "data/emeralbody_rivals/rival_scene05.pory"
	delay 60
# 342 "data/emeralbody_rivals/rival_scene05.pory"
	speakername CommonText_Jakson
# 343 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Rival_Scene05_Text_44
# 344 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 345 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 346 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_Smile
# 347 "data/emeralbody_rivals/rival_scene05.pory"
	playse SE_M_MORNING_SUN
# 348 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 349 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_MusicNote
# 350 "data/emeralbody_rivals/rival_scene05.pory"
	delay 20
# 351 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_41
# 355 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceRight
Rival_Scene05_40:
# 357 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 358 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 359 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Scene05_Move_BaronFacing
# 360 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Scene05_Move_JaksonEndAnim
# 361 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkFastUp7
# 362 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 363 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 364 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_Thinking
# 365 "data/emeralbody_rivals/rival_scene05.pory"
	delay 60
# 366 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 12, Common_Movement_Talking
# 367 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_WalkInPlaceDown
# 368 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Scene05_Move_JaksonEndMove
# 369 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Scene05_Move_ReddLeaves
# 370 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 371 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 15, Common_Movement_MusicNote
# 372 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_45
# 376 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
Rival_Scene05_44:
# 378 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 379 "data/emeralbody_rivals/rival_scene05.pory"
	delay 10
# 380 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_Talking
# 381 "data/emeralbody_rivals/rival_scene05.pory"
	delay 40
# 382 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Smile
# 383 "data/emeralbody_rivals/rival_scene05.pory"
	delay 30
# 384 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkUp5
# 385 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 387 "data/emeralbody_rivals/rival_scene05.pory"
	fadedefaultbgm
# 388 "data/emeralbody_rivals/rival_scene05.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 389 "data/emeralbody_rivals/rival_scene05.pory"
	removeobject 11
# 390 "data/emeralbody_rivals/rival_scene05.pory"
	removeobject 13
# 391 "data/emeralbody_rivals/rival_scene05.pory"
	removeobject 14
# 392 "data/emeralbody_rivals/rival_scene05.pory"
	removeobject 12
# 393 "data/emeralbody_rivals/rival_scene05.pory"
	removeobject 15
# 394 "data/emeralbody_rivals/rival_scene05.pory"
	setvar VAR_EMERALBODY_RIVAL_STATE, 18
# 395 "data/emeralbody_rivals/rival_scene05.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 396 "data/emeralbody_rivals/rival_scene05.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_Scene05_49
# 400 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
Rival_Scene05_48:
# 402 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 403 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 404 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 405 "data/emeralbody_rivals/rival_scene05.pory"
	special RemoveCameraObject
# 406 "data/emeralbody_rivals/rival_scene05.pory"
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
	speakername CommonText_Sakura
# 66 "data/emeralbody_rivals/rival_scene05.pory"
	msgbox Scene05_Text_Sakura1
# 67 "data/emeralbody_rivals/rival_scene05.pory"
	closemessage
# 68 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Scene05_Move_SakuraMove1Male
# 69 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Scene05_Move_JaksonFacingMale
# 70 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight3
# 71 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
# 72 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
# 73 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 74 "data/emeralbody_rivals/rival_scene05.pory"
	waitmovement 0
	goto Rival_Scene05_13

Rival_Scene05_18:
# 121 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
	goto Rival_Scene05_17

Rival_Scene05_21:
# 136 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Scene05_Move_SakuraOrPlayerFacing
	goto Rival_Scene05_20

Rival_Scene05_25:
# 175 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceRight
	goto Rival_Scene05_24

Rival_Scene05_29:
# 214 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Scene05_Move_SakuraOrPlayerFacing
	goto Rival_Scene05_28

Rival_Scene05_33:
# 237 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_WalkInPlaceLeft
	goto Rival_Scene05_32

Rival_Scene05_37:
# 253 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceLeft
	goto Rival_Scene05_36

Rival_Scene05_41:
# 352 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 14, Common_Movement_JumpInPlaceLeft
	goto Rival_Scene05_40

Rival_Scene05_45:
# 373 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
	goto Rival_Scene05_44

Rival_Scene05_49:
# 397 "data/emeralbody_rivals/rival_scene05.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto Rival_Scene05_48


# 409 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_CameraMale:
# 410 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_diag_southeast
# 410 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_diag_southeast
# 411 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_right
# 411 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_right
	step_end

# 414 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_CameraFemale:
# 415 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_diag_southwest
# 415 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_diag_southwest
# 416 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_left
# 416 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_left
# 416 "data/emeralbody_rivals/rival_scene05.pory"
	walk_slow_left
	step_end

# 419 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_JaksonFacingMale:
# 420 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 420 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 421 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_up
# 422 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_right
	step_end

# 425 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_SakuraMove1Male:
# 426 "data/emeralbody_rivals/rival_scene05.pory"
	lock_facing_direction
# 427 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 428 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 429 "data/emeralbody_rivals/rival_scene05.pory"
	walk_right
# 430 "data/emeralbody_rivals/rival_scene05.pory"
	unlock_facing_direction
	step_end

# 433 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_SakuraMove1Female:
# 434 "data/emeralbody_rivals/rival_scene05.pory"
	lock_facing_direction
# 435 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 435 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 436 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 437 "data/emeralbody_rivals/rival_scene05.pory"
	walk_left
# 438 "data/emeralbody_rivals/rival_scene05.pory"
	unlock_facing_direction
	step_end

# 441 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_ReddFacing:
# 442 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 442 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 442 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 442 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 443 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_up
	step_end

# 446 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_SakuraOrPlayerFacing:
# 447 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 447 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 447 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 448 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_down
# 449 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_left
	step_end

# 452 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_BaronRun:
# 453 "data/emeralbody_rivals/rival_scene05.pory"
	walk_fast_down
# 454 "data/emeralbody_rivals/rival_scene05.pory"
	walk_fast_left
	step_end

# 457 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_HarperMove:
# 458 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 459 "data/emeralbody_rivals/rival_scene05.pory"
	lock_facing_direction
# 460 "data/emeralbody_rivals/rival_scene05.pory"
	walk_down
# 461 "data/emeralbody_rivals/rival_scene05.pory"
	unlock_facing_direction
# 462 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_up
# 463 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 464 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 464 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 465 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_left
	step_end

# 468 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_ReddMove:
# 469 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 469 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 469 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 469 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 469 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 469 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 469 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 469 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 470 "data/emeralbody_rivals/rival_scene05.pory"
	face_left
# 471 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 472 "data/emeralbody_rivals/rival_scene05.pory"
	face_right
# 473 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 474 "data/emeralbody_rivals/rival_scene05.pory"
	lock_facing_direction
# 475 "data/emeralbody_rivals/rival_scene05.pory"
	jump_left
# 476 "data/emeralbody_rivals/rival_scene05.pory"
	unlock_facing_direction
	step_end

# 479 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_BaronFacing:
# 480 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 481 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_up
	step_end

# 484 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_JaksonEndAnim:
# 485 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 486 "data/emeralbody_rivals/rival_scene05.pory"
	delay_8
# 487 "data/emeralbody_rivals/rival_scene05.pory"
	walk_in_place_up
# 488 "data/emeralbody_rivals/rival_scene05.pory"
	emote_sweat_drop
	step_end

# 491 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_JaksonEndMove:
# 492 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 492 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 492 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 492 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 492 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 492 "data/emeralbody_rivals/rival_scene05.pory"
	delay_16
# 493 "data/emeralbody_rivals/rival_scene05.pory"
	walk_right
# 494 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
	step_end

# 497 "data/emeralbody_rivals/rival_scene05.pory"
Scene05_Move_ReddLeaves:
# 498 "data/emeralbody_rivals/rival_scene05.pory"
	walk_right
# 499 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 499 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 499 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 499 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 499 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 499 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
# 499 "data/emeralbody_rivals/rival_scene05.pory"
	walk_up
	step_end

Rival_Scene05_Text_0:
# 97 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Oh, come on, you know I was right on\nyour heels, Sakura! If only they didn't\lput you on rails in the Hall of Fame!$"

Rival_Scene05_Text_1:
# 99 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Then she would've been able to sprint\nthrough it too. We both lost fair and\lsquare, Redd.$"

Rival_Scene05_Text_2:
# 103 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Yeah, I know… I just thought I might\nhave a chance after all that research\land training…$"

Rival_Scene05_Text_3:
# 106 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Don't sell yourself short. You did\nimprove! A whole lot, Redd.$"

Rival_Scene05_Text_4:
# 109 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Yeah, but- …But I didn't need to\nimprove! This was but a new horizon\lto conquer!$"

Rival_Scene05_Text_5:
# 145 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I win! See, Redd, I told you Harper\nwould be next! Pay up{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene05_Text_6:
# 149 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Ah… now they're making bets? I don't\nrecall giving you all permission to bet\lon me.\p"
	.string "Get your rowdy bunch of ne'er-do-wells\nunder control, why don't you, Jakson?$"

Rival_Scene05_Text_7:
# 154 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Haha… for what it's worth, I did have my\nmoney on you next…$"

Rival_Scene05_Text_8:
# 160 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Damn, I really thought Baron would\ncome through in the end.\p"
	.string "He was my dark horse for being awesome\nat this before we started. Didn't you\lthink so, too, {PLAYER}?$"

Rival_Scene05_Text_9:
# 164 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Well, he should be here any-$"

Rival_Scene05_Text_10:
# 193 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Oh! You're all here. Does that mean\nyou've all finished before me?$"

Rival_Scene05_Text_11:
# 195 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Indeed. We've all completed it\nsuccessfully now.$"

Rival_Scene05_Text_12:
# 201 "data/emeralbody_rivals/rival_scene05.pory"
	.string "And I'm last to complete it… Agh!\nI thought I'd gotten better.$"

Rival_Scene05_Text_13:
# 203 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Of course you did. We all did.$"

Rival_Scene05_Text_14:
# 207 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Aw, you did great, my cute ol' friendo.\nCome over here{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene05_Text_15:
# 227 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Eh? Be careful who you trust, Baron…$"

Rival_Scene05_Text_16:
# 230 "data/emeralbody_rivals/rival_scene05.pory"
	.string "…Huh? What do you mean?$"

Rival_Scene05_Text_17:
# 233 "data/emeralbody_rivals/rival_scene05.pory"
	.string "{EMOJI_BIGWHEEL}Whistles nonchalantly{EMOJI_BIGWHEEL}{UNK_SPACER}$"

Rival_Scene05_Text_18:
# 243 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Pay them no mind, Baron. You and Harper\nwere neck and neck. It makes me wish I\lcould've seen the battles.$"

Rival_Scene05_Text_19:
# 246 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Trust me, you didn't want to see…\p"
	.string "… … …$"

Rival_Scene05_Text_20:
# 249 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Well, maybe it would've been nice to\nhave you all watching.\p"
	.string "Maybe you could work on that next,\nJakson?$"

Rival_Scene05_Text_21:
# 259 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Ooh, yeah! What did you have planned\nnext, Jakson?$"

Rival_Scene05_Text_22:
# 262 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Yeah, I was wondering about that, too.\nBeen thinking about trying Gen 20.\lAny plans to mod that?$"

Rival_Scene05_Text_23:
# 264 "data/emeralbody_rivals/rival_scene05.pory"
	.string "After we spent all this time building\nup our teams here? Nah, it's gotta be\llike story DLC adventures.$"

Rival_Scene05_Text_24:
# 268 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Haha… Well… This is pretty much it for\nnow. As much as I wish there were more,\lthis is all I've gotten done so far.$"

Rival_Scene05_Text_25:
# 270 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Aww, phooie{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene05_Text_26:
# 272 "data/emeralbody_rivals/rival_scene05.pory"
	.string "How are you all so up for the next\nround already? Give Jakson a break.\lSheesh. Give me a break, too.$"

Rival_Scene05_Text_27:
# 275 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I suppose a break is warranted. Even if\nit felt like I was just getting into the\lswing of things.$"

Rival_Scene05_Text_28:
# 278 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Alright, if Jakson says we can't play\nanymore…$"

Rival_Scene05_Text_29:
# 284 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Hold on! I didn't say I was done!$"

Rival_Scene05_Text_30:
# 286 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I've got a few ideas left, and Emerald\nhas a decent post-game to it!$"

Rival_Scene05_Text_31:
# 288 "data/emeralbody_rivals/rival_scene05.pory"
	.string "There's the Battle Frontier for you\nall to challenge, plus some post-game\lfights.$"

Rival_Scene05_Text_32:
# 290 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Maybe I even snuck in one or two more\nsurprises!$"

Rival_Scene05_Text_33:
# 293 "data/emeralbody_rivals/rival_scene05.pory"
	.string "That sounds a little better!$"

Rival_Scene05_Text_34:
# 295 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Something more? That's what I would\nexpect from Jakson{EMOJI_TILDE}{UNK_SPACER}$"

Rival_Scene05_Text_35:
# 297 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Wow, you really went hard on this\nmod-pack over like… a week, was it?$"

Rival_Scene05_Text_36:
# 300 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I… may have started on it a while\nbefore I asked if you all were in\lor not.$"

Rival_Scene05_Text_37:
# 304 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Haha, an understandable insecurity.\nYou did a good job!$"

Rival_Scene05_Text_38:
# 307 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I- Well… {EMOJI_BIGWHEEL}Clears throat{EMOJI_BIGWHEEL}\nI'm happy you all enjoyed it.\p"
	.string "And I hope that continues for the\nendgame content I managed to do.\p"
	.string "I hope you all… Baron, Sakura, Redd,\nHarper… and {PLAYER}. I hope you\lgive it a shot.$"

Rival_Scene05_Text_39:
# 311 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Well after that sap show, how could\nwe say no?$"

Rival_Scene05_Text_40:
# 314 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Ah, don't be like that. It does sound fun.$"

Rival_Scene05_Text_41:
# 316 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Heh, I didn't say it didn't.$"

Rival_Scene05_Text_42:
# 318 "data/emeralbody_rivals/rival_scene05.pory"
	.string "I suppose you didn't. I for one\nthink it sounds lovely.$"

Rival_Scene05_Text_43:
# 326 "data/emeralbody_rivals/rival_scene05.pory"
	.string "First post game challenge?\nRace to the Battle Frontier!\lGo go go!$"

Rival_Scene05_Text_44:
# 343 "data/emeralbody_rivals/rival_scene05.pory"
	.string "Alright then… Shall we begin?\nOne more time.$"

Scene05_Text_Sakura1::
# 502 "data/emeralbody_rivals/rival_scene05.pory"
	.string "{PLAYER}! You'll never guess who won{EMOJI_TILDE}{UNK_SPACER}$"
