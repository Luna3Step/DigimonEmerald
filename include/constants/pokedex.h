#ifndef GUARD_CONSTANTS_POKEDEX_H
#define GUARD_CONSTANTS_POKEDEX_H

// National Pokedex order
enum {
    NATIONAL_DEX_NONE,
    // Kanto
    NATIONAL_DEX_ARGOMON_F,
    NATIONAL_DEX_BOMBMON,
    NATIONAL_DEX_BOMMON,
    NATIONAL_DEX_BOTAMON,
    NATIONAL_DEX_CHIBICKMON,
    NATIONAL_DEX_CHIBOMON,
    NATIONAL_DEX_CONOMON,
    NATIONAL_DEX_COTSUCOMON,
    NATIONAL_DEX_CURIMON,
    NATIONAL_DEX_DATIRIMON,
    NATIONAL_DEX_DODOMON,
    NATIONAL_DEX_DOKIMON,
    NATIONAL_DEX_FUFUMON,
    NATIONAL_DEX_JYARIMON,
    NATIONAL_DEX_KEEMON,
    NATIONAL_DEX_KETOMON,
    NATIONAL_DEX_KURAMON,
    NATIONAL_DEX_LEAFMON,
    NATIONAL_DEX_CHOROMON,
    NATIONAL_DEX_MOKUMON,
    NATIONAL_DEX_NYOKIMON,
    NATIONAL_DEX_PABUMON,
    NATIONAL_DEX_PAFUMON,
    NATIONAL_DEX_PAOMON,
    NATIONAL_DEX_PETITMON,
    NATIONAL_DEX_PICHIMON,
    NATIONAL_DEX_POPOMON,
    NATIONAL_DEX_POYOMON,
    NATIONAL_DEX_PUNIMON,
    NATIONAL_DEX_PUPUMON,
    NATIONAL_DEX_PURURUMON,
    NATIONAL_DEX_PUSUMON,
    NATIONAL_DEX_PUTTIMON,
    NATIONAL_DEX_PUWAMON,
    NATIONAL_DEX_PUYOMON,
    NATIONAL_DEX_PYONMON,
    NATIONAL_DEX_RELEMON,
    NATIONAL_DEX_SAKUMON,
    NATIONAL_DEX_SANDMON,
    NATIONAL_DEX_TSUBUMON,
    NATIONAL_DEX_ICEBOTAMON,
    NATIONAL_DEX_YURAMON,
    NATIONAL_DEX_ZERIMON,
    NATIONAL_DEX_ZURUMON,
    NATIONAL_DEX_ARCADIAMON_IT,
    NATIONAL_DEX_ARGOMON_IT,
    NATIONAL_DEX_BABYDMON,
    NATIONAL_DEX_BIBIMON,
    NATIONAL_DEX_BOSAMON,
    NATIONAL_DEX_BUDMON,
    NATIONAL_DEX_BUKAMON,
    NATIONAL_DEX_CALUMON,
    NATIONAL_DEX_CHAPMON,
    NATIONAL_DEX_CHICCHIMON,
    NATIONAL_DEX_DEMMERAMON,
    NATIONAL_DEX_DEMIVEEMON,
    NATIONAL_DEX_DORIMON,
    NATIONAL_DEX_FRIMON,
    NATIONAL_DEX_GIGIMON,
    NATIONAL_DEX_GUMMYMON,
    NATIONAL_DEX_GURIMON,
    NATIONAL_DEX_HIYARIMON,
    NATIONAL_DEX_HOPMON,
    NATIONAL_DEX_KAKKINMON,
    NATIONAL_DEX_KAPURIMON,
    NATIONAL_DEX_KOKOMON,
    NATIONAL_DEX_KOROMON,
    NATIONAL_DEX_KOZENIMON,
    NATIONAL_DEX_KYAROMON,
    NATIONAL_DEX_KYOKYOMON,
    NATIONAL_DEX_KYUPIMON,
    NATIONAL_DEX_MINOMON,
    NATIONAL_DEX_MISSIMON,
    NATIONAL_DEX_MONIMON,
    NATIONAL_DEX_MOONMON,
    NATIONAL_DEX_MOTIMON,
    NATIONAL_DEX_NEGAMON,
    NATIONAL_DEX_NYAROMON,
    NATIONAL_DEX_PAGUMON,
    NATIONAL_DEX_PICKMON_SILVER,
    NATIONAL_DEX_PICKMON_WHITE,
    NATIONAL_DEX_PICKMON_RED,
    NATIONAL_DEX_PINAMON,
    NATIONAL_DEX_POROMON,
    NATIONAL_DEX_PUROROMON,
    NATIONAL_DEX_PUSURIMON,
    NATIONAL_DEX_PUYOYOMON,
    NATIONAL_DEX_SAKUTTOMON,
    NATIONAL_DEX_SUNMON,
    NATIONAL_DEX_TANEMON,
    NATIONAL_DEX_TOKOMON,
    NATIONAL_DEX_TOKOMON_X,
    NATIONAL_DEX_TORBALLMON,
    NATIONAL_DEX_TSUMEMON,
    NATIONAL_DEX_TSUNOMON,
    NATIONAL_DEX_TUMBLEMON,
    NATIONAL_DEX_UPAMON,
    NATIONAL_DEX_VIXIMON,
    NATIONAL_DEX_WANYAMON,
    NATIONAL_DEX_XIAOMON,
    NATIONAL_DEX_YAAMON,
    NATIONAL_DEX_YOKOMON,
    NATIONAL_DEX_AGUMON,
    NATIONAL_DEX_AGUMON_06,
    NATIONAL_DEX_AGUMON_EXPERT,
    NATIONAL_DEX_AGUMON_X,
    NATIONAL_DEX_ANGORAMON,
    NATIONAL_DEX_ARCADIAMON_ROOKIE,
    NATIONAL_DEX_ARGOMON_ROOKIE,
    NATIONAL_DEX_ARMADILMON,
    NATIONAL_DEX_ARURAUMON,
    NATIONAL_DEX_BAKOMON,
    NATIONAL_DEX_BEARMON,
    NATIONAL_DEX_BETAMON,
    NATIONAL_DEX_BETAMON_X,
    NATIONAL_DEX_BIYOMON,
    NATIONAL_DEX_BLKAGUMON,
    NATIONAL_DEX_BLKAGUMON_X,
    NATIONAL_DEX_BLKGABUMON,
    NATIONAL_DEX_BLKGUILMON,
    NATIONAL_DEX_BOKOMON,
    NATIONAL_DEX_BULUCOMON,
    NATIONAL_DEX_BURGERMON,
    NATIONAL_DEX_SAMUAGUMON,
    NATIONAL_DEX_CANDLEMON,
    NATIONAL_DEX_CHIKURIMON,
    NATIONAL_DEX_TYUTYUMON,
    NATIONAL_DEX_CHUUMON,
    NATIONAL_DEX_HAZYAGUMON,
    NATIONAL_DEX_COMMDRAMON,
    NATIONAL_DEX_CORONAMON,
    NATIONAL_DEX_CRABMON,
    NATIONAL_DEX_CRABMON_X,
    NATIONAL_DEX_CUTEMON,
    NATIONAL_DEX_DAMEMON,
    NATIONAL_DEX_DEMIDEVMON,
    NATIONAL_DEX_DOKUNEMON,
    NATIONAL_DEX_DONDOKOMON,
    NATIONAL_DEX_DORUMON,
    NATIONAL_DEX_DOTAGUMON,
    NATIONAL_DEX_DOTFALCMON,
    NATIONAL_DEX_DRACMON,
    NATIONAL_DEX_DRACOMON,
    NATIONAL_DEX_DRACOMON_X,
    NATIONAL_DEX_EBIBURGMON,
    NATIONAL_DEX_EKAKIMON,
    NATIONAL_DEX_ELECMON,
    NATIONAL_DEX_ELECMON_VIOLET,
    NATIONAL_DEX_ESPIMON,
    NATIONAL_DEX_AGUMON_FAKE_EXPERT,
    NATIONAL_DEX_FALCOMON,
    // Johto
    NATIONAL_DEX_FALCOMON_06,
    NATIONAL_DEX_FANBEEMON,
    NATIONAL_DEX_FLAMEMON,
    NATIONAL_DEX_FLORAMON,
    NATIONAL_DEX_GABUMON,
    NATIONAL_DEX_GABUMON_X,
    NATIONAL_DEX_GAMMAMON,
    NATIONAL_DEX_GAOMON,
    NATIONAL_DEX_GAOSSMON,
    NATIONAL_DEX_GAZIMON,
    NATIONAL_DEX_GAZIMON_X,
    NATIONAL_DEX_GHOSTMON,
    NATIONAL_DEX_GIZAMON,
    NATIONAL_DEX_GIZUMON,
    NATIONAL_DEX_GOBLIMON,
    NATIONAL_DEX_GOMAMON,
    NATIONAL_DEX_GOMAMON_X,
    NATIONAL_DEX_GOTSUMON,
    NATIONAL_DEX_GOTSUMON_X,
    NATIONAL_DEX_GUILMON,
    NATIONAL_DEX_GUILMON_X,
    NATIONAL_DEX_GUMDRAMON,
    NATIONAL_DEX_HACKMON,
    NATIONAL_DEX_HAGURUMON,
    NATIONAL_DEX_HAGURUMON_X,
    NATIONAL_DEX_HAWKMON,
    NATIONAL_DEX_HERISSMON,
    NATIONAL_DEX_HYOKOMON,
    NATIONAL_DEX_IGNITEMON,
    NATIONAL_DEX_IMPMON,
    NATIONAL_DEX_IMPMON_X,
    NATIONAL_DEX_JAZAMON,
    NATIONAL_DEX_JELLYMON,
    NATIONAL_DEX_JUNKMON,
    NATIONAL_DEX_KAMEMON,
    NATIONAL_DEX_KERAMON,
    NATIONAL_DEX_KERAMON_X,
    NATIONAL_DEX_KODOKGUMON,
    NATIONAL_DEX_KOKABUIMON,
    NATIONAL_DEX_KOKUWAMON,
    NATIONAL_DEX_KOKUWAMON_X,
    NATIONAL_DEX_KOTEMON,
    NATIONAL_DEX_KUDAMON,
    NATIONAL_DEX_KUDAMON_06,
    NATIONAL_DEX_KUNEMON,
    NATIONAL_DEX_LABRAMON,
    NATIONAL_DEX_LALAMON,
    NATIONAL_DEX_LIOLLMON,
    NATIONAL_DEX_LOOGAMON,
    NATIONAL_DEX_LOPMON,
    NATIONAL_DEX_LOPMON_X,
    NATIONAL_DEX_LUCEMON,
    NATIONAL_DEX_LUDOMON,
    NATIONAL_DEX_LUNAMON,
    NATIONAL_DEX_LUXMON,
    NATIONAL_DEX_METABEE,
    NATIONAL_DEX_KODEKACMON,
    NATIONAL_DEX_MODBETAMON,
    NATIONAL_DEX_MONITAMON,
    NATIONAL_DEX_MONMON,
    NATIONAL_DEX_MONODRAMON,
    NATIONAL_DEX_MORPHOMON,
    NATIONAL_DEX_MUCHOMON,
    NATIONAL_DEX_MUSHROOMON,
    NATIONAL_DEX_NEEMON,
    NATIONAL_DEX_OTAMAMON,
    NATIONAL_DEX_OTAMAMON_RED,
    NATIONAL_DEX_OTAMAMON_X,
    NATIONAL_DEX_PALMON,
    NATIONAL_DEX_PALMON_X,
    NATIONAL_DEX_PATAMON,
    NATIONAL_DEX_PAWNMON,
    NATIONAL_DEX_PAWNMON_WHITE,
    NATIONAL_DEX_PENGUINMON,
    NATIONAL_DEX_PETITMAMON,
    NATIONAL_DEX_PHASCOMON,
    NATIONAL_DEX_PILLOMON,
    NATIONAL_DEX_POMUMON,
    NATIONAL_DEX_PSYCHEMON,
    NATIONAL_DEX_PULSEMON,
    NATIONAL_DEX_RENAMON,
    NATIONAL_DEX_RENAMON_X,
    NATIONAL_DEX_ROKUSHO,
    NATIONAL_DEX_RYUDAMON,
    NATIONAL_DEX_SALAMON,
    NATIONAL_DEX_SALAMON_X,
    NATIONAL_DEX_SANGOMON,
    NATIONAL_DEX_SANTAAGUMON,
    NATIONAL_DEX_BLKTOYAMON,
    NATIONAL_DEX_SHAMANMON,
    NATIONAL_DEX_SHOUTMON,
    NATIONAL_DEX_YUKIAGUMON,
    NATIONAL_DEX_YUKIAGUMON_06,
    NATIONAL_DEX_ICEGOBIMON,
    NATIONAL_DEX_SOLARMON,
    NATIONAL_DEX_SOUNBRDMON,
    NATIONAL_DEX_SPADAMON,
    NATIONAL_DEX_SPARROWMON,
    NATIONAL_DEX_STARMON_2010,
    NATIONAL_DEX_STRABIMON,
    // Hoenn
    NATIONAL_DEX_SUNARZAMON,
    NATIONAL_DEX_SWIMMON,
    NATIONAL_DEX_SYAKOMON,
    NATIONAL_DEX_SYAKOMON_X,
    NATIONAL_DEX_TAPIRMON,
    NATIONAL_DEX_TENTOMON,
    NATIONAL_DEX_TERRIERMON,
    NATIONAL_DEX_TERRIERMON_ASSISTANT,
    NATIONAL_DEX_TERRIERMON_X,
    NATIONAL_DEX_TINKERMON,
    NATIONAL_DEX_TINPET,
    NATIONAL_DEX_TOYAGUMON,
    NATIONAL_DEX_TSUKAIMON,
    NATIONAL_DEX_VEEMON,
    NATIONAL_DEX_VEMMON,
    NATIONAL_DEX_VORVOMON,
    NATIONAL_DEX_WORMMON,
    NATIONAL_DEX_ZENIMON,
    NATIONAL_DEX_ZUBAMON,
    NATIONAL_DEX_AEGIOMON,
    NATIONAL_DEX_AGUNIMON,
    NATIONAL_DEX_AIRDRAMON,
    NATIONAL_DEX_AKATORIMON,
    NATIONAL_DEX_ALLOMON,
    NATIONAL_DEX_ALLOMON_X,
    NATIONAL_DEX_ANGELAMON,
    NATIONAL_DEX_ANGEMON,
    NATIONAL_DEX_ANKYLOMON,
    NATIONAL_DEX_APEMON,
    NATIONAL_DEX_AQUILAMON,
    NATIONAL_DEX_ARCADIAMON_CHAMPION,
    NATIONAL_DEX_ARCHELOMON,
    NATIONAL_DEX_ARGOMON_CHAMPION,
    NATIONAL_DEX_ARESDRAMON,
    NATIONAL_DEX_ATAMADEMON,
    NATIONAL_DEX_AURUMON,
    NATIONAL_DEX_AXEMON,
    NATIONAL_DEX_BABOONMON,
    NATIONAL_DEX_BAKEMON,
    NATIONAL_DEX_BALISTAMON,
    NATIONAL_DEX_BALUCHIMON,
    NATIONAL_DEX_BAOHUCKMON,
    NATIONAL_DEX_BAROMON,
    NATIONAL_DEX_TRAILMON_BATTLE_ARMAMENT,
    NATIONAL_DEX_BETGAMAMON,
    NATIONAL_DEX_BIOQUETMON,
    NATIONAL_DEX_BIOSTEGMON,
    NATIONAL_DEX_BIOTHUNMON,
    NATIONAL_DEX_BIRDRAMON,
    NATIONAL_DEX_BLGAOGAMON,
    NATIONAL_DEX_BLGARGOMON,
    NATIONAL_DEX_BLGARURMON,
    NATIONAL_DEX_BLKGATOMON,
    NATIONAL_DEX_BLKGATOMON_UVER,
    NATIONAL_DEX_BLGROWLMON,
    NATIONAL_DEX_SAWKUWAMON,
    NATIONAL_DEX_BLIMPMON,
    NATIONAL_DEX_BOARMON,
    NATIONAL_DEX_BOMNANIMON,
    NATIONAL_DEX_BOOGIEMON,
    NATIONAL_DEX_BUCCHIEMON_RED,
    NATIONAL_DEX_BUCCHIEMON_GREEN,
    NATIONAL_DEX_BULKMON,
    NATIONAL_DEX_BULLMON,
    NATIONAL_DEX_BURAIMON,
    NATIONAL_DEX_BURGERMON_CHAMPION,
    NATIONAL_DEX_CHOUFLYMON,
    NATIONAL_DEX_CENTARUMON,
    NATIONAL_DEX_CHAMBLEMON,
    NATIONAL_DEX_CHAMELEMON,
    NATIONAL_DEX_CHRYSALMON,
    NATIONAL_DEX_CITRAMON,
    NATIONAL_DEX_CLOCKMON,
    NATIONAL_DEX_CLOCKMON_FUSION,
    NATIONAL_DEX_COELAMON,
    NATIONAL_DEX_COREDRAMON_BLUE,
    NATIONAL_DEX_COREDRAMON_GREEN,
    NATIONAL_DEX_CYCLONEMON,
    NATIONAL_DEX_DAMEMON,
    NATIONAL_DEX_DARCMON,
    NATIONAL_DEX_TRAILMON_DARK,
    NATIONAL_DEX_DARLIZAMON,
    NATIONAL_DEX_DARMAILMON,
    NATIONAL_DEX_DARKTYRMON,
    NATIONAL_DEX_DARKTYRMON_X,
    NATIONAL_DEX_DECKDRAMON,
    NATIONAL_DEX_DELTAMON,
    NATIONAL_DEX_DEPTHMON,
    NATIONAL_DEX_DEPUTYMON,
    NATIONAL_DEX_DEVIDRAMON,
    NATIONAL_DEX_DEVIMON,
    NATIONAL_DEX_DEXDORUMON,
    NATIONAL_DEX_DIATRYMON,
    NATIONAL_DEX_DIGMON,
    NATIONAL_DEX_DINOHYUMON,
    NATIONAL_DEX_DOBERMON,
    NATIONAL_DEX_DOBERMON_X,
    NATIONAL_DEX_DOGGYMON,
    NATIONAL_DEX_DOKUGUMON,
    NATIONAL_DEX_DOLPHMON,
    NATIONAL_DEX_DONSHOUMON,
    NATIONAL_DEX_DORUGAMON,
    NATIONAL_DEX_DORULUMON,
    NATIONAL_DEX_DRIMOGEMON,
    NATIONAL_DEX_EBIDRAMON,
    NATIONAL_DEX_ELEPHANMON,
    NATIONAL_DEX_EOSMON_CHAMPION,
    NATIONAL_DEX_EXERMON,
    NATIONAL_DEX_EXVEEMON,
    NATIONAL_DEX_EXVEEMON_VIRUS,
    NATIONAL_DEX_GLALIE,
    NATIONAL_DEX_SPHEAL,
    NATIONAL_DEX_SEALEO,
    NATIONAL_DEX_WALREIN,
    NATIONAL_DEX_CLAMPERL,
    NATIONAL_DEX_HUNTAIL,
    NATIONAL_DEX_GOREBYSS,
    NATIONAL_DEX_RELICANTH,
    NATIONAL_DEX_LUVDISC,
    NATIONAL_DEX_BAGON,
    NATIONAL_DEX_SHELGON,
    NATIONAL_DEX_SALAMENCE,
    NATIONAL_DEX_BELDUM,
    NATIONAL_DEX_METANG,
    NATIONAL_DEX_METAGROSS,
    NATIONAL_DEX_REGIROCK,
    NATIONAL_DEX_REGICE,
    NATIONAL_DEX_REGISTEEL,
    NATIONAL_DEX_LATIAS,
    NATIONAL_DEX_LATIOS,
    NATIONAL_DEX_KYOGRE,
    NATIONAL_DEX_GROUDON,
    NATIONAL_DEX_RAYQUAZA,
    NATIONAL_DEX_JIRACHI,
    NATIONAL_DEX_DEOXYS,
    // Old Unown
    NATIONAL_DEX_OLD_UNOWN_B,
    NATIONAL_DEX_OLD_UNOWN_C,
    NATIONAL_DEX_OLD_UNOWN_D,
    NATIONAL_DEX_OLD_UNOWN_E,
    NATIONAL_DEX_OLD_UNOWN_F,
    NATIONAL_DEX_OLD_UNOWN_G,
    NATIONAL_DEX_OLD_UNOWN_H,
    NATIONAL_DEX_OLD_UNOWN_I,
    NATIONAL_DEX_OLD_UNOWN_J,
    NATIONAL_DEX_OLD_UNOWN_K,
    NATIONAL_DEX_OLD_UNOWN_L,
    NATIONAL_DEX_OLD_UNOWN_M,
    NATIONAL_DEX_OLD_UNOWN_N,
    NATIONAL_DEX_OLD_UNOWN_O,
    NATIONAL_DEX_OLD_UNOWN_P,
    NATIONAL_DEX_OLD_UNOWN_Q,
    NATIONAL_DEX_OLD_UNOWN_R,
    NATIONAL_DEX_OLD_UNOWN_S,
    NATIONAL_DEX_OLD_UNOWN_T,
    NATIONAL_DEX_OLD_UNOWN_U,
    NATIONAL_DEX_OLD_UNOWN_V,
    NATIONAL_DEX_OLD_UNOWN_W,
    NATIONAL_DEX_OLD_UNOWN_X,
    NATIONAL_DEX_OLD_UNOWN_Y,
    NATIONAL_DEX_OLD_UNOWN_Z,
};

