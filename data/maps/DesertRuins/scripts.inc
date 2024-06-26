DesertRuins_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DesertRuins_OnResume
	map_script MAP_SCRIPT_ON_LOAD, DesertRuins_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, DesertRuins_OnTransition
	.byte 0

DesertRuins_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertRuins_EventScript_TryRemoveGargomon
	end

DesertRuins_EventScript_TryRemoveGargomon::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

DesertRuins_OnLoad:
	call_if_unset FLAG_SYS_GARGOMON_PUZZLE_COMPLETED, DesertRuins_EventScript_HideRegiEntrance
	end

DesertRuins_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

DesertRuins_OnTransition:
	setflag FLAG_LANDMARK_DESERT_RUINS
	call_if_unset FLAG_DEFEATED_GARGOMON, DesertRuins_EventScript_ShowGargomon
	end

DesertRuins_EventScript_ShowGargomon::
	clearflag FLAG_HIDE_GARGOMON
	return

DesertRuins_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_GARGOMON_PUZZLE_COMPLETED, DesertRuins_EventScript_BigHoleInWall
	braillemsgbox DesertRuins_Braille_UseRockSmash
	releaseall
	end

DesertRuins_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

DesertRuins_EventScript_CaveEntranceSide::
	lockall
	braillemsgbox DesertRuins_Braille_UseRockSmash
	releaseall
	end

DesertRuins_EventScript_Gargomon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GARGOMON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_GARGOMON, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DesertRuins_EventScript_DefeatedGargomon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DesertRuins_EventScript_RanFromGargomon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DesertRuins_EventScript_RanFromGargomon
	setflag FLAG_DEFEATED_GARGOMON
	release
	end

DesertRuins_EventScript_DefeatedGargomon::
	setflag FLAG_DEFEATED_GARGOMON
	goto Common_EventScript_RemoveStaticPokemon
	end

DesertRuins_EventScript_RanFromGargomon::
	setvar VAR_0x8004, SPECIES_GARGOMON
	goto Common_EventScript_LegendaryFlewAway
	end

