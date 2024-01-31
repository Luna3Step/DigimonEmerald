.set LOCALID_SPARROWMON, 1

NavelRock_Bottom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Bottom_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Bottom_OnResume
	.byte 0

NavelRock_Bottom_OnTransition:
	call_if_set FLAG_CAUGHT_SPARROWMON, NavelRock_Bottom_EventScript_HideSparrowmon
	call_if_unset FLAG_CAUGHT_SPARROWMON, NavelRock_Bottom_EventScript_TryShowSparrowmon
	end

NavelRock_Bottom_EventScript_HideSparrowmon::
	setflag FLAG_HIDE_SPARROWMON
	return

NavelRock_Bottom_EventScript_TryShowSparrowmon::
	goto_if_set FLAG_DEFEATED_SPARROWMON, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_SPARROWMON
	return

NavelRock_Bottom_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Bottom_EventScript_TryRemoveSparrowmon
	end

NavelRock_Bottom_EventScript_TryRemoveSparrowmon::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_SPARROWMON
	return

NavelRock_Bottom_EventScript_Sparrowmon::
	lock
	faceplayer
	waitse
	delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playmoncry SPECIES_SPARROWMON, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_SPARROWMON, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NavelRock_Bottom_EventScript_DefeatedSparrowmon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Bottom_EventScript_RanFromSparrowmon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Bottom_EventScript_RanFromSparrowmon
	setflag FLAG_CAUGHT_SPARROWMON
	release
	end

NavelRock_Bottom_EventScript_DefeatedSparrowmon::
	setflag FLAG_DEFEATED_SPARROWMON
	setvar VAR_0x8004, SPECIES_SPARROWMON
	goto Common_EventScript_LegendaryFlewAway
	end

NavelRock_Bottom_EventScript_RanFromSparrowmon::
	setvar VAR_0x8004, SPECIES_SPARROWMON
	goto Common_EventScript_LegendaryFlewAway
	end
