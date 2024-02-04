Route120_EventScript_Donshoumon1::
	lock
	faceplayer
	setvar VAR_0x8009, 1
	goto EventScript_Donshoumon
	end

Route120_EventScript_Donshoumon2::
	lock
	faceplayer
	setvar VAR_0x8009, 2
	goto EventScript_Donshoumon
	end

Route120_EventScript_Donshoumon3::
	lock
	faceplayer
	setvar VAR_0x8009, 3
	goto EventScript_Donshoumon
	end

Route120_EventScript_Donshoumon4::
	lock
	faceplayer
	setvar VAR_0x8009, 4
	goto EventScript_Donshoumon
	end

Route120_EventScript_Donshoumon5::
	lock
	faceplayer
	setvar VAR_0x8009, 5
	goto EventScript_Donshoumon
	end

Route119_EventScript_Donshoumon1::
	lock
	faceplayer
	setvar VAR_0x8009, 6
	goto EventScript_Donshoumon
	end

Route119_EventScript_Donshoumon2::
	lock
	faceplayer
	setvar VAR_0x8009, 7
	goto EventScript_Donshoumon
	end

EventScript_Donshoumon::
	checkitem ITEM_DEVON_SCOPE
	goto_if_eq VAR_RESULT, TRUE, EventScript_AskUseDevonScope
	msgbox Donshoumon_Text_SomethingUnseeable, MSGBOX_DEFAULT
	release
	end

EventScript_AskUseDevonScope::
	msgbox Donshoumon_Text_WantToUseDevonScope, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_BattleDonshoumon
	release
	end

EventScript_BattleDonshoumon::
	msgbox Donshoumon_Text_UseDevonScopeMonAttacked, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	applymovement VAR_LAST_TALKED, Movement_DonshoumonAppears
	waitmovement 0
	waitse
	playmoncry SPECIES_DONSHOUMON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_DONSHOUMON, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, EventScript_RemoveDonshoumon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, EventScript_RemoveDonshoumon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, EventScript_RemoveDonshoumon
	release
	end

EventScript_RemoveDonshoumon::
	goto Common_EventScript_RemoveStaticPokemon
	end

Movement_DonshoumonAppears:
	set_visible
	delay_4
	set_invisible
	delay_4
	set_visible
	delay_4
	set_invisible
	delay_4
	set_visible
	delay_8
	set_invisible
	delay_8
	set_visible
	delay_8
	set_invisible
	delay_8
	set_visible
	delay_16
	set_invisible
	delay_16
	set_visible
	step_end
