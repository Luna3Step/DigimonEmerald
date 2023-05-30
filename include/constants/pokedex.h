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
    NATIONAL_DEX_TYPHLOSION,
    NATIONAL_DEX_TOTODILE,
    NATIONAL_DEX_CROCONAW,
    NATIONAL_DEX_FERALIGATR,
    NATIONAL_DEX_SENTRET,
    NATIONAL_DEX_FURRET,
    NATIONAL_DEX_HOOTHOOT,
    NATIONAL_DEX_NOCTOWL,
    NATIONAL_DEX_LEDYBA,
    NATIONAL_DEX_LEDIAN,
    NATIONAL_DEX_SPINARAK,
    NATIONAL_DEX_ARIADOS,
    NATIONAL_DEX_CROBAT,
    NATIONAL_DEX_CHINCHOU,
    NATIONAL_DEX_LANTURN,
    NATIONAL_DEX_PICHU,
    NATIONAL_DEX_CLEFFA,
    NATIONAL_DEX_IGGLYBUFF,
    NATIONAL_DEX_TOGEPI,
    NATIONAL_DEX_TOGETIC,
    NATIONAL_DEX_NATU,
    NATIONAL_DEX_XATU,
    NATIONAL_DEX_MAREEP,
    NATIONAL_DEX_FLAAFFY,
    NATIONAL_DEX_AMPHAROS,
    NATIONAL_DEX_BELLOSSOM,
    NATIONAL_DEX_MARILL,
    NATIONAL_DEX_AZUMARILL,
    NATIONAL_DEX_SUDOWOODO,
    NATIONAL_DEX_POLITOED,
    NATIONAL_DEX_HOPPIP,
    NATIONAL_DEX_SKIPLOOM,
    NATIONAL_DEX_JUMPLUFF,
    NATIONAL_DEX_AIPOM,
    NATIONAL_DEX_SUNKERN,
    NATIONAL_DEX_SUNFLORA,
    NATIONAL_DEX_YANMA,
    NATIONAL_DEX_WOOPER,
    NATIONAL_DEX_QUAGSIRE,
    NATIONAL_DEX_ESPEON,
    NATIONAL_DEX_UMBREON,
    NATIONAL_DEX_MURKROW,
    NATIONAL_DEX_SLOWKING,
    NATIONAL_DEX_MISDREAVUS,
    NATIONAL_DEX_UNOWN,
    NATIONAL_DEX_WOBBUFFET,
    NATIONAL_DEX_GIRAFARIG,
    NATIONAL_DEX_PINECO,
    NATIONAL_DEX_FORRETRESS,
    NATIONAL_DEX_DUNSPARCE,
    NATIONAL_DEX_GLIGAR,
    NATIONAL_DEX_STEELIX,
    NATIONAL_DEX_SNUBBULL,
    NATIONAL_DEX_GRANBULL,
    NATIONAL_DEX_QWILFISH,
    NATIONAL_DEX_SCIZOR,
    NATIONAL_DEX_SHUCKLE,
    NATIONAL_DEX_HERACROSS,
    NATIONAL_DEX_SNEASEL,
    NATIONAL_DEX_TEDDIURSA,
    NATIONAL_DEX_URSARING,
    NATIONAL_DEX_SLUGMA,
    NATIONAL_DEX_MAGCARGO,
    NATIONAL_DEX_SWINUB,
    NATIONAL_DEX_PILOSWINE,
    NATIONAL_DEX_CORSOLA,
    NATIONAL_DEX_REMORAID,
    NATIONAL_DEX_OCTILLERY,
    NATIONAL_DEX_DELIBIRD,
    NATIONAL_DEX_MANTINE,
    NATIONAL_DEX_SKARMORY,
    NATIONAL_DEX_HOUNDOUR,
    NATIONAL_DEX_HOUNDOOM,
    NATIONAL_DEX_KINGDRA,
    NATIONAL_DEX_PHANPY,
    NATIONAL_DEX_DONPHAN,
    NATIONAL_DEX_PORYGON2,
    NATIONAL_DEX_STANTLER,
    NATIONAL_DEX_SMEARGLE,
    NATIONAL_DEX_TYROGUE,
    NATIONAL_DEX_HITMONTOP,
    NATIONAL_DEX_SMOOCHUM,
    NATIONAL_DEX_ELEKID,
    NATIONAL_DEX_MAGBY,
    NATIONAL_DEX_MILTANK,
    NATIONAL_DEX_BLISSEY,
    NATIONAL_DEX_RAIKOU,
    NATIONAL_DEX_ENTEI,
    NATIONAL_DEX_SUICUNE,
    NATIONAL_DEX_LARVITAR,
    NATIONAL_DEX_PUPITAR,
    NATIONAL_DEX_TYRANITAR,
    NATIONAL_DEX_LUGIA,
    NATIONAL_DEX_HO_OH,
    NATIONAL_DEX_CELEBI,
    // Hoenn
    NATIONAL_DEX_TREECKO,
    NATIONAL_DEX_GROVYLE,
    NATIONAL_DEX_SCEPTILE,
    NATIONAL_DEX_TORCHIC,
    NATIONAL_DEX_COMBUSKEN,
    NATIONAL_DEX_BLAZIKEN,
    NATIONAL_DEX_MUDKIP,
    NATIONAL_DEX_MARSHTOMP,
    NATIONAL_DEX_SWAMPERT,
    NATIONAL_DEX_POOCHYENA,
    NATIONAL_DEX_MIGHTYENA,
    NATIONAL_DEX_ZIGZAGOON,
    NATIONAL_DEX_LINOONE,
    NATIONAL_DEX_WURMPLE,
    NATIONAL_DEX_SILCOON,
    NATIONAL_DEX_BEAUTIFLY,
    NATIONAL_DEX_CASCOON,
    NATIONAL_DEX_DUSTOX,
    NATIONAL_DEX_LOTAD,
    NATIONAL_DEX_LOMBRE,
    NATIONAL_DEX_LUDICOLO,
    NATIONAL_DEX_SEEDOT,
    NATIONAL_DEX_NUZLEAF,
    NATIONAL_DEX_SHIFTRY,
    NATIONAL_DEX_TAILLOW,
    NATIONAL_DEX_SWELLOW,
    NATIONAL_DEX_WINGULL,
    NATIONAL_DEX_PELIPPER,
    NATIONAL_DEX_RALTS,
    NATIONAL_DEX_KIRLIA,
    NATIONAL_DEX_GARDEVOIR,
    NATIONAL_DEX_SURSKIT,
    NATIONAL_DEX_MASQUERAIN,
    NATIONAL_DEX_SHROOMISH,
    NATIONAL_DEX_BRELOOM,
    NATIONAL_DEX_SLAKOTH,
    NATIONAL_DEX_VIGOROTH,
    NATIONAL_DEX_SLAKING,
    NATIONAL_DEX_NINCADA,
    NATIONAL_DEX_NINJASK,
    NATIONAL_DEX_SHEDINJA,
    NATIONAL_DEX_WHISMUR,
    NATIONAL_DEX_LOUDRED,
    NATIONAL_DEX_EXPLOUD,
    NATIONAL_DEX_MAKUHITA,
    NATIONAL_DEX_HARIYAMA,
    NATIONAL_DEX_AZURILL,
    NATIONAL_DEX_NOSEPASS,
    NATIONAL_DEX_SKITTY,
    NATIONAL_DEX_DELCATTY,
    NATIONAL_DEX_SABLEYE,
    NATIONAL_DEX_MAWILE,
    NATIONAL_DEX_ARON,
    NATIONAL_DEX_LAIRON,
    NATIONAL_DEX_AGGRON,
    NATIONAL_DEX_MEDITITE,
    NATIONAL_DEX_MEDICHAM,
    NATIONAL_DEX_ELECTRIKE,
    NATIONAL_DEX_MANECTRIC,
    NATIONAL_DEX_PLUSLE,
    NATIONAL_DEX_MINUN,
    NATIONAL_DEX_VOLBEAT,
    NATIONAL_DEX_ILLUMISE,
    NATIONAL_DEX_ROSELIA,
    NATIONAL_DEX_GULPIN,
    NATIONAL_DEX_SWALOT,
    NATIONAL_DEX_CARVANHA,
    NATIONAL_DEX_SHARPEDO,
    NATIONAL_DEX_WAILMER,
    NATIONAL_DEX_WAILORD,
    NATIONAL_DEX_NUMEL,
    NATIONAL_DEX_CAMERUPT,
    NATIONAL_DEX_TORKOAL,
    NATIONAL_DEX_SPOINK,
    NATIONAL_DEX_GRUMPIG,
    NATIONAL_DEX_SPINDA,
    NATIONAL_DEX_TRAPINCH,
    NATIONAL_DEX_VIBRAVA,
    NATIONAL_DEX_FLYGON,
    NATIONAL_DEX_CACNEA,
    NATIONAL_DEX_CACTURNE,
    NATIONAL_DEX_SWABLU,
    NATIONAL_DEX_ALTARIA,
    NATIONAL_DEX_ZANGOOSE,
    NATIONAL_DEX_SEVIPER,
    NATIONAL_DEX_LUNATONE,
    NATIONAL_DEX_SOLROCK,
    NATIONAL_DEX_BARBOACH,
    NATIONAL_DEX_WHISCASH,
    NATIONAL_DEX_CORPHISH,
    NATIONAL_DEX_CRAWDAUNT,
    NATIONAL_DEX_BALTOY,
    NATIONAL_DEX_CLAYDOL,
    NATIONAL_DEX_LILEEP,
    NATIONAL_DEX_CRADILY,
    NATIONAL_DEX_ANORITH,
    NATIONAL_DEX_ARMALDO,
    NATIONAL_DEX_FEEBAS,
    NATIONAL_DEX_MILOTIC,
    NATIONAL_DEX_CASTFORM,
    NATIONAL_DEX_KECLEON,
    NATIONAL_DEX_SHUPPET,
    NATIONAL_DEX_BANETTE,
    NATIONAL_DEX_DUSKULL,
    NATIONAL_DEX_DUSCLOPS,
    NATIONAL_DEX_TROPIUS,
    NATIONAL_DEX_CHIMECHO,
    NATIONAL_DEX_ABSOL,
    NATIONAL_DEX_WYNAUT,
    NATIONAL_DEX_SNORUNT,
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
#define JOHTO_DEX_COUNT     NATIONAL_DEX_CELEBI
#define NATIONAL_DEX_COUNT  NATIONAL_DEX_DEOXYS

