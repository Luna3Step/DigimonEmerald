.set LOCALID_GATOMON_X, 1

MarineCave_End_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, MarineCave_End_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, MarineCave_End_OnTransition
	.byte 0

MarineCave_End_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MarineCave_End_EventScript_TryRemoveGatomon_x
	end

MarineCave_End_EventScript_TryRemoveGatomon_x::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_GATOMON_X
	return

MarineCave_End_OnTransition:
	call_if_unset FLAG_DEFEATED_GATOMON_X, MarineCave_End_EventScript_ShowGatomon_x
	end

MarineCave_End_EventScript_ShowGatomon_x::
	clearflag FLAG_HIDE_MARINE_CAVE_GATOMON_X
	setvar VAR_TEMP_1, 1
	return

MarineCave_End_EventScript_Gatomon_x::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_GATOMON_X, MarineCave_End_Movement_Gatomon_xApproach
	waitmovement 0
	waitse
	playmoncry SPECIES_GATOMON_X, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_GATOMON_X
	setwildbattle SPECIES_GATOMON_X, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_TEMP_1, 0
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MarineCave_End_EventScript_DefeatedGatomon_x
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MarineCave_End_EventScript_RanFromGatomon_x
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MarineCave_End_EventScript_RanFromGatomon_x
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	setflag FLAG_DEFEATED_GATOMON_X
	releaseall
	end

MarineCave_End_EventScript_DefeatedGatomon_x::
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	setflag FLAG_DEFEATED_GATOMON_X
	goto Common_EventScript_RemoveStaticPokemon
	end

MarineCave_End_EventScript_RanFromGatomon_x::
	setvar VAR_0x8004, SPECIES_GATOMON_X
	goto Common_EventScript_LegendaryFlewAway
	end

MarineCave_End_Movement_Gatomon_xApproach:
	init_affine_anim
	walk_down_start_affine
	delay_16
	delay_16
	walk_down_affine
	delay_16
	delay_16
	walk_down_affine
	step_end

