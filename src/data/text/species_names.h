const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = _("??????????"),
    [SPECIES_ARGOMON_F] = _("ARGOMON"),
    [SPECIES_BOMBMON] = _("BOMBMON"),
    [SPECIES_BOMMON] = _("BOMMON"),
    [SPECIES_BOTAMON] = _("BOTAMON"),
    [SPECIES_CHIBICKMON] = _("CHIBICKMON"),
    [SPECIES_CHIBOMON] = _("CHIBOMON"),
    [SPECIES_CONOMON] = _("CONOMON"),
    [SPECIES_COTSUCOMON] = _("COTSUCOMON"),
    [SPECIES_CURIMON] = _("CURIMON"),
    [SPECIES_DATIRIMON] = _("DATIRIMON"),
    [SPECIES_DODOMON] = _("DODOMON"),
    [SPECIES_DOKIMON] = _("DOKIMON"),
    [SPECIES_FUFUMON] = _("FUFUMON"),
    [SPECIES_JYARIMON] = _("JYARIMON"),
    [SPECIES_KEEMON] = _("KEEMON"),
    [SPECIES_KETOMON] = _("KETOMON"),
    [SPECIES_KURAMON] = _("KURAMON"),
    [SPECIES_LEAFMON] = _("LEAFMON"),
    [SPECIES_CHOROMON] = _("CHOROMON"),
    [SPECIES_MOKUMON] = _("MOKUMON"),
    [SPECIES_NYOKIMON] = _("NYOKIMON"),
    [SPECIES_PABUMON] = _("PABUMON"),
    [SPECIES_PAFUMON] = _("PAFUMON"),
    [SPECIES_PAOMON] = _("PAOMON"),
    [SPECIES_PETITMON] = _("PETITMON"),
    [SPECIES_PICHIMON] = _("PICHIMON"),
    [SPECIES_POPOMON] = _("POPOMON"),
    [SPECIES_POYOMON] = _("POYOMON"),
    [SPECIES_PUNIMON] = _("PUNIMON"),
    [SPECIES_PUPUMON] = _("PUPUMON"),
    [SPECIES_PURURUMON] = _("PURURUMON"),
    [SPECIES_PUSUMON] = _("PUSUMON"),
    [SPECIES_PUTTIMON] = _("PUTTIMON"),
    [SPECIES_PUWAMON] = _("PUWAMON"),
    [SPECIES_PUYOMON] = _("PUYOMON"),
    [SPECIES_PYONMON] = _("PYONMON"),
    [SPECIES_RELEMON] = _("RELEMON"),
    [SPECIES_SAKUMON] = _("SAKUMON"),
    [SPECIES_SANDMON] = _("SANDMON"),
    [SPECIES_TSUBUMON] = _("TSUBUMON"),
    [SPECIES_ICEBOTAMON] = _("ICEBOTAMON"),
    [SPECIES_YURAMON] = _("YURAMON"),
    [SPECIES_ZERIMON] = _("ZERIMON"),
    [SPECIES_ZURUMON] = _("ZURUMON"),
    [SPECIES_ARCADIAMON_IT] = _("ARCADIAMON"),
    [SPECIES_ARGOMON_IT] = _("ARGOMON"),
    [SPECIES_BABYDMON] = _("BABYDMON"),
    [SPECIES_BIBIMON] = _("BIBIMON"),
    [SPECIES_BOSAMON] = _("BOSAMON"),
    [SPECIES_BUDMON] = _("BUDMON"),
    [SPECIES_BUKAMON] = _("BUKAMON"),
    [SPECIES_CALUMON] = _("CALUMON"),
    [SPECIES_CHAPMON] = _("CHAPMON"),
    [SPECIES_CHICCHIMON] = _("CHICCHIMON"),
    [SPECIES_DEMMERAMON] = _("DEMMERAMON"),
    [SPECIES_DEMIVEEMON] = _("DEMIVEEMON"),
    [SPECIES_DORIMON] = _("DORIMON"),
    [SPECIES_FRIMON] = _("FRIMON"),
    [SPECIES_GIGIMON] = _("GIGIMON"),
    [SPECIES_GUMMYMON] = _("GUMMYMON"),
    [SPECIES_GURIMON] = _("GURIMON"),
    [SPECIES_HIYARIMON] = _("HIYARIMON"),
    [SPECIES_HOPMON] = _("HOPMON"),
    [SPECIES_KAKKINMON] = _("KAKKINMON"),
    [SPECIES_KAPURIMON] = _("KAPURIMON"),
    [SPECIES_KOKOMON] = _("KOKOMON"),
    [SPECIES_KOROMON] = _("KOROMON"),
    [SPECIES_KOZENIMON] = _("KOZENIMON"),
    [SPECIES_KYAROMON] = _("KYAROMON"),
    [SPECIES_KYOKYOMON] = _("KYOKYOMON"),
    [SPECIES_KYUPIMON] = _("KYUPIMON"),
    [SPECIES_MINOMON] = _("MINOMON"),
    [SPECIES_MISSIMON] = _("MISSIMON"),
    [SPECIES_MONIMON] = _("MONIMON"),
    [SPECIES_MOONMON] = _("MOONMON"),
    [SPECIES_MOTIMON] = _("MOTIMON"),
    [SPECIES_NEGAMON] = _("NEGAMON"),
    [SPECIES_NYAROMON] = _("NYAROMON"),
    [SPECIES_PAGUMON] = _("PAGUMON"),
    [SPECIES_PICKMON_SILVER] = _("PICKMON"),
    [SPECIES_PICKMON_WHITE] = _("PICKMON"),
    [SPECIES_PICKMON_RED] = _("PICKMON"),
    [SPECIES_PINAMON] = _("PINAMON"),
    [SPECIES_POROMON] = _("POROMON"),
    [SPECIES_PUROROMON] = _("PUROROMON"),
    [SPECIES_PUSURIMON] = _("PUSURIMON"),
    [SPECIES_PUYOYOMON] = _("PUYOYOMON"),
    [SPECIES_SAKUTTOMON] = _("SAKUTTOMON"),
    [SPECIES_SUNMON] = _("SUNMON"),
    [SPECIES_TANEMON] = _("TANEMON"),
    [SPECIES_TOKOMON] = _("TOKOMON"),
    [SPECIES_TOKOMON_X] = _("TOKOMON"),
    [SPECIES_TORBALLMON] = _("TORBALLMON"),
    [SPECIES_TSUMEMON] = _("TSUMEMON"),
    [SPECIES_TSUNOMON] = _("TSUNOMON"),
    [SPECIES_TUMBLEMON] = _("TUMBLEMON"),
    [SPECIES_UPAMON] = _("UPAMON"),
    [SPECIES_VIXIMON] = _("VIXIMON"),
    [SPECIES_WANYAMON] = _("WANYAMON"),
    [SPECIES_XIAOMON] = _("XIAOMON"),
    [SPECIES_YAAMON] = _("YAAMON"),
    [SPECIES_YOKOMON] = _("YOKOMON"),
    [SPECIES_AGUMON] = _("AGUMON"),
    [SPECIES_AGUMON_06] = _("AGUMON"),
    [SPECIES_AGUMON_EXPERT] = _("AGUMON EXP"),
    [SPECIES_AGUMON_X] = _("AGUMON"),
    [SPECIES_ANGORAMON] = _("ANGORAMON"),
    [SPECIES_ARCADIAMON_ROOKIE] = _("ARCADIAMON"),
    [SPECIES_ARGOMON_ROOKIE] = _("ARGOMON"),
    [SPECIES_ARMADILMON] = _("ARMADILMON"),
    [SPECIES_ARURAUMON] = _("ARURAUMON"),
    [SPECIES_BAKOMON] = _("BAKOMON"),
    [SPECIES_BEARMON] = _("BEARMON"),
    [SPECIES_BETAMON] = _("BETAMON"),
    [SPECIES_BETAMON_X] = _("BETAMON"),
    [SPECIES_BIYOMON] = _("BIYOMON"),
    [SPECIES_BLKAGUMON] = _("BLKAGUMON"),
    [SPECIES_BLKAGUMON_X] = _("BLKAGUMON"),
    [SPECIES_BLKGABUMON] = _("BLKGABUMON"),
    [SPECIES_BLKGUILMON] = _("BLKGUILMON"),
    [SPECIES_BOKOMON] = _("BOKOMON"),
    [SPECIES_BULUCOMON] = _("MR. MIME"),
    [SPECIES_BURGERMON] = _("BURGERMON"),
    [SPECIES_SAMUAGUMON] = _("SAMUAGUMON"),
    [SPECIES_CANDLEMON] = _("CANDLEMON"),
    [SPECIES_CHIKURIMON] = _("CHIKURIMON"),
    [SPECIES_TYUTYUMON] = _("TYUTYUMON"),
    [SPECIES_CHUUMON] = _("CHUUMON"),
    [SPECIES_HAZYAGUMON] = _("HAZYAGUMON"),
    [SPECIES_COMMDRAMON] = _("COMMDRAMON"),
    [SPECIES_CORONAMON] = _("CORONAMON"),
    [SPECIES_CRABMON] = _("CRABMON"),
    [SPECIES_CRABMON_X] = _("CRABMON"),
    [SPECIES_CUTEMON] = _("CUTEMON"),
    [SPECIES_DAMEMON] = _("DAMEMON"),
    [SPECIES_DEMIDEVMON] = _("DEMIDEVMON"),
    [SPECIES_DOKUNEMON] = _("DOKUNEMON"),
    [SPECIES_DONDOKOMON] = _("DONDOKOMON"),
    [SPECIES_DORUMON] = _("DORUMON"),
    [SPECIES_DOTAGUMON] = _("DOTAGUMON"),
    [SPECIES_DOTFALCMON] = _("DOTFALCMON"),
    [SPECIES_DRACMON] = _("DRACMON"),
    [SPECIES_DRACOMON] = _("DRACOMON"),
    [SPECIES_DRACOMON_X] = _("DRACOMON"),
    [SPECIES_EBIBURGMON] = _("EBIBURGMON"),
    [SPECIES_EKAKIMON] = _("EKAKIMON"),
    [SPECIES_ELECMON] = _("ELECMON"),
    [SPECIES_ELECMON_VIOLET] = _("ELECMON"),
    [SPECIES_ESPIMON] = _("ESPIMON"),
    [SPECIES_AGUMON_FAKE_EXPERT] = _("NISEAGUMON"),
    [SPECIES_FALCOMON] = _("FALCOMON"),
    [SPECIES_FALCOMON_06] = _("FALCOMON"),
    [SPECIES_FANBEEMON] = _("FANBEEMON"),
    [SPECIES_FLAMEMON] = _("FLAMEMON"),
    [SPECIES_FLORAMON] = _("FLORAMON"),
    [SPECIES_GABUMON] = _("GABUMON"),
    [SPECIES_GABUMON_X] = _("GABUMON"),
    [SPECIES_GAMMAMON] = _("GAMMAMON"),
    [SPECIES_GAOMON] = _("GAOMON"),
    [SPECIES_GAOSSMON] = _("GAOSSMON"),
    [SPECIES_GAZIMON] = _("GAZIMON"),
    [SPECIES_GAZIMON_X] = _("GAZIMON"),
    [SPECIES_GHOSTMON] = _("GHOSTMON"),
    [SPECIES_GIZAMON] = _("GIZAMON"),
    [SPECIES_GIZUMON] = _("GIZUMON"),
    [SPECIES_GOBLIMON] = _("GOBLIMON"),
    [SPECIES_GOMAMON] = _("GOMAMON"),
    [SPECIES_GOMAMON_X] = _("GOMAMON"),
    [SPECIES_GOTSUMON] = _("GOTSUMON"),
    [SPECIES_GOTSUMON_X] = _("GOTSUMON"),
    [SPECIES_GUILMON] = _("GUILMON"),
    [SPECIES_GUILMON_X] = _("GUILMON"),
    [SPECIES_GUMDRAMON] = _("GUMDRAMON"),
    [SPECIES_HACKMON] = _("HACKMON"),
    [SPECIES_HAGURUMON] = _("HAGURUMON"),
    [SPECIES_HAGURUMON_X] = _("HAGURUMON"),
    [SPECIES_HAWKMON] = _("HAWKMON"),
    [SPECIES_HERISSMON] = _("HERISSMON"),
    [SPECIES_HYOKOMON] = _("HYOKOMON"),
    [SPECIES_IGNITEMON] = _("IGNITEMON"),
    [SPECIES_IMPMON] = _("IMPMON"),
    [SPECIES_IMPMON_X] = _("IMPMON"),
    [SPECIES_JAZAMON] = _("JAZAMON"),
    [SPECIES_JELLYMON] = _("JELLYMON"),
    [SPECIES_JUNKMON] = _("JUNKMON"),
    [SPECIES_KAMEMON] = _("KAMEMON"),
    [SPECIES_KERAMON] = _("KERAMON"),
    [SPECIES_KERAMON_X] = _("KERAMON"),
    [SPECIES_KODOKGUMON] = _("KODOKGUMON"),
    [SPECIES_KOKABUIMON] = _("KOKABUIMON"),
    [SPECIES_KOKUWAMON] = _("KOKUWAMON"),
    [SPECIES_KOKUWAMON_X] = _("KOKUWAMON"),
    [SPECIES_KOTEMON] = _("KOTEMON"),
    [SPECIES_KUDAMON] = _("KUDAMON"),
    [SPECIES_KUDAMON_06] = _("KUDAMON"),
    [SPECIES_KUNEMON] = _("KUNEMON"),
    [SPECIES_LABRAMON] = _("LABRAMON"),
    [SPECIES_LALAMON] = _("LALAMON"),
    [SPECIES_LIOLLMON] = _("LIOLLMON"),
    [SPECIES_LOOGAMON] = _("LOOGAMON"),
    [SPECIES_LOPMON] = _("LOPMON"),
    [SPECIES_LOPMON_X] = _("LOPMON"),
    [SPECIES_LUCEMON] = _("LUCEMON"),
    [SPECIES_LUDOMON] = _("LUDOMON"),
    [SPECIES_LUNAMON] = _("LUNAMON"),
    [SPECIES_LUXMON] = _("LUXMON"),
    [SPECIES_METABEE] = _("METABEE"),
    [SPECIES_KODEKACMON] = _("KODEKACMON"),
    [SPECIES_MODBETAMON] = _("MODBETAMON"),
    [SPECIES_MONITAMON] = _("MONITAMON"),
    [SPECIES_MONMON] = _("MONMON"),
    [SPECIES_MONODRAMON] = _("MONODRAMON"),
    [SPECIES_MORPHOMON] = _("MORPHOMON"),
    [SPECIES_MUCHOMON] = _("MUCHOMON"),
    [SPECIES_MUSHROOMON] = _("MUSHROOMON"),
    [SPECIES_NEEMON] = _("NEEMON"),
    [SPECIES_OTAMAMON] = _("OTAMAMON"),
    [SPECIES_OTAMAMON_RED] = _("OTAMAMON"),
    [SPECIES_OTAMAMON_X] = _("OTAMAMON"),
    [SPECIES_PALMON] = _("PALMON"),
    [SPECIES_PALMON_X] = _("PALMON"),
    [SPECIES_PATAMON] = _("PATAMON"),
    [SPECIES_PAWNMON] = _("PAWNMON"),
    [SPECIES_PAWNMON_WHITE] = _("PAWNMON"),
    [SPECIES_PENGUINMON] = _("PENGUINMON"),
    [SPECIES_PETITMAMON] = _("PETITMAMON"),
    [SPECIES_PHASCOMON] = _("PHASCOMON"),
    [SPECIES_PILLOMON] = _("PILLOMON"),
    [SPECIES_POMUMON] = _("POMUMON"),
    [SPECIES_PSYCHEMON] = _("PSYCHEMON"),
    [SPECIES_PULSEMON] = _("PULSEMON"),
    [SPECIES_RENAMON] = _("RENAMON"),
    [SPECIES_RENAMON_X] = _("RENAMON"),
    [SPECIES_ROKUSHO] = _("ROKUSHO"),
    [SPECIES_RYUDAMON] = _("RYUDAMON"),
    [SPECIES_SALAMON] = _("SALAMON"),
    [SPECIES_SALAMON_X] = _("SALAMON"),
    [SPECIES_SANGOMON] = _("SANGOMON"),
    [SPECIES_SANTAAGUMON] = _("AGUMON"),
    [SPECIES_BLKTOYAMON] = _("BLKTOYAMON"),
    [SPECIES_SHAMANMON] = _("SHAMANMON"),
    [SPECIES_SHOUTMON] = _("SHOUTMON"),
    [SPECIES_YUKIAGUMON] = _("YUKIAGUMON"),
    [SPECIES_YUKIAGUMON_06] = _("YUKIAGUMON"),
    [SPECIES_ICEGOBIMON] = _("ICEGOBIMON"),
    [SPECIES_SOLARMON] = _("SOLARMON"),
    [SPECIES_SOUNBRDMON] = _("SOUNBRDMON"),
    [SPECIES_SPADAMON] = _("SPADAMON"),
    [SPECIES_SPARROWMON] = _("SPARROWMON"),
    [SPECIES_STARMON_2010] = _("HO-OH"),
    [SPECIES_STRABIMON] = _("STRABIMON"),
    [SPECIES_OLD_UNOWN_B] = _("?"),
    [SPECIES_OLD_UNOWN_C] = _("?"),
    [SPECIES_OLD_UNOWN_D] = _("?"),
    [SPECIES_OLD_UNOWN_E] = _("?"),
    [SPECIES_OLD_UNOWN_F] = _("?"),
    [SPECIES_OLD_UNOWN_G] = _("?"),
    [SPECIES_OLD_UNOWN_H] = _("?"),
    [SPECIES_OLD_UNOWN_I] = _("?"),
    [SPECIES_OLD_UNOWN_J] = _("?"),
    [SPECIES_OLD_UNOWN_K] = _("?"),
    [SPECIES_OLD_UNOWN_L] = _("?"),
    [SPECIES_OLD_UNOWN_M] = _("?"),
    [SPECIES_OLD_UNOWN_N] = _("?"),
    [SPECIES_OLD_UNOWN_O] = _("?"),
    [SPECIES_OLD_UNOWN_P] = _("?"),
    [SPECIES_OLD_UNOWN_Q] = _("?"),
    [SPECIES_OLD_UNOWN_R] = _("?"),
    [SPECIES_OLD_UNOWN_S] = _("?"),
    [SPECIES_OLD_UNOWN_T] = _("?"),
    [SPECIES_OLD_UNOWN_U] = _("?"),
    [SPECIES_OLD_UNOWN_V] = _("?"),
    [SPECIES_OLD_UNOWN_W] = _("?"),
    [SPECIES_OLD_UNOWN_X] = _("?"),
    [SPECIES_OLD_UNOWN_Y] = _("?"),
    [SPECIES_OLD_UNOWN_Z] = _("?"),
    [SPECIES_SUNARZAMON] = _("SUNARZAMON"),
    [SPECIES_SWIMMON] = _("SWIMMON"),
    [SPECIES_SYAKOMON] = _("SYAKOMON"),
    [SPECIES_SYAKOMON_X] = _("SYAKOMON"),
    [SPECIES_TAPIRMON] = _("TAPIRMON"),
    [SPECIES_TENTOMON] = _("TENTOMON"),
    [SPECIES_TERRIERMON] = _("TERRIERMON"),
    [SPECIES_TERRIERMON_ASSISTANT] = _("TERRIERMON"),
    [SPECIES_TERRIERMON_X] = _("TERRIERMON"),
    [SPECIES_TINKERMON] = _("TINKERMON"),
    [SPECIES_TINPET] = _("TINPET"),
    [SPECIES_TOYAGUMON] = _("TOYAGUMON"),
    [SPECIES_TSUKAIMON] = _("TSUKAIMON"),
    [SPECIES_VEEMON] = _("VEEMON"),
    [SPECIES_VEMMON] = _("VEMMON"),
    [SPECIES_VORVOMON] = _("VORVOMON"),
    [SPECIES_WORMMON] = _("WORMMON"),
    [SPECIES_ZENIMON] = _("ZENIMON"),
    [SPECIES_ZUBAMON] = _("ZUBAMON"),
    [SPECIES_AEGIOMON] = _("AEGIOMON"),
    [SPECIES_AGUNIMON] = _("AGUNIMON"),
    [SPECIES_AIRDRAMON] = _("AIRDRAMON"),
    [SPECIES_AKATORIMON] = _("AKATORIMON"),
    [SPECIES_ALLOMON] = _("ALLOMON"),
    [SPECIES_NINCADA] = _("NINCADA"),
    [SPECIES_NINJASK] = _("NINJASK"),
    [SPECIES_SHEDINJA] = _("SHEDINJA"),
    [SPECIES_ALLOMON_X] = _("ALLOMON"),
    [SPECIES_ANGELAMON] = _("ANGELAMON"),
    [SPECIES_SHROOMISH] = _("SHROOMISH"),
    [SPECIES_BRELOOM] = _("BRELOOM"),
    [SPECIES_SPINDA] = _("SPINDA"),
    [SPECIES_ANGEMON] = _("ANGEMON"),
    [SPECIES_ANKYLOMON] = _("ANKYLOMON"),
    [SPECIES_ARCHELOMON] = _("ARCHELOMON"),
    [SPECIES_ARGOMON_CHAMPION] = _("ARGOMON"),
    [SPECIES_WAILMER] = _("WAILMER"),
    [SPECIES_WAILORD] = _("WAILORD"),
    [SPECIES_SKITTY] = _("SKITTY"),
    [SPECIES_DELCATTY] = _("DELCATTY"),
    [SPECIES_KECLEON] = _("KECLEON"),
    [SPECIES_BALTOY] = _("BALTOY"),
    [SPECIES_CLAYDOL] = _("CLAYDOL"),
    [SPECIES_NOSEPASS] = _("NOSEPASS"),
    [SPECIES_TORKOAL] = _("TORKOAL"),
    [SPECIES_SABLEYE] = _("SABLEYE"),
    [SPECIES_BARBOACH] = _("BARBOACH"),
    [SPECIES_WHISCASH] = _("WHISCASH"),
    [SPECIES_LUVDISC] = _("LUVDISC"),
    [SPECIES_CORPHISH] = _("CORPHISH"),
    [SPECIES_CRAWDAUNT] = _("CRAWDAUNT"),
    [SPECIES_FEEBAS] = _("FEEBAS"),
    [SPECIES_MILOTIC] = _("MILOTIC"),
    [SPECIES_CARVANHA] = _("CARVANHA"),
    [SPECIES_SHARPEDO] = _("SHARPEDO"),
    [SPECIES_TRAPINCH] = _("TRAPINCH"),
    [SPECIES_VIBRAVA] = _("VIBRAVA"),
    [SPECIES_FLYGON] = _("FLYGON"),
    [SPECIES_MAKUHITA] = _("MAKUHITA"),
    [SPECIES_HARIYAMA] = _("HARIYAMA"),
    [SPECIES_ELECTRIKE] = _("ELECTRIKE"),
    [SPECIES_MANECTRIC] = _("MANECTRIC"),
    [SPECIES_NUMEL] = _("NUMEL"),
    [SPECIES_CAMERUPT] = _("CAMERUPT"),
    [SPECIES_SPHEAL] = _("SPHEAL"),
    [SPECIES_SEALEO] = _("SEALEO"),
    [SPECIES_WALREIN] = _("WALREIN"),
    [SPECIES_CACNEA] = _("CACNEA"),
    [SPECIES_CACTURNE] = _("CACTURNE"),
    [SPECIES_SNORUNT] = _("SNORUNT"),
    [SPECIES_GLALIE] = _("GLALIE"),
    [SPECIES_LUNATONE] = _("LUNATONE"),
    [SPECIES_SOLROCK] = _("SOLROCK"),
    [SPECIES_AZURILL] = _("AZURILL"),
    [SPECIES_SPOINK] = _("SPOINK"),
    [SPECIES_GRUMPIG] = _("GRUMPIG"),
    [SPECIES_PLUSLE] = _("PLUSLE"),
    [SPECIES_MINUN] = _("MINUN"),
    [SPECIES_MAWILE] = _("MAWILE"),
    [SPECIES_MEDITITE] = _("MEDITITE"),
    [SPECIES_MEDICHAM] = _("MEDICHAM"),
    [SPECIES_SWABLU] = _("SWABLU"),
    [SPECIES_ALTARIA] = _("ALTARIA"),
    [SPECIES_WYNAUT] = _("WYNAUT"),
    [SPECIES_DUSKULL] = _("DUSKULL"),
    [SPECIES_DUSCLOPS] = _("DUSCLOPS"),
    [SPECIES_ROSELIA] = _("ROSELIA"),
    [SPECIES_SLAKOTH] = _("SLAKOTH"),
    [SPECIES_VIGOROTH] = _("VIGOROTH"),
    [SPECIES_SLAKING] = _("SLAKING"),
    [SPECIES_GULPIN] = _("GULPIN"),
    [SPECIES_SWALOT] = _("SWALOT"),
    [SPECIES_TROPIUS] = _("TROPIUS"),
    [SPECIES_WHISMUR] = _("WHISMUR"),
    [SPECIES_LOUDRED] = _("LOUDRED"),
    [SPECIES_EXPLOUD] = _("EXPLOUD"),
    [SPECIES_CLAMPERL] = _("CLAMPERL"),
    [SPECIES_HUNTAIL] = _("HUNTAIL"),
    [SPECIES_GOREBYSS] = _("GOREBYSS"),
    [SPECIES_ABSOL] = _("ABSOL"),
    [SPECIES_SHUPPET] = _("SHUPPET"),
    [SPECIES_BANETTE] = _("BANETTE"),
    [SPECIES_SEVIPER] = _("SEVIPER"),
    [SPECIES_ZANGOOSE] = _("ZANGOOSE"),
    [SPECIES_RELICANTH] = _("RELICANTH"),
    [SPECIES_ARON] = _("ARON"),
    [SPECIES_LAIRON] = _("LAIRON"),
    [SPECIES_AGGRON] = _("AGGRON"),
    [SPECIES_CASTFORM] = _("CASTFORM"),
    [SPECIES_VOLBEAT] = _("VOLBEAT"),
    [SPECIES_ILLUMISE] = _("ILLUMISE"),
    [SPECIES_LILEEP] = _("LILEEP"),
    [SPECIES_CRADILY] = _("CRADILY"),
    [SPECIES_ANORITH] = _("ANORITH"),
    [SPECIES_ARMALDO] = _("ARMALDO"),
    [SPECIES_APEMON] = _("APEMON"),
    [SPECIES_AQUILAMON] = _("AQUILAMON"),
    [SPECIES_ARCADIAMON_CHAMPION] = _("ARCADIAMON"),
    [SPECIES_BAGON] = _("BAGON"),
    [SPECIES_SHELGON] = _("SHELGON"),
    [SPECIES_SALAMENCE] = _("SALAMENCE"),
    [SPECIES_BELDUM] = _("BELDUM"),
    [SPECIES_METANG] = _("METANG"),
    [SPECIES_METAGROSS] = _("METAGROSS"),
    [SPECIES_REGIROCK] = _("REGIROCK"),
    [SPECIES_REGICE] = _("REGICE"),
    [SPECIES_REGISTEEL] = _("REGISTEEL"),
    [SPECIES_KYOGRE] = _("KYOGRE"),
    [SPECIES_GROUDON] = _("GROUDON"),
    [SPECIES_RAYQUAZA] = _("RAYQUAZA"),
    [SPECIES_LATIAS] = _("LATIAS"),
    [SPECIES_LATIOS] = _("LATIOS"),
    [SPECIES_JIRACHI] = _("JIRACHI"),
    [SPECIES_DEOXYS] = _("DEOXYS"),
    [SPECIES_CHIMECHO] = _("CHIMECHO"),
};
