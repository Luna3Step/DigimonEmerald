.set LOCALID_ANGEMON, 3

MossdeepCity_House2_MapScripts::
	.byte 0

MossdeepCity_House2_EventScript_Man::
	msgbox MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree, MSGBOX_NPC
	end

MossdeepCity_House2_EventScript_Twin::
	msgbox MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth, MSGBOX_NPC
	end

MossdeepCity_House2_EventScript_Angemon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ANGEMON, CRY_MODE_NORMAL
	msgbox MossdeepCity_House2_Text_Angemon, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	setflag FLAG_ANGEMON_DELIVERED_MAIL
	clearflag FLAG_HIDE_FORTREE_CITY_HOUSE_4_ANGEMON
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_House2_EventScript_AngemonExitNorth
	call_if_eq VAR_FACING, DIR_WEST, MossdeepCity_House2_EventScript_AngemonExitWest
	removeobject LOCALID_ANGEMON
	release
	end

MossdeepCity_House2_EventScript_AngemonExitNorth::
	applymovement LOCALID_ANGEMON, MossdeepCity_House2_Movement_AngemonExitNorth
	waitmovement 0
	return

MossdeepCity_House2_EventScript_AngemonExitWest::
	applymovement LOCALID_ANGEMON, MossdeepCity_House2_Movement_AngemonExitEast
	waitmovement 0
	return

MossdeepCity_House2_Movement_AngemonExitNorth:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	delay_8
	step_end

MossdeepCity_House2_Movement_AngemonExitEast:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end

MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree:
	.string "My little sister exchanges MAIL with\n"
	.string "her boyfriend in FORTREE.\p"
	.string "I don't envy her one bit at all.$"

MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth:
	.string "Even though I can't see my friend in\n"
	.string "FORTREE, my POKéMON carries MAIL\l"
	.string "back and forth for us.\p"
	.string "I'm not lonesome, even though we're\n"
	.string "apart.$"

MossdeepCity_House2_Text_Angemon:
	.string "ANGEMON: Pihyoh!$"

