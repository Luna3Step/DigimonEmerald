// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonBackPicCoords[] =
{
    [SPECIES_NONE]        = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_ARGOMON_F]   = { .size = MON_COORDS_SIZE(48, 32), .y_offset = 16 },
    [SPECIES_BOMBMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_BOMMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_BOTAMON]  = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_CHIBICKMON]  = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_CHIBOMON]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_CONOMON]    = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_COTSUCOMON]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_CURIMON]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_DATIRIMON]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_DODOMON]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_DOKIMON]  = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_FUFUMON]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_JYARIMON]      = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_KEEMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_KETOMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_KURAMON]   = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_LEAFMON]     = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  2 },
    [SPECIES_CHOROMON]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_MOKUMON]    = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_NYOKIMON]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_PABUMON]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_PAFUMON]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_PAOMON]       = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_PETITMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_PICHIMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_POPOMON]   = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_POYOMON]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_PUNIMON]   = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_PUPUMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_PURURUMON]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_PUSUMON]   = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_PUTTIMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_PUWAMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_PUYOMON]    = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_PYONMON]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_RELEMON]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_SAKUMON]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_SANDMON]  = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_TSUBUMON]  = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_ICEBOTAMON]       = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_YURAMON]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_ZERIMON]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_ZURUMON]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_ARCADIAMON_IT]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_ARGOMON_IT]       = { .size = MON_COORDS_SIZE(48, 24), .y_offset = 20 },
    [SPECIES_BABYDMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_BIBIMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_BOSAMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_BUDMON]     = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_BUKAMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_CALUMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_CHAPMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_CHICCHIMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_DEMMERAMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_DEMIVEEMON]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_DORIMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_FRIMON]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_GIGIMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_GUMMYMON]     = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 16 },
    [SPECIES_GURIMON]   = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_HIYARIMON]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_HOPMON]        = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_KAKKINMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_KAPURIMON]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_KOKOMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_KOROMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_KOZENIMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  4 },
    [SPECIES_KYAROMON]  = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_KYOKYOMON]  = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_KYUPIMON]  = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_MINOMON]   = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_MISSIMON]  = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_MONIMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_MOONMON]    = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 12 },
    [SPECIES_MOTIMON]       = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_NEGAMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_NYAROMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_PAGUMON]    = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_PICKMON_SILVER]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_PICKMON_WHITE]   = { .size = MON_COORDS_SIZE(32, 24), .y_offset = 20 },
    [SPECIES_PICKMON_RED]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_PINAMON]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_POROMON]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_PUROROMON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_PUSURIMON]        = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_PUYOYOMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_SAKUTTOMON]      = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 12 },
    [SPECIES_SUNMON]         = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_TANEMON]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_TOKOMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_TOKOMON_X]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_TORBALLMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_TSUMEMON]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_ONIX]        = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_DROWZEE]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_HYPNO]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_KRABBY]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_KINGLER]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_VOLTORB]     = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_ELECTRODE]   = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_EXEGGCUTE]   = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_EXEGGUTOR]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_CUBONE]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_MAROWAK]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_HITMONLEE]   = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_HITMONCHAN]  = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_LICKITUNG]   = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_KOFFING]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_WEEZING]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_RHYHORN]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_RHYDON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_CHANSEY]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_TANGELA]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_KANGASKHAN]  = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_HORSEA]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_SEADRA]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_GOLDEEN]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_SEAKING]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_STARYU]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_STARMIE]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_MR_MIME]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_SCYTHER]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_JYNX]        = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_ELECTABUZZ]  = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_MAGMAR]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_PINSIR]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_TAUROS]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_MAGIKARP]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_GYARADOS]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_LAPRAS]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_DITTO]       = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_EEVEE]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_VAPOREON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_JOLTEON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_FLAREON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_PORYGON]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_OMANYTE]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_OMASTAR]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_KABUTO]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_KABUTOPS]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_AERODACTYL]  = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SNORLAX]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_ARTICUNO]    = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_ZAPDOS]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_MOLTRES]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_DRATINI]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_DRAGONAIR]   = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_DRAGONITE]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_MEWTWO]      = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  1 },
    [SPECIES_MEW]         = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_CHIKORITA]   = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_BAYLEEF]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_MEGANIUM]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_CYNDAQUIL]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_QUILAVA]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_TYPHLOSION]  = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_TOTODILE]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_CROCONAW]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_FERALIGATR]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_SENTRET]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_FURRET]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_HOOTHOOT]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_NOCTOWL]     = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  3 },
    [SPECIES_LEDYBA]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_LEDIAN]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_SPINARAK]    = { .size = MON_COORDS_SIZE(56, 24), .y_offset = 21 },
    [SPECIES_ARIADOS]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_CROBAT]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_CHINCHOU]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_LANTURN]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_PICHU]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_CLEFFA]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 15 },
    [SPECIES_IGGLYBUFF]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_TOGEPI]      = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_TOGETIC]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_NATU]        = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_XATU]        = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_MAREEP]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_FLAAFFY]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_AMPHAROS]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_BELLOSSOM]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_MARILL]      = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 12 },
    [SPECIES_AZUMARILL]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SUDOWOODO]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_POLITOED]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_HOPPIP]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_SKIPLOOM]    = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_JUMPLUFF]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_AIPOM]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_SUNKERN]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_SUNFLORA]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_YANMA]       = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_WOOPER]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_QUAGSIRE]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_ESPEON]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_UMBREON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_MURKROW]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_SLOWKING]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_MISDREAVUS]  = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_UNOWN]       = { .size = MON_COORDS_SIZE(24, 48), .y_offset =  8 },
    [SPECIES_WOBBUFFET]   = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 12 },
    [SPECIES_GIRAFARIG]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_PINECO]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 15 },
    [SPECIES_FORRETRESS]  = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_DUNSPARCE]   = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_GLIGAR]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_STEELIX]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SNUBBULL]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_GRANBULL]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_QWILFISH]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_SCIZOR]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_SHUCKLE]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_HERACROSS]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_SNEASEL]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_TEDDIURSA]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_URSARING]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_SLUGMA]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_MAGCARGO]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_SWINUB]      = { .size = MON_COORDS_SIZE(48, 24), .y_offset = 21 },
    [SPECIES_PILOSWINE]   = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_CORSOLA]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_REMORAID]    = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_OCTILLERY]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_DELIBIRD]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_MANTINE]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_SKARMORY]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_HOUNDOUR]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_HOUNDOOM]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_KINGDRA]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_PHANPY]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_DONPHAN]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_PORYGON2]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_STANTLER]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_SMEARGLE]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_TYROGUE]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_HITMONTOP]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_SMOOCHUM]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  9 },
    [SPECIES_ELEKID]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_MAGBY]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_MILTANK]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_BLISSEY]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_RAIKOU]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_ENTEI]       = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_SUICUNE]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_LARVITAR]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_PUPITAR]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_TYRANITAR]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_LUGIA]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_HO_OH]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_CELEBI]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_OLD_UNOWN_B] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_C] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_D] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_E] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_F] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_G] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_H] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_I] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_J] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_K] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_L] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_M] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_N] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_O] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_P] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_Q] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_R] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_S] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_T] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_U] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_V] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_W] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_X] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_Y] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_Z] = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_TREECKO]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_GROVYLE]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SCEPTILE]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_TORCHIC]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_COMBUSKEN]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_BLAZIKEN]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_MUDKIP]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_MARSHTOMP]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_SWAMPERT]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_POOCHYENA]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_MIGHTYENA]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_ZIGZAGOON]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_LINOONE]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_WURMPLE]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_SILCOON]     = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 21 },
    [SPECIES_BEAUTIFLY]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_CASCOON]     = { .size = MON_COORDS_SIZE(56, 24), .y_offset = 20 },
    [SPECIES_DUSTOX]      = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 20 },
    [SPECIES_LOTAD]       = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 15 },
    [SPECIES_LOMBRE]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_LUDICOLO]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_SEEDOT]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_NUZLEAF]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_SHIFTRY]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_NINCADA]     = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 20 },
    [SPECIES_NINJASK]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SHEDINJA]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_TAILLOW]     = { .size = MON_COORDS_SIZE(48, 32), .y_offset = 17 },
    [SPECIES_SWELLOW]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SHROOMISH]   = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_BRELOOM]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_SPINDA]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_WINGULL]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_PELIPPER]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_SURSKIT]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_MASQUERAIN]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_WAILMER]     = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 21 },
    [SPECIES_WAILORD]     = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 22 },
    [SPECIES_SKITTY]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_DELCATTY]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_KECLEON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_BALTOY]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_CLAYDOL]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_NOSEPASS]    = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_TORKOAL]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_SABLEYE]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_BARBOACH]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_WHISCASH]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_LUVDISC]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_CORPHISH]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_CRAWDAUNT]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_FEEBAS]      = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_MILOTIC]     = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  2 },
    [SPECIES_CARVANHA]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_SHARPEDO]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_TRAPINCH]    = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 14 },
    [SPECIES_VIBRAVA]     = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 17 },
    [SPECIES_FLYGON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_MAKUHITA]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_HARIYAMA]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_ELECTRIKE]   = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_MANECTRIC]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_NUMEL]       = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_CAMERUPT]    = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 19 },
    [SPECIES_SPHEAL]      = { .size = MON_COORDS_SIZE(48, 32), .y_offset = 18 },
    [SPECIES_SEALEO]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_WALREIN]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_CACNEA]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_CACTURNE]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_SNORUNT]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_GLALIE]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_LUNATONE]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_SOLROCK]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_AZURILL]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_SPOINK]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_GRUMPIG]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_PLUSLE]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_MINUN]       = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_MAWILE]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_MEDITITE]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_MEDICHAM]    = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  3 },
    [SPECIES_SWABLU]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_ALTARIA]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_WYNAUT]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_DUSKULL]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_DUSCLOPS]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_ROSELIA]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SLAKOTH]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_VIGOROTH]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_SLAKING]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_GULPIN]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_SWALOT]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_TROPIUS]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_WHISMUR]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_LOUDRED]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_EXPLOUD]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_CLAMPERL]    = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_HUNTAIL]     = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  2 },
    [SPECIES_GOREBYSS]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_ABSOL]       = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_SHUPPET]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_BANETTE]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_SEVIPER]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_ZANGOOSE]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_RELICANTH]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_ARON]        = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_LAIRON]      = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 17 },
    [SPECIES_AGGRON]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_CASTFORM]    = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_VOLBEAT]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_ILLUMISE]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_LILEEP]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_CRADILY]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_ANORITH]     = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 23 },
    [SPECIES_ARMALDO]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_RALTS]       = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_KIRLIA]      = { .size = MON_COORDS_SIZE(40, 56), .y_offset =  6 },
    [SPECIES_GARDEVOIR]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_BAGON]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_SHELGON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_SALAMENCE]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_BELDUM]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_METANG]      = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_METAGROSS]   = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 20 },
    [SPECIES_REGIROCK]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_REGICE]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_REGISTEEL]   = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_KYOGRE]      = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 19 },
    [SPECIES_GROUDON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_RAYQUAZA]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_LATIAS]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_LATIOS]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_JIRACHI]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_DEOXYS]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_CHIMECHO]    = { .size = MON_COORDS_SIZE(32, 56), .y_offset =  7 },
    [SPECIES_EGG]         = { .size = MON_COORDS_SIZE(24, 48), .y_offset = 10 },
    [SPECIES_UNOWN_B]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  9 },
    [SPECIES_UNOWN_C]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_UNOWN_D]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_UNOWN_E]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_UNOWN_F]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_UNOWN_G]     = { .size = MON_COORDS_SIZE(40, 56), .y_offset =  5 },
    [SPECIES_UNOWN_H]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_UNOWN_I]     = { .size = MON_COORDS_SIZE(24, 56), .y_offset =  7 },
    [SPECIES_UNOWN_J]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset =  9 },
    [SPECIES_UNOWN_K]     = { .size = MON_COORDS_SIZE(40, 56), .y_offset =  7 },
    [SPECIES_UNOWN_L]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_UNOWN_M]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_UNOWN_N]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_UNOWN_O]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_UNOWN_P]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_UNOWN_Q]     = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_UNOWN_R]     = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 12 },
    [SPECIES_UNOWN_S]     = { .size = MON_COORDS_SIZE(40, 56), .y_offset =  4 },
    [SPECIES_UNOWN_T]     = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_UNOWN_U]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_UNOWN_V]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_UNOWN_W]     = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    [SPECIES_UNOWN_X]     = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_UNOWN_Y]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_UNOWN_Z]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_UNOWN_EMARK] = { .size = MON_COORDS_SIZE(24, 56), .y_offset =  6 },
    [SPECIES_UNOWN_QMARK] = { .size = MON_COORDS_SIZE(32, 56), .y_offset =  6 },
};

