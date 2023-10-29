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
    [SPECIES_TUMBLEMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_UPAMON]       = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_VIXIMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_WANYAMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_XIAOMON]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 19 },
    [SPECIES_YAAMON]   = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_YOKOMON]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_AGUMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_AGUMON_06]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_AGUMON_EXPERT]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_AGUMON_X]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_ANGORAMON]  = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  4 },
    [SPECIES_ARCADIAMON_ROOKIE]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_ARGOMON_ROOKIE]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_ARMADILMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_ARURAUMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_BAKOMON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_BEARMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_BETAMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_BETAMON_X]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_BIYOMON]      = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 15 },
    [SPECIES_BLKAGUMON]      = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_BLKAGUMON_X]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_BLKGABUMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_BLKGUILMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_BOKOMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_BULUCOMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_BURGERMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SAMUAGUMON]        = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_CANDLEMON]  = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  2 },
    [SPECIES_CHIKURIMON]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_TYUTYUMON]      = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_CHUUMON]      = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_HAZYAGUMON]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_COMMDRAMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  8 },
    [SPECIES_CORONAMON]      = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_CRABMON]       = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_CRABMON_X]       = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  9 },
    [SPECIES_CUTEMON]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_DAMEMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_DEMIDEVMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_DOKUNEMON]     = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    [SPECIES_DONDOKOMON]     = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 15 },
    [SPECIES_DORUMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_DOTAGUMON]      = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_DOTFALCMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_DRACMON]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_DRACOMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_DRACOMON_X]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_EBIBURGMON]      = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_EKAKIMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_ELECMON]     = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 14 },
    [SPECIES_ELECMON_VIOLET]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_ESPIMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_AGUMON_FAKE_EXPERT]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_FALCOMON]         = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    [SPECIES_FALCOMON_06]   = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_FANBEEMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_FLAMEMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_FLORAMON]   = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_GABUMON]     = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_GABUMON_X]  = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_GAMMAMON]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_GAOMON]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_GAOSSMON]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_GAZIMON]     = { .size = MON_COORDS_SIZE(32, 56), .y_offset =  4 },
    [SPECIES_GAZIMON_X]      = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_GHOSTMON]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    [SPECIES_GIZAMON]     = { .size = MON_COORDS_SIZE(40, 64), .y_offset =  3 },
    [SPECIES_GIZUMON]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 12 },
    [SPECIES_GOBLIMON]      = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  4 },
    [SPECIES_GOMAMON]    = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 19 },
    [SPECIES_GOMAMON_X]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_GOTSUMON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_GOTSUMON_X]    = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 16 },
    [SPECIES_GUILMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset = 11 },
    [SPECIES_GUILMON_X]       = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 12 },
    [SPECIES_GUMDRAMON]      = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 20 },
    [SPECIES_HACKMON]   = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 18 },
    [SPECIES_HAGURUMON]      = { .size = MON_COORDS_SIZE(24, 32), .y_offset = 20 },
    [SPECIES_HAGURUMON_X]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset =  9 },
    [SPECIES_HAWKMON]        = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 20 },
    [SPECIES_HERISSMON]        = { .size = MON_COORDS_SIZE(32, 56), .y_offset =  7 },
    [SPECIES_HYOKOMON]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 16 },
    [SPECIES_IGNITEMON]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_IMPMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_IMPMON_X]   = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 14 },
    [SPECIES_JAZAMON]      = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_JELLYMON]   = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_JUNKMON]   = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_KAMEMON]    = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_KERAMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_KERAMON_X]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_KODOKGUMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_KOKABUIMON]       = { .size = MON_COORDS_SIZE(40, 64), .y_offset =  3 },
    [SPECIES_KOKUWAMON]     = { .size = MON_COORDS_SIZE(32, 32), .y_offset = 16 },
    [SPECIES_KOKUWAMON_X]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_KOTEMON]       = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_KUDAMON]      = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_KUDAMON_06]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_KUNEMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_LABRAMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  8 },
    [SPECIES_LALAMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_LIOLLMON]    = { .size = MON_COORDS_SIZE(40, 64), .y_offset =  1 },
    [SPECIES_LOOGAMON]  = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_LOPMON]       = { .size = MON_COORDS_SIZE(24, 40), .y_offset = 15 },
    [SPECIES_LOPMON_X]   = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_LUCEMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_LUDOMON]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_LUNAMON]  = { .size = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_LUXMON]   = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 17 },
    [SPECIES_METABEE]      = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_KODEKACMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_MODBETAMON]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    [SPECIES_MONITAMON]    = { .size = MON_COORDS_SIZE(40, 56), .y_offset =  6 },
    [SPECIES_MONMON]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_MONODRAMON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_MORPHOMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_MUCHOMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_MUSHROOMON]     = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_NEEMON]   = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_OTAMAMON]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  1 },
    [SPECIES_OTAMAMON_RED]      = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_OTAMAMON_X]    = { .size = MON_COORDS_SIZE(40, 56), .y_offset = 13 },
    [SPECIES_PALMON]      = { .size = MON_COORDS_SIZE(32, 24), .y_offset = 20 },
    [SPECIES_PALMON_X]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_PATAMON]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_PAWNMON]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_PAWNMON_WHITE]   = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_PENGUINMON]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_PETITMAMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_PHASCOMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_PILLOMON]    = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_POMUMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_PSYCHEMON]     = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  4 },
    [SPECIES_PULSEMON]      = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_RENAMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_RENAMON_X]    = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_ROKUSHO]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_RYUDAMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_SALAMON]     = { .size = MON_COORDS_SIZE(32, 48), .y_offset =  9 },
    [SPECIES_SALAMON_X]   = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_SANGOMON]    = { .size = MON_COORDS_SIZE(24, 40), .y_offset = 15 },
    [SPECIES_SANTAAGUMON]      = { .size = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_BLKTOYAMON]       = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_SHAMANMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_SHOUTMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_YUKIAGUMON]      = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_YUKIAGUMON_06]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_ICEGOBIMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SOLARMON]    = { .size = MON_COORDS_SIZE(32, 48), .y_offset =  9 },
    [SPECIES_SOUNBRDMON]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  9 },
    [SPECIES_SPADAMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SPARROWMON]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_STARMON_2010]       = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_STRABIMON]      = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
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
    [SPECIES_SUNARZAMON]     = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_SWIMMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_SYAKOMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SYAKOMON_X]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_TAPIRMON]   = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_TENTOMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_TERRIERMON]      = { .size = MON_COORDS_SIZE(40, 48), .y_offset = 12 },
    [SPECIES_TERRIERMON_ASSISTANT]   = { .size = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_TERRIERMON_X]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_TINKERMON]   = { .size = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_TINPET]   = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_TOYAGUMON]   = { .size = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_TSUKAIMON]     = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_VEEMON]     = { .size = MON_COORDS_SIZE(32, 40), .y_offset = 14 },
    [SPECIES_VEMMON]     = { .size = MON_COORDS_SIZE(56, 40), .y_offset = 17 },
    [SPECIES_VORVOMON]   = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_WORMMON]     = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 16 },
    [SPECIES_ZENIMON]      = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 15 },
    [SPECIES_ZUBAMON]       = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_AEGIOMON]      = { .size = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_AGUNIMON]    = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_AIRDRAMON]      = { .size = MON_COORDS_SIZE(32, 48), .y_offset = 16 },
    [SPECIES_AKATORIMON]     = { .size = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_ALLOMON]     = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_NINCADA]     = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 18 },
    [SPECIES_NINJASK]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_SHEDINJA]    = { .size = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_ALLOMON_X]     = { .size = MON_COORDS_SIZE(48, 32), .y_offset = 16 },
    [SPECIES_ANGELAMON]     = { .size = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_ARESDRAMON]   = { .size = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_ATAMADEMON]     = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_SPINDA]      = { .size = MON_COORDS_SIZE(48, 64), .y_offset =  8 },
    [SPECIES_ANGEMON]     = { .size = MON_COORDS_SIZE(64, 32), .y_offset = 24 },
    [SPECIES_ANKYLOMON]    = { .size = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_ARCHELOMON]     = { .size = MON_COORDS_SIZE(48, 40), .y_offset = 15 },
    [SPECIES_ARGOMON_CHAMPION]  = { .size = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
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
    [SPECIES_AURUMON]     = { .size = MON_COORDS_SIZE(56, 32), .y_offset = 18 },
    [SPECIES_AXEMON]    = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_BABOONMON]     = { .size = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
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
    [SPECIES_APEMON]       = { .size = MON_COORDS_SIZE(24, 40), .y_offset = 15 },
    [SPECIES_AQUILAMON]      = { .size = MON_COORDS_SIZE(32, 56), .y_offset =  6 },
    [SPECIES_ARCADIAMON_CHAMPION]   = { .size = MON_COORDS_SIZE(56, 64), .y_offset =  1 },
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