#define KANTO_DEX_COUNT     NATIONAL_DEX_FALCOMON
#define JOHTO_DEX_COUNT     NATIONAL_DEX_STRABIMON
#define NATIONAL_DEX_COUNT  NATIONAL_DEX_DEOXYS

// Hoenn Pokedex order
enum {
    HOENN_DEX_NONE,
    HOENN_DEX_SUNARZAMON,
    HOENN_DEX_SWIMMON,
    HOENN_DEX_SYAKOMON,
    HOENN_DEX_SYAKOMON_X,
    HOENN_DEX_TAPIRMON,
    HOENN_DEX_TENTOMON,
    HOENN_DEX_TERRIERMON,
    HOENN_DEX_TERRIERMON_ASSISTANT,
    HOENN_DEX_TERRIERMON_X,
    HOENN_DEX_TINKERMON,
    HOENN_DEX_TINPET,
    HOENN_DEX_TOYAGUMON,
    HOENN_DEX_TSUKAIMON,
    HOENN_DEX_VEEMON,
    HOENN_DEX_VEMMON,
    HOENN_DEX_VORVOMON,
    HOENN_DEX_WORMMON,
    HOENN_DEX_ZENIMON,
    HOENN_DEX_ZUBAMON,
    HOENN_DEX_AEGIOMON,
    HOENN_DEX_AGUNIMON,
    HOENN_DEX_AIRDRAMON,
    HOENN_DEX_AKATORIMON,
    HOENN_DEX_ALLOMON,
    HOENN_DEX_ALLOMON_X,
    HOENN_DEX_ANGELAMON,
    HOENN_DEX_ANGEMON,
    HOENN_DEX_ANKYLOMON,
    HOENN_DEX_APEMON,
    HOENN_DEX_AQUILAMON,
    HOENN_DEX_ARCADIAMON_CHAMPION,
    HOENN_DEX_ARCHELOMON,
    HOENN_DEX_ARGOMON_CHAMPION,
    HOENN_DEX_ARESDRAMON,
    HOENN_DEX_ATAMADEMON,
    HOENN_DEX_AURUMON,
    HOENN_DEX_AXEMON,
    HOENN_DEX_BABOONMON,
    HOENN_DEX_HOPMON,
    HOENN_DEX_KAKKINMON,
    HOENN_DEX_KAPURIMON,
    HOENN_DEX_BAKEMON,
    HOENN_DEX_BALISTAMON,
    HOENN_DEX_BALUCHIMON,
    HOENN_DEX_BAOHUCKMON,
    HOENN_DEX_BAROMON,
    HOENN_DEX_TRAILMON_BATTLE_ARMAMENT,
    HOENN_DEX_BETGAMAMON,
    HOENN_DEX_BIOQUETMON,
    HOENN_DEX_BLKAGUMON_X,
    HOENN_DEX_BLKGABUMON,
    HOENN_DEX_HAZYAGUMON,
    HOENN_DEX_COMMDRAMON,
    HOENN_DEX_BIOSTEGMON,
    HOENN_DEX_JAZAMON,
    HOENN_DEX_JELLYMON,
    HOENN_DEX_MONIMON,
    HOENN_DEX_MOONMON,
    HOENN_DEX_MOTIMON,
    HOENN_DEX_BIOTHUNMON,
    HOENN_DEX_BIRDRAMON,
    HOENN_DEX_BLGAOGAMON,
    HOENN_DEX_ICEBOTAMON,
    HOENN_DEX_YURAMON,
    HOENN_DEX_GOTSUMON,
    HOENN_DEX_MINOMON,
    HOENN_DEX_MISSIMON,
    HOENN_DEX_BLGARGOMON,
    HOENN_DEX_BLGARURMON,
    HOENN_DEX_BLKGATOMON,
    HOENN_DEX_BLKGATOMON_UVER,
    HOENN_DEX_BLGROWLMON,
    HOENN_DEX_KOKOMON,
    HOENN_DEX_KOROMON,
    HOENN_DEX_KOZENIMON,
    HOENN_DEX_SAWKUWAMON,
    HOENN_DEX_BLIMPMON,
    HOENN_DEX_BOARMON,
    HOENN_DEX_BOMNANIMON,
    HOENN_DEX_BOOGIEMON,
    HOENN_DEX_BUCCHIEMON_RED,
    HOENN_DEX_PICKMON_WHITE,
    HOENN_DEX_PICKMON_RED,
    HOENN_DEX_XIAOMON,
    HOENN_DEX_YAAMON,
    HOENN_DEX_BUCCHIEMON_GREEN,
    HOENN_DEX_BULKMON,
    HOENN_DEX_ZERIMON,
    HOENN_DEX_ZURUMON,
    HOENN_DEX_ARCADIAMON_IT,
    HOENN_DEX_IMPMON_X,
    HOENN_DEX_POROMON,
    HOENN_DEX_PUROROMON,
    HOENN_DEX_BULLMON,
    HOENN_DEX_BURAIMON,
    HOENN_DEX_BURGERMON_CHAMPION,
    HOENN_DEX_CHOUFLYMON,
    HOENN_DEX_CENTARUMON,
    HOENN_DEX_CHAMBLEMON,
    HOENN_DEX_CHAMELEMON,
    HOENN_DEX_CHRYSALMON,
    HOENN_DEX_CITRAMON,
    HOENN_DEX_OTAMAMON_RED,
    HOENN_DEX_OTAMAMON_X,
    HOENN_DEX_CLOCKMON,
    HOENN_DEX_SAKUTTOMON,
    HOENN_DEX_SUNMON,
    HOENN_DEX_ARGOMON_ROOKIE,
    HOENN_DEX_ARMADILMON,
    HOENN_DEX_CLOCKMON_FUSION,
    HOENN_DEX_COELAMON,
    HOENN_DEX_POPOMON,
    HOENN_DEX_POYOMON,
    HOENN_DEX_COREDRAMON_BLUE,
    HOENN_DEX_PHASCOMON,
    HOENN_DEX_COREDRAMON_GREEN,
    HOENN_DEX_CYCLONEMON,
    HOENN_DEX_DAMEMON,
    HOENN_DEX_DARCMON,
    HOENN_DEX_TRAILMON_DARK,
    HOENN_DEX_DARLIZAMON,
    HOENN_DEX_DARMAILMON,
    HOENN_DEX_DARKTYRMON,
    HOENN_DEX_DARKTYRMON_X,
    HOENN_DEX_DECKDRAMON,
    HOENN_DEX_DELTAMON,
    HOENN_DEX_DEPTHMON,
    HOENN_DEX_DEPUTYMON,
    HOENN_DEX_DEVIDRAMON,
    HOENN_DEX_DEVIMON,
    HOENN_DEX_DEXDORUMON,
    HOENN_DEX_DIATRYMON,
    HOENN_DEX_DIGMON,
    HOENN_DEX_DINOHYUMON,
    HOENN_DEX_DOBERMON,
    HOENN_DEX_DOBERMON_X,
    HOENN_DEX_HACKMON,
    HOENN_DEX_SANDMON,
    HOENN_DEX_TSUBUMON,
    HOENN_DEX_DOGGYMON,
    HOENN_DEX_DOKUGUMON,
    HOENN_DEX_DOLPHMON,
    HOENN_DEX_BLKGUILMON,
    HOENN_DEX_BOKOMON,
    HOENN_DEX_DONSHOUMON,
    HOENN_DEX_DORUGAMON,
    HOENN_DEX_DORULUMON,
    HOENN_DEX_DRIMOGEMON,
    HOENN_DEX_EBIDRAMON,
    HOENN_DEX_ELEPHANMON,
    HOENN_DEX_EOSMON_CHAMPION,
    HOENN_DEX_EXERMON,
    HOENN_DEX_RELEMON,
    HOENN_DEX_SAKUMON,
    HOENN_DEX_GUILMON_X,
    HOENN_DEX_PETITMON,
    HOENN_DEX_PICHIMON,
    HOENN_DEX_CHICCHIMON,
    HOENN_DEX_DEMMERAMON,
    HOENN_DEX_EXVEEMON,
    HOENN_DEX_LOPMON_X,
    HOENN_DEX_HAWKMON,
    HOENN_DEX_HERISSMON,
    HOENN_DEX_LUCEMON,
    HOENN_DEX_PULSEMON,
    HOENN_DEX_RENAMON,
    HOENN_DEX_TYUTYUMON,
    HOENN_DEX_MUCHOMON,
    HOENN_DEX_ARURAUMON,
    HOENN_DEX_BAKOMON,
    HOENN_DEX_EXVEEMON_VIRUS,
    HOENN_DEX_GLALIE,
    HOENN_DEX_SPHEAL,
    HOENN_DEX_SEALEO,
    HOENN_DEX_WALREIN,
    HOENN_DEX_CLAMPERL,
    HOENN_DEX_HUNTAIL,
    HOENN_DEX_GOREBYSS,
    HOENN_DEX_RELICANTH,
    HOENN_DEX_PATAMON,
    HOENN_DEX_GOTSUMON_X,
    HOENN_DEX_GUILMON,
    HOENN_DEX_LUVDISC,
    HOENN_DEX_BIYOMON,
    HOENN_DEX_BLKAGUMON,
    HOENN_DEX_PSYCHEMON,
    HOENN_DEX_BAGON,
    HOENN_DEX_SHELGON,
    HOENN_DEX_SALAMENCE,
    HOENN_DEX_BELDUM,
    HOENN_DEX_METANG,
    HOENN_DEX_METAGROSS,
    HOENN_DEX_REGIROCK,
    HOENN_DEX_REGICE,
    HOENN_DEX_REGISTEEL,
    HOENN_DEX_LATIAS,
    HOENN_DEX_LATIOS,
    HOENN_DEX_KYOGRE,
    HOENN_DEX_GROUDON,
    HOENN_DEX_RAYQUAZA,
    HOENN_DEX_JIRACHI,
    HOENN_DEX_DEOXYS,
    // End of Hoenn Dex (see HOENN_DEX_COUNT)
    // Here below have values but are excluded from the Pokedex
    HOENN_DEX_ARGOMON_F,
    HOENN_DEX_BOMBMON,
    HOENN_DEX_BOMMON,
    HOENN_DEX_BOTAMON,
    HOENN_DEX_CHIBICKMON,
    HOENN_DEX_CHIBOMON,
    HOENN_DEX_CONOMON,
    HOENN_DEX_COTSUCOMON,
    HOENN_DEX_CURIMON,
    HOENN_DEX_DATIRIMON,
    HOENN_DEX_DODOMON,
    HOENN_DEX_DOKIMON,
    HOENN_DEX_FUFUMON,
    HOENN_DEX_JYARIMON,
    HOENN_DEX_KEEMON,
    HOENN_DEX_KETOMON,
    HOENN_DEX_KURAMON,
    HOENN_DEX_LEAFMON,
    HOENN_DEX_CHOROMON,
    HOENN_DEX_MOKUMON,
    HOENN_DEX_NYOKIMON,
    HOENN_DEX_PABUMON,
    HOENN_DEX_PAFUMON,
    HOENN_DEX_PAOMON,
    HOENN_DEX_PUNIMON,
    HOENN_DEX_PUPUMON,
    HOENN_DEX_PURURUMON,
    HOENN_DEX_PUSUMON,
    HOENN_DEX_PUTTIMON,
    HOENN_DEX_PUWAMON,
    HOENN_DEX_PUYOMON,
    HOENN_DEX_PYONMON,
    HOENN_DEX_ARGOMON_IT,
    HOENN_DEX_BABYDMON,
    HOENN_DEX_BIBIMON,
    HOENN_DEX_BOSAMON,
    HOENN_DEX_BUDMON,
    HOENN_DEX_BUKAMON,
    HOENN_DEX_CALUMON,
    HOENN_DEX_CHAPMON,
    HOENN_DEX_DEMIVEEMON,
    HOENN_DEX_DORIMON,
    HOENN_DEX_FRIMON,
    HOENN_DEX_GIGIMON,
    HOENN_DEX_GUMMYMON,
    HOENN_DEX_GURIMON,
    HOENN_DEX_HIYARIMON,
    HOENN_DEX_KYAROMON,
    HOENN_DEX_KYOKYOMON,
    HOENN_DEX_KYUPIMON,
    HOENN_DEX_NEGAMON,
    HOENN_DEX_NYAROMON,
    HOENN_DEX_PAGUMON,
    HOENN_DEX_PICKMON_SILVER,
    HOENN_DEX_PINAMON,
    HOENN_DEX_PUSURIMON,
    HOENN_DEX_PUYOYOMON,
    HOENN_DEX_TANEMON,
    HOENN_DEX_TOKOMON,
    HOENN_DEX_TOKOMON_X,
    HOENN_DEX_TORBALLMON,
    HOENN_DEX_TSUMEMON,
    HOENN_DEX_TSUNOMON,
    HOENN_DEX_TUMBLEMON,
    HOENN_DEX_UPAMON,
    HOENN_DEX_VIXIMON,
    HOENN_DEX_WANYAMON,
    HOENN_DEX_YOKOMON,
    HOENN_DEX_AGUMON,
    HOENN_DEX_AGUMON_06,
    HOENN_DEX_AGUMON_EXPERT,
    HOENN_DEX_AGUMON_X,
    HOENN_DEX_ANGORAMON,
    HOENN_DEX_ARCADIAMON_ROOKIE,
    HOENN_DEX_BEARMON,
    HOENN_DEX_BETAMON,
    HOENN_DEX_BETAMON_X,
    HOENN_DEX_BULUCOMON,
    HOENN_DEX_BURGERMON,
    HOENN_DEX_SAMUAGUMON,
    HOENN_DEX_CANDLEMON,
    HOENN_DEX_CHIKURIMON,
    HOENN_DEX_CHUUMON,
    HOENN_DEX_CORONAMON,
    HOENN_DEX_CRABMON,
    HOENN_DEX_CRABMON_X,
    HOENN_DEX_CUTEMON,
    HOENN_DEX_DAMEMON,
    HOENN_DEX_DEMIDEVMON,
    HOENN_DEX_DOKUNEMON,
    HOENN_DEX_DONDOKOMON,
    HOENN_DEX_DORUMON,
    HOENN_DEX_DOTAGUMON,
    HOENN_DEX_DOTFALCMON,
    HOENN_DEX_DRACMON,
    HOENN_DEX_DRACOMON,
    HOENN_DEX_DRACOMON_X,
    HOENN_DEX_EBIBURGMON,
    HOENN_DEX_EKAKIMON,
    HOENN_DEX_ELECMON,
    HOENN_DEX_ELECMON_VIOLET,
    HOENN_DEX_ESPIMON,
    HOENN_DEX_AGUMON_FAKE_EXPERT,
    HOENN_DEX_FALCOMON,
    HOENN_DEX_FALCOMON_06,
    HOENN_DEX_FANBEEMON,
    HOENN_DEX_FLAMEMON,
    HOENN_DEX_FLORAMON,
    HOENN_DEX_GABUMON,
    HOENN_DEX_GABUMON_X,
    HOENN_DEX_GAMMAMON,
    HOENN_DEX_GAOMON,
    HOENN_DEX_GAOSSMON,
    HOENN_DEX_GAZIMON,
    HOENN_DEX_GAZIMON_X,
    HOENN_DEX_GHOSTMON,
    HOENN_DEX_GIZAMON,
    HOENN_DEX_GIZUMON,
    HOENN_DEX_GOBLIMON,
    HOENN_DEX_GOMAMON,
    HOENN_DEX_GOMAMON_X,
    HOENN_DEX_GUMDRAMON,
    HOENN_DEX_HAGURUMON,
    HOENN_DEX_HAGURUMON_X,
    HOENN_DEX_HYOKOMON,
    HOENN_DEX_IGNITEMON,
    HOENN_DEX_IMPMON,
    HOENN_DEX_JUNKMON,
    HOENN_DEX_KAMEMON,
    HOENN_DEX_KERAMON,
    HOENN_DEX_KERAMON_X,
    HOENN_DEX_KODOKGUMON,
    HOENN_DEX_KOKABUIMON,
    HOENN_DEX_KOKUWAMON,
    HOENN_DEX_KOKUWAMON_X,
    HOENN_DEX_KOTEMON,
    HOENN_DEX_KUDAMON,
    HOENN_DEX_KUDAMON_06,
    HOENN_DEX_KUNEMON,
    HOENN_DEX_LABRAMON,
    HOENN_DEX_LALAMON,
    HOENN_DEX_LIOLLMON,
    HOENN_DEX_LOOGAMON,
    HOENN_DEX_LOPMON,
    HOENN_DEX_LUDOMON,
    HOENN_DEX_LUNAMON,
    HOENN_DEX_LUXMON,
    HOENN_DEX_METABEE,
    HOENN_DEX_KODEKACMON,
    HOENN_DEX_MODBETAMON,
    HOENN_DEX_MONITAMON,
    HOENN_DEX_MONMON,
    HOENN_DEX_MONODRAMON,
    HOENN_DEX_MORPHOMON,
    HOENN_DEX_MUSHROOMON,
    HOENN_DEX_NEEMON,
    HOENN_DEX_OTAMAMON,
    HOENN_DEX_PALMON,
    HOENN_DEX_PALMON_X,
    HOENN_DEX_PAWNMON,
    HOENN_DEX_PAWNMON_WHITE,
    HOENN_DEX_PENGUINMON,
    HOENN_DEX_PETITMAMON,
    HOENN_DEX_PILLOMON,
    HOENN_DEX_POMUMON,
    HOENN_DEX_RENAMON_X,
    HOENN_DEX_ROKUSHO,
    HOENN_DEX_RYUDAMON,
    HOENN_DEX_SALAMON,
    HOENN_DEX_SALAMON_X,
    HOENN_DEX_SANGOMON,
    HOENN_DEX_SANTAAGUMON,
    HOENN_DEX_BLKTOYAMON,
    HOENN_DEX_SHAMANMON,
    HOENN_DEX_SHOUTMON,
    HOENN_DEX_YUKIAGUMON,
    HOENN_DEX_YUKIAGUMON_06,
    HOENN_DEX_ICEGOBIMON,
    HOENN_DEX_SOLARMON,
    HOENN_DEX_SOUNBRDMON,
    HOENN_DEX_SPADAMON,
    HOENN_DEX_SPARROWMON,
    HOENN_DEX_STARMON_2010,
    HOENN_DEX_STRABIMON,
    HOENN_DEX_OLD_UNOWN_B,
    HOENN_DEX_OLD_UNOWN_C,
    HOENN_DEX_OLD_UNOWN_D,
    HOENN_DEX_OLD_UNOWN_E,
    HOENN_DEX_OLD_UNOWN_F,
    HOENN_DEX_OLD_UNOWN_G,
    HOENN_DEX_OLD_UNOWN_H,
    HOENN_DEX_OLD_UNOWN_I,
    HOENN_DEX_OLD_UNOWN_J,
    HOENN_DEX_OLD_UNOWN_K,
    HOENN_DEX_OLD_UNOWN_L,
    HOENN_DEX_OLD_UNOWN_M,
    HOENN_DEX_OLD_UNOWN_N,
    HOENN_DEX_OLD_UNOWN_O,
    HOENN_DEX_OLD_UNOWN_P,
    HOENN_DEX_OLD_UNOWN_Q,
    HOENN_DEX_OLD_UNOWN_R,
    HOENN_DEX_OLD_UNOWN_S,
    HOENN_DEX_OLD_UNOWN_T,
    HOENN_DEX_OLD_UNOWN_U,
    HOENN_DEX_OLD_UNOWN_V,
    HOENN_DEX_OLD_UNOWN_W,
    HOENN_DEX_OLD_UNOWN_X,
    HOENN_DEX_OLD_UNOWN_Y,
    HOENN_DEX_OLD_UNOWN_Z,
};

#define HOENN_DEX_COUNT HOENN_DEX_DEOXYS

#endif // GUARD_CONSTANTS_POKEDEX_H
