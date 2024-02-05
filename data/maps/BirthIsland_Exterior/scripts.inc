.set LOCALID_GESOMON, 2

@ Note: LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK is a local id for this map used elsewhere. It's defined in event_objects.h

BirthIsland_Exterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_OnResume
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_OnReturnToField
	.byte 0

BirthIsland_Exterior_OnReturnToField:
	special SetGesomonRockPalette
	end

BirthIsland_Exterior_OnTransition:
	setflag FLAG_MAP_SCRIPT_CHECKED_GESOMON
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	setvar VAR_GESOMON_ROCK_STEP_COUNT, 0
	setvar VAR_GESOMON_ROCK_LEVEL, 0
	call_if_set FLAG_BATTLED_GESOMON, BirthIsland_Exterior_EventScript_HideGesomonAndPuzzle
	call_if_unset FLAG_BATTLED_GESOMON, BirthIsland_Exterior_EventScript_TryShowGesomonPuzzle
	end

BirthIsland_Exterior_EventScript_HideGesomonAndPuzzle::
	setflag FLAG_HIDE_GESOMON
	setflag FLAG_HIDE_BIRTH_ISLAND_GESOMON_TRIANGLE
	return

BirthIsland_Exterior_EventScript_TryShowGesomonPuzzle::
	goto_if_set FLAG_DEFEATED_GESOMON, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_BIRTH_ISLAND_GESOMON_TRIANGLE
	clearflag FLAG_GESOMON_ROCK_COMPLETE
	return

BirthIsland_Exterior_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BirthIsland_Exterior_EventScript_TryRemoveGesomon
	end

BirthIsland_Exterior_EventScript_TryRemoveGesomon::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_GESOMON
	return

BirthIsland_Exterior_EventScript_Triangle::
	lock
	faceplayer
	special DoGesomonRockInteraction
	waitstate
	switch VAR_RESULT
	case 0, BirthIsland_Exterior_EventScript_NotSolved1
	case 1, BirthIsland_Exterior_EventScript_NotSolved2
	case 2, BirthIsland_Exterior_EventScript_Gesomon
	case 3, BirthIsland_Exterior_EventScript_NotSolved3
	end

BirthIsland_Exterior_EventScript_NotSolved1::
	release
	end

BirthIsland_Exterior_EventScript_NotSolved2::
	release
	end

BirthIsland_Exterior_EventScript_NotSolved3::
	release
	end

BirthIsland_Exterior_EventScript_Gesomon::
	waitse
	setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
	setfieldeffectargument 1, MAP_NUM(BIRTH_ISLAND_EXTERIOR)
	setfieldeffectargument 2, MAP_GROUP(BIRTH_ISLAND_EXTERIOR)
	dofieldeffect FLDEFF_DESTROY_GESOMON_ROCK
	playbgm MUS_RG_ENCOUNTER_DEOXYS, FALSE
	waitfieldeffect FLDEFF_DESTROY_GESOMON_ROCK
	addobject LOCALID_GESOMON
	applymovement LOCALID_GESOMON, BirthIsland_Exterior_Movement_GesomonApproach
	waitmovement 0
	waitse
	playmoncry SPECIES_GESOMON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_GESOMON
	seteventmon SPECIES_GESOMON, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BirthIsland_Exterior_EventScript_DefeatedGesomon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BirthIsland_Exterior_EventScript_RanFromGesomon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BirthIsland_Exterior_EventScript_RanFromGesomon
	setflag FLAG_BATTLED_GESOMON
	release
	end

BirthIsland_Exterior_EventScript_DefeatedGesomon::
	setflag FLAG_DEFEATED_GESOMON
	setvar VAR_0x8004, SPECIES_GESOMON
	goto Common_EventScript_LegendaryFlewAway
	end

BirthIsland_Exterior_EventScript_RanFromGesomon::
	setvar VAR_0x8004, SPECIES_GESOMON
	goto Common_EventScript_LegendaryFlewAway
	end

BirthIsland_Exterior_Movement_GesomonApproach:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end
