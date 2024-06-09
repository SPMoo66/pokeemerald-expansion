Investor::
# 2 "data/investor.pory"
	lock
# 3 "data/investor.pory"
	goto_if_unset FLAG_MET_INVESTOR, Investor_2
Investor_1:
# 13 "data/investor.pory"
	goto_if_unset FLAG_INVESTMENT_MADE, Investor_5
# 17 "data/investor.pory"
	goto_if_set FLAG_INVESTMENT_MADE, Investor_11
Investor_9:
# 20 "data/investor.pory"
	goto_if_set FLAG_INVESTMENT_MADE, Investor_8
Investor_4:
# 62 "data/investor.pory"
	hidemoneybox
	end

Investor_2:
# 4 "data/investor.pory"
	msgbox Investor_Text_0
# 11 "data/investor.pory"
	setflag FLAG_MET_INVESTOR
	goto Investor_1

Investor_5:
# 14 "data/investor.pory"
	msgbox Investor_Text_1
# 15 "data/investor.pory"
	call AskForInvestment
	goto Investor_4

Investor_6:
# 18 "data/investor.pory"
	msgbox Investor_Text_2
	goto Investor_4

Investor_7:
# 21 "data/investor.pory"
	showmoneybox 0, 0
# 22 "data/investor.pory"
	goto_if_unset FLAG_BADGE05_GET, Investor_16
# 41 "data/investor.pory"
	switch VAR_INVESTOR_MONEY
# 42 "data/investor.pory"
	case 0, Investor_26
# 45 "data/investor.pory"
	case 1, Investor_27
# 48 "data/investor.pory"
	case 2, Investor_28
# 51 "data/investor.pory"
	case 3, Investor_29
Investor_15:
# 58 "data/investor.pory"
	clearflag FLAG_INVESTMENT_MADE
# 59 "data/investor.pory"
	msgbox Investor_Text_3
# 60 "data/investor.pory"
	call AskForInvestment
	goto Investor_4

Investor_8:
# 20 "data/investor.pory"
	goto_if_unset FLAG_INVESTMENT_WAITING, Investor_7
	goto Investor_4

Investor_11:
# 17 "data/investor.pory"
	goto_if_set FLAG_INVESTMENT_WAITING, Investor_6
	goto Investor_9

Investor_16:
# 23 "data/investor.pory"
	switch VAR_INVESTOR_MONEY
# 24 "data/investor.pory"
	case 0, Investor_20
# 27 "data/investor.pory"
	case 1, Investor_21
# 30 "data/investor.pory"
	case 2, Investor_22
# 33 "data/investor.pory"
	case 3, Investor_23
	goto Investor_15

Investor_20:
# 25 "data/investor.pory"
	msgbox Text_InvestmentFailure
# 26 "data/investor.pory"
	addmoney 2500
	goto Investor_15

Investor_21:
# 28 "data/investor.pory"
	msgbox Text_InvestmentNeutral
# 29 "data/investor.pory"
	addmoney 5000
	goto Investor_15

Investor_22:
# 31 "data/investor.pory"
	msgbox Text_InvestmentSuccess
# 32 "data/investor.pory"
	addmoney 10000
	goto Investor_15

Investor_23:
# 34 "data/investor.pory"
	msgbox Text_InvestmentGreatSuccess
# 35 "data/investor.pory"
	addmoney 20000
	goto Investor_15

Investor_26:
# 43 "data/investor.pory"
	msgbox Text_InvestmentFailure
# 44 "data/investor.pory"
	addmoney 5000
	goto Investor_15

Investor_27:
# 46 "data/investor.pory"
	msgbox Text_InvestmentNeutral
# 47 "data/investor.pory"
	addmoney 10000
	goto Investor_15

Investor_28:
# 49 "data/investor.pory"
	msgbox Text_InvestmentSuccess
# 50 "data/investor.pory"
	addmoney 20000
	goto Investor_15

Investor_29:
# 52 "data/investor.pory"
	msgbox Text_InvestmentGreatSuccess
# 53 "data/investor.pory"
	addmoney 40000
	goto Investor_15


AskForInvestment::
# 67 "data/investor.pory"
	showmoneybox 0, 0
# 68 "data/investor.pory"
	goto_if_unset FLAG_BADGE06_GET, AskForInvestment_1
# 82 "data/investor.pory"
	msgbox AskForInvestment_Text_1, MSGBOX_YESNO
# 83 "data/investor.pory"
	compare VAR_RESULT, 0
	goto_if_eq AskForInvestment_7
# 87 "data/investor.pory"
	checkmoney 10000
# 88 "data/investor.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AskForInvestment_12
	return

