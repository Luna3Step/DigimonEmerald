// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonFrontPicCoords[] =
{
    [SPECIES_NONE]        = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_ARGOMON_F]   = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 14 },
    [SPECIES_BOMBMON]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_BOMMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_BOTAMON]  = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_CHIBICKMON]  = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_CHIBOMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_CONOMON]    = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_COTSUCOMON]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_CURIMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_DATIRIMON]    = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 16 },
    [SPECIES_DODOMON]     = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 20 },
    [SPECIES_DOKIMON]  = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_FUFUMON]      = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 18 },
    [SPECIES_JYARIMON]      = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 14 },
    [SPECIES_KEEMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_KETOMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_KURAMON]   = { .size = MON_COORDS_SIZE(48, 56), .y_offset = 11 },
    [SPECIES_LEAFMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_CHOROMON]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 16 },
    [SPECIES_MOKUMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_NYOKIMON]     = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 15 },
    [SPECIES_PABUMON]      = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_PAFUMON]       = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_PAOMON]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_PETITMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  9 },
    [SPECIES_PICHIMON]      = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  4 },
    [SPECIES_POPOMON]   = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_POYOMON]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_PUNIMON]   = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 15 },
    [SPECIES_PUPUMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_PURURUMON]   = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_PUSUMON]   = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_PUTTIMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_PUWAMON]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  2 },
    [SPECIES_PUYOMON]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 16 },
    [SPECIES_PYONMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_RELEMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_SAKUMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_SANDMON]  = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 16 },
    [SPECIES_TSUBUMON]  = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  8 },
    [SPECIES_ICEBOTAMON]       = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_YURAMON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_ZERIMON]      = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 15 },
    [SPECIES_ZURUMON]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_ARCADIAMON_IT]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_ARGOMON_IT]       = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_BABYDMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_BIBIMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_BOSAMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_BUDMON]     = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 18 },
    [SPECIES_BUKAMON]     = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_CALUMON]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_CHAPMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_CHICCHIMON]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  9 },
    [SPECIES_DEMMERAMON]     = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  2 },
    [SPECIES_DEMIVEEMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_DORIMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_FRIMON]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_GIGIMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_GUMMYMON]     = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 19 },
    [SPECIES_GURIMON]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_HIYARIMON]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_HOPMON]        = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_KAKKINMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_KAPURIMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_KOKOMON]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_KOROMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_KOZENIMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_KYAROMON]  = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 15 },
    [SPECIES_KYOKYOMON]  = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_KYUPIMON]  = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_MINOMON]   = { .size = MON_COORDS_SIZE(32, 48), .y_offset =  9 },
    [SPECIES_MISSIMON]  = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_MONIMON]     = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 18 },
    [SPECIES_MOONMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_MOTIMON]       = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_NEGAMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_NYAROMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_PAGUMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_PICKMON_SILVER]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_PICKMON_WHITE]   = { .size = MON_COORDS_SIZE(32, 24), .y_offset = 21 },
    [SPECIES_PICKMON_RED]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_PINAMON]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_POROMON]       = { .size = MON_COORDS_SIZE(40, 56), .y_offset =  5 },
    [SPECIES_PUROROMON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_PUSURIMON]        = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_PUYOYOMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_SAKUTTOMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_SUNMON]         = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_TANEMON]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 16 },
    [SPECIES_TOKOMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_TOKOMON_X]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_TORBALLMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_TSUMEMON]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_TSUNOMON]        = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  2 },
    [SPECIES_DROWZEE]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_HYPNO]       = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_KRABBY]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_KINGLER]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_VOLTORB]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 19 },
    [SPECIES_ELECTRODE]   = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_EXEGGCUTE]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_EXEGGUTOR]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_CUBONE]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_MAROWAK]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_HITMONLEE]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_HITMONCHAN]  = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  4 },
    [SPECIES_LICKITUNG]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_KOFFING]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_WEEZING]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_RHYHORN]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_RHYDON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_CHANSEY]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_TANGELA]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_KANGASKHAN]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_HORSEA]      = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 15 },
    [SPECIES_SEADRA]      = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_GOLDEEN]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_SEAKING]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_STARYU]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_STARMIE]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_MR_MIME]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_SCYTHER]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_JYNX]        = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_ELECTABUZZ]  = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  2 },
    [SPECIES_MAGMAR]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_PINSIR]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_TAUROS]      = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_MAGIKARP]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_GYARADOS]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  8 },
    [SPECIES_LAPRAS]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_DITTO]       = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_EEVEE]       = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  9 },
    [SPECIES_VAPOREON]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_JOLTEON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_FLAREON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_PORYGON]     = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    [SPECIES_OMANYTE]     = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 15 },
    [SPECIES_OMASTAR]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_KABUTO]      = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_KABUTOPS]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_AERODACTYL]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_SNORLAX]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_ARTICUNO]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_ZAPDOS]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_MOLTRES]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_DRATINI]     = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 14 },
    [SPECIES_DRAGONAIR]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_DRAGONITE]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_MEWTWO]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_MEW]         = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    [SPECIES_CHIKORITA]   = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_BAYLEEF]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_MEGANIUM]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_CYNDAQUIL]   = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_QUILAVA]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_TYPHLOSION]  = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_TOTODILE]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_CROCONAW]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_FERALIGATR]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SENTRET]     = { .size = MON_COORDS_SIZE(32, 56), .y_offset =  4 },
    [SPECIES_FURRET]      = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_HOOTHOOT]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    [SPECIES_NOCTOWL]     = { .size = MON_COORDS_SIZE(40, 64), .y_offset =  3 },
    [SPECIES_LEDYBA]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 12 },
    [SPECIES_LEDIAN]      = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  4 },
    [SPECIES_SPINARAK]    = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 19 },
    [SPECIES_ARIADOS]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_CROBAT]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_CHINCHOU]    = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 16 },
    [SPECIES_LANTURN]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset = 11 },
    [SPECIES_PICHU]       = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 12 },
    [SPECIES_CLEFFA]      = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 20 },
    [SPECIES_IGGLYBUFF]   = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 18 },
    [SPECIES_TOGEPI]      = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 20 },
    [SPECIES_TOGETIC]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset =  9 },
    [SPECIES_NATU]        = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 20 },
    [SPECIES_XATU]        = { .size = MON_COORDS_SIZE(32, 56), .y_offset =  7 },
    [SPECIES_MAREEP]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 16 },
    [SPECIES_FLAAFFY]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_AMPHAROS]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_BELLOSSOM]   = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 14 },
    [SPECIES_MARILL]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_AZUMARILL]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_SUDOWOODO]   = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_POLITOED]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_HOPPIP]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_SKIPLOOM]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_JUMPLUFF]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_AIPOM]       = { .size = MON_COORDS_SIZE(40, 64), .y_offset =  3 },
    [SPECIES_SUNKERN]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 16 },
    [SPECIES_SUNFLORA]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_YANMA]       = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_WOOPER]      = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_QUAGSIRE]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_ESPEON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_UMBREON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  8 },
    [SPECIES_MURKROW]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_SLOWKING]    = { .size = MON_COORDS_SIZE(40, 64), .y_offset =  1 },
    [SPECIES_MISDREAVUS]  = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_UNOWN]       = { .size = MON_COORDS_SIZE(24, 40), .y_offset = 15 },
    [SPECIES_WOBBUFFET]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_GIRAFARIG]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_PINECO]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_FORRETRESS]  = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_DUNSPARCE]   = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 17 },
    [SPECIES_GLIGAR]      = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_STEELIX]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SNUBBULL]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    [SPECIES_GRANBULL]    = { .size = MON_COORDS_SIZE(40, 56), .y_offset =  6 },
    [SPECIES_QWILFISH]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_SCIZOR]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SHUCKLE]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_HERACROSS]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_SNEASEL]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_TEDDIURSA]   = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_URSARING]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  1 },
    [SPECIES_SLUGMA]      = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_MAGCARGO]    = { .size = MON_COORDS_SIZE(40, 56), .y_offset = 13 },
    [SPECIES_SWINUB]      = { .size = MON_COORDS_SIZE(32, 24), .y_offset = 20 },
    [SPECIES_PILOSWINE]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_CORSOLA]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_REMORAID]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_OCTILLERY]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_DELIBIRD]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_MANTINE]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_SKARMORY]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_HOUNDOUR]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_HOUNDOOM]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_KINGDRA]     = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  4 },
    [SPECIES_PHANPY]      = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_DONPHAN]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_PORYGON2]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_STANTLER]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SMEARGLE]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_TYROGUE]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset =  9 },
    [SPECIES_HITMONTOP]   = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_SMOOCHUM]    = { .size = MON_COORDS_SIZE(24, 40), .y_offset = 15 },
    [SPECIES_ELEKID]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_MAGBY]       = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_MILTANK]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_BLISSEY]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_RAIKOU]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_ENTEI]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SUICUNE]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_LARVITAR]    = { .size = MON_COORDS_SIZE(32, 48), .y_offset =  9 },
    [SPECIES_PUPITAR]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  9 },
    [SPECIES_TYRANITAR]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_LUGIA]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_HO_OH]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_CELEBI]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_OLD_UNOWN_B] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_C] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_D] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_E] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_F] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_G] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_H] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_I] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_J] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_K] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_L] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_M] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_N] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_O] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_P] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_Q] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_R] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_S] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_T] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_U] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_V] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_W] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_X] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_Y] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_OLD_UNOWN_Z] = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_TREECKO]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_GROVYLE]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_SCEPTILE]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_TORCHIC]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_COMBUSKEN]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_BLAZIKEN]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_MUDKIP]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 12 },
    [SPECIES_MARSHTOMP]   = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_SWAMPERT]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_POOCHYENA]   = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_MIGHTYENA]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_ZIGZAGOON]   = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_LINOONE]     = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_WURMPLE]     = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 14 },
    [SPECIES_SILCOON]     = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 17 },
    [SPECIES_BEAUTIFLY]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_CASCOON]     = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 16 },
    [SPECIES_DUSTOX]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 15 },
    [SPECIES_LOTAD]       = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_LOMBRE]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_LUDICOLO]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SEEDOT]      = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 16 },
    [SPECIES_NUZLEAF]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_SHIFTRY]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_NINCADA]     = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 18 },
    [SPECIES_NINJASK]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_SHEDINJA]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_TAILLOW]     = { .size = MON_COORDS_SIZE(48, 32), .y_offset = 16 },
    [SPECIES_SWELLOW]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_SHROOMISH]   = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_BRELOOM]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_SPINDA]      = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  8 },
    [SPECIES_WINGULL]     = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 24 },
    [SPECIES_PELIPPER]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_SURSKIT]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 15 },
    [SPECIES_MASQUERAIN]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_WAILMER]     = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 15 },
    [SPECIES_WAILORD]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset = 10 },
    [SPECIES_SKITTY]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_DELCATTY]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_KECLEON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_BALTOY]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 16 },
    [SPECIES_CLAYDOL]     = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  6 },
    [SPECIES_NOSEPASS]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 12 },
    [SPECIES_TORKOAL]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_SABLEYE]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_BARBOACH]    = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 11 },
    [SPECIES_WHISCASH]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_LUVDISC]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 24 },
    [SPECIES_CORPHISH]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 12 },
    [SPECIES_CRAWDAUNT]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_FEEBAS]      = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 13 },
    [SPECIES_MILOTIC]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_CARVANHA]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_SHARPEDO]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_TRAPINCH]    = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_VIBRAVA]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 12 },
    [SPECIES_FLYGON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_MAKUHITA]    = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_HARIYAMA]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_ELECTRIKE]   = { .size = MON_COORDS_SIZE(48, 32), .y_offset = 18 },
    [SPECIES_MANECTRIC]   = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  4 },
    [SPECIES_NUMEL]       = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 15 },
    [SPECIES_CAMERUPT]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  9 },
    [SPECIES_SPHEAL]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 16 },
    [SPECIES_SEALEO]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_WALREIN]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_CACNEA]      = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 16 },
    [SPECIES_CACTURNE]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SNORUNT]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_GLALIE]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_LUNATONE]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_SOLROCK]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_AZURILL]     = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_SPOINK]      = { .size = MON_COORDS_SIZE(32, 48), .y_offset =  9 },
    [SPECIES_GRUMPIG]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_PLUSLE]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 14 },
    [SPECIES_MINUN]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 12 },
    [SPECIES_MAWILE]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_MEDITITE]    = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_MEDICHAM]    = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  1 },
    [SPECIES_SWABLU]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 17 },
    [SPECIES_ALTARIA]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_WYNAUT]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_DUSKULL]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_DUSCLOPS]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_ROSELIA]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_SLAKOTH]     = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 18 },
    [SPECIES_VIGOROTH]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_SLAKING]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_GULPIN]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 18 },
    [SPECIES_SWALOT]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_TROPIUS]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_WHISMUR]     = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_LOUDRED]     = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_EXPLOUD]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_CLAMPERL]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_HUNTAIL]     = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_GOREBYSS]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_ABSOL]       = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  0 },
    [SPECIES_SHUPPET]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 14 },
    [SPECIES_BANETTE]     = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_SEVIPER]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  8 },
    [SPECIES_ZANGOOSE]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_RELICANTH]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset = 11 },
    [SPECIES_ARON]        = { .size = MON_COORDS_SIZE(32, 24), .y_offset = 20 },
    [SPECIES_LAIRON]      = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_AGGRON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_CASTFORM]    = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 17 },
    [SPECIES_VOLBEAT]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_ILLUMISE]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_LILEEP]      = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_CRADILY]     = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_ANORITH]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_ARMALDO]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_RALTS]       = { .size = MON_COORDS_SIZE(24, 40), .y_offset = 15 },
    [SPECIES_KIRLIA]      = { .size = MON_COORDS_SIZE(32, 56), .y_offset =  6 },
    [SPECIES_GARDEVOIR]   = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  1 },
    [SPECIES_BAGON]       = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_SHELGON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_SALAMENCE]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_BELDUM]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_METANG]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_METAGROSS]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_REGIROCK]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  4 },
    [SPECIES_REGICE]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_REGISTEEL]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_KYOGRE]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_GROUDON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_RAYQUAZA]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_LATIAS]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_LATIOS]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_JIRACHI]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 13 },
    [SPECIES_DEOXYS]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_CHIMECHO]    = { .size = MON_COORDS_SIZE(24, 56), .y_offset =  6 },
    [SPECIES_EGG]         = { .size = MON_COORDS_SIZE(24, 24), .y_offset = 20 },
    [SPECIES_UNOWN_B]     = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 16 },
    [SPECIES_UNOWN_C]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 16 },
    [SPECIES_UNOWN_D]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 16 },
    [SPECIES_UNOWN_E]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 17 },
    [SPECIES_UNOWN_F]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 17 },
    [SPECIES_UNOWN_G]     = { .size = MON_COORDS_SIZE(24, 40), .y_offset = 14 },
    [SPECIES_UNOWN_H]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 16 },
    [SPECIES_UNOWN_I]     = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 16 },
    [SPECIES_UNOWN_J]     = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 17 },
    [SPECIES_UNOWN_K]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 17 },
    [SPECIES_UNOWN_L]     = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 19 },
    [SPECIES_UNOWN_M]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 19 },
    [SPECIES_UNOWN_N]     = { .size = MON_COORDS_SIZE(32, 24), .y_offset = 20 },
    [SPECIES_UNOWN_O]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 16 },
    [SPECIES_UNOWN_P]     = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 19 },
    [SPECIES_UNOWN_Q]     = { .size = MON_COORDS_SIZE(32, 24), .y_offset = 21 },
    [SPECIES_UNOWN_R]     = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 19 },
    [SPECIES_UNOWN_S]     = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 12 },
    [SPECIES_UNOWN_T]     = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 18 },
    [SPECIES_UNOWN_U]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 18 },
    [SPECIES_UNOWN_V]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 18 },
    [SPECIES_UNOWN_W]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 19 },
    [SPECIES_UNOWN_X]     = { .size = MON_COORDS_SIZE(24, 24), .y_offset = 21 },
    [SPECIES_UNOWN_Y]     = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 17 },
    [SPECIES_UNOWN_Z]     = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 16 },
    [SPECIES_UNOWN_EMARK] = { .size = MON_COORDS_SIZE(24, 40), .y_offset = 15 },
    [SPECIES_UNOWN_QMARK] = { .size = MON_COORDS_SIZE(24, 40), .y_offset = 13 },
};
