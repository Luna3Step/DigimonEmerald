const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("UNKNOWN"),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARGOMON_F] =
    {
        .categoryName = _("MUTANT"),
        .height = 2,
        .weight = 40,
        .description = gArgomon_fPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOMBMON] =
    {
        .categoryName = _("BOMB"),
        .height = 3,
        .weight = 40,
        .description = gBombmonPokedexText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOMMON] =
    {
        .categoryName = _("BOMB"),
        .height = 4,
        .weight = 40,
        .description = gBommonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_BOTAMON] =
    {
        .categoryName = _("FUZZ"),
        .height = 2,
        .weight = 40,
        .description = gBotamonPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHIBICKMON] =
    {
        .categoryName = _("SOCIAL"),
        .height = 2,
        .weight = 40,
        .description = gChibickmonPokedexText,
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHIBOMON] =
    {
        .categoryName = _("DRAGON"),
        .height = 3,
        .weight = 40,
        .description = gChibomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CONOMON] =
    {
        .categoryName = _("TWIN"),
        .height = 3,
        .weight = 40,
        .description = gConomonPokedexText,
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COTSUCOMON] =
    {
        .categoryName = _("ARMOUR"),
        .height = 2,
        .weight = 40,
        .description = gCotsucomonPokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CURIMON] =
    {
        .categoryName = _("ENERGETIC"),
        .height = 3,
        .weight = 40,
        .description = gCurimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DATIRIMON] =
    {
        .categoryName = _("FRUIT"),
        .height = 2,
        .weight = 40,
        .description = gDatirimonPokedexText,
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DODOMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 2,
        .weight = 40,
        .description = gDodomonPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOKIMON] =
    {
        .categoryName = _("HEALTHY"),
        .height = 2,
        .weight = 40,
        .description = gDokimonPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FUFUMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 2,
        .weight = 40,
        .description = gFufumonPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JYARIMON] =
    {
        .categoryName = _("FIRE DRAGON"),
        .height = 3,
        .weight = 40,
        .description = gJyarimonPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KEEMON] =
    {
        .categoryName = _("EVIL EYED"),
        .height = 2,
        .weight = 40,
        .description = gKeemonPokedexText,
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KETOMON] =
    {
        .categoryName = _("LARGE EYES"),
        .height = 3,
        .weight = 40,
        .description = gKetomonPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KURAMON] =
    {
        .categoryName = _("VIRUS"),
        .height = 3,
        .weight = 40,
        .description = gKuramonPokedexText,
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAFMON] =
    {
        .categoryName = _("LEAF"),
        .height = 3,
        .weight = 40,
        .description = gLeafmonPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHOROMON] =
    {
        .categoryName = _("DARTING"),
        .height = 2,
        .weight = 40,
        .description = gChoromonPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOKUMON] =
    {
        .categoryName = _("SMOKE"),
        .height = 2,
        .weight = 40,
        .description = gMokumonPokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NYOKIMON] =
    {
        .categoryName = _("SEED"),
        .height = 3,
        .weight = 40,
        .description = gNyokimonPokedexText,
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PABUMON] =
    {
        .categoryName = _("SLIME"),
        .height = 3,
        .weight = 40,
        .description = gPabumonPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PAFUMON] =
    {
        .categoryName = _("SPIRIT"),
        .height = 3,
        .weight = 40,
        .description = gPafumonPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PAOMON] =
    {
        .categoryName = _("ARTIFICIAL"),
        .height = 2,
        .weight = 40,
        .description = gPaomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PETITMON] =
    {
        .categoryName = _("TINY DRAGON"),
        .height = 2,
        .weight = 40,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PICHIMON] =
    {
        .categoryName = _("MICRO"),
        .height = 2,
        .weight = 10,
        .description = gPichimonPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POPOMON] =
    {
        .categoryName = _("PLANT"),
        .height = 2,
        .weight = 40,
        .description = gPopomonPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POYOMON] =
    {
        .categoryName = _("JELLYFISH"),
        .height = 2,
        .weight = 10,
        .description = gPoyomonPokedexText,
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUNIMON] =
    {
        .categoryName = _("ACID"),
        .height = 2,
        .weight = 40,
        .description = gPunimonPokedexText,
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUPUMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 2,
        .weight = 20,
        .description = gPupumonPokedexText,
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURURUMON] =
    {
        .categoryName = _("CHICK"),
        .height = 2,
        .weight = 40,
        .description = gPururumonPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUSUMON] =
    {
        .categoryName = _("FURRY"),
        .height = 2,
        .weight = 40,
        .description = gPusumonPokedexText,
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUTTIMON] =
    {
        .categoryName = _("ANGEL"),
        .height = 3,
        .weight = 40,
        .description = gPuttimonPokedexText,
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUWAMON] =
    {
        .categoryName = _("OWLET"),
        .height = 4,
        .weight = 40,
        .description = gPuwamonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUYOMON] =
    {
        .categoryName = _("JELLYFISH"),
        .height = 2,
        .weight = 10,
        .description = gPuyomonPokedexText,
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PYONMON] =
    {
        .categoryName = _("LARGE EAR"),
        .height = 3,
        .weight = 40,
        .description = gPyonmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RELEMON] =
    {
        .categoryName = _("FOX"),
        .height = 3,
        .weight = 40,
        .description = gRelemonPokedexText,
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAKUMON] =
    {
        .categoryName = _("GOLD BLADE"),
        .height = 4,
        .weight = 60,
        .description = gSakumonPokedexText,
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDMON] =
    {
        .categoryName = _("SAND"),
        .height = 2,
        .weight = 30,
        .description = gSandmonPokedexText,
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TSUBUMON] =
    {
        .categoryName = _("FAKE SEED"),
        .height = 4,
        .weight = 30,
        .description = gTsubumonPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ICEBOTAMON] =
    {
        .categoryName = _("SNOW"),
        .height = 3,
        .weight = 40,
        .description = gIceBotamonPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YURAMON] =
    {
        .categoryName = _("SEED"),
        .height = 2,
        .weight = 40,
        .description = gYuramonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZERIMON] =
    {
        .categoryName = _("TWIN"),
        .height = 3,
        .weight = 40,
        .description = gZerimonPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZURUMON] =
    {
        .categoryName = _("TOXIC VIRUS"),
        .height = 2,
        .weight = 40,
        .description = gZurumonPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCADIAMON_IT] =
    {
        .categoryName = _("ULTIMATE"),
        .height = 3,
        .weight = 60,
        .description = gArcadiamon_itPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARGOMON_IT] =
    {
        .categoryName = _("MUTANT"),
        .height = 3,
        .weight = 60,
        .description = gArgomon_itPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BABYDMON] =
    {
        .categoryName = _("BABY DRAGON"),
        .height = 7,
        .weight = 60,
        .description = gBabydmonPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIBIMON] =
    {
        .categoryName = _("HEART RATE"),
        .height = 4,
        .weight = 60,
        .description = gBibimonPokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_BOSAMON] =
    {
        .categoryName = _("BIG EAR"),
        .height = 5,
        .weight = 60,
        .description = gBosamonPokedexText,
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_BUDMON] =
    {
        .categoryName = _("POISON SEED"),
        .height = 3,
        .weight = 60,
        .description = gBudmonPokedexText,
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUKAMON] =
    {
        .categoryName = _("SEAL"),
        .height = 3,
        .weight = 60,
        .description = gBukamonPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CALUMON] =
    {
        .categoryName = _("EVOLUTION"),
        .height = 5,
        .weight = 60,
        .description = gCalumonPokedexText,
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHAPMON] =
    {
        .categoryName = _("KAPPA"),
        .height = 5,
        .weight = 60,
        .description = gChapmonPokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHICCHIMON] =
    {
        .categoryName = _("CHICK"),
        .height = 5,
        .weight = 60,
        .description = gChicchimonPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEMMERAMON] =
    {
        .categoryName = _("FLAMING"),
        .height = 6,
        .weight = 60,
        .description = gDemmeramonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_DEMIVEEMON] =
    {
        .categoryName = _("HOPPING"),
        .height = 4,
        .weight = 60,
        .description = gDemiveemonPokedexText,
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DORIMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 3,
        .weight = 60,
        .description = gDorimonPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FRIMON] =
    {
        .categoryName = _("FRILL"),
        .height = 4,
        .weight = 60,
        .description = gFrimonPokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIGIMON] =
    {
        .categoryName = _("FIRE DRAGON"),
        .height = 3,
        .weight = 60,
        .description = gGigimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_GUMMYMON] =
    {
        .categoryName = _("GUMMY"),
        .height = 3,
        .weight = 60,
        .description = gGummymonPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GURIMON] =
    {
        .categoryName = _("HORN"),
        .height = 3,
        .weight = 60,
        .description = gGurimonPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HIYARIMON] =
    {
        .categoryName = _("ICE PENGUIN"),
        .height = 4,
        .weight = 60,
        .description = gHiyarimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOPMON] =
    {
        .categoryName = _("BABY DRAGON"),
        .height = 4,
        .weight = 60,
        .description = gHopmonPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KAKKINMON] =
    {
        .categoryName = _("ARMOUR"),
        .height = 3,
        .weight = 80,
        .description = gKakkinmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KAPURIMON] =
    {
        .categoryName = _("METAL CAP"),
        .height = 4,
        .weight = 75,
        .description = gKapurimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOKOMON] =
    {
        .categoryName = _("TWIN"),
        .height = 3,
        .weight = 60,
        .description = gKokomonPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOROMON] =
    {
        .categoryName = _("ROUND"),
        .height = 3,
        .weight = 60,
        .description = gKoromonPokedexText,
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOZENIMON] =
    {
        .categoryName = _("ONE YEN"),
        .height = 1,
        .weight = 20,
        .description = gKozenimonPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_KYAROMON] =
    {
        .categoryName = _("RUBBER BALL"),
        .height = 5,
        .weight = 30,
        .description = gKyaromonPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KYOKYOMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 5,
        .weight = 60,
        .description = gKyokyomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KYUPIMON] =
    {
        .categoryName = _("CHARITY"),
        .height = 4,
        .weight = 60,
        .description = gKyupimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_MINOMON] =
    {
        .categoryName = _("LARVA"),
        .height = 3,
        .weight = 60,
        .description = gMinomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MISSIMON] =
    {
        .categoryName = _("MISSILE"),
        .height = 5,
        .weight = 70,
        .description = gMissimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_MONIMON] =
    {
        .categoryName = _("TELEVISION"),
        .height = 4,
        .weight = 60,
        .description = gMonimonPokedexText,
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOONMON] =
    {
        .categoryName = _("MOON DROP"),
        .height = 4,
        .weight = 60,
        .description = gMoonmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOTIMON] =
    {
        .categoryName = _("MOCHI"),
        .height = 3,
        .weight = 60,
        .description = gMotimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NEGAMON] =
    {
        .categoryName = _("NEGATIVE"),
        .height = 15,
        .weight = 60,
        .description = gNegamonPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NYAROMON] =
    {
        .categoryName = _("CAT"),
        .height = 2,
        .weight = 60,
        .description = gNyaromonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_PAGUMON] =
    {
        .categoryName = _("SMUG"),
        .height = 3,
        .weight = 60,
        .description = gPagumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PICKMON_SILVER] =
    {
        .categoryName = _("SILVER PICK"),
        .height = 2,
        .weight = 80,
        .description = gPickmon_silverPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PICKMON_WHITE] =
    {
        .categoryName = _("WHITE PICK"),
        .height = 2,
        .weight = 60,
        .description = gPickmon_whitePokedexText,
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PICKMON_RED] =
    {
        .categoryName = _("RED PICK"),
        .height = 2,
        .weight = 60,
        .description = gPickmon_redPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINAMON] =
    {
        .categoryName = _("CHICK"),
        .height = 4,
        .weight = 50,
        .description = gPinamonPokedexText,
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_POROMON] =
    {
        .categoryName = _("SMALL BIRD"),
        .height = 4,
        .weight = 60,
        .description = gPoromonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_PUROROMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 4,
        .weight = 10,
        .description = gPuroromonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUSURIMON] =
    {
        .categoryName = _("PRICKLY"),
        .height = 3,
        .weight = 60,
        .description = gPusurimonPokedexText,
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUYOYOMON] =
    {
        .categoryName = _("JELLYFISH"),
        .height = 3,
        .weight = 20,
        .description = gPuyoyomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAKUTTOMON] =
    {
        .categoryName = _("HORN BLADE"),
        .height = 4,
        .weight = 90,
        .description = gSakuttomonPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNMON] =
    {
        .categoryName = _("SUN"),
        .height = 3,
        .weight = 100,
        .description = gSunmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANEMON] =
    {
        .categoryName = _("FOLIAGE"),
        .height = 6,
        .weight = 60,
        .description = gTanemonPokedexText,
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOKOMON] =
    {
        .categoryName = _("BITING"),
        .height = 3,
        .weight = 60,
        .description = gTokomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TOKOMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 3,
        .weight = 60,
        .description = gTokomon_xPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORBALLMON] =
    {
        .categoryName = _("DEEP FRIED"),
        .height = 4,
        .weight = 60,
        .description = gTorBallmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TSUMEMON] =
    {
        .categoryName = _("VIRUS"),
        .height = 4,
        .weight = 60,
        .description = gTsumemonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TSUNOMON] =
    {
        .categoryName = _("HORN"),
        .height = 6,
        .weight = 60,
        .description = gTsunomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_TUMBLEMON] =
    {
        .categoryName = _("ORE"),
        .height = 4,
        .weight = 65,
        .description = gTumblemonPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UPAMON] =
    {
        .categoryName = _("AXOLOTL"),
        .height = 3,
        .weight = 60,
        .description = gUpamonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIXIMON] =
    {
        .categoryName = _("FOX"),
        .height = 3,
        .weight = 60,
        .description = gViximonPokedexText,
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WANYAMON] =
    {
        .categoryName = _("DOG"),
        .height = 3,
        .weight = 60,
        .description = gWanyamonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XIAOMON] =
    {
        .categoryName = _("ARTIFICIAL"),
        .height = 4,
        .weight = 60,
        .description = gXiaomonPokedexText,
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YAAMON] =
    {
        .categoryName = _("TWISTED"),
        .height = 3,
        .weight = 60,
        .description = gYaamonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YOKOMON] =
    {
        .categoryName = _("BULB"),
        .height = 3,
        .weight = 45,
        .description = gYokomonPokedexText,
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AGUMON] =
    {
        .categoryName = _("T-REX"),
        .height = 10,
        .weight = 420,
        .description = gAgumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_AGUMON_06] =
    {
        .categoryName = _("T-REX"),
        .height = 13,
        .weight = 420,
        .description = gAgumon_06PokedexText,
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AGUMON_EXPERT] =
    {
        .categoryName = _("T-REX"),
        .height = 12,
        .weight = 420,
        .description = gAgumon_expertPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AGUMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 11,
        .weight = 430,
        .description = gAgumon_XPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ANGORAMON] =
    {
        .categoryName = _("RABBIT"),
        .height = 22,
        .weight = 520,
        .description = gAngoramonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ARCADIAMON_ROOKIE] =
    {
        .categoryName = _("ULTIMATE"),
        .height = 9,
        .weight = 465,
        .description = gArcadiamon_rookiePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARGOMON_ROOKIE] =
    {
        .categoryName = _("MUTANT"),
        .height = 7,
        .weight = 390,
        .description = gArgomon_rookiePokedexText,
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARMADILMON] =
    {
        .categoryName = _("ARMADILLO"),
        .height = 6,
        .weight = 495,
        .description = gArmadilmonPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARURAUMON] =
    {
        .categoryName = _("MANDRAGORA"),
        .height = 8,
        .weight = 410,
        .description = gAruraumonPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAKOMON] =
    {
        .categoryName = _("CARDBOARD"),
        .height = 9,
        .weight = 310,
        .description = gBakomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BEARMON] =
    {
        .categoryName = _("BEAR"),
        .height = 9,
        .weight = 410,
        .description = gBearmonPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BETAMON] =
    {
        .categoryName = _("AMPHIBIAN"),
        .height = 7,
        .weight = 360,
        .description = gBetamonPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BETAMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 7,
        .weight = 380,
        .description = gBetamon_xPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_BIYOMON] =
    {
        .categoryName = _("PINK BIRD"),
        .height = 10,
        .weight = 320,
        .description = gBiyomonPokedexText,
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLKAGUMON] =
    {
        .categoryName = _("T-REX"),
        .height = 10,
        .weight = 250,
        .description = gBlkagumonPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLKAGUMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 10,
        .weight = 150,
        .description = gBlkagumon_xPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLKGABUMON] =
    {
        .categoryName = _("PELT"),
        .height = 13,
        .weight = 510,
        .description = gBlkgabumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLKGUILMON] =
    {
        .categoryName = _("DARK HAZARD"),
        .height = 14,
        .weight = 500,
        .description = gBlkguilmonPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOKOMON] =
    {
        .categoryName = _("HARAMAKI"),
        .height = 8,
        .weight = 220,
        .description = gBokomonPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BULUCOMON] =
    {
        .categoryName = _("ICE DRAGON"),
        .height = 14,
        .weight = 545,
        .description = gBulucomonPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURGERMON] =
    {
        .categoryName = _("BURGER"),
        .height = 7,
        .weight = 295,
        .description = gBurgermonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SAMUAGUMON] =
    {
        .categoryName = _("SAMURAI"),
        .height = 10,
        .weight = 406,
        .description = gSamuAgumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CANDLEMON] =
    {
        .categoryName = _("CANDLE"),
        .height = 20,
        .weight = 330,
        .description = gCandlemonPokedexText,
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHIKURIMON] =
    {
        .categoryName = _("MINE"),
        .height = 4,
        .weight = 390,
        .description = gChikurimonPokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYUTYUMON] =
    {
        .categoryName = _("TACTICIAN"),
        .height = 2,
        .weight = 185,
        .description = gTyutyumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHUUMON] =
    {
        .categoryName = _("RAT"),
        .height = 5,
        .weight = 280,
        .description = gChuumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAZYAGUMON] =
    {
        .categoryName = _("CLEAR TOY"),
        .height = 10,
        .weight = 100,
        .description = gHazyAgumonPokedexText,
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMMDRAMON] =
    {
        .categoryName = _("COMMANDO"),
        .height = 12,
        .weight = 550,
        .description = gCommdramonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_CORONAMON] =
    {
        .categoryName = _("SUN"),
        .height = 8,
        .weight = 225,
        .description = gCoronamonPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_CRABMON] =
    {
        .categoryName = _("CRAB"),
        .height = 6,
        .weight = 310,
        .description = gCrabmonPokedexText,
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRABMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 7,
        .weight = 365,
        .description = gCrabmon_xPokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CUTEMON] =
    {
        .categoryName = _("CUTE"),
        .height = 6,
        .weight = 290,
        .description = gCutemonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DAMEMON] =
    {
        .categoryName = _("NO GOOD"),
        .height = 8,
        .weight = 245,
        .description = gDamemonPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEMIDEVMON] =
    {
        .categoryName = _("TINY DEVIL"),
        .height = 4,
        .weight = 250,
        .description = gDemidevmonPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOKUNEMON] =
    {
        .categoryName = _("BEE-FLY"),
        .height = 7,
        .weight = 204,
        .description = gDokunemonPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DONDOKOMON] =
    {
        .categoryName = _("MATSURI JI"),
        .height = 5,
        .weight = 353,
        .description = gDondokomonPokedexText,
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DORUMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 12,
        .weight = 400,
        .description = gDorumonPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOTAGUMON] =
    {
        .categoryName = _("8 BIT"),
        .height = 10,
        .weight = 115,
        .description = gDotagumonPokedexText,
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOTFALCMON] =
    {
        .categoryName = _("8 BIT"),
        .height = 9,
        .weight = 107,
        .description = gDotfalcmonPokedexText,
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRACMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 9,
        .weight = 437,
        .description = gDracmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_DRACOMON] =
    {
        .categoryName = _("DRAMON"),
        .height = 9,
        .weight = 574,
        .description = gDracomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
    },

    [NATIONAL_DEX_DRACOMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 11,
        .weight = 541,
        .description = gDracomon_xPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_EBIBURGMON] =
    {
        .categoryName = _("BAD BURGER"),
        .height = 10,
        .weight = 526,
        .description = gEbiburgmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_EKAKIMON] =
    {
        .categoryName = _("PENCIL"),
        .height = 7,
        .weight = 264,
        .description = gEkakimonPokedexText,
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_ELECMON] =
    {
        .categoryName = _("ELECTRICITY"),
        .height = 9,
        .weight = 426,
        .description = gElecmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_ELECMON_VIOLET] =
    {
        .categoryName = _("ELECTRICITY"),
        .height = 7,
        .weight = 387,
        .description = gElecmon_violetPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_ESPIMON] =
    {
        .categoryName = _("ESPIONAGE"),
        .height = 7,
        .weight = 412,
        .description = gEspimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_AGUMON_FAKE_EXPERT] =
    {
        .categoryName = _("PLAGIARIST"),
        .height = 11,
        .weight = 513,
        .description = gAgumon_fake_expertPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_FALCOMON] =
    {
        .categoryName = _("FALCON"),
        .height = 9,
        .weight = 363,
        .description = gFalcomonPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FALCOMON_06] =
    {
        .categoryName = _("NINJA BIRD"),
        .height = 12,
        .weight = 373,
        .description = gFalcomon_06PokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FANBEEMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 8,
        .weight = 235,
        .description = gFanbeemonPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAMEMON] =
    {
        .categoryName = _("FLAME"),
        .height = 18,
        .weight = 397,
        .description = gFlamemonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_FLORAMON] =
    {
        .categoryName = _("FLORA"),
        .height = 12,
        .weight = 275,
        .description = gFloramonPokedexText,
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GABUMON] =
    {
        .categoryName = _("PELT"),
        .height = 13,
        .weight = 469,
        .description = gGabumonPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GABUMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 13,
        .weight = 795,
        .description = gGabumon_xPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GAMMAMON] =
    {
        .categoryName = _("TRICERATOPS"),
        .height = 6,
        .weight = 475,
        .description = gGammamonPokedexText,
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAOMON] =
    {
        .categoryName = _("BOXING"),
        .height = 13,
        .weight = 435,
        .description = gGaomonPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAOSSMON] =
    {
        .categoryName = _("BIG JAW"),
        .height = 8,
        .weight = 492,
        .description = gGaossmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_GAZIMON] =
    {
        .categoryName = _("MAMMAL"),
        .height = 9,
        .weight = 435,
        .description = gGazimonPokedexText,
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GAZIMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 13,
        .weight = 464,
        .description = gGazimon_xPokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GHOSTMON] =
    {
        .categoryName = _("GHOST"),
        .height = 10,
        .weight = 78,
        .description = gGhostmonPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIZAMON] =
    {
        .categoryName = _("AMPHIBIAN"),
        .height = 9,
        .weight = 408,
        .description = gGizamonPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIZUMON] =
    {
        .categoryName = _("ARTIFICIAL"),
        .height = 43,
        .weight = 954,
        .description = gGizumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOBLIMON] =
    {
        .categoryName = _("GOBLIN"),
        .height = 24,
        .weight = 525,
        .description = gGoblimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOMAMON] =
    {
        .categoryName = _("SEAL"),
        .height = 6,
        .weight = 512,
        .description = gGomamonPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOMAMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 6,
        .weight = 575,
        .description = gGomamon_xPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTSUMON] =
    {
        .categoryName = _("ORE"),
        .height = 9,
        .weight = 822,
        .description = gGotsumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GOTSUMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 9,
        .weight = 1152,
        .description = gGotsumon_xPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GUILMON] =
    {
        .categoryName = _("HAZARD"),
        .height = 14,
        .weight = 543,
        .description = gGuilmonPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GUILMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 156,
        .weight = 583,
        .description = gGuilmon_xPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GUMDRAMON] =
    {
        .categoryName = _("HAMMER"),
        .height = 8,
        .weight = 391,
        .description = gGumdramonPokedexText,
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HACKMON] =
    {
        .categoryName = _("ROOKIE"),
        .height = 11,
        .weight = 542,
        .description = gHackmonPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAGURUMON] =
    {
        .categoryName = _("GEAR"),
        .height = 15,
        .weight = 735,
        .description = gHagurumonPokedexText,
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAGURUMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 18,
        .weight = 853,
        .description = gHagurumon_xPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAWKMON] =
    {
        .categoryName = _("HAWK"),
        .height = 10,
        .weight = 305,
        .description = gHawkmonPokedexText,
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERISSMON] =
    {
        .categoryName = _("HEDGEHOG"),
        .height = 13,
        .weight = 342,
        .description = gHerissmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_HYOKOMON] =
    {
        .categoryName = _("SAMURAI"),
        .height = 8,
        .weight = 297,
        .description = gHyokomonPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IGNITEMON] =
    {
        .categoryName = _("REPTILE MAN"),
        .height = 3,
        .weight = 486,
        .description = gIgnitemonPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IMPMON] =
    {
        .categoryName = _("IMP"),
        .height = 9,
        .weight = 475,
        .description = gImpmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IMPMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 9,
        .weight = 480,
        .description = gImpmon_xPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JAZAMON] =
    {
        .categoryName = _("STEEL CHICK"),
        .height = 8,
        .weight = 571,
        .description = gJazamonPokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JELLYMON] =
    {
        .categoryName = _("JELLYFISH"),
        .height = 7,
        .weight = 285,
        .description = gJellymonPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JUNKMON] =
    {
        .categoryName = _("JUNK"),
        .height = 10,
        .weight = 547,
        .description = gJunkmonPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLITOED] =
    {
        .categoryName = _("FROG"),
        .height = 11,
        .weight = 339,
        .description = gPolitoedPokedexText,
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOPPIP] =
    {
        .categoryName = _("COTTONWEED"),
        .height = 4,
        .weight = 5,
        .description = gHoppipPokedexText,
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKIPLOOM] =
    {
        .categoryName = _("COTTONWEED"),
        .height = 6,
        .weight = 10,
        .description = gSkiploomPokedexText,
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JUMPLUFF] =
    {
        .categoryName = _("COTTONWEED"),
        .height = 8,
        .weight = 30,
        .description = gJumpluffPokedexText,
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AIPOM] =
    {
        .categoryName = _("LONG TAIL"),
        .height = 8,
        .weight = 115,
        .description = gAipomPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNKERN] =
    {
        .categoryName = _("SEED"),
        .height = 3,
        .weight = 18,
        .description = gSunkernPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNFLORA] =
    {
        .categoryName = _("SUN"),
        .height = 8,
        .weight = 85,
        .description = gSunfloraPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YANMA] =
    {
        .categoryName = _("CLEAR WING"),
        .height = 12,
        .weight = 380,
        .description = gYanmaPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOPER] =
    {
        .categoryName = _("WATER FISH"),
        .height = 4,
        .weight = 85,
        .description = gWooperPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUAGSIRE] =
    {
        .categoryName = _("WATER FISH"),
        .height = 14,
        .weight = 750,
        .description = gQuagsirePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESPEON] =
    {
        .categoryName = _("SUN"),
        .height = 9,
        .weight = 265,
        .description = gEspeonPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UMBREON] =
    {
        .categoryName = _("MOONLIGHT"),
        .height = 10,
        .weight = 270,
        .description = gUmbreonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MURKROW] =
    {
        .categoryName = _("DARKNESS"),
        .height = 5,
        .weight = 21,
        .description = gMurkrowPokedexText,
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SLOWKING] =
    {
        .categoryName = _("ROYAL"),
        .height = 20,
        .weight = 795,
        .description = gSlowkingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_MISDREAVUS] =
    {
        .categoryName = _("SCREECH"),
        .height = 7,
        .weight = 10,
        .description = gMisdreavusPokedexText,
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNOWN] =
    {
        .categoryName = _("SYMBOL"),
        .height = 5,
        .weight = 50,
        .description = gUnownPokedexText,
        .pokemonScale = 411,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOBBUFFET] =
    {
        .categoryName = _("PATIENT"),
        .height = 13,
        .weight = 285,
        .description = gWobbuffetPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIRAFARIG] =
    {
        .categoryName = _("LONG NECK"),
        .height = 15,
        .weight = 415,
        .description = gGirafarigPokedexText,
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINECO] =
    {
        .categoryName = _("BAGWORM"),
        .height = 6,
        .weight = 72,
        .description = gPinecoPokedexText,
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FORRETRESS] =
    {
        .categoryName = _("BAGWORM"),
        .height = 12,
        .weight = 1258,
        .description = gForretressPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUNSPARCE] =
    {
        .categoryName = _("LAND SNAKE"),
        .height = 15,
        .weight = 140,
        .description = gDunsparcePokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLIGAR] =
    {
        .categoryName = _("FLYSCORPION"),
        .height = 11,
        .weight = 648,
        .description = gGligarPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STEELIX] =
    {
        .categoryName = _("IRON SNAKE"),
        .height = 92,
        .weight = 4000,
        .description = gSteelixPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_SNUBBULL] =
    {
        .categoryName = _("FAIRY"),
        .height = 6,
        .weight = 78,
        .description = gSnubbullPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRANBULL] =
    {
        .categoryName = _("FAIRY"),
        .height = 14,
        .weight = 487,
        .description = gGranbullPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QWILFISH] =
    {
        .categoryName = _("BALLOON"),
        .height = 5,
        .weight = 39,
        .description = gQwilfishPokedexText,
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCIZOR] =
    {
        .categoryName = _("PINCER"),
        .height = 18,
        .weight = 1180,
        .description = gScizorPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUCKLE] =
    {
        .categoryName = _("MOLD"),
        .height = 6,
        .weight = 205,
        .description = gShucklePokedexText,
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERACROSS] =
    {
        .categoryName = _("SINGLE HORN"),
        .height = 15,
        .weight = 540,
        .description = gHeracrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNEASEL] =
    {
        .categoryName = _("SHARP CLAW"),
        .height = 9,
        .weight = 280,
        .description = gSneaselPokedexText,
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEDDIURSA] =
    {
        .categoryName = _("LITTLE BEAR"),
        .height = 6,
        .weight = 88,
        .description = gTeddiursaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_URSARING] =
    {
        .categoryName = _("HIBERNATOR"),
        .height = 18,
        .weight = 1258,
        .description = gUrsaringPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLUGMA] =
    {
        .categoryName = _("LAVA"),
        .height = 7,
        .weight = 350,
        .description = gSlugmaPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGCARGO] =
    {
        .categoryName = _("LAVA"),
        .height = 8,
        .weight = 550,
        .description = gMagcargoPokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWINUB] =
    {
        .categoryName = _("PIG"),
        .height = 4,
        .weight = 65,
        .description = gSwinubPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PILOSWINE] =
    {
        .categoryName = _("SWINE"),
        .height = 11,
        .weight = 558,
        .description = gPiloswinePokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORSOLA] =
    {
        .categoryName = _("CORAL"),
        .height = 6,
        .weight = 50,
        .description = gCorsolaPokedexText,
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REMORAID] =
    {
        .categoryName = _("JET"),
        .height = 6,
        .weight = 120,
        .description = gRemoraidPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OCTILLERY] =
    {
        .categoryName = _("JET"),
        .height = 9,
        .weight = 285,
        .description = gOctilleryPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELIBIRD] =
    {
        .categoryName = _("DELIVERY"),
        .height = 9,
        .weight = 160,
        .description = gDelibirdPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANTINE] =
    {
        .categoryName = _("KITE"),
        .height = 21,
        .weight = 2200,
        .description = gMantinePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SKARMORY] =
    {
        .categoryName = _("ARMOR BIRD"),
        .height = 17,
        .weight = 505,
        .description = gSkarmoryPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HOUNDOUR] =
    {
        .categoryName = _("DARK"),
        .height = 6,
        .weight = 108,
        .description = gHoundourPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOUNDOOM] =
    {
        .categoryName = _("DARK"),
        .height = 14,
        .weight = 350,
        .description = gHoundoomPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KINGDRA] =
    {
        .categoryName = _("DRAGON"),
        .height = 18,
        .weight = 1520,
        .description = gKingdraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHANPY] =
    {
        .categoryName = _("LONG NOSE"),
        .height = 5,
        .weight = 335,
        .description = gPhanpyPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DONPHAN] =
    {
        .categoryName = _("ARMOR"),
        .height = 11,
        .weight = 1200,
        .description = gDonphanPokedexText,
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON2] =
    {
        .categoryName = _("VIRTUAL"),
        .height = 6,
        .weight = 325,
        .description = gPorygon2PokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STANTLER] =
    {
        .categoryName = _("BIG HORN"),
        .height = 14,
        .weight = 712,
        .description = gStantlerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMEARGLE] =
    {
        .categoryName = _("PAINTER"),
        .height = 12,
        .weight = 580,
        .description = gSmearglePokedexText,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYROGUE] =
    {
        .categoryName = _("SCUFFLE"),
        .height = 7,
        .weight = 210,
        .description = gTyroguePokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONTOP] =
    {
        .categoryName = _("HANDSTAND"),
        .height = 14,
        .weight = 480,
        .description = gHitmontopPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMOOCHUM] =
    {
        .categoryName = _("KISS"),
        .height = 4,
        .weight = 60,
        .description = gSmoochumPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELEKID] =
    {
        .categoryName = _("ELECTRIC"),
        .height = 6,
        .weight = 235,
        .description = gElekidPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGBY] =
    {
        .categoryName = _("LIVE COAL"),
        .height = 7,
        .weight = 214,
        .description = gMagbyPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILTANK] =
    {
        .categoryName = _("MILK COW"),
        .height = 12,
        .weight = 755,
        .description = gMiltankPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLISSEY] =
    {
        .categoryName = _("HAPPINESS"),
        .height = 15,
        .weight = 468,
        .description = gBlisseyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_RAIKOU] =
    {
        .categoryName = _("THUNDER"),
        .height = 19,
        .weight = 1780,
        .description = gRaikouPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_ENTEI] =
    {
        .categoryName = _("VOLCANO"),
        .height = 21,
        .weight = 1980,
        .description = gEnteiPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SUICUNE] =
    {
        .categoryName = _("AURORA"),
        .height = 20,
        .weight = 1870,
        .description = gSuicunePokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LARVITAR] =
    {
        .categoryName = _("ROCK SKIN"),
        .height = 6,
        .weight = 720,
        .description = gLarvitarPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUPITAR] =
    {
        .categoryName = _("HARD SHELL"),
        .height = 12,
        .weight = 1520,
        .description = gPupitarPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRANITAR] =
    {
        .categoryName = _("ARMOR"),
        .height = 20,
        .weight = 2020,
        .description = gTyranitarPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LUGIA] =
    {
        .categoryName = _("DIVING"),
        .height = 52,
        .weight = 2160,
        .description = gLugiaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [NATIONAL_DEX_HO_OH] =
    {
        .categoryName = _("RAINBOW"),
        .height = 38,
        .weight = 1990,
        .description = gHoOhPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },

    [NATIONAL_DEX_CELEBI] =
    {
        .categoryName = _("TIME TRAVEL"),
        .height = 6,
        .weight = 50,
        .description = gCelebiPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TREECKO] =
    {
        .categoryName = _("WOOD GECKO"),
        .height = 5,
        .weight = 50,
        .description = gTreeckoPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROVYLE] =
    {
        .categoryName = _("WOOD GECKO"),
        .height = 9,
        .weight = 216,
        .description = gGrovylePokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCEPTILE] =
    {
        .categoryName = _("FOREST"),
        .height = 17,
        .weight = 522,
        .description = gSceptilePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TORCHIC] =
    {
        .categoryName = _("CHICK"),
        .height = 4,
        .weight = 25,
        .description = gTorchicPokedexText,
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBUSKEN] =
    {
        .categoryName = _("YOUNG FOWL"),
        .height = 9,
        .weight = 195,
        .description = gCombuskenPokedexText,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLAZIKEN] =
    {
        .categoryName = _("BLAZE"),
        .height = 19,
        .weight = 520,
        .description = gBlazikenPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MUDKIP] =
    {
        .categoryName = _("MUD FISH"),
        .height = 4,
        .weight = 76,
        .description = gMudkipPokedexText,
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARSHTOMP] =
    {
        .categoryName = _("MUD FISH"),
        .height = 7,
        .weight = 280,
        .description = gMarshtompPokedexText,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWAMPERT] =
    {
        .categoryName = _("MUD FISH"),
        .height = 15,
        .weight = 819,
        .description = gSwampertPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POOCHYENA] =
    {
        .categoryName = _("BITE"),
        .height = 5,
        .weight = 136,
        .description = gPoochyenaPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIGHTYENA] =
    {
        .categoryName = _("BITE"),
        .height = 10,
        .weight = 370,
        .description = gMightyenaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZIGZAGOON] =
    {
        .categoryName = _("TINYRACCOON"),
        .height = 4,
        .weight = 175,
        .description = gZigzagoonPokedexText,
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LINOONE] =
    {
        .categoryName = _("RUSHING"),
        .height = 5,
        .weight = 325,
        .description = gLinoonePokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WURMPLE] =
    {
        .categoryName = _("WORM"),
        .height = 3,
        .weight = 36,
        .description = gWurmplePokedexText,
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILCOON] =
    {
        .categoryName = _("COCOON"),
        .height = 6,
        .weight = 100,
        .description = gSilcoonPokedexText,
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEAUTIFLY] =
    {
        .categoryName = _("BUTTERFLY"),
        .height = 10,
        .weight = 284,
        .description = gBeautiflyPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CASCOON] =
    {
        .categoryName = _("COCOON"),
        .height = 7,
        .weight = 115,
        .description = gCascoonPokedexText,
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSTOX] =
    {
        .categoryName = _("POISON MOTH"),
        .height = 12,
        .weight = 316,
        .description = gDustoxPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOTAD] =
    {
        .categoryName = _("WATER WEED"),
        .height = 5,
        .weight = 26,
        .description = gLotadPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOMBRE] =
    {
        .categoryName = _("JOLLY"),
        .height = 12,
        .weight = 325,
        .description = gLombrePokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUDICOLO] =
    {
        .categoryName = _("CAREFREE"),
        .height = 15,
        .weight = 550,
        .description = gLudicoloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SEEDOT] =
    {
        .categoryName = _("ACORN"),
        .height = 5,
        .weight = 40,
        .description = gSeedotPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUZLEAF] =
    {
        .categoryName = _("WILY"),
        .height = 10,
        .weight = 280,
        .description = gNuzleafPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHIFTRY] =
    {
        .categoryName = _("WICKED"),
        .height = 13,
        .weight = 596,
        .description = gShiftryPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAILLOW] =
    {
        .categoryName = _("TINYSWALLOW"),
        .height = 3,
        .weight = 23,
        .description = gTaillowPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWELLOW] =
    {
        .categoryName = _("SWALLOW"),
        .height = 7,
        .weight = 198,
        .description = gSwellowPokedexText,
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WINGULL] =
    {
        .categoryName = _("SEAGULL"),
        .height = 6,
        .weight = 95,
        .description = gWingullPokedexText,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PELIPPER] =
    {
        .categoryName = _("WATER BIRD"),
        .height = 12,
        .weight = 280,
        .description = gPelipperPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RALTS] =
    {
        .categoryName = _("FEELING"),
        .height = 4,
        .weight = 66,
        .description = gRaltsPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KIRLIA] =
    {
        .categoryName = _("EMOTION"),
        .height = 8,
        .weight = 202,
        .description = gKirliaPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARDEVOIR] =
    {
        .categoryName = _("EMBRACE"),
        .height = 16,
        .weight = 484,
        .description = gGardevoirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SURSKIT] =
    {
        .categoryName = _("POND SKATER"),
        .height = 5,
        .weight = 17,
        .description = gSurskitPokedexText,
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MASQUERAIN] =
    {
        .categoryName = _("EYEBALL"),
        .height = 8,
        .weight = 36,
        .description = gMasquerainPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHROOMISH] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 4,
        .weight = 45,
        .description = gShroomishPokedexText,
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRELOOM] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 12,
        .weight = 392,
        .description = gBreloomPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLAKOTH] =
    {
        .categoryName = _("SLACKER"),
        .height = 8,
        .weight = 240,
        .description = gSlakothPokedexText,
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIGOROTH] =
    {
        .categoryName = _("WILD MONKEY"),
        .height = 14,
        .weight = 465,
        .description = gVigorothPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLAKING] =
    {
        .categoryName = _("LAZY"),
        .height = 20,
        .weight = 1305,
        .description = gSlakingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_NINCADA] =
    {
        .categoryName = _("TRAINEE"),
        .height = 5,
        .weight = 55,
        .description = gNincadaPokedexText,
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINJASK] =
    {
        .categoryName = _("NINJA"),
        .height = 8,
        .weight = 120,
        .description = gNinjaskPokedexText,
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHEDINJA] =
    {
        .categoryName = _("SHED"),
        .height = 8,
        .weight = 12,
        .description = gShedinjaPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISMUR] =
    {
        .categoryName = _("WHISPER"),
        .height = 6,
        .weight = 163,
        .description = gWhismurPokedexText,
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOUDRED] =
    {
        .categoryName = _("BIG VOICE"),
        .height = 10,
        .weight = 405,
        .description = gLoudredPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXPLOUD] =
    {
        .categoryName = _("LOUD NOISE"),
        .height = 15,
        .weight = 840,
        .description = gExploudPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAKUHITA] =
    {
        .categoryName = _("GUTS"),
        .height = 10,
        .weight = 864,
        .description = gMakuhitaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HARIYAMA] =
    {
        .categoryName = _("ARM THRUST"),
        .height = 23,
        .weight = 2538,
        .description = gHariyamaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_AZURILL] =
    {
        .categoryName = _("POLKA DOT"),
        .height = 2,
        .weight = 20,
        .description = gAzurillPokedexText,
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOSEPASS] =
    {
        .categoryName = _("COMPASS"),
        .height = 10,
        .weight = 970,
        .description = gNosepassPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SKITTY] =
    {
        .categoryName = _("KITTEN"),
        .height = 6,
        .weight = 110,
        .description = gSkittyPokedexText,
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELCATTY] =
    {
        .categoryName = _("PRIM"),
        .height = 11,
        .weight = 326,
        .description = gDelcattyPokedexText,
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SABLEYE] =
    {
        .categoryName = _("DARKNESS"),
        .height = 5,
        .weight = 110,
        .description = gSableyePokedexText,
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAWILE] =
    {
        .categoryName = _("DECEIVER"),
        .height = 6,
        .weight = 115,
        .description = gMawilePokedexText,
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARON] =
    {
        .categoryName = _("IRON ARMOR"),
        .height = 4,
        .weight = 600,
        .description = gAronPokedexText,
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LAIRON] =
    {
        .categoryName = _("IRON ARMOR"),
        .height = 9,
        .weight = 1200,
        .description = gLaironPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AGGRON] =
    {
        .categoryName = _("IRON ARMOR"),
        .height = 21,
        .weight = 3600,
        .description = gAggronPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_MEDITITE] =
    {
        .categoryName = _("MEDITATE"),
        .height = 6,
        .weight = 112,
        .description = gMedititePokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEDICHAM] =
    {
        .categoryName = _("MEDITATE"),
        .height = 13,
        .weight = 315,
        .description = gMedichamPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTRIKE] =
    {
        .categoryName = _("LIGHTNING"),
        .height = 6,
        .weight = 152,
        .description = gElectrikePokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANECTRIC] =
    {
        .categoryName = _("DISCHARGE"),
        .height = 15,
        .weight = 402,
        .description = gManectricPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PLUSLE] =
    {
        .categoryName = _("CHEERING"),
        .height = 4,
        .weight = 42,
        .description = gPluslePokedexText,
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINUN] =
    {
        .categoryName = _("CHEERING"),
        .height = 4,
        .weight = 42,
        .description = gMinunPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLBEAT] =
    {
        .categoryName = _("FIREFLY"),
        .height = 7,
        .weight = 177,
        .description = gVolbeatPokedexText,
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ILLUMISE] =
    {
        .categoryName = _("FIREFLY"),
        .height = 6,
        .weight = 177,
        .description = gIllumisePokedexText,
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROSELIA] =
    {
        .categoryName = _("THORN"),
        .height = 3,
        .weight = 20,
        .description = gRoseliaPokedexText,
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GULPIN] =
    {
        .categoryName = _("STOMACH"),
        .height = 4,
        .weight = 103,
        .description = gGulpinPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWALOT] =
    {
        .categoryName = _("POISON BAG"),
        .height = 17,
        .weight = 800,
        .description = gSwalotPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CARVANHA] =
    {
        .categoryName = _("SAVAGE"),
        .height = 8,
        .weight = 208,
        .description = gCarvanhaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHARPEDO] =
    {
        .categoryName = _("BRUTAL"),
        .height = 18,
        .weight = 888,
        .description = gSharpedoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_WAILMER] =
    {
        .categoryName = _("BALL WHALE"),
        .height = 20,
        .weight = 1300,
        .description = gWailmerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WAILORD] =
    {
        .categoryName = _("FLOAT WHALE"),
        .height = 145,
        .weight = 3980,
        .description = gWailordPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
    },

    [NATIONAL_DEX_NUMEL] =
    {
        .categoryName = _("NUMB"),
        .height = 7,
        .weight = 240,
        .description = gNumelPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CAMERUPT] =
    {
        .categoryName = _("ERUPTION"),
        .height = 19,
        .weight = 2200,
        .description = gCameruptPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_TORKOAL] =
    {
        .categoryName = _("COAL"),
        .height = 5,
        .weight = 804,
        .description = gTorkoalPokedexText,
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPOINK] =
    {
        .categoryName = _("BOUNCE"),
        .height = 7,
        .weight = 306,
        .description = gSpoinkPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRUMPIG] =
    {
        .categoryName = _("MANIPULATE"),
        .height = 9,
        .weight = 715,
        .description = gGrumpigPokedexText,
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPINDA] =
    {
        .categoryName = _("SPOT PANDA"),
        .height = 11,
        .weight = 50,
        .description = gSpindaPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRAPINCH] =
    {
        .categoryName = _("ANT PIT"),
        .height = 7,
        .weight = 150,
        .description = gTrapinchPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIBRAVA] =
    {
        .categoryName = _("VIBRATION"),
        .height = 11,
        .weight = 153,
        .description = gVibravaPokedexText,
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLYGON] =
    {
        .categoryName = _("MYSTIC"),
        .height = 20,
        .weight = 820,
        .description = gFlygonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CACNEA] =
    {
        .categoryName = _("CACTUS"),
        .height = 4,
        .weight = 513,
        .description = gCacneaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CACTURNE] =
    {
        .categoryName = _("SCARECROW"),
        .height = 13,
        .weight = 774,
        .description = gCacturnePokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWABLU] =
    {
        .categoryName = _("COTTON BIRD"),
        .height = 4,
        .weight = 12,
        .description = gSwabluPokedexText,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALTARIA] =
    {
        .categoryName = _("HUMMING"),
        .height = 11,
        .weight = 206,
        .description = gAltariaPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZANGOOSE] =
    {
        .categoryName = _("CAT FERRET"),
        .height = 13,
        .weight = 403,
        .description = gZangoosePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEVIPER] =
    {
        .categoryName = _("FANG SNAKE"),
        .height = 27,
        .weight = 525,
        .description = gSeviperPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUNATONE] =
    {
        .categoryName = _("METEORITE"),
        .height = 10,
        .weight = 1680,
        .description = gLunatonePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLROCK] =
    {
        .categoryName = _("METEORITE"),
        .height = 12,
        .weight = 1540,
        .description = gSolrockPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARBOACH] =
    {
        .categoryName = _("WHISKERS"),
        .height = 4,
        .weight = 19,
        .description = gBarboachPokedexText,
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISCASH] =
    {
        .categoryName = _("WHISKERS"),
        .height = 9,
        .weight = 236,
        .description = gWhiscashPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORPHISH] =
    {
        .categoryName = _("RUFFIAN"),
        .height = 6,
        .weight = 115,
        .description = gCorphishPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRAWDAUNT] =
    {
        .categoryName = _("ROGUE"),
        .height = 11,
        .weight = 328,
        .description = gCrawdauntPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BALTOY] =
    {
        .categoryName = _("CLAY DOLL"),
        .height = 5,
        .weight = 215,
        .description = gBaltoyPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAYDOL] =
    {
        .categoryName = _("CLAY DOLL"),
        .height = 15,
        .weight = 1080,
        .description = gClaydolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_LILEEP] =
    {
        .categoryName = _("SEA LILY"),
        .height = 10,
        .weight = 238,
        .description = gLileepPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRADILY] =
    {
        .categoryName = _("BARNACLE"),
        .height = 15,
        .weight = 604,
        .description = gCradilyPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANORITH] =
    {
        .categoryName = _("OLD SHRIMP"),
        .height = 7,
        .weight = 125,
        .description = gAnorithPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARMALDO] =
    {
        .categoryName = _("PLATE"),
        .height = 15,
        .weight = 682,
        .description = gArmaldoPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEEBAS] =
    {
        .categoryName = _("FISH"),
        .height = 6,
        .weight = 74,
        .description = gFeebasPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILOTIC] =
    {
        .categoryName = _("TENDER"),
        .height = 62,
        .weight = 1620,
        .description = gMiloticPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CASTFORM] =
    {
        .categoryName = _("WEATHER"),
        .height = 3,
        .weight = 8,
        .description = gCastformPokedexText,
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KECLEON] =
    {
        .categoryName = _("COLOR SWAP"),
        .height = 10,
        .weight = 220,
        .description = gKecleonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUPPET] =
    {
        .categoryName = _("PUPPET"),
        .height = 6,
        .weight = 23,
        .description = gShuppetPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANETTE] =
    {
        .categoryName = _("MARIONETTE"),
        .height = 11,
        .weight = 125,
        .description = gBanettePokedexText,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSKULL] =
    {
        .categoryName = _("REQUIEM"),
        .height = 8,
        .weight = 150,
        .description = gDuskullPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSCLOPS] =
    {
        .categoryName = _("BECKON"),
        .height = 16,
        .weight = 306,
        .description = gDusclopsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TROPIUS] =
    {
        .categoryName = _("FRUIT"),
        .height = 20,
        .weight = 1000,
        .description = gTropiusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CHIMECHO] =
    {
        .categoryName = _("WIND CHIME"),
        .height = 6,
        .weight = 10,
        .description = gChimechoPokedexText,
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABSOL] =
    {
        .categoryName = _("DISASTER"),
        .height = 12,
        .weight = 470,
        .description = gAbsolPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WYNAUT] =
    {
        .categoryName = _("BRIGHT"),
        .height = 6,
        .weight = 140,
        .description = gWynautPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNORUNT] =
    {
        .categoryName = _("SNOW HAT"),
        .height = 7,
        .weight = 168,
        .description = gSnoruntPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLALIE] =
    {
        .categoryName = _("FACE"),
        .height = 15,
        .weight = 2565,
        .description = gGlaliePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPHEAL] =
    {
        .categoryName = _("CLAP"),
        .height = 8,
        .weight = 395,
        .description = gSphealPokedexText,
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEALEO] =
    {
        .categoryName = _("BALL ROLL"),
        .height = 11,
        .weight = 876,
        .description = gSealeoPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WALREIN] =
    {
        .categoryName = _("ICE BREAK"),
        .height = 14,
        .weight = 1506,
        .description = gWalreinPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAMPERL] =
    {
        .categoryName = _("BIVALVE"),
        .height = 4,
        .weight = 525,
        .description = gClamperlPokedexText,
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HUNTAIL] =
    {
        .categoryName = _("DEEP SEA"),
        .height = 17,
        .weight = 270,
        .description = gHuntailPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOREBYSS] =
    {
        .categoryName = _("SOUTH SEA"),
        .height = 18,
        .weight = 226,
        .description = gGorebyssPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RELICANTH] =
    {
        .categoryName = _("LONGEVITY"),
        .height = 10,
        .weight = 234,
        .description = gRelicanthPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUVDISC] =
    {
        .categoryName = _("RENDEZVOUS"),
        .height = 6,
        .weight = 87,
        .description = gLuvdiscPokedexText,
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAGON] =
    {
        .categoryName = _("ROCK HEAD"),
        .height = 6,
        .weight = 421,
        .description = gBagonPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELGON] =
    {
        .categoryName = _("ENDURANCE"),
        .height = 11,
        .weight = 1105,
        .description = gShelgonPokedexText,
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAMENCE] =
    {
        .categoryName = _("DRAGON"),
        .height = 15,
        .weight = 1026,
        .description = gSalamencePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELDUM] =
    {
        .categoryName = _("IRON BALL"),
        .height = 6,
        .weight = 952,
        .description = gBeldumPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METANG] =
    {
        .categoryName = _("IRON CLAW"),
        .height = 12,
        .weight = 2025,
        .description = gMetangPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METAGROSS] =
    {
        .categoryName = _("IRON LEG"),
        .height = 16,
        .weight = 5500,
        .description = gMetagrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
    },

    [NATIONAL_DEX_REGIROCK] =
    {
        .categoryName = _("ROCK PEAK"),
        .height = 17,
        .weight = 2300,
        .description = gRegirockPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_REGICE] =
    {
        .categoryName = _("ICEBERG"),
        .height = 18,
        .weight = 1750,
        .description = gRegicePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REGISTEEL] =
    {
        .categoryName = _("IRON"),
        .height = 19,
        .weight = 2050,
        .description = gRegisteelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LATIAS] =
    {
        .categoryName = _("EON"),
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LATIOS] =
    {
        .categoryName = _("EON"),
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_KYOGRE] =
    {
        .categoryName = _("SEA BASIN"),
        .height = 45,
        .weight = 3520,
        .description = gKyogrePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GROUDON] =
    {
        .categoryName = _("CONTINENT"),
        .height = 35,
        .weight = 9500,
        .description = gGroudonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
        .categoryName = _("SKY HIGH"),
        .height = 70,
        .weight = 2065,
        .description = gRayquazaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_JIRACHI] =
    {
        .categoryName = _("WISH"),
        .height = 3,
        .weight = 11,
        .description = gJirachiPokedexText,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEOXYS] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },
};
