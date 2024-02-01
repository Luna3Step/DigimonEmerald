SootopolisCity_ZubamonAndAirdramonHouse_MapScripts::
	.byte 0

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_AirdramonBrother::
	special GetAirdramonSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_PleaseShowMeBigAirdramon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_ZubamonAndAirdramonHouse_EventScript_CancelShowAirdramon
	special CompareAirdramonSize
	goto_if_eq VAR_RESULT, 1, SootopolisCity_ZubamonAndAirdramonHouse_EventScript_NotAirdramon
	goto_if_eq VAR_RESULT, 2, SootopolisCity_ZubamonAndAirdramonHouse_EventScript_SmallAirdramon
	goto_if_eq VAR_RESULT, 3, SootopolisCity_ZubamonAndAirdramonHouse_EventScript_BigAirdramon
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_CancelShowAirdramon::
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_DontHaveBigAirdramon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_NotAirdramon::
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_ThatsNotAirdramon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_SmallAirdramon::
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_SeenBiggerAirdramon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_BigAirdramon::
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_GoshMightBeBiggerThanZubamon, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_ZubamonAndAirdramonHouse_EventScript_NoRoomForElixir1
	closemessage
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_NoRoomForElixir1::
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_ZubamonBrother::
	special GetZubamonSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_PleaseShowMeBigZubamon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_ZubamonAndAirdramonHouse_EventScript_CancelShowZubamon
	special CompareZubamonSize
	goto_if_eq VAR_RESULT, 1, SootopolisCity_ZubamonAndAirdramonHouse_EventScript_NotZubamon
	goto_if_eq VAR_RESULT, 2, SootopolisCity_ZubamonAndAirdramonHouse_EventScript_SmallZubamon
	goto_if_eq VAR_RESULT, 3, SootopolisCity_ZubamonAndAirdramonHouse_EventScript_BigZubamon
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_CancelShowZubamon::
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_DontHaveBigZubamon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_NotZubamon::
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_ThatsNotZubamon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_SmallZubamon::
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_SeenBiggerZubamon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_BigZubamon::
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_WowMightBeBiggerThanAirdramon, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_ZubamonAndAirdramonHouse_EventScript_NoRoomForElixir2
	closemessage
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_NoRoomForElixir2::
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_AirdramonSizeRecord::
	special GetAirdramonSizeRecordInfo
	lockall
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_BiggestAirdramonInHistory, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_ZubamonAndAirdramonHouse_EventScript_ZubamonSizeRecord::
	special GetZubamonSizeRecordInfo
	lockall
	msgbox SootopolisCity_ZubamonAndAirdramonHouse_Text_BiggestZubamonInHistory, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_ZubamonAndAirdramonHouse_Text_PleaseShowMeBigAirdramon:
	.string "Do you know the POKéMON AIRDRAMON?\n"
	.string "It's hardly ever seen in SOOTOPOLIS.\p"
	.string "Anyway, I love big AIRDRAMON.\n"
	.string "The bigger the better.\p"
	.string "But my younger brother, he says that\n"
	.string "ZUBAMON is bigger.\p"
	.string "That's silly.\n"
	.string "AIRDRAMON has to be bigger than that!\p"
	.string "Huh? Do you have a AIRDRAMON with you?\n"
	.string "P-p-please, show me!$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_GoshMightBeBiggerThanZubamon:
	.string "{STR_VAR_2} inches!\n"
	.string "Oh, my gosh, this is a big one!\p"
	.string "It might even beat the big ZUBAMON\n"
	.string "my younger brother saw!\p"
	.string "Thanks for showing me.\n"
	.string "This is my thanks!$"

@ Unused
SootopolisCity_ZubamonAndAirdramonHouse_Text_ReceivedPotion1:
	.string "{PLAYER} received a POTION.$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_BagCrammedFull1:
	.string "Hunh?\n"
	.string "Your BAG is crammed full.$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_SeenBiggerAirdramon:
	.string "{STR_VAR_2} inches, is it?\p"
	.string "Hmm… I've seen a bigger AIRDRAMON\n"
	.string "than this one.$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_ThatsNotAirdramon:
	.string "Oh, now this is quite something…\n"
	.string "But it's not a AIRDRAMON!$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_DontHaveBigAirdramon:
	.string "You don't have a big AIRDRAMON?\n"
	.string "That's too bad…\p"
	.string "If you get a big AIRDRAMON, please\n"
	.string "come show me.$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_BiggestAirdramonInHistory:
	.string "The biggest AIRDRAMON in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3}-inch giant!\p"
	.string "A AIRDRAMON bigger than a ZUBAMON\n"
	.string "always wanted!$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_PleaseShowMeBigZubamon:
	.string "Do you know the POKéMON ZUBAMON?\n"
	.string "It's rarely seen in SOOTOPOLIS.\p"
	.string "I love, I mean love, big ZUBAMON!\p"
	.string "My big brother says that AIRDRAMON is\n"
	.string "bigger.\p"
	.string "But that's wrong! Everyone knows that\n"
	.string "ZUBAMON is a lot bigger.\p"
	.string "Hunh? Do you have a ZUBAMON?\n"
	.string "P-p-please show me!$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_WowMightBeBiggerThanAirdramon:
	.string "{STR_VAR_2} inches!\n"
	.string "Wow, that is big!\p"
	.string "It might be even bigger than the huge\n"
	.string "AIRDRAMON my big brother saw.\p"
	.string "Thanks for showing me!\n"
	.string "This is my thanks!$"

@ Unused
SootopolisCity_ZubamonAndAirdramonHouse_Text_ReceivedPotion2:
	.string "{PLAYER} received a POTION.$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_BagCrammedFull2:
	.string "Hunh?\n"
	.string "Your BAG is crammed full.$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_SeenBiggerZubamon:
	.string "{STR_VAR_2} inches?\p"
	.string "Hmm… I've seen a bigger ZUBAMON\n"
	.string "than this one here.$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_ThatsNotZubamon:
	.string "Well, isn't this something!\n"
	.string "But it's no ZUBAMON!$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_DontHaveBigZubamon:
	.string "Don't you have a big ZUBAMON?\n"
	.string "How disappointing…\p"
	.string "If you get a big ZUBAMON, please\n"
	.string "come show me!$"

SootopolisCity_ZubamonAndAirdramonHouse_Text_BiggestZubamonInHistory:
	.string "The biggest ZUBAMON in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3}-inch colossus!\p"
	.string "A ZUBAMON bigger than a AIRDRAMON\n"
	.string "always wanted!$"

