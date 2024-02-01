SootopolisCity_ZubamonAndSeedotHouse_MapScripts::
	.byte 0

SootopolisCity_ZubamonAndSeedotHouse_EventScript_SeedotBrother::
	special GetSeedotSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_PleaseShowMeBigSeedot, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_ZubamonAndSeedotHouse_EventScript_CancelShowSeedot
	special CompareSeedotSize
	goto_if_eq VAR_RESULT, 1, SootopolisCity_ZubamonAndSeedotHouse_EventScript_NotSeedot
	goto_if_eq VAR_RESULT, 2, SootopolisCity_ZubamonAndSeedotHouse_EventScript_SmallSeedot
	goto_if_eq VAR_RESULT, 3, SootopolisCity_ZubamonAndSeedotHouse_EventScript_BigSeedot
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_CancelShowSeedot::
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_DontHaveBigSeedot, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_NotSeedot::
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_ThatsNotSeedot, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_SmallSeedot::
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_SeenBiggerSeedot, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_BigSeedot::
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_GoshMightBeBiggerThanZubamon, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_ZubamonAndSeedotHouse_EventScript_NoRoomForElixir1
	closemessage
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_NoRoomForElixir1::
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_ZubamonBrother::
	special GetZubamonSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_PleaseShowMeBigZubamon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_ZubamonAndSeedotHouse_EventScript_CancelShowZubamon
	special CompareZubamonSize
	goto_if_eq VAR_RESULT, 1, SootopolisCity_ZubamonAndSeedotHouse_EventScript_NotZubamon
	goto_if_eq VAR_RESULT, 2, SootopolisCity_ZubamonAndSeedotHouse_EventScript_SmallZubamon
	goto_if_eq VAR_RESULT, 3, SootopolisCity_ZubamonAndSeedotHouse_EventScript_BigZubamon
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_CancelShowZubamon::
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_DontHaveBigZubamon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_NotZubamon::
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_ThatsNotZubamon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_SmallZubamon::
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_SeenBiggerZubamon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_BigZubamon::
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_WowMightBeBiggerThanSeedot, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_ZubamonAndSeedotHouse_EventScript_NoRoomForElixir2
	closemessage
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_NoRoomForElixir2::
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
	release
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_SeedotSizeRecord::
	special GetSeedotSizeRecordInfo
	lockall
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_BiggestSeedotInHistory, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_ZubamonAndSeedotHouse_EventScript_ZubamonSizeRecord::
	special GetZubamonSizeRecordInfo
	lockall
	msgbox SootopolisCity_ZubamonAndSeedotHouse_Text_BiggestZubamonInHistory, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_ZubamonAndSeedotHouse_Text_PleaseShowMeBigSeedot:
	.string "Do you know the POKéMON SEEDOT?\n"
	.string "It's hardly ever seen in SOOTOPOLIS.\p"
	.string "Anyway, I love big SEEDOT.\n"
	.string "The bigger the better.\p"
	.string "But my younger brother, he says that\n"
	.string "ZUBAMON is bigger.\p"
	.string "That's silly.\n"
	.string "SEEDOT has to be bigger than that!\p"
	.string "Huh? Do you have a SEEDOT with you?\n"
	.string "P-p-please, show me!$"

SootopolisCity_ZubamonAndSeedotHouse_Text_GoshMightBeBiggerThanZubamon:
	.string "{STR_VAR_2} inches!\n"
	.string "Oh, my gosh, this is a big one!\p"
	.string "It might even beat the big ZUBAMON\n"
	.string "my younger brother saw!\p"
	.string "Thanks for showing me.\n"
	.string "This is my thanks!$"

@ Unused
SootopolisCity_ZubamonAndSeedotHouse_Text_ReceivedPotion1:
	.string "{PLAYER} received a POTION.$"

SootopolisCity_ZubamonAndSeedotHouse_Text_BagCrammedFull1:
	.string "Hunh?\n"
	.string "Your BAG is crammed full.$"

SootopolisCity_ZubamonAndSeedotHouse_Text_SeenBiggerSeedot:
	.string "{STR_VAR_2} inches, is it?\p"
	.string "Hmm… I've seen a bigger SEEDOT\n"
	.string "than this one.$"

SootopolisCity_ZubamonAndSeedotHouse_Text_ThatsNotSeedot:
	.string "Oh, now this is quite something…\n"
	.string "But it's not a SEEDOT!$"

SootopolisCity_ZubamonAndSeedotHouse_Text_DontHaveBigSeedot:
	.string "You don't have a big SEEDOT?\n"
	.string "That's too bad…\p"
	.string "If you get a big SEEDOT, please\n"
	.string "come show me.$"

SootopolisCity_ZubamonAndSeedotHouse_Text_BiggestSeedotInHistory:
	.string "The biggest SEEDOT in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3}-inch giant!\p"
	.string "A SEEDOT bigger than a ZUBAMON\n"
	.string "always wanted!$"

SootopolisCity_ZubamonAndSeedotHouse_Text_PleaseShowMeBigZubamon:
	.string "Do you know the POKéMON ZUBAMON?\n"
	.string "It's rarely seen in SOOTOPOLIS.\p"
	.string "I love, I mean love, big ZUBAMON!\p"
	.string "My big brother says that SEEDOT is\n"
	.string "bigger.\p"
	.string "But that's wrong! Everyone knows that\n"
	.string "ZUBAMON is a lot bigger.\p"
	.string "Hunh? Do you have a ZUBAMON?\n"
	.string "P-p-please show me!$"

SootopolisCity_ZubamonAndSeedotHouse_Text_WowMightBeBiggerThanSeedot:
	.string "{STR_VAR_2} inches!\n"
	.string "Wow, that is big!\p"
	.string "It might be even bigger than the huge\n"
	.string "SEEDOT my big brother saw.\p"
	.string "Thanks for showing me!\n"
	.string "This is my thanks!$"

@ Unused
SootopolisCity_ZubamonAndSeedotHouse_Text_ReceivedPotion2:
	.string "{PLAYER} received a POTION.$"

SootopolisCity_ZubamonAndSeedotHouse_Text_BagCrammedFull2:
	.string "Hunh?\n"
	.string "Your BAG is crammed full.$"

SootopolisCity_ZubamonAndSeedotHouse_Text_SeenBiggerZubamon:
	.string "{STR_VAR_2} inches?\p"
	.string "Hmm… I've seen a bigger ZUBAMON\n"
	.string "than this one here.$"

SootopolisCity_ZubamonAndSeedotHouse_Text_ThatsNotZubamon:
	.string "Well, isn't this something!\n"
	.string "But it's no ZUBAMON!$"

SootopolisCity_ZubamonAndSeedotHouse_Text_DontHaveBigZubamon:
	.string "Don't you have a big ZUBAMON?\n"
	.string "How disappointing…\p"
	.string "If you get a big ZUBAMON, please\n"
	.string "come show me!$"

SootopolisCity_ZubamonAndSeedotHouse_Text_BiggestZubamonInHistory:
	.string "The biggest ZUBAMON in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3}-inch colossus!\p"
	.string "A ZUBAMON bigger than a SEEDOT\n"
	.string "always wanted!$"

