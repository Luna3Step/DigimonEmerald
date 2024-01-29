MysteryGiftScript_SurfGuilmon_x::
	setvaddress MysteryGiftScript_SurfGuilmon_x
	vgoto_if_unset FLAG_MYSTERY_GIFT_DONE, SurfGuilmon_x_GiveIfPossible
	returnram

SurfGuilmon_x_GiveIfPossible:
	specialvar VAR_GIFT_GUILMON_X_SLOT, CalculatePlayerPartyCount
	vgoto_if_eq VAR_GIFT_GUILMON_X_SLOT, PARTY_SIZE, SurfGuilmon_x_FullParty
	setflag FLAG_MYSTERY_GIFT_DONE
	vcall SurfGuilmon_x_GiveEgg
	lock
	faceplayer
	vmessage sText_MysteryGiftEgg
	waitmessage
	waitbuttonpress
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	release
	end

SurfGuilmon_x_FullParty:
	lock
	faceplayer
	vmessage sText_FullParty
	waitmessage
	waitbuttonpress
	release
	end

SurfGuilmon_x_GiveEgg:
	giveegg SPECIES_GUILMON_X
	setmoneventlegal VAR_GIFT_GUILMON_X_SLOT
	setmonmetlocation VAR_GIFT_GUILMON_X_SLOT, METLOC_FATEFUL_ENCOUNTER
	vgoto_if_eq VAR_GIFT_GUILMON_X_SLOT, 1, SurfGuilmon_x_Slot1
	vgoto_if_eq VAR_GIFT_GUILMON_X_SLOT, 2, SurfGuilmon_x_Slot2
	vgoto_if_eq VAR_GIFT_GUILMON_X_SLOT, 3, SurfGuilmon_x_Slot3
	vgoto_if_eq VAR_GIFT_GUILMON_X_SLOT, 4, SurfGuilmon_x_Slot4
	vgoto_if_eq VAR_GIFT_GUILMON_X_SLOT, 5, SurfGuilmon_x_Slot5
	return

SurfGuilmon_x_Slot1:
	setmonmove 1, 2, MOVE_SURF
	return

SurfGuilmon_x_Slot2::
	setmonmove 2, 2, MOVE_SURF
	return

SurfGuilmon_x_Slot3:
	setmonmove 3, 2, MOVE_SURF
	return

SurfGuilmon_x_Slot4:
	setmonmove 4, 2, MOVE_SURF
	return

SurfGuilmon_x_Slot5:
	setmonmove 5, 2, MOVE_SURF
	return

sText_MysteryGiftEgg:
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "From the POKéMON CENTER we\n"
	.string "have a gift--a POKéMON EGG!\p"
	.string "Please raise it with love and\n"
	.string "kindness.$"

sText_FullParty:
	.string "Oh, your party appears to be full.\p"
	.string "Please come see me after storing\n"
	.string "a POKéMON on a PC.$"
