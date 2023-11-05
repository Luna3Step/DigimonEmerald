const struct Evolution gEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_ARGOMON_F]  = {{EVO_ATTACK, 30, SPECIES_BOMBMON}},
    [SPECIES_BOMBMON]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_BOMMON},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_ARGOMON_F}},
    [SPECIES_BOTAMON] = {{EVO_LEVEL, 16, SPECIES_CHIBICKMON}},
    [SPECIES_CHIBICKMON] = {{EVO_LEVEL, 36, SPECIES_CHIBOMON}},
    [SPECIES_CONOMON]   = {{EVO_LEVEL, 16, SPECIES_COTSUCOMON}},
    [SPECIES_COTSUCOMON]  = {{EVO_LEVEL, 36, SPECIES_CURIMON}},
    [SPECIES_DATIRIMON]   = {{EVO_LEVEL,  7, SPECIES_DODOMON}},
    [SPECIES_DODOMON]    = {{EVO_LEVEL, 10, SPECIES_DOKIMON}},
    [SPECIES_FUFUMON]     = {{EVO_LEVEL,  7, SPECIES_JYARIMON}},
    [SPECIES_JYARIMON]     = {{EVO_LEVEL, 10, SPECIES_KEEMON}},
    [SPECIES_KETOMON]     = {{EVO_LEVEL, 18, SPECIES_KURAMON}},
    [SPECIES_KURAMON]  = {{EVO_LEVEL, 36, SPECIES_LEAFMON}},
    [SPECIES_CHOROMON]    = {{EVO_LEVEL, 20, SPECIES_MOKUMON}},
    [SPECIES_NYOKIMON]    = {{EVO_LEVEL, 20, SPECIES_PABUMON}},
    [SPECIES_PAFUMON]      = {{EVO_LEVEL, 22, SPECIES_PAOMON}},
    [SPECIES_PETITMON]    = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_PICHIMON}},
    [SPECIES_POPOMON]  = {{EVO_LEVEL, 22, SPECIES_POYOMON}},
    [SPECIES_PUNIMON]  = {{EVO_LEVEL, 16, SPECIES_PUPUMON}},
    [SPECIES_PUPUMON]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_PURURUMON}},
    [SPECIES_PUSUMON]  = {{EVO_LEVEL, 16, SPECIES_PUTTIMON}},
    [SPECIES_PUTTIMON]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_PUWAMON}},
    [SPECIES_PUYOMON]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_PYONMON}},
    [SPECIES_RELEMON]     = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_SAKUMON}},
    [SPECIES_SANDMON] = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_TSUBUMON}},
    [SPECIES_ICEBOTAMON]      = {{EVO_LEVEL, 22, SPECIES_YURAMON}},
    [SPECIES_YURAMON]     = {{EVO_FRIENDSHIP, 0, SPECIES_GOTSUMON}},
    [SPECIES_ZERIMON]     = {{EVO_LEVEL, 21, SPECIES_ZURUMON}},
    [SPECIES_ZURUMON]      = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_ARCADIAMON_IT},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_IMPMON_X}},
    [SPECIES_ARGOMON_IT]      = {{EVO_LEVEL, 24, SPECIES_BABYDMON}},
    [SPECIES_BIBIMON]    = {{EVO_LEVEL, 31, SPECIES_BOSAMON}},
    [SPECIES_BUDMON]    = {{EVO_LEVEL, 26, SPECIES_BUKAMON}},
    [SPECIES_CALUMON]     = {{EVO_LEVEL, 28, SPECIES_CHAPMON}},
    [SPECIES_CHICCHIMON]    = {{EVO_LEVEL, 33, SPECIES_DEMMERAMON}},
    [SPECIES_DEMIVEEMON]     = {{EVO_LEVEL, 28, SPECIES_DORIMON}},
    [SPECIES_FRIMON]  = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_GIGIMON}},
    [SPECIES_GUMMYMON]    = {{EVO_LEVEL, 25, SPECIES_GURIMON}},
    [SPECIES_GURIMON]  = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_HIYARIMON},
                            {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_KAMEMON}},
    [SPECIES_HOPMON]       = {{EVO_LEVEL, 16, SPECIES_KAKKINMON}},
    [SPECIES_KAKKINMON]    = {{EVO_TRADE, 0, SPECIES_KAPURIMON}},
    [SPECIES_KOKOMON]     = {{EVO_LEVEL, 28, SPECIES_KOROMON}},
    [SPECIES_KOROMON]    = {{EVO_TRADE, 0, SPECIES_KOZENIMON}},
    [SPECIES_KYAROMON] = {{EVO_LEVEL, 21, SPECIES_KYOKYOMON}},
    [SPECIES_KYOKYOMON] = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_KYUPIMON}},
    [SPECIES_MINOMON]  = {{EVO_LEVEL, 30, SPECIES_MISSIMON}},
    [SPECIES_MONIMON]    = {{EVO_LEVEL, 25, SPECIES_MOONMON}},
    [SPECIES_MOONMON]   = {{EVO_TRADE, 0, SPECIES_MOTIMON}},
    [SPECIES_NEGAMON]     = {{EVO_LEVEL, 40, SPECIES_NYAROMON}},
    [SPECIES_PAGUMON]   = {{EVO_LEVEL, 37, SPECIES_PICKMON_SILVER},
                            {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_LIOLLMON}},
    [SPECIES_PICKMON_WHITE]  = {{EVO_LEVEL, 30, SPECIES_PICKMON_RED}},
    [SPECIES_POROMON]      = {{EVO_LEVEL, 31, SPECIES_PUROROMON}},
    [SPECIES_PUSURIMON]       = {{EVO_LEVEL, 34, SPECIES_PUYOYOMON}},
    [SPECIES_SAKUTTOMON]     = {{EVO_LEVEL, 38, SPECIES_SUNMON}},
    [SPECIES_TANEMON]   = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_TOKOMON}},
    [SPECIES_TOKOMON_X]     = {{EVO_LEVEL, 25, SPECIES_TORBALLMON}},
    [SPECIES_TORBALLMON]    = {{EVO_TRADE, 0, SPECIES_TSUMEMON}},
    [SPECIES_TSUNOMON]       = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_KODEKACMON}},
    [SPECIES_TUMBLEMON]    = {{EVO_LEVEL, 26, SPECIES_UPAMON}},
    [SPECIES_VIXIMON]     = {{EVO_LEVEL, 28, SPECIES_WANYAMON}},
    [SPECIES_XIAOMON]    = {{EVO_LEVEL, 30, SPECIES_YAAMON}},
    [SPECIES_YOKOMON]  = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_AGUMON}},
    [SPECIES_AGUMON_06]     = {{EVO_LEVEL, 28, SPECIES_AGUMON_EXPERT}},
    [SPECIES_ARGOMON_ROOKIE]    = {{EVO_LEVEL, 35, SPECIES_ARMADILMON}},
    [SPECIES_ARURAUMON]    = {{EVO_LEVEL, 42, SPECIES_BAKOMON}},
    [SPECIES_BEARMON]    = {{EVO_FRIENDSHIP, 0, SPECIES_SHOUTMON}},
    [SPECIES_BIYOMON]     = {{EVO_LEVEL, 32, SPECIES_BLKAGUMON}},
    [SPECIES_BLKAGUMON]     = {{EVO_TRADE_ITEM, ITEM_DRAGON_SCALE, SPECIES_PSYCHEMON}},
    [SPECIES_BLKAGUMON_X]    = {{EVO_LEVEL, 33, SPECIES_BLKGABUMON}},
    [SPECIES_BLKGUILMON]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_BOKOMON}},
    [SPECIES_BURGERMON]    = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_MONODRAMON}},
    [SPECIES_HAZYAGUMON]   = {{EVO_LEVEL, 20, SPECIES_COMMDRAMON}},
    [SPECIES_CRABMON_X]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_DAMEMON},
                            {EVO_ITEM, ITEM_WATER_STONE, SPECIES_CUTEMON},
                            {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_DEMIDEVMON},
                            {EVO_FRIENDSHIP_DAY, 0, SPECIES_KUNEMON},
                            {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_LABRAMON}},
    [SPECIES_DOKUNEMON]    = {{EVO_TRADE_ITEM, ITEM_UP_GRADE, SPECIES_RENAMON_X}},
    [SPECIES_DONDOKOMON]    = {{EVO_LEVEL, 40, SPECIES_DORUMON}},
    [SPECIES_DOTAGUMON]     = {{EVO_LEVEL, 40, SPECIES_DOTFALCMON}},
    [SPECIES_ELECMON]    = {{EVO_LEVEL, 30, SPECIES_ELECMON_VIOLET}},
    [SPECIES_ELECMON_VIOLET]  = {{EVO_LEVEL, 55, SPECIES_ESPIMON}},
    [SPECIES_FALCOMON_06]  = {{EVO_LEVEL, 16, SPECIES_FANBEEMON}},
    [SPECIES_FANBEEMON]    = {{EVO_LEVEL, 32, SPECIES_FLAMEMON}},
    [SPECIES_FLORAMON]  = {{EVO_LEVEL, 14, SPECIES_GABUMON}},
    [SPECIES_GABUMON]    = {{EVO_LEVEL, 36, SPECIES_GABUMON_X}},
    [SPECIES_GAMMAMON]   = {{EVO_LEVEL, 18, SPECIES_GAOMON}},
    [SPECIES_GAOMON]   = {{EVO_LEVEL, 30, SPECIES_GAOSSMON}},
    [SPECIES_GAZIMON]    = {{EVO_LEVEL, 15, SPECIES_GAZIMON_X}},
    [SPECIES_GHOSTMON]   = {{EVO_LEVEL, 20, SPECIES_GIZAMON}},
    [SPECIES_GIZUMON]     = {{EVO_LEVEL, 18, SPECIES_GOBLIMON}},
    [SPECIES_GOMAMON]   = {{EVO_LEVEL, 22, SPECIES_GOMAMON_X}},
    [SPECIES_GOTSUMON_X]   = {{EVO_LEVEL, 27, SPECIES_GUILMON}},
    [SPECIES_GUILMON_X]      = {{EVO_FRIENDSHIP, 0, SPECIES_PETITMON}},
    [SPECIES_GUMDRAMON]     = {{EVO_FRIENDSHIP, 0, SPECIES_PUYOMON}},
    [SPECIES_HACKMON]  = {{EVO_FRIENDSHIP, 0, SPECIES_SANDMON}},
    [SPECIES_HAGURUMON]     = {{EVO_FRIENDSHIP, 0, SPECIES_HAGURUMON_X}},
    [SPECIES_HAWKMON]       = {{EVO_LEVEL, 25, SPECIES_HERISSMON}},
    [SPECIES_HYOKOMON]     = {{EVO_LEVEL, 15, SPECIES_IGNITEMON}},
    [SPECIES_IGNITEMON]    = {{EVO_LEVEL, 30, SPECIES_IMPMON}},
    [SPECIES_JAZAMON]     = {{EVO_LEVEL, 18, SPECIES_JELLYMON}},
    [SPECIES_KERAMON]     = {{EVO_LEVEL, 18, SPECIES_KERAMON_X}},
    [SPECIES_KERAMON_X]   = {{EVO_LEVEL, 27, SPECIES_KODOKGUMON}},
    [SPECIES_KOKUWAMON]    = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_KOKUWAMON_X}},
    [SPECIES_KUDAMON]     = {{EVO_LEVEL, 20, SPECIES_KUDAMON_06}},
    [SPECIES_LUDOMON]     = {{EVO_LEVEL, 31, SPECIES_LUNAMON}},
    [SPECIES_MODBETAMON]   = {{EVO_LEVEL, 23, SPECIES_MONITAMON}},
    [SPECIES_NEEMON]  = {{EVO_LEVEL, 30, SPECIES_OTAMAMON}},
    [SPECIES_OTAMAMON_RED]     = {{EVO_LEVEL, 38, SPECIES_OTAMAMON_X}},
    [SPECIES_PALMON]     = {{EVO_LEVEL, 33, SPECIES_PALMON_X}},
    [SPECIES_PAWNMON]   = {{EVO_LEVEL, 25, SPECIES_PAWNMON_WHITE}},
    [SPECIES_PILLOMON]   = {{EVO_LEVEL, 24, SPECIES_POMUMON}},
    [SPECIES_PULSEMON]     = {{EVO_LEVEL, 25, SPECIES_RENAMON}},
    [SPECIES_SALAMON]    = {{EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_ANGORAMON},
                            {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_AGUMON_X},
                            {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_SALAMON_X}},
    [SPECIES_SANGOMON]   = {{EVO_LEVEL, 30, SPECIES_SAMUAGUMON}},
    [SPECIES_SANTAAGUMON]     = {{EVO_LEVEL, 30, SPECIES_CANDLEMON}},
    [SPECIES_BLKTOYAMON]      = {{EVO_LEVEL, 30, SPECIES_CHIKURIMON}},
    [SPECIES_SOLARMON]   = {{EVO_LEVEL, 30, SPECIES_SOUNBRDMON}},
    [SPECIES_SOUNBRDMON]    = {{EVO_LEVEL, 55, SPECIES_SPADAMON}},
    [SPECIES_SUNARZAMON]    = {{EVO_LEVEL, 16, SPECIES_SWIMMON}},
    [SPECIES_SWIMMON]    = {{EVO_LEVEL, 36, SPECIES_SYAKOMON}},
    [SPECIES_SYAKOMON_X]    = {{EVO_LEVEL, 16, SPECIES_TAPIRMON}},
    [SPECIES_TAPIRMON]  = {{EVO_LEVEL, 36, SPECIES_TENTOMON}},
    [SPECIES_TERRIERMON]     = {{EVO_LEVEL, 16, SPECIES_TERRIERMON_ASSISTANT}},
    [SPECIES_TERRIERMON_ASSISTANT]  = {{EVO_LEVEL, 36, SPECIES_TERRIERMON_X}},
    [SPECIES_TINKERMON]  = {{EVO_LEVEL, 18, SPECIES_TINPET}},
    [SPECIES_TOYAGUMON]  = {{EVO_LEVEL, 20, SPECIES_TSUKAIMON}},
    [SPECIES_VEEMON]    = {{EVO_LEVEL_SILCOON, 7, SPECIES_VEMMON},
                            {EVO_LEVEL_CASCOON, 7, SPECIES_WORMMON}},
    [SPECIES_VEMMON]    = {{EVO_LEVEL, 10, SPECIES_VORVOMON}},
    [SPECIES_WORMMON]    = {{EVO_LEVEL, 10, SPECIES_ZENIMON}},
    [SPECIES_ZUBAMON]      = {{EVO_LEVEL, 14, SPECIES_AEGIOMON}},
    [SPECIES_AEGIOMON]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_AGUNIMON}},
    [SPECIES_AIRDRAMON]     = {{EVO_LEVEL, 14, SPECIES_AKATORIMON}},
    [SPECIES_AKATORIMON]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_ALLOMON}},
    [SPECIES_BAKEMON]    = {{EVO_LEVEL_NINJASK, 20, SPECIES_BALISTAMON},
                            {EVO_LEVEL_SHEDINJA, 20, SPECIES_BALUCHIMON}},
    [SPECIES_ALLOMON_X]    = {{EVO_LEVEL, 22, SPECIES_ANGELAMON}},
    [SPECIES_ARESDRAMON]  = {{EVO_LEVEL, 23, SPECIES_ATAMADEMON}},
    [SPECIES_ANGEMON]    = {{EVO_LEVEL, 25, SPECIES_ANKYLOMON}},
    [SPECIES_ARCHELOMON]    = {{EVO_LEVEL, 22, SPECIES_ARGOMON_CHAMPION}},
    [SPECIES_CHAMBLEMON]    = {{EVO_LEVEL, 40, SPECIES_CHAMELEMON}},
    [SPECIES_BIRDRAMON]     = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_BLGAOGAMON}},
    [SPECIES_DEXDORUMON]     = {{EVO_LEVEL, 36, SPECIES_DIATRYMON}},
    [SPECIES_DEPTHMON]   = {{EVO_LEVEL, 30, SPECIES_DEPUTYMON}},
    [SPECIES_DEVIDRAMON]   = {{EVO_LEVEL, 30, SPECIES_DEVIMON}},
    [SPECIES_FEEBAS]     = {{EVO_BEAUTY, 170, SPECIES_MILOTIC}},
    [SPECIES_CHOUFLYMON]   = {{EVO_LEVEL, 30, SPECIES_CENTARUMON}},
    [SPECIES_COREDRAMON_GREEN]   = {{EVO_LEVEL, 35, SPECIES_CYCLONEMON}},
    [SPECIES_CYCLONEMON]    = {{EVO_LEVEL, 45, SPECIES_DAMEMON}},
    [SPECIES_BETGAMAMON]   = {{EVO_LEVEL, 24, SPECIES_BIOQUETMON}},
    [SPECIES_BOARMON]  = {{EVO_LEVEL, 26, SPECIES_BOMNANIMON}},
    [SPECIES_CHRYSALMON]      = {{EVO_LEVEL, 33, SPECIES_CITRAMON}},
    [SPECIES_SPHEAL]     = {{EVO_LEVEL, 32, SPECIES_SEALEO}},
    [SPECIES_SEALEO]     = {{EVO_LEVEL, 44, SPECIES_WALREIN}},
    [SPECIES_DARCMON]     = {{EVO_LEVEL, 32, SPECIES_TRAILMON_DARK}},
    [SPECIES_SNORUNT]    = {{EVO_LEVEL, 42, SPECIES_GLALIE}},
    [SPECIES_BIOSTEGMON]    = {{EVO_FRIENDSHIP, 0, SPECIES_JAZAMON}},
    [SPECIES_CLOCKMON_FUSION]     = {{EVO_LEVEL, 32, SPECIES_COELAMON}},
    [SPECIES_SAWKUWAMON]   = {{EVO_LEVEL, 37, SPECIES_BLIMPMON}},
    [SPECIES_DARLIZAMON]     = {{EVO_LEVEL, 35, SPECIES_DARMAILMON}},
    [SPECIES_WYNAUT]     = {{EVO_LEVEL, 15, SPECIES_LOPMON_X}},
    [SPECIES_DUSKULL]    = {{EVO_LEVEL, 37, SPECIES_DUSCLOPS}},
    [SPECIES_AURUMON]    = {{EVO_LEVEL, 18, SPECIES_AXEMON}},
    [SPECIES_AXEMON]   = {{EVO_LEVEL, 36, SPECIES_BABOONMON}},
    [SPECIES_BURAIMON]     = {{EVO_LEVEL, 26, SPECIES_BURGERMON_CHAMPION}},
    [SPECIES_BAOHUCKMON]    = {{EVO_LEVEL, 20, SPECIES_BAROMON}},
    [SPECIES_BAROMON]    = {{EVO_LEVEL, 40, SPECIES_TRAILMON_BATTLE_ARMAMENT}},
    [SPECIES_CLAMPERL]   = {{EVO_TRADE_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                            {EVO_TRADE_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS}},
    [SPECIES_SHUPPET]    = {{EVO_LEVEL, 37, SPECIES_BANETTE}},
    [SPECIES_BLKGATOMON]       = {{EVO_LEVEL, 32, SPECIES_BLKGATOMON_UVER}},
    [SPECIES_BLKGATOMON_UVER]     = {{EVO_LEVEL, 42, SPECIES_BLGROWLMON}},
    [SPECIES_DIGMON]     = {{EVO_LEVEL, 40, SPECIES_DINOHYUMON}},
    [SPECIES_DOBERMON]    = {{EVO_LEVEL, 40, SPECIES_ARMALDO}},
    [SPECIES_APEMON]      = {{EVO_LEVEL, 20, SPECIES_AQUILAMON}},
    [SPECIES_AQUILAMON]     = {{EVO_LEVEL, 30, SPECIES_ARCADIAMON_CHAMPION}},
    [SPECIES_BAGON]      = {{EVO_LEVEL, 30, SPECIES_SHELGON}},
    [SPECIES_SHELGON]    = {{EVO_LEVEL, 50, SPECIES_SALAMENCE}},
    [SPECIES_BELDUM]     = {{EVO_LEVEL, 20, SPECIES_METANG}},
    [SPECIES_METANG]     = {{EVO_LEVEL, 45, SPECIES_METAGROSS}},
    [SPECIES_AGUMON]     = {{EVO_LEVEL, 2, SPECIES_AGUMON_06},
                            {EVO_LEVEL, 2, SPECIES_AGUMON_EXPERT}},
};

const struct Evolution gDeEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_AGUMON]  = {{EVO_DEVOLVE, 0, SPECIES_KOROMON},
                         {EVO_DEVOLVE, 0, SPECIES_GIGIMON},
                         {EVO_DEVOLVE, 0, SPECIES_WANYAMON}},
};