AskForInvestment_1:
# 69 "data/investor.pory"
	msgbox AskForInvestment_Text_0, MSGBOX_YESNO
# 70 "data/investor.pory"
	compare VAR_RESULT, 0
	goto_if_eq AskForInvestment_4
# 74 "data/investor.pory"
	checkmoney 5000
# 75 "data/investor.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AskForInvestment_10
	return

AskForInvestment_4:
# 71 "data/investor.pory"
	msgbox Text_DeclineInvestor
	return

AskForInvestment_7:
# 84 "data/investor.pory"
	msgbox Text_DeclineInvestor
	return

AskForInvestment_10:
# 76 "data/investor.pory"
	removemoney 5000
# 77 "data/investor.pory"
	goto InvestmentCalculations
	return

AskForInvestment_12:
# 89 "data/investor.pory"
	removemoney 10000
# 90 "data/investor.pory"
	goto InvestmentCalculations
	return


InvestmentCalculations::
# 97 "data/investor.pory"
	setflag FLAG_INVESTMENT_MADE
# 98 "data/investor.pory"
	setflag FLAG_INVESTMENT_WAITING
# 99 "data/investor.pory"
	msgbox Text_AcceptInvestor
# 100 "data/investor.pory"
	random 3
# 101 "data/investor.pory"
	copyvar VAR_INVESTOR_MONEY, VAR_RESULT
	return


Investor_Text_0:
# 4 "data/investor.pory"
	.string "Hey, you!\n"
	.string "You look like a financially savvy kid!\p"
	.string "Hmm…\n"
	.string "You see, I've got quite a valuable\l"
	.string "investment opportunity on my hands.\p"
	.string "If you'll so graciously lend me some\n"
	.string "money, I promise I can pay it back in\l"
	.string "dividends!\p"
	.string "And then next day, too!\n"
	.string "Really, you won't find a better way to\l"
	.string "earn!$"

Investor_Text_1:
# 14 "data/investor.pory"
	.string "So, would you like to invest with me?$"

Investor_Text_2:
# 18 "data/investor.pory"
	.string "Come back tomorrow and I'll have your\n"
	.string "earnings ready.$"

Investor_Text_3:
# 59 "data/investor.pory"
	.string "So, would you like to make another\n"
	.string "investment?$"

AskForInvestment_Text_0:
# 69 "data/investor.pory"
	.string "If you'd just lend ¥5000 to me, it's\n"
	.string "bound to be a success!$"

AskForInvestment_Text_1:
# 82 "data/investor.pory"
	.string "If you'd just lend ¥10000 to me, it's\n"
	.string "bound to be a success!$"

Text_DeclineInvestor::
# 104 "data/investor.pory"
	.string "Ah, you've disappointed me.\p"
	.string "If you change your mind, do return.$"

Text_AcceptInvestor::
# 109 "data/investor.pory"
	.string "Fantastic!\n"
	.string "Check back tomrorrow and I'll give you\l"
	.string "your return.$"

Text_InvestmentFailure::
# 114 "data/investor.pory"
	.string "Ah, you're back.\p"
	.string "Unfortunately I hit a snag in the whole\n"
	.string "process.\n"
	.string "Nothing too bad, but well… …\p"
	.string "All I can give you is half of what you\n"
	.string "invested with me.\p"
	.string "But next time, I promise I can do\n"
	.string "better!$"

Text_InvestmentNeutral::
# 122 "data/investor.pory"
	.string "You've returned!\p"
	.string "I've got good news and bad news.\p"
	.string "Unfortunately, I wasn't able to make\n"
	.string "you any money.\p"
	.string "But I didn't lose you any either!\p"
	.string "Here's your original investment back.\n"
	.string "If you want to give it another shot, let\l"
	.string "me know.$"

Text_InvestmentSuccess::
# 131 "data/investor.pory"
	.string "Back already?\p"
	.string "You should have waited longer, because\n"
	.string "I made you quite a bit already.\p"
	.string "Well, here's your seed back anyway,\n"
	.string "doubled in value!\p"
	.string "How do I do it?\p"
	.string "Ha! I've got to keep some secrets if I\n"
	.string "want customers to return!\p"
	.string "If you want to give it another go, I'll\n"
	.string "be here.$"

Text_InvestmentGreatSuccess::
# 140 "data/investor.pory"
	.string "You must have sensed our victory!\p"
	.string "Yes, we've had a great success!\n"
	.string "Don't ask how I did it, but I've\l"
	.string "quadrupled what you'd given me.\p"
	.string "Here, take it, before it burns a whole in\n"
	.string "my pocket.\p"
	.string "If you want to taste victory once more,\n"
	.string "you know where to find me.$"
