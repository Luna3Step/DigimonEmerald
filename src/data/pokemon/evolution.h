const struct Evolution gEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_ARGOMON_F]  = {{EVO_LEVEL, 3, SPECIES_ARGOMON_IT}},
    [SPECIES_BOMBMON]    = {{EVO_LEVEL, 3, SPECIES_MISSIMON}},
    [SPECIES_BOMMON]    = {{EVO_LEVEL, 3, SPECIES_MISSIMON}},
    [SPECIES_BOTAMON]      = {{EVO_HEALTH, 16, SPECIES_BUDMON},
                            {EVO_ATTACK, 6, SPECIES_WANYAMON},
                            {EVO_SPATTACK, 6, SPECIES_PAGUMON},
                            {EVO_SPEED, 7, SPECIES_PINAMON},
                            {EVO_LEVEL, 5, SPECIES_KOROMON},},
    [SPECIES_CHIBICKMON] = {{EVO_SPATTACK, 6, SPECIES_PICKMON_RED},
                           {EVO_DEFENSE, 5, SPECIES_PICKMON_SILVER},
                           {EVO_LEVEL, 6, SPECIES_PICKMON_WHITE}},
    [SPECIES_CHIBOMON]   = {{EVO_LEVEL, 4, SPECIES_DEMIVEEMON}}, 
    [SPECIES_CONOMON]   = {{EVO_LEVEL, 3, SPECIES_KOKOMON}},
    [SPECIES_COTSUCOMON]  = {{EVO_LEVEL, 5, SPECIES_KAKKINMON}},
    [SPECIES_CURIMON]  = {{EVO_LEVEL, 5, SPECIES_GURIMON}},
    [SPECIES_DATIRIMON]   = {{EVO_HEALTH, 18, SPECIES_YOKOMON},
                            {EVO_ATTACK, 6, SPECIES_NEGAMON},
                            {EVO_SPDEFENSE, 7, SPECIES_MINOMON},
                            {EVO_LEVEL,  6, SPECIES_BUDMON}},
    [SPECIES_DODOMON]    = {{EVO_SPEED, 7, SPECIES_WANYAMON},
                            {EVO_LEVEL, 5, SPECIES_DORIMON}},
    [SPECIES_DOKIMON]     = {{EVO_LEVEL,  4, SPECIES_BIBIMON}},
    [SPECIES_FUFUMON]     = {{EVO_LEVEL,  5, SPECIES_KYOKYOMON}},
    [SPECIES_JYARIMON]     = {{EVO_LEVEL, 3, SPECIES_GIGIMON}},
    [SPECIES_KEEMON]     = {{EVO_LEVEL, 3, SPECIES_YAAMON}},
    [SPECIES_KETOMON]     = {{EVO_ATTACK, 7, SPECIES_CHAPMON},
                            {EVO_LEVEL, 5, SPECIES_HOPMON}},
    [SPECIES_KURAMON]  = {{EVO_SPEED, 8, SPECIES_ARCADIAMON_IT},
                            {EVO_SPATTACK, 7, SPECIES_PAGUMON},
                            {EVO_LEVEL, 6, SPECIES_TSUMEMON}},
    [SPECIES_LEAFMON]      = {{EVO_LEVEL, 5, SPECIES_MINOMON}},
    [SPECIES_CHOROMON]    = {{EVO_SPEED, 8, SPECIES_KOZENIMON},
                            {EVO_SPATTACK, 7, SPECIES_PAGUMON},
                            {EVO_LEVEL, 4, SPECIES_KAPURIMON}},              
    [SPECIES_MOKUMON]    = {{EVO_HEALTH, 17, SPECIES_YAAMON},
                            {EVO_SPEED, 7, SPECIES_KOROMON},
                            {EVO_DEFENSE, 7, SPECIES_KAPURIMON},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNMON},
                            {EVO_LEVEL, 6, SPECIES_DEMMERAMON}}, 
    [SPECIES_NYOKIMON]    = {{EVO_HEALTH, 18, SPECIES_MONIMON},
                            {EVO_DEFENSE, 7, SPECIES_BUDMON},
                            {EVO_SPEED, 7, SPECIES_TANEMON},
                            {EVO_SPATTACK, 7, SPECIES_TORBALLMON},
                            {EVO_LEVEL, 7, SPECIES_YOKOMON}},
    [SPECIES_PABUMON]   = {{EVO_HEALTH, 16, SPECIES_YOKOMON},
                            {EVO_SPEED, 7, SPECIES_NYAROMON},
                            {EVO_SPATTACK, 6, SPECIES_TANEMON},
                            {EVO_LEVEL,  6, SPECIES_MOTIMON}},
    [SPECIES_PAFUMON]      = {{EVO_LEVEL, 3, SPECIES_KYAROMON}},
    [SPECIES_PAOMON]      = {{EVO_LEVEL, 5, SPECIES_XIAOMON}},
    [SPECIES_PETITMON]    = {{EVO_LEVEL, 6, SPECIES_BABYDMON}},
    [SPECIES_PICHIMON]    = {{EVO_ATTACK, 7, SPECIES_TSUNOMON},
                            {EVO_HEALTH, 16, SPECIES_TOKOMON},
                            {EVO_SPEED, 7, SPECIES_NYAROMON},
                            {EVO_LEVEL, 6, SPECIES_BUKAMON}},
    [SPECIES_POPOMON]  = {{EVO_HEALTH, 16, SPECIES_WANYAMON},
                         {EVO_LEVEL, 5, SPECIES_FRIMON}},
    [SPECIES_POYOMON]  = {{EVO_LEVEL, 7, SPECIES_TOKOMON},
                         {EVO_SPATTACK, 7, SPECIES_MOTIMON},
                         {EVO_HEALTH, 18, SPECIES_BUKAMON},
                         {EVO_SPEED, 7, SPECIES_NYAROMON},
                         {EVO_SPDEFENSE, 7, SPECIES_YOKOMON}},
    [SPECIES_PUNIMON]  = {{EVO_DEFENSE, 7, SPECIES_BUKAMON},
                            {EVO_SPATTACK, 7, SPECIES_DEMMERAMON},
                        {EVO_SPEED, 7, SPECIES_NYAROMON},
                            {EVO_LEVEL, 6, SPECIES_TSUNOMON}},
    [SPECIES_PUPUMON]   = {{EVO_LEVEL, 3, SPECIES_PUROROMON}},
    [SPECIES_PURURUMON]  = {{EVO_SPEED, 6, SPECIES_NYAROMON},
                         {EVO_LEVEL, 5, SPECIES_POROMON}},
    [SPECIES_PUSUMON]  = {{EVO_LEVEL, 6, SPECIES_PUSURIMON}},
    [SPECIES_PUTTIMON]   = {{EVO_SPATTACK, 7, SPECIES_CALUMON},
                        {EVO_LEVEL, 5, SPECIES_KYUPIMON}},
    [SPECIES_PUWAMON]  = {{EVO_SPEED, 7, SPECIES_KYAROMON},
                         {EVO_LEVEL, 5, SPECIES_PINAMON}},
    [SPECIES_PUYOMON]   = {{EVO_LEVEL, 5, SPECIES_PUYOYOMON}},
    [SPECIES_PYONMON]   = {{EVO_LEVEL, 4, SPECIES_BOSAMON}},
    [SPECIES_RELEMON]     = {{EVO_LEVEL, 4, SPECIES_VIXIMON}},
    [SPECIES_SAKUMON]   = {{EVO_LEVEL, 5, SPECIES_SAKUTTOMON}},
    [SPECIES_SANDMON] = {{EVO_LEVEL, 6, SPECIES_TUMBLEMON}},
    [SPECIES_TSUBUMON]  = {{EVO_HEALTH, 15, SPECIES_CHICCHIMON},
                         {EVO_SPEED, 7, SPECIES_TOKOMON},
                         {EVO_LEVEL, 5, SPECIES_UPAMON}},
    [SPECIES_ICEBOTAMON]      = {{EVO_ATTACK, 7, SPECIES_TSUNOMON},
                            {EVO_SPEED, 7, SPECIES_NYAROMON},
                                {EVO_ITEM, ITEM_MOON_STONE, SPECIES_MOONMON},
                            {EVO_LEVEL, 7, SPECIES_HIYARIMON}},
    [SPECIES_YURAMON]     = {{EVO_SPATTACK, 7, SPECIES_DEMMERAMON},
                            {EVO_HEALTH, 18, SPECIES_KOROMON},
                            {EVO_SPDEFENSE, 7, SPECIES_TANEMON},
                            {EVO_LEVEL, 7, SPECIES_BUDMON}},
    [SPECIES_ZERIMON]     = {{EVO_LEVEL, 4, SPECIES_GUMMYMON}},
    [SPECIES_ZURUMON]      = {{EVO_SPATTACK, 7, SPECIES_KAPURIMON},
                            {EVO_SPATTACK, 7, SPECIES_MOTIMON},
                            {EVO_HEALTH, 17, SPECIES_KOROMON},
                            {EVO_LEVEL, 6, SPECIES_PAGUMON}},
    [SPECIES_ARCADIAMON_IT]      = {{EVO_LEVEL, 12, SPECIES_ARCADIAMON_ROOKIE}},
    [SPECIES_ARGOMON_IT]  = {{EVO_SPATTACK, 15, SPECIES_AGUMON},
                         {EVO_SPEED, 11, SPECIES_LABRAMON},
                         {EVO_SPDEFENSE, 10, SPECIES_GHOSTMON},
                         {EVO_HEALTH, 25, SPECIES_WORMMON},
                         {EVO_LEVEL, 11, SPECIES_ARGOMON_ROOKIE}},
    [SPECIES_BABYDMON]  = {{EVO_SPATTACK, 19, SPECIES_AGUMON_EXPERT},
                         {EVO_ATTACK, 15, SPECIES_HACKMON},
                         {EVO_SPEED, 16, SPECIES_GUMDRAMON},
                         {EVO_HEALTH, 33, SPECIES_AGUMON_06},
                         {EVO_LEVEL, 14, SPECIES_DRACOMON}},
    [SPECIES_BIBIMON]    = {{EVO_SPDEFENSE, 14, SPECIES_KUDAMON},
                            {EVO_SPATTACK, 13, SPECIES_SHOUTMON},
                            {EVO_LEVEL, 12, SPECIES_PULSEMON}},
    [SPECIES_BOSAMON]  = {{EVO_SPATTACK, 13, SPECIES_DRACMON},
                         {EVO_LEVEL, 12, SPECIES_ANGORAMON}},
    [SPECIES_BUDMON]    = {{EVO_SPEED, 14, SPECIES_TOYAGUMON},
                         {EVO_SPATTACK, 16, SPECIES_DOKUNEMON},
                         {EVO_ATTACK, 16, SPECIES_PALMON},
                            {EVO_HEALTH, 32, SPECIES_MUSHROOMON},
                         {EVO_LEVEL, 14, SPECIES_LALAMON}},
    [SPECIES_BUKAMON]    = {{EVO_SPATTACK, 15, SPECIES_YUKIAGUMON},
                         {EVO_DEFENSE, 14, SPECIES_CRABMON},
                         {EVO_SPDEFENSE, 14, SPECIES_OTAMAMON},
                            {EVO_SPEED, 15, SPECIES_BETAMON},
                         {EVO_LEVEL, 13, SPECIES_GOMAMON}},
    [SPECIES_CALUMON]     = {{EVO_SPATTACK, 11, SPECIES_SALAMON}},
    [SPECIES_CHAPMON]    = {{EVO_SPDEFENSE, 17, SPECIES_KUDAMON_06},
                         {EVO_ATTACK, 15, SPECIES_ELECMON},
                         {EVO_SPEED, 16, SPECIES_FALCOMON_06},
                            {EVO_SPATTACK, 16, SPECIES_BETAMON},
                         {EVO_LEVEL, 15, SPECIES_KAMEMON}},
    [SPECIES_CHICCHIMON]    = {{EVO_HEALTH, 30, SPECIES_DOTFALCMON},
                         {EVO_SPATTACK, 14, SPECIES_MUCHOMON},
                         {EVO_ATTACK, 14, SPECIES_PENGUINMON},
                                {EVO_SPEED, 16, SPECIES_FALCOMON},
                         {EVO_LEVEL, 13, SPECIES_HYOKOMON}},
    [SPECIES_DEMMERAMON]    = {{EVO_DEFENSE, 16, SPECIES_GOTSUMON},
                         {EVO_SPATTACK, 19, SPECIES_CORONAMON},
                         {EVO_ATTACK, 16, SPECIES_FLAMEMON},
                                {EVO_SPEED, 18, SPECIES_VORVOMON},
                         {EVO_LEVEL, 16, SPECIES_CANDLEMON}},
    [SPECIES_DEMIVEEMON]     = {{EVO_LEVEL, 14, SPECIES_VEEMON}},
    [SPECIES_DORIMON]    = {{EVO_HEALTH, 30, SPECIES_BLKAGUMON},
                         {EVO_SPATTACK, 14, SPECIES_SHAMANMON},
                         {EVO_ATTACK, 15, SPECIES_MONODRAMON},
                                {EVO_DEFENSE, 15, SPECIES_ARMADILMON},
                         {EVO_LEVEL, 13, SPECIES_DORUMON}},
    [SPECIES_FRIMON]  = {{EVO_SPATTACK, 13, SPECIES_KOKABUIMON},
                         {EVO_DEFENSE, 15, SPECIES_BEARMON},
                         {EVO_SPEED, 14, SPECIES_GAZIMON},
                        {EVO_ATTACK, 14, SPECIES_ELECMON_VIOLET},
                         {EVO_LEVEL, 12, SPECIES_LIOLLMON}},
    [SPECIES_GIGIMON]  = {{EVO_HEALTH, 35, SPECIES_SHOUTMON},
                         {EVO_DEFENSE, 16, SPECIES_HAGURUMON},
                         {EVO_ATTACK, 18, SPECIES_GOBLIMON},
                        {EVO_SPATTACK, 17, SPECIES_SOLARMON},
                         {EVO_LEVEL, 16, SPECIES_GUILMON}},
    [SPECIES_GUMMYMON]    = {{EVO_DEFENSE, 14, SPECIES_HAZYAGUMON},
                         {EVO_SPATTACK, 15, SPECIES_TAPIRMON},
                         {EVO_ATTACK, 16, SPECIES_GAOMON},
                            {EVO_SPEED, 17, SPECIES_JAZAMON},
                         {EVO_LEVEL, 14, SPECIES_TERRIERMON}},
    [SPECIES_GURIMON]  = {{EVO_SPATTACK, 13, SPECIES_BOKOMON},
                            {EVO_SPEED, 13, SPECIES_MONMON},
                            {EVO_LEVEL, 12, SPECIES_GAMMAMON}},
    [SPECIES_HIYARIMON]  = {{EVO_DEFENSE, 15, SPECIES_BEARMON},
                            {EVO_ATTACK, 15, SPECIES_BULUCOMON},
                            {EVO_LEVEL, 14, SPECIES_ICEGOBIMON}},
    [SPECIES_HOPMON]       = {{EVO_ATTACK, 16, SPECIES_VEEMON},
                         {EVO_SPDEFENSE, 18, SPECIES_GABUMON},
                         {EVO_SPATTACK, 17, SPECIES_JUNKMON},
                            {EVO_SPEED, 17, SPECIES_JAZAMON},
                         {EVO_LEVEL, 16, SPECIES_MONODRAMON}},
    [SPECIES_KAKKINMON]    = {{EVO_SPATTACK, 14, SPECIES_ESPIMON},
                            {EVO_LEVEL, 13, SPECIES_LUDOMON}},
    [SPECIES_KAPURIMON]       = {{EVO_SPATTACK, 16, SPECIES_PHASCOMON},
                         {EVO_HEALTH, 34, SPECIES_PAWNMON},
                         {EVO_DEFENSE, 19, SPECIES_HAGURUMON},
                            {EVO_ATTACK, 15, SPECIES_KOTEMON},
                         {EVO_LEVEL, 15, SPECIES_KOKUWAMON}},
    [SPECIES_KOKOMON]    = {{EVO_ATTACK, 15, SPECIES_BLKTOYAMON},
                           {EVO_SPDEFENSE, 16, SPECIES_WORMMON},
                           {EVO_DEFENSE, 16, SPECIES_RYUDAMON},
                           {EVO_SPATTACK, 15, SPECIES_DEMIDEVMON},
                           {EVO_LEVEL, 14, SPECIES_LOPMON}},
    [SPECIES_KOROMON]    = {{EVO_SPATTACK, 16, SPECIES_SHOUTMON},
                           {EVO_HEALTH, 36, SPECIES_SAMUAGUMON},
                           {EVO_SPDEFENSE, 16, SPECIES_DOTAGUMON},
                           {EVO_ATTACK, 16, SPECIES_AGUMON_06},
                           {EVO_LEVEL, 16, SPECIES_AGUMON}},
    [SPECIES_KOZENIMON] = {{EVO_LEVEL, 10, SPECIES_ZENIMON}},
    [SPECIES_KYAROMON] = {{EVO_SPDEFENSE, 15, SPECIES_KUDAMON_06},
                         {EVO_SPATTACK, 15, SPECIES_IMPMON},
                         {EVO_ATTACK, 18, SPECIES_ELECMON_VIOLET},
                         {EVO_DEFENSE, 17, SPECIES_KAMEMON},
                         {EVO_LEVEL, 15, SPECIES_KUDAMON}},
    [SPECIES_KYOKYOMON] =  {{EVO_ATTACK, 16, SPECIES_COMMDRAMON},
                           {EVO_LEVEL, 13, SPECIES_RYUDAMON}},
    [SPECIES_KYUPIMON] = {{EVO_SPATTACK, 24, SPECIES_IMPMON},
                         {EVO_ATTACK, 19, SPECIES_TERRIERMON},
                         {EVO_SPDEFENSE, 25, SPECIES_SALAMON},
                         {EVO_SPEED, 25, SPECIES_PATAMON},
                         {EVO_LEVEL, 22, SPECIES_LUCEMON}},
    [SPECIES_MINOMON]  = {{EVO_DEFENSE, 14, SPECIES_KOKUWAMON},
                         {EVO_HEALTH, 32, SPECIES_KUNEMON},
                         {EVO_SPATTACK, 16, SPECIES_TENTOMON},
                         {EVO_LEVEL, 14, SPECIES_WORMMON}},
    [SPECIES_MISSIMON] = {{EVO_DEFENSE, 17, SPECIES_GIZAMON},
                         {EVO_HEALTH, 36, SPECIES_CHIKURIMON},
                         {EVO_SPATTACK, 19, SPECIES_DRACMON},
                         {EVO_DEFENSE, 17, SPECIES_HAGURUMON},
                         {EVO_LEVEL, 17, SPECIES_COMMDRAMON}},
    [SPECIES_MONIMON]    = {{EVO_LEVEL, 14, SPECIES_MONITAMON}},
    [SPECIES_MOONMON]   =  {{EVO_HEALTH, 35, SPECIES_BLKAGUMON},
                           {EVO_ATTACK, 16, SPECIES_GAZIMON},
                           {EVO_SPATTACK, 17, SPECIES_LOPMON},
                           {EVO_LEVEL, 15, SPECIES_LUNAMON}},
    [SPECIES_MOTIMON] =  {{EVO_LEVEL, 15, SPECIES_TENTOMON},
                        {EVO_SPEED, 15, SPECIES_BIYOMON},
                        {EVO_ATTACK, 15, SPECIES_FANBEEMON},
                        {EVO_SPATTACK, 16, SPECIES_MORPHOMON},
                        {EVO_LEVEL, 15, SPECIES_TENTOMON}},
    [SPECIES_NEGAMON]     = {{EVO_LEVEL, 40, SPECIES_NYAROMON}}, // Negamon (Giant) mega evo. Level 70ish?
    [SPECIES_NYAROMON] = {{EVO_DEFENSE, 15, SPECIES_ARMADILMON},
                         {EVO_SPATTACK, 14, SPECIES_TINKERMON},
                         {EVO_ATTACK, 17, SPECIES_RENAMON},
                         {EVO_SPEED, 17, SPECIES_HAWKMON},
                         {EVO_LEVEL, 14, SPECIES_SALAMON}},
    [SPECIES_PAGUMON]   =  {{EVO_HEALTH, 31, SPECIES_CHUUMON},
                           {EVO_SPEED, 15, SPECIES_TSUKAIMON},
                           {EVO_ATTACK, 14, SPECIES_GIZAMON},
                           {EVO_SPATTACK, 14, SPECIES_IMPMON},
                           {EVO_LEVEL, 13, SPECIES_DEMIDEVMON}},
    [SPECIES_PICKMON_SILVER]  = {{EVO_LEVEL, 15, SPECIES_STARMON_2010}},
    [SPECIES_PICKMON_WHITE]  = {{EVO_LEVEL, 14, SPECIES_STARMON_2010}},
    [SPECIES_PICKMON_RED]  = {{EVO_LEVEL, 15, SPECIES_STARMON_2010}},
    [SPECIES_PINAMON]   =  {{EVO_ATTACK, 17, SPECIES_GOBLIMON},
                           {EVO_SPATTACK, 16, SPECIES_KUDAMON_06},
                           {EVO_SPEED, 18, SPECIES_SWIMMON},
                           {EVO_SPDEFENSE, 16, SPECIES_YUKIAGUMON_06},
                           {EVO_LEVEL, 15, SPECIES_FALCOMON}},
    [SPECIES_POROMON]      =  {{EVO_HEALTH, 31, SPECIES_POMUMON}, // Add Ukkomon
                              {EVO_SPATTACK, 15, SPECIES_TINKERMON},
                              {EVO_SPEED, 15, SPECIES_FALCOMON_06},
                              {EVO_LEVEL, 13, SPECIES_HAWKMON}},
    [SPECIES_PUROROMON]  =  {{EVO_DEFENSE, 12, SPECIES_RYUDAMON},
                            {EVO_ATTACK, 13, SPECIES_DORUMON},
                            {EVO_LEVEL, 11, SPECIES_FANBEEMON}},
    [SPECIES_PUSURIMON]       = {{EVO_LEVEL, 14, SPECIES_HERISSMON}},
    [SPECIES_PUYOYOMON]  =  {{EVO_SPEED, 14, SPECIES_KODOKGUMON},
                            {EVO_LEVEL, 13, SPECIES_JELLYMON}},
    [SPECIES_SAKUTTOMON]     = {{EVO_DEFENSE, 19, SPECIES_RYUDAMON},
                               {EVO_ATTACK, 22, SPECIES_HACKMON},
                               {EVO_LEVEL, 17, SPECIES_ZUBAMON}},
    [SPECIES_SUNMON]   =  {{EVO_SPATTACK, 15, SPECIES_SALAMON},
                           {EVO_HEALTH, 34, SPECIES_KUDAMON_06},
                           {EVO_ATTACK, 19, SPECIES_GUILMON},
                           {EVO_LEVEL, 15, SPECIES_CORONAMON}},
    [SPECIES_TANEMON]   =  {{EVO_HEALTH, 32, SPECIES_MUSHROOMON},
                           {EVO_SPDEFENSE, 15, SPECIES_ARURAUMON},
                           {EVO_ATTACK, 15, SPECIES_LALAMON},
                           {EVO_SPATTACK, 16, SPECIES_FLORAMON},
                           {EVO_LEVEL, 14, SPECIES_PALMON}},
    [SPECIES_TOKOMON]   =  {{EVO_ATTACK, 17, SPECIES_DEMIDEVMON},
                           {EVO_SPATTACK, 16, SPECIES_TSUKAIMON},
                           {EVO_HEALTH, 32, SPECIES_DOTFALCMON},
                           {EVO_LEVEL, 66, SPECIES_TOKOMON_X}, // X-Antibody Item
                           {EVO_LEVEL, 14, SPECIES_PATAMON}},
    [SPECIES_TOKOMON_X]     = {{EVO_DEFENSE, 18, SPECIES_HERISSMON},
                              {EVO_SPDEFENSE, 17, SPECIES_GABUMON_X},
                              {EVO_ATTACK, 19, SPECIES_DRACOMON_X},
                              {EVO_SPATTACK, 18, SPECIES_AGUMON_X},
                              {EVO_LEVEL, 17, SPECIES_RENAMON_X}},
    [SPECIES_TORBALLMON]    = {{EVO_ATTACK, 15, SPECIES_EBIBURGMON},
                              {EVO_LEVEL, 13, SPECIES_BURGERMON}},
    [SPECIES_TSUMEMON]     =  {{EVO_ATTACK, 16, SPECIES_BLKGUILMON},
                              {EVO_SPEED, 17, SPECIES_DEMIDEVMON},
                              {EVO_SPDEFENSE, 14, SPECIES_BLKGABUMON},
                              {EVO_SPATTACK, 15, SPECIES_BLKAGUMON},
                              {EVO_LEVEL, 14, SPECIES_KERAMON}},
    [SPECIES_TSUNOMON]       =   {{EVO_SPEED, 17, SPECIES_MONMON},
                                 {EVO_DEFENSE, 16, SPECIES_SYAKOMON},
                                 {EVO_HEALTH, 36, SPECIES_PSYCHEMON},
                                 {EVO_ATTACK, 19, SPECIES_ELECMON},
                                 {EVO_LEVEL, 16, SPECIES_GABUMON}},
    [SPECIES_TUMBLEMON]    =  {{EVO_SPATTACK, 15, SPECIES_EKAKIMON},
                              {EVO_HEALTH, 36, SPECIES_BAKOMON},
                              {EVO_DEFENSE, 17, SPECIES_GOTSUMON},
                              {EVO_ATTACK, 17, SPECIES_STRABIMON},
                              {EVO_LEVEL, 15, SPECIES_SUNARZAMON}},
    [SPECIES_UPAMON]    =     {{EVO_SPDEFENSE, 15, SPECIES_PILLOMON},
                              {EVO_SPEED, 16, SPECIES_DAMEMON},
                              {EVO_SPATTACK, 15, SPECIES_BOKOMON},
                              {EVO_HEALTH, 34, SPECIES_SANGOMON},
                              {EVO_LEVEL, 15, SPECIES_ARMADILMON}},
    [SPECIES_VIXIMON]     =   {{EVO_DEFENSE, 17, SPECIES_NEEMON},
                              {EVO_SPDEFENSE, 16, SPECIES_TERRIERMON_ASSISTANT},
                              {EVO_HEALTH, 39, SPECIES_CUTEMON},
                              {EVO_SPATTACK, 18, SPECIES_TYUTYUMON},
                              {EVO_LEVEL, 18, SPECIES_RENAMON}},
    [SPECIES_WANYAMON]     =   {{EVO_ATTACK, 17, SPECIES_PAWNMON_WHITE},
                              {EVO_DEFENSE, 16, SPECIES_KODEKACMON},
                              {EVO_SPATTACK, 15, SPECIES_LUXMON},
                              {EVO_SPEED, 18, SPECIES_DONDOKOMON},
                              {EVO_LEVEL, 15, SPECIES_GAOMON}},
    [SPECIES_XIAOMON]    = {{EVO_SPDEFENSE, 13, SPECIES_VEMMON},
                           {EVO_ATTACK, 14, SPECIES_IGNITEMON},
                           {EVO_SPATTACK, 14, SPECIES_AGUMON_FAKE_EXPERT},
                           {EVO_LEVEL, 12, SPECIES_LABRAMON}},
    [SPECIES_YAAMON]    =  {{EVO_SPEED, 16, SPECIES_SOUNBRDMON},
                           {EVO_SPATTACK, 18, SPECIES_PETITMAMON},
                           {EVO_DEFENSE, 15, SPECIES_GIZUMON},
                           {EVO_ATTACK, 15, SPECIES_GAOSSMON},
                           {EVO_LEVEL, 15, SPECIES_IMPMON}},
    [SPECIES_YOKOMON]  = {{EVO_SPEED, 15, SPECIES_SANTAAGUMON},
                         {EVO_SPATTACK, 15, SPECIES_OTAMAMON_RED},
                         {EVO_HEALTH, 32, SPECIES_MODBETAMON},
                         {EVO_DEFENSE, 15, SPECIES_SPARROWMON},
                         {EVO_LEVEL, 14, SPECIES_BIYOMON}},                    
    [SPECIES_AGUMON_06]     = {{EVO_LEVEL, 28, SPECIES_AGUMON_EXPERT}},
    [SPECIES_ARCADIAMON_ROOKIE]    = {{EVO_LEVEL, 35, SPECIES_ARCADIAMON_CHAMPION}},
    [SPECIES_ARGOMON_ROOKIE]    = {{EVO_LEVEL, 36, SPECIES_ARGOMON_CHAMPION}},
    [SPECIES_ARMADILMON]    = {{EVO_LEVEL, 32, SPECIES_ANKYLOMON}},
    [SPECIES_ARURAUMON]    = {{EVO_LEVEL, 42, SPECIES_BAKOMON}},
    [SPECIES_BEARMON]    = {{EVO_FRIENDSHIP, 0, SPECIES_SHOUTMON}},
    [SPECIES_BIYOMON]     = {{EVO_LEVEL, 30, SPECIES_AQUILAMON}},
    [SPECIES_BLKAGUMON]     = {{EVO_TRADE_ITEM, ITEM_DRAGON_SCALE, SPECIES_PSYCHEMON}},
    [SPECIES_BLKAGUMON_X]    = {{EVO_LEVEL, 33, SPECIES_BLKGABUMON}},
    [SPECIES_BLKGUILMON]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_BOKOMON}},
    [SPECIES_BURGERMON]    = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_MONODRAMON}},
    [SPECIES_CANDLEMON]    = {{EVO_LEVEL, 26, SPECIES_BAKEMON}},
    [SPECIES_HAZYAGUMON]   = {{EVO_LEVEL, 20, SPECIES_COMMDRAMON}},
    [SPECIES_CRABMON_X]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_DAMEMON},
                            {EVO_ITEM, ITEM_WATER_STONE, SPECIES_CUTEMON},
                            {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_DEMIDEVMON},
                            {EVO_FRIENDSHIP_DAY, 0, SPECIES_KUNEMON},
                            {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_LABRAMON}},
    [SPECIES_DEMIDEVMON]    = {{EVO_LEVEL, 26, SPECIES_BAKEMON}},
    [SPECIES_DOKUNEMON]    = {{EVO_TRADE_ITEM, ITEM_UP_GRADE, SPECIES_RENAMON_X}},
    [SPECIES_DONDOKOMON]    = {{EVO_LEVEL, 40, SPECIES_DORUMON}},
    [SPECIES_DOTAGUMON]     = {{EVO_LEVEL, 40, SPECIES_DOTFALCMON}},
    [SPECIES_ELECMON]    = {{EVO_LEVEL, 33, SPECIES_AEGIOMON}},
    [SPECIES_ELECMON_VIOLET]  = {{EVO_LEVEL, 55, SPECIES_ESPIMON}},
    [SPECIES_FALCOMON_06]  = {{EVO_LEVEL, 16, SPECIES_FANBEEMON}},
    [SPECIES_FANBEEMON]    = {{EVO_LEVEL, 32, SPECIES_FLAMEMON}},
    [SPECIES_FLAMEMON]    = {{EVO_LEVEL, 36, SPECIES_AGUNIMON}},
    [SPECIES_FLORAMON]  = {{EVO_LEVEL, 14, SPECIES_GABUMON}},
    [SPECIES_GABUMON]    = {{EVO_LEVEL, 36, SPECIES_GABUMON_X}},
    [SPECIES_GAMMAMON]   = {{EVO_LEVEL, 18, SPECIES_GAOMON}},
    [SPECIES_GAOMON]   = {{EVO_LEVEL, 37, SPECIES_BABOONMON}},
    [SPECIES_GAZIMON]    = {{EVO_LEVEL, 32, SPECIES_APEMON}},
    [SPECIES_GHOSTMON]   = {{EVO_LEVEL, 20, SPECIES_GIZAMON}},
    [SPECIES_GIZUMON]     = {{EVO_LEVEL, 18, SPECIES_GOBLIMON}},
    [SPECIES_GOMAMON]   = {{EVO_LEVEL, 22, SPECIES_GOMAMON_X}},
    [SPECIES_GOTSUMON_X]   = {{EVO_LEVEL, 27, SPECIES_GUILMON}},
    [SPECIES_GUILMON_X]      = {{EVO_FRIENDSHIP, 0, SPECIES_PETITMON}},
    [SPECIES_GUMDRAMON]     = {{EVO_LEVEL, 32, SPECIES_ARESDRAMON}},
    [SPECIES_HACKMON]  = {{EVO_FRIENDSHIP, 0, SPECIES_SANDMON}},
    [SPECIES_HAGURUMON]     = {{EVO_LEVEL, 32, SPECIES_BALISTAMON}},
    [SPECIES_HAWKMON]       = {{EVO_ATTACK, 52, SPECIES_ALLOMON},
                              {EVO_LEVEL, 30, SPECIES_AQUILAMON}},
    [SPECIES_HYOKOMON]     = {{EVO_LEVEL, 15, SPECIES_IGNITEMON}},
    [SPECIES_IGNITEMON]    = {{EVO_LEVEL, 30, SPECIES_IMPMON}},
    [SPECIES_JAZAMON]     = {{EVO_LEVEL, 18, SPECIES_JELLYMON}},
    [SPECIES_KERAMON]     = {{EVO_LEVEL, 18, SPECIES_KERAMON_X}},
    [SPECIES_KERAMON_X]   = {{EVO_LEVEL, 27, SPECIES_KODOKGUMON}},
    [SPECIES_KOKUWAMON]    = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_KOKUWAMON_X}},
    [SPECIES_KUDAMON]     = {{EVO_LEVEL, 20, SPECIES_KUDAMON_06}},
    [SPECIES_LUDOMON]     = {{EVO_LEVEL, 31, SPECIES_LUNAMON}},
    [SPECIES_KODEKACMON]     = {{EVO_LEVEL, 39, SPECIES_ATAMADEMON}},
    [SPECIES_MODBETAMON]   = {{EVO_LEVEL, 23, SPECIES_MONITAMON}},
    [SPECIES_MONODRAMON]   = {{EVO_LEVEL, 40, SPECIES_AIRDRAMON}},
    [SPECIES_MUCHOMON]   = {{EVO_LEVEL, 29, SPECIES_AKATORIMON}},
    [SPECIES_NEEMON]  = {{EVO_LEVEL, 30, SPECIES_OTAMAMON}},
    [SPECIES_OTAMAMON_RED]     = {{EVO_LEVEL, 38, SPECIES_OTAMAMON_X}},
    [SPECIES_PALMON]     = {{EVO_LEVEL, 33, SPECIES_PALMON_X}},
    [SPECIES_PATAMON]   = {{EVO_LEVEL, 26, SPECIES_ANGEMON}},
    [SPECIES_PAWNMON]   = {{EVO_LEVEL, 25, SPECIES_PAWNMON_WHITE}},
    [SPECIES_PILLOMON]   = {{EVO_LEVEL, 24, SPECIES_POMUMON}},
    [SPECIES_PULSEMON]     = {{EVO_LEVEL, 25, SPECIES_RENAMON}},
    [SPECIES_SALAMON]    = {{EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_ANGORAMON},
                            {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_AGUMON_X},
                            {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_SALAMON_X}},
    [SPECIES_SANGOMON]   = {{EVO_LEVEL, 30, SPECIES_SAMUAGUMON}},
    [SPECIES_SANTAAGUMON]     = {{EVO_LEVEL, 30, SPECIES_CANDLEMON}},
    [SPECIES_BLKTOYAMON]      = {{EVO_LEVEL, 30, SPECIES_CHIKURIMON}},
    [SPECIES_SHAMANMON]     = {{EVO_LEVEL, 32, SPECIES_APEMON}},
    [SPECIES_SOLARMON]   = {{EVO_LEVEL, 30, SPECIES_SOUNBRDMON}},
    [SPECIES_SOUNBRDMON]    = {{EVO_LEVEL, 55, SPECIES_SPADAMON}},
    [SPECIES_SUNARZAMON]    = {{EVO_LEVEL, 37, SPECIES_BABOONMON}},
    [SPECIES_SWIMMON]    = {{EVO_LEVEL, 36, SPECIES_SYAKOMON}},
    [SPECIES_SYAKOMON_X]    = {{EVO_LEVEL, 16, SPECIES_TAPIRMON}},
    [SPECIES_TAPIRMON]  = {{EVO_LEVEL, 36, SPECIES_TENTOMON}},
    [SPECIES_TERRIERMON]     = {{EVO_LEVEL, 16, SPECIES_TERRIERMON_ASSISTANT}},
    [SPECIES_TERRIERMON_ASSISTANT]  = {{EVO_LEVEL, 36, SPECIES_TERRIERMON_X}},
    [SPECIES_TINKERMON]  = {{EVO_LEVEL, 18, SPECIES_TINPET}},
    [SPECIES_TOYAGUMON]  = {{EVO_LEVEL, 20, SPECIES_TSUKAIMON}},
    [SPECIES_VEEMON]    = {{EVO_LEVEL_VEMMON, 7, SPECIES_VEMMON},
                            {EVO_LEVEL_WORMMON, 7, SPECIES_WORMMON}},
    [SPECIES_VEMMON]    = {{EVO_LEVEL, 10, SPECIES_VORVOMON}},
    [SPECIES_WORMMON]    = {{EVO_SPEED, 51, SPECIES_AURUMON},
                           {EVO_LEVEL, 34, SPECIES_ARCHELOMON}},
    [SPECIES_ZUBAMON]      = {{EVO_LEVEL, 32, SPECIES_AXEMON}},
    [SPECIES_AEGIOMON]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_AGUNIMON}},
    [SPECIES_AIRDRAMON]     = {{EVO_LEVEL, 14, SPECIES_AKATORIMON}},
    [SPECIES_AKATORIMON]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_ALLOMON}},
    [SPECIES_BAKEMON]    = {{EVO_LEVEL_BALISTAMON, 20, SPECIES_BALISTAMON},
                            {EVO_LEVEL_SHEDINJA, 20, SPECIES_BALUCHIMON}},
    [SPECIES_ALLOMON]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_ALLOMON_X}},
    [SPECIES_ARESDRAMON]  = {{EVO_LEVEL, 23, SPECIES_ATAMADEMON}},
    [SPECIES_ANGEMON]    = {{EVO_LEVEL, 25, SPECIES_ANKYLOMON}},
    [SPECIES_ARCHELOMON]    = {{EVO_LEVEL, 22, SPECIES_ARGOMON_CHAMPION}},
    [SPECIES_CHAMBLEMON]    = {{EVO_LEVEL, 40, SPECIES_CHAMELEMON}},
    [SPECIES_BIRDRAMON]     = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_BLGAOGAMON}},
    [SPECIES_DEXDORUMON]     = {{EVO_LEVEL, 36, SPECIES_DIATRYMON}},
    [SPECIES_DEPTHMON]   = {{EVO_LEVEL, 30, SPECIES_DEPUTYMON}},
    [SPECIES_DEVIDRAMON]   = {{EVO_LEVEL, 30, SPECIES_DEVIMON}},
    [SPECIES_DOGGYMON]     = {{EVO_BEAUTY, 170, SPECIES_DOKUGUMON}},
    [SPECIES_CHOUFLYMON]   = {{EVO_LEVEL, 30, SPECIES_CENTARUMON}},
    [SPECIES_COREDRAMON_GREEN]   = {{EVO_LEVEL, 35, SPECIES_CYCLONEMON}},
    [SPECIES_CYCLONEMON]    = {{EVO_LEVEL, 45, SPECIES_DAMEMON_FUSION}},
    [SPECIES_BETGAMAMON]   = {{EVO_LEVEL, 24, SPECIES_BIOQUETMON}},
    [SPECIES_BOARMON]  = {{EVO_LEVEL, 26, SPECIES_BOMNANIMON}},
    [SPECIES_CHRYSALMON]      = {{EVO_LEVEL, 33, SPECIES_CITRAMON}},
    [SPECIES_EYESMON_SCATTERMODE]     = {{EVO_LEVEL, 32, SPECIES_FANGMON}},
    [SPECIES_FANGMON]     = {{EVO_LEVEL, 44, SPECIES_FILMON}},
    [SPECIES_DARCMON]     = {{EVO_LEVEL, 32, SPECIES_TRAILMON_DARK}},
    [SPECIES_EXVEEMON_VIRUS]    = {{EVO_LEVEL, 42, SPECIES_EYESMON}},
    [SPECIES_BIOSTEGMON]    = {{EVO_FRIENDSHIP, 0, SPECIES_JAZAMON}},
    [SPECIES_CLOCKMON_FUSION]     = {{EVO_LEVEL, 32, SPECIES_COELAMON}},
    [SPECIES_SAWKUWAMON]   = {{EVO_LEVEL, 37, SPECIES_BLIMPMON}},
    [SPECIES_DARLIZAMON]     = {{EVO_LEVEL, 35, SPECIES_DARMAILMON}},
    [SPECIES_EXVEEMON]     = {{EVO_LEVEL, 15, SPECIES_LOPMON_X}},
    [SPECIES_DRIMOGEMON]    = {{EVO_LEVEL, 37, SPECIES_EBIDRAMON}},
    [SPECIES_AURUMON]    = {{EVO_LEVEL, 18, SPECIES_AXEMON}},
    [SPECIES_AXEMON]   = {{EVO_LEVEL, 36, SPECIES_BABOONMON}},
    [SPECIES_BURAIMON]     = {{EVO_LEVEL, 26, SPECIES_BURGERMON_CHAMPION}},
    [SPECIES_BAOHUCKMON]    = {{EVO_LEVEL, 20, SPECIES_BAROMON}},
    [SPECIES_BAROMON]    = {{EVO_LEVEL, 40, SPECIES_TRAILMON_BATTLE_ARMAMENT}},
    [SPECIES_FIRAMON]   = {{EVO_TRADE_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_FLADRAMON},
                            {EVO_TRADE_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_FLAWIZAMON}},
    [SPECIES_DORUGAMON]    = {{EVO_LEVEL, 37, SPECIES_DORULUMON}},
    [SPECIES_BLKGATOMON]       = {{EVO_LEVEL, 32, SPECIES_BLKGATOMON_UVER}},
    [SPECIES_BLKGATOMON_UVER]     = {{EVO_LEVEL, 42, SPECIES_BLGROWLMON}},
    [SPECIES_DIGMON]     = {{EVO_LEVEL, 40, SPECIES_DINOHYUMON}},
    [SPECIES_DOBERMON]    = {{EVO_LEVEL, 40, SPECIES_DOBERMON_X}},
    [SPECIES_APEMON]      = {{EVO_LEVEL, 20, SPECIES_AQUILAMON}},
    [SPECIES_AQUILAMON]     = {{EVO_LEVEL, 30, SPECIES_ARCADIAMON_CHAMPION}},
    [SPECIES_FLYMON]      = {{EVO_LEVEL, 30, SPECIES_FRIGIMON}},
    [SPECIES_FRIGIMON]    = {{EVO_LEVEL, 50, SPECIES_FROGMON}},
    [SPECIES_FUGAMON]     = {{EVO_LEVEL, 20, SPECIES_GANEMON}},
    [SPECIES_GANEMON]     = {{EVO_LEVEL, 45, SPECIES_GAOGAMON}},
};

const struct Evolution gDeEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_AGUMON]  = {{EVO_DEVOLVE, 0, SPECIES_KOROMON},
                         {EVO_DEVOLVE, 0, SPECIES_GIGIMON},
                         {EVO_DEVOLVE, 0, SPECIES_WANYAMON}},
};