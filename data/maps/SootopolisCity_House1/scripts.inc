SootopolisCity_House1_MapScripts::
	.byte 0

SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM31, SootopolisCity_House1_EventScript_ReceivedBrickBreak
	msgbox SootopolisCity_House1_Text_DevelopedThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM31
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM31
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House1_EventScript_ReceivedBrickBreak::
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House1_EventScript_Donshoumon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DONSHOUMON, CRY_MODE_NORMAL
	msgbox SootopolisCity_House1_Text_Donshoumon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SootopolisCity_House1_Text_DevelopedThisTM:
	.string "For thirty years I've remained in\n"
	.string "SOOTOPOLIS honing my skills.\p"
	.string "I developed a shattering TM.\n"
	.string "I bequeath it to you!$"

SootopolisCity_House1_Text_ExplainBrickBreak:
	.string "TM31 contains BRICK BREAK! It's a move\n"
	.string "so horrible that I can't describe it.$"

SootopolisCity_House1_Text_Donshoumon:
	.string "DONSHOUMON: Puu puhyaah.$"