// Hoenn Pokedex order
enum {
    HOENN_DEX_NONE,
    HOENN_DEX_TREECKO,
    HOENN_DEX_GROVYLE,
    HOENN_DEX_SCEPTILE,
    HOENN_DEX_TORCHIC,
    HOENN_DEX_COMBUSKEN,
    HOENN_DEX_BLAZIKEN,
    HOENN_DEX_MUDKIP,
    HOENN_DEX_MARSHTOMP,
    HOENN_DEX_SWAMPERT,
    HOENN_DEX_POOCHYENA,
    HOENN_DEX_MIGHTYENA,
    HOENN_DEX_ZIGZAGOON,
    HOENN_DEX_LINOONE,
    HOENN_DEX_WURMPLE,
    HOENN_DEX_SILCOON,
    HOENN_DEX_BEAUTIFLY,
    HOENN_DEX_CASCOON,
    HOENN_DEX_DUSTOX,
    HOENN_DEX_LOTAD,
    HOENN_DEX_LOMBRE,
    HOENN_DEX_LUDICOLO,
    HOENN_DEX_SEEDOT,
    HOENN_DEX_NUZLEAF,
    HOENN_DEX_SHIFTRY,
    HOENN_DEX_TAILLOW,
    HOENN_DEX_SWELLOW,
    HOENN_DEX_WINGULL,
    HOENN_DEX_PELIPPER,
    HOENN_DEX_RALTS,
    HOENN_DEX_KIRLIA,
    HOENN_DEX_GARDEVOIR,
    HOENN_DEX_SURSKIT,
    HOENN_DEX_MASQUERAIN,
    HOENN_DEX_SHROOMISH,
    HOENN_DEX_BRELOOM,
    HOENN_DEX_SLAKOTH,
    HOENN_DEX_VIGOROTH,
    HOENN_DEX_SLAKING,
    HOENN_DEX_HOPMON,
    HOENN_DEX_KAKKINMON,
    HOENN_DEX_KAPURIMON,
    HOENN_DEX_NINCADA,
    HOENN_DEX_NINJASK,
    HOENN_DEX_SHEDINJA,
    HOENN_DEX_WHISMUR,
    HOENN_DEX_LOUDRED,
    HOENN_DEX_EXPLOUD,
    HOENN_DEX_MAKUHITA,
    HOENN_DEX_HARIYAMA,
    HOENN_DEX_BLKAGUMON_X,
    HOENN_DEX_BLKGABUMON,
    HOENN_DEX_HAZYAGUMON,
    HOENN_DEX_COMMDRAMON,
    HOENN_DEX_AZURILL,
    HOENN_DEX_MARILL,
    HOENN_DEX_AZUMARILL,
    HOENN_DEX_MONIMON,
    HOENN_DEX_MOONMON,
    HOENN_DEX_MOTIMON,
    HOENN_DEX_NOSEPASS,
    HOENN_DEX_SKITTY,
    HOENN_DEX_DELCATTY,
    HOENN_DEX_ICEBOTAMON,
    HOENN_DEX_YURAMON,
    HOENN_DEX_CROBAT,
    HOENN_DEX_MINOMON,
    HOENN_DEX_MISSIMON,
    HOENN_DEX_SABLEYE,
    HOENN_DEX_MAWILE,
    HOENN_DEX_ARON,
    HOENN_DEX_LAIRON,
    HOENN_DEX_AGGRON,
    HOENN_DEX_KOKOMON,
    HOENN_DEX_KOROMON,
    HOENN_DEX_KOZENIMON,
    HOENN_DEX_MEDITITE,
    HOENN_DEX_MEDICHAM,
    HOENN_DEX_ELECTRIKE,
    HOENN_DEX_MANECTRIC,
    HOENN_DEX_PLUSLE,
    HOENN_DEX_MINUN,
    HOENN_DEX_PICKMON_WHITE,
    HOENN_DEX_PICKMON_RED,
    HOENN_DEX_XIAOMON,
    HOENN_DEX_YAAMON,
    HOENN_DEX_VOLBEAT,
    HOENN_DEX_ILLUMISE,
    HOENN_DEX_ZERIMON,
    HOENN_DEX_ZURUMON,
    HOENN_DEX_ARCADIAMON_IT,
    HOENN_DEX_BELLOSSOM,
    HOENN_DEX_POROMON,
    HOENN_DEX_PUROROMON,
    HOENN_DEX_ROSELIA,
    HOENN_DEX_GULPIN,
    HOENN_DEX_SWALOT,
    HOENN_DEX_CARVANHA,
    HOENN_DEX_SHARPEDO,
    HOENN_DEX_WAILMER,
    HOENN_DEX_WAILORD,
    HOENN_DEX_NUMEL,
    HOENN_DEX_CAMERUPT,
    HOENN_DEX_SLUGMA,
    HOENN_DEX_MAGCARGO,
    HOENN_DEX_TORKOAL,
    HOENN_DEX_SAKUTTOMON,
    HOENN_DEX_SUNMON,
    HOENN_DEX_ARGOMON_ROOKIE,
    HOENN_DEX_ARMADILMON,
    HOENN_DEX_SPOINK,
    HOENN_DEX_GRUMPIG,
    HOENN_DEX_POPOMON,
    HOENN_DEX_POYOMON,
    HOENN_DEX_SPINDA,
    HOENN_DEX_SKARMORY,
    HOENN_DEX_TRAPINCH,
    HOENN_DEX_VIBRAVA,
    HOENN_DEX_FLYGON,
    HOENN_DEX_CACNEA,
    HOENN_DEX_CACTURNE,
    HOENN_DEX_SWABLU,
    HOENN_DEX_ALTARIA,
    HOENN_DEX_ZANGOOSE,
    HOENN_DEX_SEVIPER,
    HOENN_DEX_LUNATONE,
    HOENN_DEX_SOLROCK,
    HOENN_DEX_BARBOACH,
    HOENN_DEX_WHISCASH,
    HOENN_DEX_CORPHISH,
    HOENN_DEX_CRAWDAUNT,
    HOENN_DEX_BALTOY,
    HOENN_DEX_CLAYDOL,
    HOENN_DEX_LILEEP,
    HOENN_DEX_CRADILY,
    HOENN_DEX_ANORITH,
    HOENN_DEX_ARMALDO,
    HOENN_DEX_IGGLYBUFF,
    HOENN_DEX_SANDMON,
    HOENN_DEX_TSUBUMON,
    HOENN_DEX_FEEBAS,
    HOENN_DEX_MILOTIC,
    HOENN_DEX_CASTFORM,
    HOENN_DEX_BLKGUILMON,
    HOENN_DEX_BOKOMON,
    HOENN_DEX_KECLEON,
    HOENN_DEX_SHUPPET,
    HOENN_DEX_BANETTE,
    HOENN_DEX_DUSKULL,
    HOENN_DEX_DUSCLOPS,
    HOENN_DEX_TROPIUS,
    HOENN_DEX_CHIMECHO,
    HOENN_DEX_ABSOL,
    HOENN_DEX_RELEMON,
    HOENN_DEX_SAKUMON,
    HOENN_DEX_PICHU,
    HOENN_DEX_PETITMON,
    HOENN_DEX_PICHIMON,
    HOENN_DEX_CHICCHIMON,
    HOENN_DEX_DEMMERAMON,
    HOENN_DEX_WYNAUT,
    HOENN_DEX_WOBBUFFET,
    HOENN_DEX_NATU,
    HOENN_DEX_XATU,
    HOENN_DEX_GIRAFARIG,
    HOENN_DEX_PHANPY,
    HOENN_DEX_DONPHAN,
    HOENN_DEX_TYUTYUMON,
    HOENN_DEX_HERACROSS,
    HOENN_DEX_ARURAUMON,
    HOENN_DEX_BAKOMON,
    HOENN_DEX_SNORUNT,
    HOENN_DEX_GLALIE,
    HOENN_DEX_SPHEAL,
    HOENN_DEX_SEALEO,
    HOENN_DEX_WALREIN,
    HOENN_DEX_CLAMPERL,
    HOENN_DEX_HUNTAIL,
    HOENN_DEX_GOREBYSS,
    HOENN_DEX_RELICANTH,
    HOENN_DEX_CORSOLA,
    HOENN_DEX_CHINCHOU,
    HOENN_DEX_LANTURN,
    HOENN_DEX_LUVDISC,
    HOENN_DEX_BIYOMON,
    HOENN_DEX_BLKAGUMON,
    HOENN_DEX_KINGDRA,
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
    HOENN_DEX_TYPHLOSION,
    HOENN_DEX_TOTODILE,
    HOENN_DEX_CROCONAW,
    HOENN_DEX_FERALIGATR,
    HOENN_DEX_SENTRET,
    HOENN_DEX_FURRET,
    HOENN_DEX_HOOTHOOT,
    HOENN_DEX_NOCTOWL,
    HOENN_DEX_LEDYBA,
    HOENN_DEX_LEDIAN,
    HOENN_DEX_SPINARAK,
    HOENN_DEX_ARIADOS,
    HOENN_DEX_CLEFFA,
    HOENN_DEX_TOGEPI,
    HOENN_DEX_TOGETIC,
    HOENN_DEX_MAREEP,
    HOENN_DEX_FLAAFFY,
    HOENN_DEX_AMPHAROS,
    HOENN_DEX_SUDOWOODO,
    HOENN_DEX_POLITOED,
    HOENN_DEX_HOPPIP,
    HOENN_DEX_SKIPLOOM,
    HOENN_DEX_JUMPLUFF,
    HOENN_DEX_AIPOM,
    HOENN_DEX_SUNKERN,
    HOENN_DEX_SUNFLORA,
    HOENN_DEX_YANMA,
    HOENN_DEX_WOOPER,
    HOENN_DEX_QUAGSIRE,
    HOENN_DEX_ESPEON,
    HOENN_DEX_UMBREON,
    HOENN_DEX_MURKROW,
    HOENN_DEX_SLOWKING,
    HOENN_DEX_MISDREAVUS,
    HOENN_DEX_UNOWN,
    HOENN_DEX_PINECO,
    HOENN_DEX_FORRETRESS,
    HOENN_DEX_DUNSPARCE,
    HOENN_DEX_GLIGAR,
    HOENN_DEX_STEELIX,
    HOENN_DEX_SNUBBULL,
    HOENN_DEX_GRANBULL,
    HOENN_DEX_QWILFISH,
    HOENN_DEX_SCIZOR,
    HOENN_DEX_SHUCKLE,
    HOENN_DEX_SNEASEL,
    HOENN_DEX_TEDDIURSA,
    HOENN_DEX_URSARING,
    HOENN_DEX_SWINUB,
    HOENN_DEX_PILOSWINE,
    HOENN_DEX_REMORAID,
    HOENN_DEX_OCTILLERY,
    HOENN_DEX_DELIBIRD,
    HOENN_DEX_MANTINE,
    HOENN_DEX_HOUNDOUR,
    HOENN_DEX_HOUNDOOM,
    HOENN_DEX_PORYGON2,
    HOENN_DEX_STANTLER,
    HOENN_DEX_SMEARGLE,
    HOENN_DEX_TYROGUE,
    HOENN_DEX_HITMONTOP,
    HOENN_DEX_SMOOCHUM,
    HOENN_DEX_ELEKID,
    HOENN_DEX_MAGBY,
    HOENN_DEX_MILTANK,
    HOENN_DEX_BLISSEY,
    HOENN_DEX_RAIKOU,
    HOENN_DEX_ENTEI,
    HOENN_DEX_SUICUNE,
    HOENN_DEX_LARVITAR,
    HOENN_DEX_PUPITAR,
    HOENN_DEX_TYRANITAR,
    HOENN_DEX_LUGIA,
    HOENN_DEX_HO_OH,
    HOENN_DEX_CELEBI,
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
