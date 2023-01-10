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
    [SPECIES_YURAMON]     = {{EVO_FRIENDSHIP, 0, SPECIES_CROBAT}},
    [SPECIES_ZERIMON]     = {{EVO_LEVEL, 21, SPECIES_ZURUMON}},
    [SPECIES_ZURUMON]      = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_ARCADIAMON_IT},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}},
    [SPECIES_ARGOMON_IT]      = {{EVO_LEVEL, 24, SPECIES_BABYDMON}},
    [SPECIES_BIBIMON]    = {{EVO_LEVEL, 31, SPECIES_BOSAMON}},
    [SPECIES_BUDMON]    = {{EVO_LEVEL, 26, SPECIES_BUKAMON}},
    [SPECIES_CALUMON]     = {{EVO_LEVEL, 28, SPECIES_CHAPMON}},
    [SPECIES_CHICCHIMON]    = {{EVO_LEVEL, 33, SPECIES_DEMMERAMON}},
    [SPECIES_DEMIVEEMON]     = {{EVO_LEVEL, 28, SPECIES_DORIMON}},
    [SPECIES_FRIMON]  = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_GIGIMON}},
    [SPECIES_GUMMYMON]    = {{EVO_LEVEL, 25, SPECIES_GURIMON}},
    [SPECIES_GURIMON]  = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_HIYARIMON},
                            {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED}},
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
                            {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING}},
    [SPECIES_PICKMON_WHITE]  = {{EVO_LEVEL, 30, SPECIES_PICKMON_RED}},
    [SPECIES_POROMON]      = {{EVO_LEVEL, 31, SPECIES_PUROROMON}},
    [SPECIES_PUSURIMON]       = {{EVO_LEVEL, 34, SPECIES_PUYOYOMON}},
    [SPECIES_SAKUTTOMON]     = {{EVO_LEVEL, 38, SPECIES_SUNMON}},
    [SPECIES_TANEMON]   = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_TOKOMON}},
    [SPECIES_TOKOMON_X]     = {{EVO_LEVEL, 25, SPECIES_TORBALLMON}},
    [SPECIES_TORBALLMON]    = {{EVO_TRADE, 0, SPECIES_TSUMEMON}},
    [SPECIES_TSUNOMON]       = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX}},
    [SPECIES_TUMBLEMON]    = {{EVO_LEVEL, 26, SPECIES_UPAMON}},
    [SPECIES_VIXIMON]     = {{EVO_LEVEL, 28, SPECIES_WANYAMON}},
    [SPECIES_XIAOMON]    = {{EVO_LEVEL, 30, SPECIES_YAAMON}},
    [SPECIES_YOKOMON]  = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_AGUMON}},
    [SPECIES_CUBONE]     = {{EVO_LEVEL, 28, SPECIES_MAROWAK}},
    [SPECIES_KOFFING]    = {{EVO_LEVEL, 35, SPECIES_WEEZING}},
    [SPECIES_RHYHORN]    = {{EVO_LEVEL, 42, SPECIES_RHYDON}},
    [SPECIES_CHANSEY]    = {{EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}},
    [SPECIES_HORSEA]     = {{EVO_LEVEL, 32, SPECIES_SEADRA}},
    [SPECIES_SEADRA]     = {{EVO_TRADE_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA}},
    [SPECIES_GOLDEEN]    = {{EVO_LEVEL, 33, SPECIES_SEAKING}},
    [SPECIES_STARYU]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}},
    [SPECIES_SCYTHER]    = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR}},
    [SPECIES_MAGIKARP]   = {{EVO_LEVEL, 20, SPECIES_GYARADOS}},
    [SPECIES_EEVEE]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                            {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                            {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                            {EVO_FRIENDSHIP_DAY, 0, SPECIES_ESPEON},
                            {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_UMBREON}},
    [SPECIES_PORYGON]    = {{EVO_TRADE_ITEM, ITEM_UP_GRADE, SPECIES_PORYGON2}},
    [SPECIES_OMANYTE]    = {{EVO_LEVEL, 40, SPECIES_OMASTAR}},
    [SPECIES_KABUTO]     = {{EVO_LEVEL, 40, SPECIES_KABUTOPS}},
    [SPECIES_DRATINI]    = {{EVO_LEVEL, 30, SPECIES_DRAGONAIR}},
    [SPECIES_DRAGONAIR]  = {{EVO_LEVEL, 55, SPECIES_DRAGONITE}},
    [SPECIES_CHIKORITA]  = {{EVO_LEVEL, 16, SPECIES_BAYLEEF}},
    [SPECIES_BAYLEEF]    = {{EVO_LEVEL, 32, SPECIES_MEGANIUM}},
    [SPECIES_CYNDAQUIL]  = {{EVO_LEVEL, 14, SPECIES_QUILAVA}},
    [SPECIES_QUILAVA]    = {{EVO_LEVEL, 36, SPECIES_TYPHLOSION}},
    [SPECIES_TOTODILE]   = {{EVO_LEVEL, 18, SPECIES_CROCONAW}},
    [SPECIES_CROCONAW]   = {{EVO_LEVEL, 30, SPECIES_FERALIGATR}},
    [SPECIES_SENTRET]    = {{EVO_LEVEL, 15, SPECIES_FURRET}},
    [SPECIES_HOOTHOOT]   = {{EVO_LEVEL, 20, SPECIES_NOCTOWL}},
    [SPECIES_LEDYBA]     = {{EVO_LEVEL, 18, SPECIES_LEDIAN}},
    [SPECIES_SPINARAK]   = {{EVO_LEVEL, 22, SPECIES_ARIADOS}},
    [SPECIES_CHINCHOU]   = {{EVO_LEVEL, 27, SPECIES_LANTURN}},
    [SPECIES_PICHU]      = {{EVO_FRIENDSHIP, 0, SPECIES_PETITMON}},
    [SPECIES_CLEFFA]     = {{EVO_FRIENDSHIP, 0, SPECIES_PUYOMON}},
    [SPECIES_IGGLYBUFF]  = {{EVO_FRIENDSHIP, 0, SPECIES_SANDMON}},
    [SPECIES_TOGEPI]     = {{EVO_FRIENDSHIP, 0, SPECIES_TOGETIC}},
    [SPECIES_NATU]       = {{EVO_LEVEL, 25, SPECIES_XATU}},
    [SPECIES_MAREEP]     = {{EVO_LEVEL, 15, SPECIES_FLAAFFY}},
    [SPECIES_FLAAFFY]    = {{EVO_LEVEL, 30, SPECIES_AMPHAROS}},
    [SPECIES_MARILL]     = {{EVO_LEVEL, 18, SPECIES_AZUMARILL}},
    [SPECIES_HOPPIP]     = {{EVO_LEVEL, 18, SPECIES_SKIPLOOM}},
    [SPECIES_SKIPLOOM]   = {{EVO_LEVEL, 27, SPECIES_JUMPLUFF}},
    [SPECIES_SUNKERN]    = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}},
    [SPECIES_WOOPER]     = {{EVO_LEVEL, 20, SPECIES_QUAGSIRE}},
    [SPECIES_PINECO]     = {{EVO_LEVEL, 31, SPECIES_FORRETRESS}},
    [SPECIES_SNUBBULL]   = {{EVO_LEVEL, 23, SPECIES_GRANBULL}},
    [SPECIES_TEDDIURSA]  = {{EVO_LEVEL, 30, SPECIES_URSARING}},
    [SPECIES_SLUGMA]     = {{EVO_LEVEL, 38, SPECIES_MAGCARGO}},
    [SPECIES_SWINUB]     = {{EVO_LEVEL, 33, SPECIES_PILOSWINE}},
    [SPECIES_REMORAID]   = {{EVO_LEVEL, 25, SPECIES_OCTILLERY}},
    [SPECIES_HOUNDOUR]   = {{EVO_LEVEL, 24, SPECIES_HOUNDOOM}},
    [SPECIES_PHANPY]     = {{EVO_LEVEL, 25, SPECIES_DONPHAN}},
    [SPECIES_TYROGUE]    = {{EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_HITMONCHAN},
                            {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_HITMONLEE},
                            {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_HITMONTOP}},
    [SPECIES_SMOOCHUM]   = {{EVO_LEVEL, 30, SPECIES_JYNX}},
    [SPECIES_ELEKID]     = {{EVO_LEVEL, 30, SPECIES_ELECTABUZZ}},
    [SPECIES_MAGBY]      = {{EVO_LEVEL, 30, SPECIES_MAGMAR}},
    [SPECIES_LARVITAR]   = {{EVO_LEVEL, 30, SPECIES_PUPITAR}},
    [SPECIES_PUPITAR]    = {{EVO_LEVEL, 55, SPECIES_TYRANITAR}},
    [SPECIES_TREECKO]    = {{EVO_LEVEL, 16, SPECIES_GROVYLE}},
    [SPECIES_GROVYLE]    = {{EVO_LEVEL, 36, SPECIES_SCEPTILE}},
    [SPECIES_TORCHIC]    = {{EVO_LEVEL, 16, SPECIES_COMBUSKEN}},
    [SPECIES_COMBUSKEN]  = {{EVO_LEVEL, 36, SPECIES_BLAZIKEN}},
    [SPECIES_MUDKIP]     = {{EVO_LEVEL, 16, SPECIES_MARSHTOMP}},
    [SPECIES_MARSHTOMP]  = {{EVO_LEVEL, 36, SPECIES_SWAMPERT}},
    [SPECIES_POOCHYENA]  = {{EVO_LEVEL, 18, SPECIES_MIGHTYENA}},
    [SPECIES_ZIGZAGOON]  = {{EVO_LEVEL, 20, SPECIES_LINOONE}},
    [SPECIES_WURMPLE]    = {{EVO_LEVEL_SILCOON, 7, SPECIES_SILCOON},
                            {EVO_LEVEL_CASCOON, 7, SPECIES_CASCOON}},
    [SPECIES_SILCOON]    = {{EVO_LEVEL, 10, SPECIES_BEAUTIFLY}},
    [SPECIES_CASCOON]    = {{EVO_LEVEL, 10, SPECIES_DUSTOX}},
    [SPECIES_LOTAD]      = {{EVO_LEVEL, 14, SPECIES_LOMBRE}},
    [SPECIES_LOMBRE]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO}},
    [SPECIES_SEEDOT]     = {{EVO_LEVEL, 14, SPECIES_NUZLEAF}},
    [SPECIES_NUZLEAF]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY}},
    [SPECIES_NINCADA]    = {{EVO_LEVEL_NINJASK, 20, SPECIES_NINJASK},
                            {EVO_LEVEL_SHEDINJA, 20, SPECIES_SHEDINJA}},
    [SPECIES_TAILLOW]    = {{EVO_LEVEL, 22, SPECIES_SWELLOW}},
    [SPECIES_SHROOMISH]  = {{EVO_LEVEL, 23, SPECIES_BRELOOM}},
    [SPECIES_WINGULL]    = {{EVO_LEVEL, 25, SPECIES_PELIPPER}},
    [SPECIES_SURSKIT]    = {{EVO_LEVEL, 22, SPECIES_MASQUERAIN}},
    [SPECIES_WAILMER]    = {{EVO_LEVEL, 40, SPECIES_WAILORD}},
    [SPECIES_SKITTY]     = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY}},
    [SPECIES_BALTOY]     = {{EVO_LEVEL, 36, SPECIES_CLAYDOL}},
    [SPECIES_BARBOACH]   = {{EVO_LEVEL, 30, SPECIES_WHISCASH}},
    [SPECIES_CORPHISH]   = {{EVO_LEVEL, 30, SPECIES_CRAWDAUNT}},
    [SPECIES_FEEBAS]     = {{EVO_BEAUTY, 170, SPECIES_MILOTIC}},
    [SPECIES_CARVANHA]   = {{EVO_LEVEL, 30, SPECIES_SHARPEDO}},
    [SPECIES_TRAPINCH]   = {{EVO_LEVEL, 35, SPECIES_VIBRAVA}},
    [SPECIES_VIBRAVA]    = {{EVO_LEVEL, 45, SPECIES_FLYGON}},
    [SPECIES_MAKUHITA]   = {{EVO_LEVEL, 24, SPECIES_HARIYAMA}},
    [SPECIES_ELECTRIKE]  = {{EVO_LEVEL, 26, SPECIES_MANECTRIC}},
    [SPECIES_NUMEL]      = {{EVO_LEVEL, 33, SPECIES_CAMERUPT}},
    [SPECIES_SPHEAL]     = {{EVO_LEVEL, 32, SPECIES_SEALEO}},
    [SPECIES_SEALEO]     = {{EVO_LEVEL, 44, SPECIES_WALREIN}},
    [SPECIES_CACNEA]     = {{EVO_LEVEL, 32, SPECIES_CACTURNE}},
    [SPECIES_SNORUNT]    = {{EVO_LEVEL, 42, SPECIES_GLALIE}},
    [SPECIES_AZURILL]    = {{EVO_FRIENDSHIP, 0, SPECIES_MARILL}},
    [SPECIES_SPOINK]     = {{EVO_LEVEL, 32, SPECIES_GRUMPIG}},
    [SPECIES_MEDITITE]   = {{EVO_LEVEL, 37, SPECIES_MEDICHAM}},
    [SPECIES_SWABLU]     = {{EVO_LEVEL, 35, SPECIES_ALTARIA}},
    [SPECIES_WYNAUT]     = {{EVO_LEVEL, 15, SPECIES_WOBBUFFET}},
    [SPECIES_DUSKULL]    = {{EVO_LEVEL, 37, SPECIES_DUSCLOPS}},
    [SPECIES_SLAKOTH]    = {{EVO_LEVEL, 18, SPECIES_VIGOROTH}},
    [SPECIES_VIGOROTH]   = {{EVO_LEVEL, 36, SPECIES_SLAKING}},
    [SPECIES_GULPIN]     = {{EVO_LEVEL, 26, SPECIES_SWALOT}},
    [SPECIES_WHISMUR]    = {{EVO_LEVEL, 20, SPECIES_LOUDRED}},
    [SPECIES_LOUDRED]    = {{EVO_LEVEL, 40, SPECIES_EXPLOUD}},
    [SPECIES_CLAMPERL]   = {{EVO_TRADE_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                            {EVO_TRADE_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS}},
    [SPECIES_SHUPPET]    = {{EVO_LEVEL, 37, SPECIES_BANETTE}},
    [SPECIES_ARON]       = {{EVO_LEVEL, 32, SPECIES_LAIRON}},
    [SPECIES_LAIRON]     = {{EVO_LEVEL, 42, SPECIES_AGGRON}},
    [SPECIES_LILEEP]     = {{EVO_LEVEL, 40, SPECIES_CRADILY}},
    [SPECIES_ANORITH]    = {{EVO_LEVEL, 40, SPECIES_ARMALDO}},
    [SPECIES_RALTS]      = {{EVO_LEVEL, 20, SPECIES_KIRLIA}},
    [SPECIES_KIRLIA]     = {{EVO_LEVEL, 30, SPECIES_GARDEVOIR}},
    [SPECIES_BAGON]      = {{EVO_LEVEL, 30, SPECIES_SHELGON}},
    [SPECIES_SHELGON]    = {{EVO_LEVEL, 50, SPECIES_SALAMENCE}},
    [SPECIES_BELDUM]     = {{EVO_LEVEL, 20, SPECIES_METANG}},
    [SPECIES_METANG]     = {{EVO_LEVEL, 45, SPECIES_METAGROSS}},
};
