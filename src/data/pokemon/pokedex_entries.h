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
        .categoryName = _("ALGORITHM"),
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
        .categoryName = _("ALGORITHM"),
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
        .weight = 1,
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
        .weight = 220,
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
        .weight = 220,
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
        .weight = 220,
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
        .weight = 230,
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
        .weight = 420,
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
        .weight = 265,
        .description = gArcadiamon_rookiePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARGOMON_ROOKIE] =
    {
        .categoryName = _("ALGORITHM"),
        .height = 7,
        .weight = 290,
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
        .weight = 395,
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
        .weight = 210,
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
        .weight = 110,
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
        .weight = 310,
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
        .weight = 160,
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
        .weight = 180,
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
        .weight = 220,
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
        .weight = 150,
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
        .weight = 310,
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
        .weight = 300,
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
        .weight = 195,
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
        .weight = 306,
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
        .weight = 130,
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
        .weight = 190,
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
        .weight = 80,
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
        .weight = 210,
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
        .weight = 265,
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
        .weight = 190,
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
        .weight = 145,
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
        .weight = 150,
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
        .weight = 104,
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
        .weight = 253,
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
        .weight = 8,
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
        .weight = 7,
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
        .weight = 237,
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
        .weight = 374,
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
        .weight = 441,
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
        .weight = 126,
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
        .weight = 114,
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
        .weight = 226,
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
        .weight = 287,
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
        .weight = 213,
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
        .weight = 263,
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
        .weight = 273,
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
        .weight = 135,
        .description = gFanbeemonPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAMEMON] =
    {
        .categoryName = _("HYRBRID"),
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
        .weight = 175,
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
        .weight = 269,
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
        .weight = 295,
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
        .weight = 175,
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
        .weight = 275,
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
        .weight = 292,
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
        .weight = 135,
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
        .weight = 164,
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
        .weight = 28,
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
        .weight = 108,
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
        .weight = 654,
        .description = gGizumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOBLIMON] =
    {
        .categoryName = _("GOBLIN"),
        .height = 17,
        .weight = 325,
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
        .weight = 212,
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
        .weight = 275,
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
        .weight = 343,
        .description = gGuilmonPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GUILMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 15,
        .weight = 383,
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
        .weight = 291,
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
        .weight = 242,
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
        .weight = 105,
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
        .weight = 142,
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
        .weight = 237,
        .description = gHyokomonPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IGNITEMON] =
    {
        .categoryName = _("REPTILE MAN"),
        .height = 13,
        .weight = 386,
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
        .weight = 175,
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
        .weight = 180,
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
        .weight = 371,
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
        .weight = 185,
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
        .weight = 147,
        .description = gJunkmonPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KAMEMON] =
    {
        .categoryName = _("KAPPA"),
        .height = 11,
        .weight = 231,
        .description = gKamemonPokedexText,
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KERAMON] =
    {
        .categoryName = _("VIRUS"),
        .height = 25,
        .weight = 296,
        .description = gKeramonPokedexText,
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KERAMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 28,
        .weight = 252,
        .description = gKeramon_xPokedexText,
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KODOKGUMON] =
    {
        .categoryName = _("WOLF SPIDER"),
        .height = 7,
        .weight = 157,
        .description = gKodokgumonPokedexText,
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOKABUIMON] =
    {
        .categoryName = _("BEETLE"),
        .height = 21,
        .weight = 286,
        .description = gKokabuiMonPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOKUWAMON] =
    {
        .categoryName = _("STEEL BUG"),
        .height = 10,
        .weight = 642,
        .description = gKokuwamonPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOKUWAMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 13,
        .weight = 679,
        .description = gKokuwamon_xPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOTEMON] =
    {
        .categoryName = _("KENDO"),
        .height = 9,
        .weight = 252,
        .description = gKotemonPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUDAMON] =
    {
        .categoryName = _("KUDAGITSUNE"),
        .height = 5,
        .weight = 56,
        .description = gKudamonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUDAMON_06] =
    {
        .categoryName = _("KUDAGITSUNE"),
        .height = 5,
        .weight = 93,
        .description = gKudamon_06PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KUNEMON] =
    {
        .categoryName = _("BEE-FLY"),
        .height = 7,
        .weight = 151,
        .description = gKunemonPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LABRAMON] =
    {
        .categoryName = _("LABRADOR"),
        .height = 16,
        .weight = 311,
        .description = gLabramonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LALAMON] =
    {
        .categoryName = _("FLOWER BUD"),
        .height = 8,
        .weight = 151,
        .description = gLalamonPokedexText,
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_LIOLLMON] =
    {
        .categoryName = _("TIGER"),
        .height = 10,
        .weight = 209,
        .description = gLiollmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_LOOGAMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 11,
        .weight = 271,
        .description = gLoogamonPokedexText,
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOPMON] =
    {
        .categoryName = _("TWIN"),
        .height = 6,
        .weight = 241,
        .description = gLopmonPokedexText,
        .pokemonScale = 411,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOPMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 7,
        .weight = 198,
        .description = gLopmon_xPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUCEMON] =
    {
        .categoryName = _("ANGEL"),
        .height = 15,
        .weight = 315,
        .description = gLucemonPokedexText,
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUDOMON] =
    {
        .categoryName = _("ARMOUR"),
        .height = 9,
        .weight = 711,
        .description = gLudomonPokedexText,
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUNAMON] =
    {
        .categoryName = _("MOON"),
        .height = 9,
        .weight = 202,
        .description = gLunamonPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUXMON] =
    {
        .categoryName = _("ANGEL"),
        .height = 9,
        .weight = 144,
        .description = gLuxmonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METABEE] =
    {
        .categoryName = _("MEDABOT"),
        .height = 10,
        .weight = 648,
        .description = gMetabeePokedexText,
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KODEKACMON] =
    {
        .categoryName = _("BOSSY"),
        .height = 8,
        .weight = 273,
        .description = gKodekacmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_MODBETAMON] =
    {
        .categoryName = _("AMPHIBIAN"),
        .height = 7,
        .weight = 260,
        .description = gModbetamonPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MONITAMON] =
    {
        .categoryName = _("MONITOR"),
        .height = 8,
        .weight = 421,
        .description = gMonitamonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MONMON] =
    {
        .categoryName = _("MONKEY"),
        .height = 12,
        .weight = 299,
        .description = gMonmonPokedexText,
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MONODRAMON] =
    {
        .categoryName = _("DRAGON"),
        .height = 11,
        .weight = 637,
        .description = gMonodramonPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MORPHOMON] =
    {
        .categoryName = _("BUTTERFLY"),
        .height = 7,
        .weight = 185,
        .description = gMorphomonPokedexText,
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUCHOMON] =
    {
        .categoryName = _("EXOTIC BIRD"),
        .height = 8,
        .weight = 223,
        .description = gMuchomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUSHROOMON] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 11,
        .weight = 280,
        .description = gMushroomonPokedexText,
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NEEMON] =
    {
        .categoryName = _("LAZY"),
        .height = 11,
        .weight = 286,
        .description = gNeemonPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OTAMAMON] =
    {
        .categoryName = _("TADPOLE"),
        .height = 3,
        .weight = 162,
        .description = gOtamamonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OTAMAMON_RED] =
    {
        .categoryName = _("TADPOLE"),
        .height = 3,
        .weight = 191,
        .description = gOtamamon_redPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OTAMAMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 9,
        .weight = 198,
        .description = gOtamamon_xPokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALMON] =
    {
        .categoryName = _("PALM TREE"),
        .height = 10,
        .weight = 278,
        .description = gPalmonPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 11,
        .weight = 201,
        .description = gPalmon_xPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PATAMON] =
    {
        .categoryName = _("HOLY"),
        .height = 7,
        .weight = 210,
        .description = gPatamonPokedexText,
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PAWNMON] =
    {
        .categoryName = _("CHESS"),
        .height = 13,
        .weight = 163,
        .description = gPawnmonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PAWNMON_WHITE] =
    {
        .categoryName = _("CHESS"),
        .height = 13,
        .weight = 163,
        .description = gPawnmon_whitePokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PENGUINMON] =
    {
        .categoryName = _("PENGUIN"),
        .height = 8,
        .weight = 169,
        .description = gPenguinmonPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PETITMAMON] =
    {
        .categoryName = _("DEMON"),
        .height = 7,
        .weight = 156,
        .description = gPetitmamonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_PHASCOMON] =
    {
        .categoryName = _("KOALA"),
        .height = 6,
        .weight = 204,
        .description = gPhascomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_PILLOMON] =
    {
        .categoryName = _("SLEEPING"),
        .height = 4,
        .weight = 162,
        .description = gPillomonPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POMUMON] =
    {
        .categoryName = _("FRUIT"),
        .height = 9,
        .weight = 254,
        .description = gPomumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PSYCHEMON] =
    {
        .categoryName = _("PSYCHEDELIA"),
        .height = 12,
        .weight = 312,
        .description = gPsychemonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PULSEMON] =
    {
        .categoryName = _("HEARTBEAT"),
        .height = 10,
        .weight = 275,
        .description = gPulsemonPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RENAMON] =
    {
        .categoryName = _("KITSUNE"),
        .height = 20,
        .weight = 414,
        .description = gRenamonPokedexText,
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RENAMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 20,
        .weight = 414,
        .description = gRenamon_xPokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROKUSHO] =
    {
        .categoryName = _("MEDABOT"),
        .height = 10,
        .weight = 648,
        .description = gRokushoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RYUDAMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 9,
        .weight = 580,
        .description = gRyudamonPokedexText,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAMON] =
    {
        .categoryName = _("HOLY"),
        .height = 3,
        .weight = 125,
        .description = gSalamonPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 3,
        .weight = 185,
        .description = gSalamon_xPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANGOMON] =
    {
        .categoryName = _("CORAL"),
        .height = 7,
        .weight = 209,
        .description = gSangomonPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANTAAGUMON] =
    {
        .categoryName = _("CHRISTMAS"),
        .height = 12,
        .weight = 325,
        .description = gSantaAgumonPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLKTOYAMON] =
    {
        .categoryName = _("TOY"),
        .height = 11,
        .weight = 54,
        .description = gBlktoyamonPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHAMANMON] =
    {
        .categoryName = _("SHAMAN"),
        .height = 16,
        .weight = 455,
        .description = gShamanmonPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHOUTMON] =
    {
        .categoryName = _("ROCKSTAR"),
        .height = 9,
        .weight = 368,
        .description = gShoutmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_YUKIAGUMON] =
    {
        .categoryName = _("T-REX"),
        .height = 10,
        .weight = 358,
        .description = gYukiagumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_YUKIAGUMON_06] =
    {
        .categoryName = _("T-REX"),
        .height = 10,
        .weight = 358,
        .description = gYukiagumon_06PokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_ICEGOBIMON] =
    {
        .categoryName = _("GOBLIN"),
        .height = 16,
        .weight = 402,
        .description = gIceGobiMonPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SOLARMON] =
    {
        .categoryName = _("GEAR"),
        .height = 15,
        .weight = 699,
        .description = gSolarmonPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOUNBRDMON] =
    {
        .categoryName = _("SPEAKER"),
        .height = 6,
        .weight = 101,
        .description = gSounbrdmonPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPADAMON] =
    {
        .categoryName = _("SPEAR"),
        .height = 12,
        .weight = 286,
        .description = gSpadamonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SPARROWMON] =
    {
        .categoryName = _("JET"),
        .height = 14,
        .weight = 812,
        .description = gSparrowmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [NATIONAL_DEX_STARMON_2010] =
    {
        .categoryName = _("STAR"),
        .height = 5,
        .weight = 137,
        .description = gStarmon_2010PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },

    [NATIONAL_DEX_STRABIMON] =
    {
        .categoryName = _("HYBRID"),
        .height = 20,
        .weight = 411,
        .description = gStrabimonPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNARZAMON] =
    {
        .categoryName = _("SAND LIZARD"),
        .height = 7,
        .weight = 584,
        .description = gSunarzamonPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWIMMON] =
    {
        .categoryName = _("EXOTIC FISH"),
        .height = 10,
        .weight = 261,
        .description = gSwimmonPokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SYAKOMON] =
    {
        .categoryName = _("SHELL"),
        .height = 8,
        .weight = 522,
        .description = gSyakomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SYAKOMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 8,
        .weight = 626,
        .description = gSyakomon_xPokedexText,
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAPIRMON] =
    {
        .categoryName = _("TAPIR"),
        .height = 10,
        .weight = 251,
        .description = gTapirmonPokedexText,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TENTOMON] =
    {
        .categoryName = _("LADYBIRD"),
        .height = 6,
        .weight = 220,
        .description = gTentomonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_TERRIERMON] =
    {
        .categoryName = _("TWIN"),
        .height = 6,
        .weight = 241,
        .description = gTerriermonPokedexText,
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TERRIERMON_ASSISTANT] =
    {
        .categoryName = _("RESEARCH"),
        .height = 6,
        .weight = 249,
        .description = gTerriermon_assistantPokedexText,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TERRIERMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 6,
        .weight = 229,
        .description = gTerriermon_xPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TINKERMON] =
    {
        .categoryName = _("FAIRY TALE"),
        .height = 3,
        .weight = 53,
        .description = gTinkermonPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TINPET] =
    {
        .categoryName = _("MEDABOT"),
        .height = 10,
        .weight = 348,
        .description = gTinpetPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOYAGUMON] =
    {
        .categoryName = _("TOY"),
        .height = 11,
        .weight = 89,
        .description = gToyagumonPokedexText,
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TSUKAIMON] =
    {
        .categoryName = _("GUINEA PIG"),
        .height = 7,
        .weight = 210,
        .description = gTsukaimonPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VEEMON] =
    {
        .categoryName = _("V"),
        .height = 8,
        .weight = 289,
        .description = gVeemonPokedexText,
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VEMMON] =
    {
        .categoryName = _("EXPERIMENT"),
        .height = 9,
        .weight = 631,
        .description = gVemmonPokedexText,
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VORVOMON] =
    {
        .categoryName = _("ROCK DRAGON"),
        .height = 7,
        .weight = 835,
        .description = gVorvomonPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WORMMON] =
    {
        .categoryName = _("WORM"),
        .height = 5,
        .weight = 158,
        .description = gWormmonPokedexText,
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZENIMON] =
    {
        .categoryName = _("YEN"),
        .height = 1,
        .weight = 1,
        .description = gZenimonPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZUBAMON] =
    {
        .categoryName = _("SWORD"),
        .height = 9,
        .weight = 754,
        .description = gZubamonPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AEGIOMON] =
    {
        .categoryName = _("DEITY"),
        .height = 17,
        .weight = 320,
        .description = gAegiomonPokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AGUNIMON] =
    {
        .categoryName = _("ANCIENT"),
        .height = 21,
        .weight = 826,
        .description = gAgunimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_AIRDRAMON] =
    {
        .categoryName = _("MYTHICAL"),
        .height = 150,
        .weight = 2643,
        .description = gAirdramonPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AKATORIMON] =
    {
        .categoryName = _("CHICKEN"),
        .height = 23,
        .weight = 576,
        .description = gAkatorimonPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALLOMON] =
    {
        .categoryName = _("DINOSAUR"),
        .height = 34,
        .weight = 1003,
        .description = gAllomonPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALLOMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 35,
        .weight = 1074,
        .description = gAllomon_xPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANGELAMON] =
    {
        .categoryName = _("DIVORCE"),
        .height = 13,
        .weight = 250,
        .description = gAngelamonPokedexText,
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANGEMON] =
    {
        .categoryName = _("ANGEL"),
        .height = 27,
        .weight = 791,
        .description = gAngemonPokedexText,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANKYLOMON] =
    {
        .categoryName = _("DINOSAUR"),
        .height = 32,
        .weight = 964,
        .description = gAnkylomonPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_APEMON] =
    {
        .categoryName = _("APE"),
        .height = 20,
        .weight = 648,
        .description = gApemonPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AQUILAMON] =
    {
        .categoryName = _("BALD EAGLE"),
        .height = 44,
        .weight = 875,
        .description = gAquilamonPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCADIAMON_CHAMPION] =
    {
        .categoryName = _("ULTIMATE"),
        .height = 19,
        .weight = 653,
        .description = gArcadiamon_championPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCHELOMON] =
    {
        .categoryName = _("SEA TURTLE"),
        .height = 58,
        .weight = 1235,
        .description = gArchelomonPokedexText,
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARGOMON_CHAMPION] =
    {
        .categoryName = _("ALGORITHM"),
        .height = 15,
        .weight = 358,
        .description = gArgomon_championPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARESDRAMON] =
    {
        .categoryName = _("ARRESTER"),
        .height = 25,
        .weight = 905,
        .description = gAresdramonPokedexText,
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ATAMADEMON] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 63,
        .weight = 943,
        .description = gAtamademonPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AURUMON] =
    {
        .categoryName = _("OWL"),
        .height = 16,
        .weight = 440,
        .description = gAurumonPokedexText,
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AXEMON] =
    {
        .categoryName = _("AXE"),
        .height = 31,
        .weight = 885,
        .description = gAxemonPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BABOONMON] =
    {
        .categoryName = _("BABOON"),
        .height = 30,
        .weight = 963,
        .description = gBaboonmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_BAKEMON] =
    {
        .categoryName = _("GHOST"),
        .height = 12,
        .weight = 55,
        .description = gBakemonPokedexText,
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BALISTAMON] =
    {
        .categoryName = _("BEETLE"),
        .height = 21,
        .weight = 876,
        .description = gBalistamonPokedexText,
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BALUCHIMON] =
    {
        .categoryName = _("HOLY"),
        .height = 30,
        .weight = 653,
        .description = gBaluchimonPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAOHUCKMON] =
    {
        .categoryName = _("TRAINING"),
        .height = 15,
        .weight = 352,
        .description = gBaohuckmonPokedexText,
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAROMON] =
    {
        .categoryName = _("FORESIGHT"),
        .height = 23,
        .weight = 505,
        .description = gBaromonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRAILMON_BATTLE_ARMAMENT] =
    {
        .categoryName = _("TRAIN"),
        .height = 65,
        .weight = 2460,
        .description = gTrailmon_battle_armamentPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BETGAMAMON] =
    {
        .categoryName = _("SPIRIT"),
        .height = 16,
        .weight = 311,
        .description = gBetgamamonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIOQUETMON] =
    {
        .categoryName = _("BIO-HYBRID"),
        .height = 47,
        .weight = 885,
        .description = gBioquetmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_BIOSTEGMON] =
    {
        .categoryName = _("BIO-HYBRID"),
        .height = 57,
        .weight = 1964,
        .description = gBiostegmonPokedexText,
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIOTHUNMON] =
    {
        .categoryName = _("BIO-HYBRID"),
        .height = 61,
        .weight = 799,
        .description = gBiothunmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_BIRDRAMON] =
    {
        .categoryName = _("PHOENIX"),
        .height = 60,
        .weight = 678,
        .description = gBirdramonPokedexText,
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLGAOGAMON] =
    {
        .categoryName = _("AKITA INU"),
        .height = 38,
        .weight = 775,
        .description = gBlgaogamonPokedexText,
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLGARGOMON] =
    {
        .categoryName = _("DOG RABBIT"),
        .height = 15,
        .weight = 274,
        .description = gBlgargomonPokedexText,
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLGARURMON] =
    {
        .categoryName = _("CANINE"),
        .height = 56,
        .weight = 653,
        .description = gBlgarurmonPokedexText,
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLKGATOMON] =
    {
        .categoryName = _("FALLEN CAT"),
        .height = 6,
        .weight = 107,
        .description = gBlkgatomonPokedexText,
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLKGATOMON_UVER] =
    {
        .categoryName = _("COURIER"),
        .height = 6,
        .weight = 231,
        .description = gBlkgatomon_uverPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLGROWLMON] =
    {
        .categoryName = _("DARK HAZARD"),
        .height = 51,
        .weight = 876,
        .description = gBlgrowlmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_SAWKUWAMON] =
    {
        .categoryName = _("BLADE BUG"),
        .height = 13,
        .weight = 112,
        .description = gSawkuwamonPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLIMPMON] =
    {
        .categoryName = _("BLIMP"),
        .height = 140,
        .weight = 1001,
        .description = gBlimpmonPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOARMON] =
    {
        .categoryName = _("BOAR"),
        .height = 17,
        .weight = 462,
        .description = gBoarmonPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOMNANIMON] =
    {
        .categoryName = _("BOMB"),
        .height = 10,
        .weight = 382,
        .description = gBomnanimonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOOGIEMON] =
    {
        .categoryName = _("DEVIL"),
        .height = 22,
        .weight = 574,
        .description = gBoogiemonPokedexText,
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUCCHIEMON_RED] =
    {
        .categoryName = _("CALMING"),
        .height = 12,
        .weight = 206,
        .description = gBucchiemon_redPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUCCHIEMON_GREEN] =
    {
        .categoryName = _("CALMING"),
        .height = 12,
        .weight = 206,
        .description = gBucchiemon_greenPokedexText,
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BULKMON] =
    {
        .categoryName = _("FITNESS"),
        .height = 32,
        .weight = 865,
        .description = gBulkmonPokedexText,
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BULLMON] =
    {
        .categoryName = _("BULL"),
        .height = 20,
        .weight = 553,
        .description = gBullmonPokedexText,
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURAIMON] =
    {
        .categoryName = _("VAGRANT"),
        .height = 24,
        .weight = 657,
        .description = gBuraimonPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURGERMON_CHAMPION] =
    {
        .categoryName = _("BURGER"),
        .height = 10,
        .weight = 193,
        .description = gBurgermon_championPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CHOUFLYMON] =
    {
        .categoryName = _("BUTTERFLY"),
        .height = 18,
        .weight = 208,
        .description = gChouflymonPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CENTARUMON] =
    {
        .categoryName = _("CENTAUR"),
        .height = 31,
        .weight = 703,
        .description = gCentarumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CHAMBLEMON] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 33,
        .weight = 407,
        .description = gChamblemonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHAMELEMON] =
    {
        .categoryName = _("CAMOUFLAGE"),
        .height = 16,
        .weight = 275,
        .description = gChamelemonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
    },

    [NATIONAL_DEX_CHRYSALMON] =
    {
        .categoryName = _("VIRUS"),
        .height = 42,
        .weight = 972,
        .description = gChrysalmonPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CITRAMON] =
    {
        .categoryName = _("CITRUS"),
        .height = 10,
        .weight = 162,
        .description = gCitramonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_CLOCKMON] =
    {
        .categoryName = _("TIME"),
        .height = 25,
        .weight = 884,
        .description = gClockmonPokedexText,
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLOCKMON_FUSION] =
    {
        .categoryName = _("TIME"),
        .height = 19,
        .weight = 760,
        .description = gClockmon_fusionPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COELAMON] =
    {
        .categoryName = _("PRIMITIVE"),
        .height = 12,
        .weight = 598,
        .description = gCoelamonPokedexText,
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COREDRAMON_BLUE] =
    {
        .categoryName = _("DRAGON"),
        .height = 53,
        .weight = 2536,
        .description = gCoredramon_bluePokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COREDRAMON_GREEN] =
    {
        .categoryName = _("DRAGON"),
        .height = 53,
        .weight = 2947,
        .description = gCoredramon_greenPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CYCLONEMON] =
    {
        .categoryName = _("CYCLOPS"),
        .height = 30,
        .weight = 1134,
        .description = gCyclonemonPokedexText,
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DAMEMON] =
    {
        .categoryName = _("NO GOOD"),
        .height = 9,
        .weight = 246,
        .description = gDamemonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_DARCMON] =
    {
        .categoryName = _("HERO"),
        .height = 19,
        .weight = 629,
        .description = gDarcmonPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRAILMON_DARK] =
    {
        .categoryName = _("TRAIN"),
        .height = 40,
        .weight = 1964,
        .description = gTrailmon_darkPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARLIZAMON] =
    {
        .categoryName = _("EVIL TWIN"),
        .height = 29,
        .weight = 974,
        .description = gDarlizamonPokedexText,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARMAILMON] =
    {
        .categoryName = _("MOUNT"),
        .height = 174,
        .weight = 4964,
        .description = gDarmailmonPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARKTYRMON] =
    {
        .categoryName = _("FRENZY"),
        .height = 88,
        .weight = 1432,
        .description = gDarktyrmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARKTYRMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 60,
        .weight = 1248,
        .description = gDarktyrmon_xPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DECKDRAMON] =
    {
        .categoryName = _("ANTI-AIR"),
        .height = 49,
        .weight = 1180,
        .description = gDeckdramonPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELTAMON] =
    {
        .categoryName = _("TRIPARTITE"),
        .height = 177,
        .weight = 3540,
        .description = gDeltamonPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEPTHMON] =
    {
        .categoryName = _("DIVING"),
        .height = 23,
        .weight = 864,
        .description = gDepthmonPokedexText,
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEPUTYMON] =
    {
        .categoryName = _("REVOLVER"),
        .height = 19,
        .weight = 781,
        .description = gDeputymonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEVIDRAMON] =
    {
        .categoryName = _("DARK BEAST"),
        .height = 70,
        .weight = 1875,
        .description = gDevidramonPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEVIMON] =
    {
        .categoryName = _("DEVIL"),
        .height = 30,
        .weight = 908,
        .description = gDevimonPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEXDORUMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 31,
        .weight = 657,
        .description = gDexdorumonPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DIATRYMON] =
    {
        .categoryName = _("FOSSIL BIRD"),
        .height = 37,
        .weight = 999,
        .description = gDiatrymonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_DIGMON] =
    {
        .categoryName = _("DRILL"),
        .height = 26,
        .weight = 776,
        .description = gDigmonPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DINOHYUMON] =
    {
        .categoryName = _("TRIBAL"),
        .height = 21,
        .weight = 801,
        .description = gDinohyumonPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOBERMON] =
    {
        .categoryName = _("HUNTING"),
        .height = 11,
        .weight = 365,
        .description = gDobermonPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOBERMON_X] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 13,
        .weight = 402,
        .description = gDobermon_xPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOGGYMON] =
    {
        .categoryName = _("CARTOON"),
        .height = 8,
        .weight = 211,
        .description = gDoggymonPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOKUGUMON] =
    {
        .categoryName = _("SPIDER"),
        .height = 21,
        .weight = 685,
        .description = gDokugumonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_DOLPHMON] =
    {
        .categoryName = _("DOLPHIN"),
        .height = 12,
        .weight = 329,
        .description = gDolphmonPokedexText,
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DONSHOUMON] =
    {
        .categoryName = _("RHYTHM"),
        .height = 7,
        .weight = 220,
        .description = gDonshoumonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DORUGAMON] =
    {
        .categoryName = _("X ANTIBODY"),
        .height = 30,
        .weight = 954,
        .description = gDorugamonPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DORULUMON] =
    {
        .categoryName = _("DRILL WOLF"),
        .height = 21,
        .weight = 796,
        .description = gDorulumonPokedexText,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRIMOGEMON] =
    {
        .categoryName = _("MOLE"),
        .height = 23,
        .weight = 908,
        .description = gDrimogemonPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EBIDRAMON] =
    {
        .categoryName = _("SHRIMP"),
        .height = 18,
        .weight = 792,
        .description = gEbidramonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ELEPHANMON] =
    {
        .categoryName = _("ELEPHANT"),
        .height = 55,
        .weight = 2350,
        .description = gElephanmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_EOSMON_CHAMPION] =
    {
        .categoryName = _("ARTIFICIAL"),
        .height = 11,
        .weight = 582,
        .description = gEosmon_championPokedexText,
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXERMON] =
    {
        .categoryName = _("YOGA"),
        .height = 25,
        .weight = 872,
        .description = gExermonPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXVEEMON] =
    {
        .categoryName = _("DRAGON MAN"),
        .height = 45,
        .weight = 1432,
        .description = gExveemonPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXVEEMON_VIRUS] =
    {
        .categoryName = _("DRAGON MAN"),
        .height = 44,
        .weight = 1397,
        .description = gExveemon_virusPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EYESMON] =
    {
        .categoryName = _("SHADOW"),
        .height = 69,
        .weight = 53,
        .description = gEyesmonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EYESMON_SCATTERMODE] =
    {
        .categoryName = _("SHADOW"),
        .height = 3,
        .weight = 1,
        .description = gEyesmon_scattermodePokedexText,
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FANGMON] =
    {
        .categoryName = _("GRIMMS WOLF"),
        .height = 28,
        .weight = 753,
        .description = gFangmonPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FILMON] =
    {
        .categoryName = _("HEDGEHOG"),
        .height = 19,
        .weight = 634,
        .description = gFilmonPokedexText,
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
