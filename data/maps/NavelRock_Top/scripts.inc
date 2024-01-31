.set LOCALID_HO_OH, 1

NavelRock_Top_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Top_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Top_OnResume
	.byte 0

NavelRock_Top_OnTransition:
	call_if_set FLAG_CAUGHT_HO_OH, NavelRock_Top_EventScript_HideStarmon_2010
	call_if_unset FLAG_CAUGHT_HO_OH, NavelRock_Top_EventScript_TryShowStarmon_2010
	end

NavelRock_Top_EventScript_HideStarmon_2010::
	setvar VAR_TEMP_1, 1
	setflag FLAG_HIDE_HO_OH
	return

NavelRock_Top_EventScript_TryShowStarmon_2010::
	setvar VAR_TEMP_1, 1
	goto_if_set FLAG_DEFEATED_HO_OH, Common_EventScript_NopReturn
	setvar VAR_TEMP_1, 0
	clearflag FLAG_HIDE_HO_OH
	return

NavelRock_Top_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Top_EventScript_TryRemoveStarmon_2010
	end

NavelRock_Top_EventScript_TryRemoveStarmon_2010::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_HO_OH
	return

NavelRock_Top_EventScript_Starmon_2010::
	lockall
	setvar VAR_TEMP_1, 1
	special SpawnCameraObject
	setvar VAR_0x8004, 3  @ num loops
	setvar VAR_0x8005, 35 @ delay
	special LoopWingFlapSE
	applymovement LOCALID_HO_OH, NavelRock_Top_Movement_Starmon_2010Appear
	applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanUp
	waitmovement 0
	delay 50
	setweather WEATHER_NONE
	doweather
	waitse
	playmoncry SPECIES_STARMON_2010, CRY_MODE_ENCOUNTER
	delay 30
	waitmoncry
	delay 60
	setvar VAR_0x8004, 3  @ num loops
	setvar VAR_0x8005, 35 @ delay
	special LoopWingFlapSE
	applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanDown
	applymovement LOCALID_HO_OH, NavelRock_Top_Movement_Starmon_2010Approach
	waitmovement 0
	special RemoveCameraObject
	seteventmon SPECIES_STARMON_2010, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_LAST_TALKED, LOCALID_HO_OH
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NavelRock_Top_EventScript_DefeatedStarmon_2010
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Top_EventScript_RanFromStarmon_2010
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Top_EventScript_RanFromStarmon_2010
	setflag FLAG_CAUGHT_HO_OH
	releaseall
	end

NavelRock_Top_EventScript_DefeatedStarmon_2010::
	setflag FLAG_DEFEATED_HO_OH
	setvar VAR_0x8004, SPECIES_STARMON_2010
	goto Common_EventScript_LegendaryFlewAway
	end

NavelRock_Top_EventScript_RanFromStarmon_2010::
	setvar VAR_0x8004, SPECIES_STARMON_2010
	goto Common_EventScript_LegendaryFlewAway
	end

NavelRock_Top_Movement_CameraPanUp:
	walk_up
	walk_up
	walk_up
	step_end

NavelRock_Top_Movement_CameraPanDown:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	step_end

NavelRock_Top_Movement_Starmon_2010Approach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_down
	delay_16
	delay_16
	step_end

NavelRock_Top_Movement_Starmon_2010Appear:
	delay_16
	delay_16
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	step_end
