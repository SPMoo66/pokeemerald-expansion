Expansion1_Follower_Harper1::
# 2 "data/expansion_1/follower_npc.pory"
	faceplayer
# 3 "data/expansion_1/follower_npc.pory"
	speakername CommonText_Harper
# 4 "data/expansion_1/follower_npc.pory"
	msgbox Expansion1_Follower_Harper1_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/expansion_1/follower_npc.pory"
	release
	return


Expansion1_Follower_Harper2::
# 12 "data/expansion_1/follower_npc.pory"
	faceplayer
# 13 "data/expansion_1/follower_npc.pory"
	speakername CommonText_Harper
# 14 "data/expansion_1/follower_npc.pory"
	compare VAR_EMERALBODY_RIVAL_STATE, 37
	goto_if_lt Expansion1_Follower_Harper2_2
# 24 "data/expansion_1/follower_npc.pory"
	msgbox Expansion1_Follower_Harper2_Text_1, MSGBOX_AUTOCLOSE
Expansion1_Follower_Harper2_1:
# 28 "data/expansion_1/follower_npc.pory"
	release
	return

Expansion1_Follower_Harper2_2:
# 15 "data/expansion_1/follower_npc.pory"
	msgbox Expansion1_Follower_Harper2_Text_0, MSGBOX_AUTOCLOSE
	goto Expansion1_Follower_Harper2_1


Expansion1_Follower_Harper1_Text_0:
# 4 "data/expansion_1/follower_npc.pory"
	.string "I'll admit it's an interesting little\n"
	.string "dungeon we have here… {PAUSE 100}thankfully\l"
	.string "a bit linear too. We can just keep\l"
	.string "moving forward.$"

Expansion1_Follower_Harper2_Text_0:
# 15 "data/expansion_1/follower_npc.pory"
	.string "Shit, something's gotta be in one of\n"
	.string "these rooms, right?\p"
	.string "I wonder if this place is even made\n"
	.string "like a normal dungeon…\p"
	.string "Like are we gonna find some loot at\n"
	.string "the end or is the dynamite gonna be in\l"
	.string "the first few rooms we come across?$"

Expansion1_Follower_Harper2_Text_1:
# 24 "data/expansion_1/follower_npc.pory"
	.string "A key… {PAUSE 100}a key…\p"
	.string "Do you remember there being any\n"
	.string "locked rooms, {PLAYER}?$"
