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
    [SPECIES_TSUNOMON]        = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_TUMBLEMON]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_UPAMON]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_VIXIMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_WANYAMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_XIAOMON]     = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_YAAMON]   = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_YOKOMON]   = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_AGUMON]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_AGUMON_06]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_AGUMON_EXPERT]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_AGUMON_X]   = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_ANGORAMON]  = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_ARCADIAMON_ROOKIE]   = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_ARGOMON_ROOKIE]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_ARMADILMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_ARURAUMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_BAKOMON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_BEARMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_BETAMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_BETAMON_X]  = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_BIYOMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_BLKAGUMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_BLKAGUMON_X]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_BLKGABUMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_BLKGUILMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_BOKOMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_BULUCOMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_BURGERMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_SAMUAGUMON]        = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_CANDLEMON]  = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_CHIKURIMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_TYUTYUMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_CHUUMON]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_HAZYAGUMON]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_COMMDRAMON]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_CORONAMON]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_CRABMON]       = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_CRABMON_X]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_CUTEMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_DAMEMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_DEMIDEVMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_DOKUNEMON]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_DONDOKOMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_DORUMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_DOTAGUMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_DOTFALCMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_DRACMON]  = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_DRACOMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_DRACOMON_X]    = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_EBIBURGMON]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_EKAKIMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_ELECMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_ELECMON_VIOLET]   = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_ESPIMON]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_AGUMON_FAKE_EXPERT]      = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  1 },
    [SPECIES_FALCOMON]         = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_FALCOMON_06]   = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_FANBEEMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_FLAMEMON]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_FLORAMON]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_GABUMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_GABUMON_X]  = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_GAMMAMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_GAOMON]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_GAOSSMON]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_GAZIMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_GAZIMON_X]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_GHOSTMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_GIZAMON]     = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  3 },
    [SPECIES_GIZUMON]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_GOBLIMON]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_GOMAMON]    = { .size = MON_COORDS_SIZE(56, 24), .y_offset = 21 },
    [SPECIES_GOMAMON_X]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_GOTSUMON]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_GOTSUMON_X]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_GUILMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_GUILMON_X]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_GUMDRAMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 15 },
    [SPECIES_HACKMON]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_HAGURUMON]      = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_HAGURUMON_X]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_HAWKMON]        = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_HERISSMON]        = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_HYOKOMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_IGNITEMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_IMPMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_IMPMON_X]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_JAZAMON]      = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 12 },
    [SPECIES_JELLYMON]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_JUNKMON]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_KAMEMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_KERAMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_KERAMON_X]    = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_KODOKGUMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_KOKABUIMON]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_KOKUWAMON]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_KOKUWAMON_X]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_KOTEMON]       = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_KUDAMON]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_KUDAMON_06]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_KUNEMON]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_LABRAMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_LALAMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_LIOLLMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_LOOGAMON]  = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_LOPMON]       = { .size = MON_COORDS_SIZE(24, 48), .y_offset =  8 },
    [SPECIES_LOPMON_X]   = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 12 },
    [SPECIES_LUCEMON]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_LUDOMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 15 },
    [SPECIES_LUNAMON]  = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_LUXMON]   = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_METABEE]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_KODEKACMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_MODBETAMON]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_MONITAMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_MONMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_MONODRAMON]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_MORPHOMON]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_MUCHOMON]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_MUSHROOMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_NEEMON]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_OTAMAMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_OTAMAMON_RED]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_OTAMAMON_X]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_PALMON]      = { .size = MON_COORDS_SIZE(48, 24), .y_offset = 21 },
    [SPECIES_PALMON_X]   = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_PATAMON]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_PAWNMON]    = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_PAWNMON_WHITE]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_PENGUINMON]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_PETITMAMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_PHASCOMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_PILLOMON]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_POMUMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_PSYCHEMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_PULSEMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_RENAMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_RENAMON_X]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_ROKUSHO]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_RYUDAMON]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_SALAMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_SALAMON_X]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_SANGOMON]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  9 },
    [SPECIES_SANTAAGUMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_BLKTOYAMON]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_SHAMANMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_SHOUTMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_YUKIAGUMON]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_YUKIAGUMON_06]       = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_ICEGOBIMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_SOLARMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_SOUNBRDMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_SPADAMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SPARROWMON]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_STARMON_2010]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_STRABIMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
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
    [SPECIES_SUNARZAMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_SWIMMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SYAKOMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_SYAKOMON_X]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_TAPIRMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_TENTOMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_TERRIERMON]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_TERRIERMON_ASSISTANT]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_TERRIERMON_X]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_TINKERMON]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_TINPET]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_TOYAGUMON]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_TSUKAIMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_VEEMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_VEMMON]     = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 21 },
    [SPECIES_VORVOMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_WORMMON]     = { .size = MON_COORDS_SIZE(56, 24), .y_offset = 20 },
    [SPECIES_ZENIMON]      = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 20 },
    [SPECIES_ZUBAMON]       = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 15 },
    [SPECIES_AEGIOMON]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_AGUNIMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_AIRDRAMON]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_AKATORIMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_ALLOMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_BAKEMON]     = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 20 },
    [SPECIES_BALISTAMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_BALUCHIMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_ALLOMON_X]     = { .size = MON_COORDS_SIZE(48, 32), .y_offset = 17 },
    [SPECIES_ANGELAMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_ARESDRAMON]   = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_ATAMADEMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_COREDRAMON_BLUE]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_ANGEMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_ANKYLOMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_ARCHELOMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_ARGOMON_CHAMPION]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_CHAMBLEMON]     = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 21 },
    [SPECIES_CHAMELEMON]     = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 22 },
    [SPECIES_BIRDRAMON]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_BLGAOGAMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_DONSHOUMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_DEXDORUMON]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_DIATRYMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_BIOTHUNMON]    = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_CLOCKMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_BLGARGOMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_DEPTHMON]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_DEPUTYMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_FLYBEEMON]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_DEVIDRAMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_DEVIMON]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_DOGGYMON]      = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_DOKUGUMON]     = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  2 },
    [SPECIES_CHOUFLYMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_CENTARUMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_COREDRAMON_GREEN]    = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 14 },
    [SPECIES_CYCLONEMON]     = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 17 },
    [SPECIES_DAMEMON_FUSION]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_BETGAMAMON]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_BIOQUETMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_BOARMON]   = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_BOMNANIMON]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_CHRYSALMON]       = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_CITRAMON]    = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 19 },
    [SPECIES_EYESMON_SCATTERMODE]      = { .size = MON_COORDS_SIZE(48, 32), .y_offset = 18 },
    [SPECIES_FANGMON]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_FILMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_DARCMON]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_TRAILMON_DARK]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_EXVEEMON_VIRUS]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_EYESMON]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_DECKDRAMON]    = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_DELTAMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_BIOSTEGMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_CLOCKMON_FUSION]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_COELAMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_BOOGIEMON]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_BUCCHIEMON_RED]       = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_BLGARURMON]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_SAWKUWAMON]    = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_BLIMPMON]    = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  3 },
    [SPECIES_DARLIZAMON]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_DARMAILMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_EXVEEMON]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_DRIMOGEMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_EBIDRAMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_BULLMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_AURUMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_AXEMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_BABOONMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_BURAIMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_BURGERMON_CHAMPION]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_ELEPHANMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_BAOHUCKMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_BAROMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_TRAILMON_BATTLE_ARMAMENT]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_FIRAMON]    = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_FLADRAMON]     = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  2 },
    [SPECIES_FLAWIZAMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_EXERMON]       = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_DORUGAMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_DORULUMON]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_DARKTYRMON_X]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_DARKTYRMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_FLARIZAMON]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_BLKGATOMON]        = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_BLKGATOMON_UVER]      = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 17 },
    [SPECIES_BLGROWLMON]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_DOLPHMON]    = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_BUCCHIEMON_GREEN]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_BULKMON]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_DIGMON]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_DINOHYUMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_DOBERMON]     = { .size = MON_COORDS_SIZE(64, 24), .y_offset = 23 },
    [SPECIES_DOBERMON_X]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_APEMON]       = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_AQUILAMON]      = { .size = MON_COORDS_SIZE(40, 56), .y_offset =  6 },
    [SPECIES_ARCADIAMON_CHAMPION]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_FLYMON]       = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_FRIGIMON]     = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_FROGMON]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_FUGAMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_GANEMON]      = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_GAOGAMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset = 13 },
    [SPECIES_GARGOMON]    = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_GARGOYLMON]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_GARURUMON]   = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_GATOMON_X]      = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 19 },
    [SPECIES_GROUDON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_RAYQUAZA]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_GARURUMON_X]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_GATOMON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_JIRACHI]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_DEOXYS]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_EOSMON_CHAMPION]    = { .size = MON_COORDS_SIZE(32, 56), .y_offset =  7 },
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

