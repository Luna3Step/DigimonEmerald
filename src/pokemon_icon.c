#include "global.h"
#include "graphics.h"
#include "mail.h"
#include "palette.h"
#include "pokemon_icon.h"
#include "sprite.h"

#define POKE_ICON_BASE_PAL_TAG 56000

#define INVALID_ICON_SPECIES SPECIES_OLD_UNOWN_J // Oddly specific, used when an icon should be a ?. Any of the 'old unown' would work

struct MonIconSpriteTemplate
{
    const struct OamData *oam;
    const u8 *image;
    const union AnimCmd *const *anims;
    const union AffineAnimCmd *const *affineAnims;
    void (*callback)(struct Sprite *);
    u16 paletteTag;
};

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *, s16, s16, u8);
static void FreeAndDestroyMonIconSprite_(struct Sprite *sprite);

const u8 *const gMonIconTable[] =
{
    [SPECIES_NONE] = gMonIcon_Bulbasaur,
    [SPECIES_ARGOMON_F] = gMonIcon_Bulbasaur,
    [SPECIES_BOMBMON] = gMonIcon_Ivysaur,
    [SPECIES_BOMMON] = gMonIcon_Venusaur,
    [SPECIES_BOTAMON] = gMonIcon_Charmander,
    [SPECIES_CHIBICKMON] = gMonIcon_Charmeleon,
    [SPECIES_CHIBOMON] = gMonIcon_Charizard,
    [SPECIES_CONOMON] = gMonIcon_Squirtle,
    [SPECIES_COTSUCOMON] = gMonIcon_Wartortle,
    [SPECIES_CURIMON] = gMonIcon_Blastoise,
    [SPECIES_DATIRIMON] = gMonIcon_Caterpie,
    [SPECIES_DODOMON] = gMonIcon_Metapod,
    [SPECIES_DOKIMON] = gMonIcon_Butterfree,
    [SPECIES_FUFUMON] = gMonIcon_Weedle,
    [SPECIES_JYARIMON] = gMonIcon_Kakuna,
    [SPECIES_KEEMON] = gMonIcon_Beedrill,
    [SPECIES_KETOMON] = gMonIcon_Pidgey,
    [SPECIES_KURAMON] = gMonIcon_Pidgeotto,
    [SPECIES_LEAFMON] = gMonIcon_Pidgeot,
    [SPECIES_CHOROMON] = gMonIcon_Rattata,
    [SPECIES_MOKUMON] = gMonIcon_Raticate,
    [SPECIES_NYOKIMON] = gMonIcon_Spearow,
    [SPECIES_PABUMON] = gMonIcon_Fearow,
    [SPECIES_PAFUMON] = gMonIcon_Ekans,
    [SPECIES_PAOMON] = gMonIcon_Arbok,
    [SPECIES_PETITMON] = gMonIcon_Pikachu,
    [SPECIES_PICHIMON] = gMonIcon_Raichu,
    [SPECIES_POPOMON] = gMonIcon_Sandshrew,
    [SPECIES_POYOMON] = gMonIcon_Sandslash,
    [SPECIES_PUNIMON] = gMonIcon_NidoranF,
    [SPECIES_PUPUMON] = gMonIcon_Nidorina,
    [SPECIES_PURURUMON] = gMonIcon_Nidoqueen,
    [SPECIES_PUSUMON] = gMonIcon_NidoranM,
    [SPECIES_PUTTIMON] = gMonIcon_Nidorino,
    [SPECIES_PUWAMON] = gMonIcon_Nidoking,
    [SPECIES_PUYOMON] = gMonIcon_Clefairy,
    [SPECIES_PYONMON] = gMonIcon_Clefable,
    [SPECIES_RELEMON] = gMonIcon_Vulpix,
    [SPECIES_SAKUMON] = gMonIcon_Ninetales,
    [SPECIES_SANDMON] = gMonIcon_Jigglypuff,
    [SPECIES_TSUBUMON] = gMonIcon_Wigglytuff,
    [SPECIES_ICEBOTAMON] = gMonIcon_Zubat,
    [SPECIES_YURAMON] = gMonIcon_Golbat,
    [SPECIES_ZERIMON] = gMonIcon_Oddish,
    [SPECIES_ZURUMON] = gMonIcon_Gloom,
    [SPECIES_ARCADIAMON_IT] = gMonIcon_Vileplume,
    [SPECIES_ARGOMON_IT] = gMonIcon_Paras,
    [SPECIES_BABYDMON] = gMonIcon_Parasect,
    [SPECIES_BIBIMON] = gMonIcon_Venonat,
    [SPECIES_BOSAMON] = gMonIcon_Venomoth,
    [SPECIES_BUDMON] = gMonIcon_Diglett,
    [SPECIES_BUKAMON] = gMonIcon_Dugtrio,
    [SPECIES_CALUMON] = gMonIcon_Meowth,
    [SPECIES_CHAPMON] = gMonIcon_Persian,
    [SPECIES_CHICCHIMON] = gMonIcon_Psyduck,
    [SPECIES_DEMMERAMON] = gMonIcon_Golduck,
    [SPECIES_DEMIVEEMON] = gMonIcon_Mankey,
    [SPECIES_DORIMON] = gMonIcon_Primeape,
    [SPECIES_FRIMON] = gMonIcon_Growlithe,
    [SPECIES_GIGIMON] = gMonIcon_Arcanine,
    [SPECIES_GUMMYMON] = gMonIcon_Poliwag,
    [SPECIES_GURIMON] = gMonIcon_Poliwhirl,
    [SPECIES_HIYARIMON] = gMonIcon_Poliwrath,
    [SPECIES_HOPMON] = gMonIcon_Abra,
    [SPECIES_KAKKINMON] = gMonIcon_Kadabra,
    [SPECIES_KAPURIMON] = gMonIcon_Alakazam,
    [SPECIES_KOKOMON] = gMonIcon_Machop,
    [SPECIES_KOROMON] = gMonIcon_Machoke,
    [SPECIES_KOZENIMON] = gMonIcon_Machamp,
    [SPECIES_KYAROMON] = gMonIcon_Bellsprout,
    [SPECIES_KYOKYOMON] = gMonIcon_Weepinbell,
    [SPECIES_KYUPIMON] = gMonIcon_Victreebel,
    [SPECIES_MINOMON] = gMonIcon_Tentacool,
    [SPECIES_MISSIMON] = gMonIcon_Tentacruel,
    [SPECIES_MONIMON] = gMonIcon_Geodude,
    [SPECIES_MOONMON] = gMonIcon_Graveler,
    [SPECIES_MOTIMON] = gMonIcon_Golem,
    [SPECIES_NEGAMON] = gMonIcon_Ponyta,
    [SPECIES_NYAROMON] = gMonIcon_Rapidash,
    [SPECIES_PAGUMON] = gMonIcon_Slowpoke,
    [SPECIES_PICKMON_SILVER] = gMonIcon_Slowbro,
    [SPECIES_PICKMON_WHITE] = gMonIcon_Magnemite,
    [SPECIES_PICKMON_RED] = gMonIcon_Magneton,
    [SPECIES_PINAMON] = gMonIcon_Farfetchd,
    [SPECIES_POROMON] = gMonIcon_Doduo,
    [SPECIES_PUROROMON] = gMonIcon_Dodrio,
    [SPECIES_PUSURIMON] = gMonIcon_Seel,
    [SPECIES_PUYOYOMON] = gMonIcon_Dewgong,
    [SPECIES_SAKUTTOMON] = gMonIcon_Grimer,
    [SPECIES_SUNMON] = gMonIcon_Muk,
    [SPECIES_TANEMON] = gMonIcon_Shellder,
    [SPECIES_TOKOMON] = gMonIcon_Cloyster,
    [SPECIES_TOKOMON_X] = gMonIcon_Gastly,
    [SPECIES_TORBALLMON] = gMonIcon_Haunter,
    [SPECIES_TSUMEMON] = gMonIcon_Gengar,
    [SPECIES_TSUNOMON] = gMonIcon_Onix,
    [SPECIES_TUMBLEMON] = gMonIcon_Drowzee,
    [SPECIES_UPAMON] = gMonIcon_Hypno,
    [SPECIES_VIXIMON] = gMonIcon_Krabby,
    [SPECIES_WANYAMON] = gMonIcon_Kingler,
    [SPECIES_XIAOMON] = gMonIcon_Voltorb,
    [SPECIES_YAAMON] = gMonIcon_Electrode,
    [SPECIES_YOKOMON] = gMonIcon_Exeggcute,
    [SPECIES_AGUMON] = gMonIcon_Exeggutor,
    [SPECIES_AGUMON_06] = gMonIcon_Cubone,
    [SPECIES_AGUMON_EXPERT] = gMonIcon_Marowak,
    [SPECIES_AGUMON_X] = gMonIcon_Hitmonlee,
    [SPECIES_ANGORAMON] = gMonIcon_Hitmonchan,
    [SPECIES_ARCADIAMON_ROOKIE] = gMonIcon_Lickitung,
    [SPECIES_ARGOMON_ROOKIE] = gMonIcon_Koffing,
    [SPECIES_ARMADILMON] = gMonIcon_Weezing,
    [SPECIES_ARURAUMON] = gMonIcon_Rhyhorn,
    [SPECIES_BAKOMON] = gMonIcon_Rhydon,
    [SPECIES_BEARMON] = gMonIcon_Chansey,
    [SPECIES_BETAMON] = gMonIcon_Tangela,
    [SPECIES_BETAMON_X] = gMonIcon_Kangaskhan,
    [SPECIES_BIYOMON] = gMonIcon_Horsea,
    [SPECIES_BLKAGUMON] = gMonIcon_Seadra,
    [SPECIES_BLKAGUMON_X] = gMonIcon_Goldeen,
    [SPECIES_BLKGABUMON] = gMonIcon_Seaking,
    [SPECIES_BLKGUILMON] = gMonIcon_Staryu,
    [SPECIES_BOKOMON] = gMonIcon_Starmie,
    [SPECIES_BULUCOMON] = gMonIcon_Mrmime,
    [SPECIES_BURGERMON] = gMonIcon_Scyther,
    [SPECIES_SAMUAGUMON] = gMonIcon_Jynx,
    [SPECIES_CANDLEMON] = gMonIcon_Electabuzz,
    [SPECIES_CHIKURIMON] = gMonIcon_Magmar,
    [SPECIES_TYUTYUMON] = gMonIcon_Pinsir,
    [SPECIES_CHUUMON] = gMonIcon_Tauros,
    [SPECIES_HAZYAGUMON] = gMonIcon_Magikarp,
    [SPECIES_COMMDRAMON] = gMonIcon_Gyarados,
    [SPECIES_CORONAMON] = gMonIcon_Lapras,
    [SPECIES_CRABMON] = gMonIcon_Ditto,
    [SPECIES_CRABMON_X] = gMonIcon_Eevee,
    [SPECIES_CUTEMON] = gMonIcon_Vaporeon,
    [SPECIES_DAMEMON] = gMonIcon_Jolteon,
    [SPECIES_DEMIDEVMON] = gMonIcon_Flareon,
    [SPECIES_DOKUNEMON] = gMonIcon_Porygon,
    [SPECIES_DONDOKOMON] = gMonIcon_Omanyte,
    [SPECIES_DORUMON] = gMonIcon_Omastar,
    [SPECIES_DOTAGUMON] = gMonIcon_Kabuto,
    [SPECIES_DOTFALCMON] = gMonIcon_Kabutops,
    [SPECIES_DRACMON] = gMonIcon_Aerodactyl,
    [SPECIES_DRACOMON] = gMonIcon_Snorlax,
    [SPECIES_DRACOMON_X] = gMonIcon_Articuno,
    [SPECIES_EBIBURGMON] = gMonIcon_Zapdos,
    [SPECIES_EKAKIMON] = gMonIcon_Moltres,
    [SPECIES_ELECMON] = gMonIcon_Dratini,
    [SPECIES_ELECMON_VIOLET] = gMonIcon_Dragonair,
    [SPECIES_ESPIMON] = gMonIcon_Dragonite,
    [SPECIES_AGUMON_FAKE_EXPERT] = gMonIcon_Mewtwo,
    [SPECIES_FALCOMON] = gMonIcon_Mew,
    [SPECIES_FALCOMON_06] = gMonIcon_Chikorita,
    [SPECIES_FANBEEMON] = gMonIcon_Bayleef,
    [SPECIES_FLAMEMON] = gMonIcon_Meganium,
    [SPECIES_FLORAMON] = gMonIcon_Cyndaquil,
    [SPECIES_GABUMON] = gMonIcon_Quilava,
    [SPECIES_GABUMON_X] = gMonIcon_Typhlosion,
    [SPECIES_GAMMAMON] = gMonIcon_Totodile,
    [SPECIES_GAOMON] = gMonIcon_Croconaw,
    [SPECIES_GAOSSMON] = gMonIcon_Feraligatr,
    [SPECIES_GAZIMON] = gMonIcon_Sentret,
    [SPECIES_GAZIMON_X] = gMonIcon_Furret,
    [SPECIES_GHOSTMON] = gMonIcon_Hoothoot,
    [SPECIES_GIZAMON] = gMonIcon_Noctowl,
    [SPECIES_GIZUMON] = gMonIcon_Ledyba,
    [SPECIES_GOBLIMON] = gMonIcon_Ledian,
    [SPECIES_GOMAMON] = gMonIcon_Spinarak,
    [SPECIES_GOMAMON_X] = gMonIcon_Ariados,
    [SPECIES_GOTSUMON] = gMonIcon_Crobat,
    [SPECIES_GOTSUMON_X] = gMonIcon_Chinchou,
    [SPECIES_GUILMON] = gMonIcon_Lanturn,
    [SPECIES_GUILMON_X] = gMonIcon_Pichu,
    [SPECIES_GUMDRAMON] = gMonIcon_Cleffa,
    [SPECIES_HACKMON] = gMonIcon_Igglybuff,
    [SPECIES_HAGURUMON] = gMonIcon_Togepi,
    [SPECIES_HAGURUMON_X] = gMonIcon_Togetic,
    [SPECIES_HAWKMON] = gMonIcon_Natu,
    [SPECIES_HERISSMON] = gMonIcon_Xatu,
    [SPECIES_HYOKOMON] = gMonIcon_Mareep,
    [SPECIES_IGNITEMON] = gMonIcon_Flaaffy,
    [SPECIES_IMPMON] = gMonIcon_Ampharos,
    [SPECIES_IMPMON_X] = gMonIcon_Bellossom,
    [SPECIES_JAZAMON] = gMonIcon_Marill,
    [SPECIES_JELLYMON] = gMonIcon_Azumarill,
    [SPECIES_JUNKMON] = gMonIcon_Sudowoodo,
    [SPECIES_KAMEMON] = gMonIcon_Politoed,
    [SPECIES_KERAMON] = gMonIcon_Hoppip,
    [SPECIES_KERAMON_X] = gMonIcon_Skiploom,
    [SPECIES_KODOKGUMON] = gMonIcon_Jumpluff,
    [SPECIES_KOKABUIMON] = gMonIcon_Aipom,
    [SPECIES_KOKUWAMON] = gMonIcon_Sunkern,
    [SPECIES_KOKUWAMON_X] = gMonIcon_Sunflora,
    [SPECIES_KOTEMON] = gMonIcon_Yanma,
    [SPECIES_KUDAMON] = gMonIcon_Wooper,
    [SPECIES_KUDAMON_06] = gMonIcon_Quagsire,
    [SPECIES_KUNEMON] = gMonIcon_Espeon,
    [SPECIES_LABRAMON] = gMonIcon_Umbreon,
    [SPECIES_LALAMON] = gMonIcon_Murkrow,
    [SPECIES_LIOLLMON] = gMonIcon_Slowking,
    [SPECIES_LOOGAMON] = gMonIcon_Misdreavus,
    [SPECIES_LOPMON] = gMonIcon_UnownA,
    [SPECIES_LOPMON_X] = gMonIcon_Wobbuffet,
    [SPECIES_LUCEMON] = gMonIcon_Girafarig,
    [SPECIES_LUDOMON] = gMonIcon_Pineco,
    [SPECIES_LUNAMON] = gMonIcon_Forretress,
    [SPECIES_LUXMON] = gMonIcon_Dunsparce,
    [SPECIES_METABEE] = gMonIcon_Gligar,
    [SPECIES_KODEKACMON] = gMonIcon_Steelix,
    [SPECIES_MODBETAMON] = gMonIcon_Snubbull,
    [SPECIES_MONITAMON] = gMonIcon_Granbull,
    [SPECIES_MONMON] = gMonIcon_Qwilfish,
    [SPECIES_MONODRAMON] = gMonIcon_Scizor,
    [SPECIES_MORPHOMON] = gMonIcon_Shuckle,
    [SPECIES_MUCHOMON] = gMonIcon_Heracross,
    [SPECIES_MUSHROOMON] = gMonIcon_Sneasel,
    [SPECIES_NEEMON] = gMonIcon_Teddiursa,
    [SPECIES_OTAMAMON] = gMonIcon_Ursaring,
    [SPECIES_OTAMAMON_RED] = gMonIcon_Slugma,
    [SPECIES_OTAMAMON_X] = gMonIcon_Magcargo,
    [SPECIES_PALMON] = gMonIcon_Swinub,
    [SPECIES_PALMON_X] = gMonIcon_Piloswine,
    [SPECIES_PATAMON] = gMonIcon_Corsola,
    [SPECIES_PAWNMON] = gMonIcon_Remoraid,
    [SPECIES_PAWNMON_WHITE] = gMonIcon_Octillery,
    [SPECIES_PENGUINMON] = gMonIcon_Delibird,
    [SPECIES_PETITMAMON] = gMonIcon_Mantine,
    [SPECIES_PHASCOMON] = gMonIcon_Skarmory,
    [SPECIES_PILLOMON] = gMonIcon_Houndour,
    [SPECIES_POMUMON] = gMonIcon_Houndoom,
    [SPECIES_PSYCHEMON] = gMonIcon_Kingdra,
    [SPECIES_PULSEMON] = gMonIcon_Phanpy,
    [SPECIES_RENAMON] = gMonIcon_Donphan,
    [SPECIES_RENAMON_X] = gMonIcon_Porygon2,
    [SPECIES_ROKUSHO] = gMonIcon_Stantler,
    [SPECIES_RYUDAMON] = gMonIcon_Smeargle,
    [SPECIES_SALAMON] = gMonIcon_Tyrogue,
    [SPECIES_SALAMON_X] = gMonIcon_Hitmontop,
    [SPECIES_SANGOMON] = gMonIcon_Smoochum,
    [SPECIES_ELEKID] = gMonIcon_Elekid,
    [SPECIES_MAGBY] = gMonIcon_Magby,
    [SPECIES_MILTANK] = gMonIcon_Miltank,
    [SPECIES_BLISSEY] = gMonIcon_Blissey,
    [SPECIES_RAIKOU] = gMonIcon_Raikou,
    [SPECIES_ENTEI] = gMonIcon_Entei,
    [SPECIES_SUICUNE] = gMonIcon_Suicune,
    [SPECIES_LARVITAR] = gMonIcon_Larvitar,
    [SPECIES_PUPITAR] = gMonIcon_Pupitar,
    [SPECIES_TYRANITAR] = gMonIcon_Tyranitar,
    [SPECIES_LUGIA] = gMonIcon_Lugia,
    [SPECIES_HO_OH] = gMonIcon_HoOh,
    [SPECIES_CELEBI] = gMonIcon_Celebi,
    [SPECIES_OLD_UNOWN_B] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_C] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_D] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_E] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_F] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_G] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_H] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_I] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_J] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_K] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_L] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_M] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_N] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_O] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_P] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_Q] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_R] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_S] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_T] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_U] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_V] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_W] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_X] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_Y] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_Z] = gMonIcon_QuestionMark,
    [SPECIES_TREECKO] = gMonIcon_Treecko,
    [SPECIES_GROVYLE] = gMonIcon_Grovyle,
    [SPECIES_SCEPTILE] = gMonIcon_Sceptile,
    [SPECIES_TORCHIC] = gMonIcon_Torchic,
    [SPECIES_COMBUSKEN] = gMonIcon_Combusken,
    [SPECIES_BLAZIKEN] = gMonIcon_Blaziken,
    [SPECIES_MUDKIP] = gMonIcon_Mudkip,
    [SPECIES_MARSHTOMP] = gMonIcon_Marshtomp,
    [SPECIES_SWAMPERT] = gMonIcon_Swampert,
    [SPECIES_POOCHYENA] = gMonIcon_Poochyena,
    [SPECIES_MIGHTYENA] = gMonIcon_Mightyena,
    [SPECIES_ZIGZAGOON] = gMonIcon_Zigzagoon,
    [SPECIES_LINOONE] = gMonIcon_Linoone,
    [SPECIES_WURMPLE] = gMonIcon_Wurmple,
    [SPECIES_SILCOON] = gMonIcon_Silcoon,
    [SPECIES_BEAUTIFLY] = gMonIcon_Beautifly,
    [SPECIES_CASCOON] = gMonIcon_Cascoon,
    [SPECIES_DUSTOX] = gMonIcon_Dustox,
    [SPECIES_LOTAD] = gMonIcon_Lotad,
    [SPECIES_LOMBRE] = gMonIcon_Lombre,
    [SPECIES_LUDICOLO] = gMonIcon_Ludicolo,
    [SPECIES_SEEDOT] = gMonIcon_Seedot,
    [SPECIES_NUZLEAF] = gMonIcon_Nuzleaf,
    [SPECIES_SHIFTRY] = gMonIcon_Shiftry,
    [SPECIES_NINCADA] = gMonIcon_Nincada,
    [SPECIES_NINJASK] = gMonIcon_Ninjask,
    [SPECIES_SHEDINJA] = gMonIcon_Shedinja,
    [SPECIES_TAILLOW] = gMonIcon_Taillow,
    [SPECIES_SWELLOW] = gMonIcon_Swellow,
    [SPECIES_SHROOMISH] = gMonIcon_Shroomish,
    [SPECIES_BRELOOM] = gMonIcon_Breloom,
    [SPECIES_SPINDA] = gMonIcon_Spinda,
    [SPECIES_WINGULL] = gMonIcon_Wingull,
    [SPECIES_PELIPPER] = gMonIcon_Pelipper,
    [SPECIES_SURSKIT] = gMonIcon_Surskit,
    [SPECIES_MASQUERAIN] = gMonIcon_Masquerain,
    [SPECIES_WAILMER] = gMonIcon_Wailmer,
    [SPECIES_WAILORD] = gMonIcon_Wailord,
    [SPECIES_SKITTY] = gMonIcon_Skitty,
    [SPECIES_DELCATTY] = gMonIcon_Delcatty,
    [SPECIES_KECLEON] = gMonIcon_Kecleon,
    [SPECIES_BALTOY] = gMonIcon_Baltoy,
    [SPECIES_CLAYDOL] = gMonIcon_Claydol,
    [SPECIES_NOSEPASS] = gMonIcon_Nosepass,
    [SPECIES_TORKOAL] = gMonIcon_Torkoal,
    [SPECIES_SABLEYE] = gMonIcon_Sableye,
    [SPECIES_BARBOACH] = gMonIcon_Barboach,
    [SPECIES_WHISCASH] = gMonIcon_Whiscash,
    [SPECIES_LUVDISC] = gMonIcon_Luvdisc,
    [SPECIES_CORPHISH] = gMonIcon_Corphish,
    [SPECIES_CRAWDAUNT] = gMonIcon_Crawdaunt,
    [SPECIES_FEEBAS] = gMonIcon_Feebas,
    [SPECIES_MILOTIC] = gMonIcon_Milotic,
    [SPECIES_CARVANHA] = gMonIcon_Carvanha,
    [SPECIES_SHARPEDO] = gMonIcon_Sharpedo,
    [SPECIES_TRAPINCH] = gMonIcon_Trapinch,
    [SPECIES_VIBRAVA] = gMonIcon_Vibrava,
    [SPECIES_FLYGON] = gMonIcon_Flygon,
    [SPECIES_MAKUHITA] = gMonIcon_Makuhita,
    [SPECIES_HARIYAMA] = gMonIcon_Hariyama,
    [SPECIES_ELECTRIKE] = gMonIcon_Electrike,
    [SPECIES_MANECTRIC] = gMonIcon_Manectric,
    [SPECIES_NUMEL] = gMonIcon_Numel,
    [SPECIES_CAMERUPT] = gMonIcon_Camerupt,
    [SPECIES_SPHEAL] = gMonIcon_Spheal,
    [SPECIES_SEALEO] = gMonIcon_Sealeo,
    [SPECIES_WALREIN] = gMonIcon_Walrein,
    [SPECIES_CACNEA] = gMonIcon_Cacnea,
    [SPECIES_CACTURNE] = gMonIcon_Cacturne,
    [SPECIES_SNORUNT] = gMonIcon_Snorunt,
    [SPECIES_GLALIE] = gMonIcon_Glalie,
    [SPECIES_LUNATONE] = gMonIcon_Lunatone,
    [SPECIES_SOLROCK] = gMonIcon_Solrock,
    [SPECIES_AZURILL] = gMonIcon_Azurill,
    [SPECIES_SPOINK] = gMonIcon_Spoink,
    [SPECIES_GRUMPIG] = gMonIcon_Grumpig,
    [SPECIES_PLUSLE] = gMonIcon_Plusle,
    [SPECIES_MINUN] = gMonIcon_Minun,
    [SPECIES_MAWILE] = gMonIcon_Mawile,
    [SPECIES_MEDITITE] = gMonIcon_Meditite,
    [SPECIES_MEDICHAM] = gMonIcon_Medicham,
    [SPECIES_SWABLU] = gMonIcon_Swablu,
    [SPECIES_ALTARIA] = gMonIcon_Altaria,
    [SPECIES_WYNAUT] = gMonIcon_Wynaut,
    [SPECIES_DUSKULL] = gMonIcon_Duskull,
    [SPECIES_DUSCLOPS] = gMonIcon_Dusclops,
    [SPECIES_ROSELIA] = gMonIcon_Roselia,
    [SPECIES_SLAKOTH] = gMonIcon_Slakoth,
    [SPECIES_VIGOROTH] = gMonIcon_Vigoroth,
    [SPECIES_SLAKING] = gMonIcon_Slaking,
    [SPECIES_GULPIN] = gMonIcon_Gulpin,
    [SPECIES_SWALOT] = gMonIcon_Swalot,
    [SPECIES_TROPIUS] = gMonIcon_Tropius,
    [SPECIES_WHISMUR] = gMonIcon_Whismur,
    [SPECIES_LOUDRED] = gMonIcon_Loudred,
    [SPECIES_EXPLOUD] = gMonIcon_Exploud,
    [SPECIES_CLAMPERL] = gMonIcon_Clamperl,
    [SPECIES_HUNTAIL] = gMonIcon_Huntail,
    [SPECIES_GOREBYSS] = gMonIcon_Gorebyss,
    [SPECIES_ABSOL] = gMonIcon_Absol,
    [SPECIES_SHUPPET] = gMonIcon_Shuppet,
    [SPECIES_BANETTE] = gMonIcon_Banette,
    [SPECIES_SEVIPER] = gMonIcon_Seviper,
    [SPECIES_ZANGOOSE] = gMonIcon_Zangoose,
    [SPECIES_RELICANTH] = gMonIcon_Relicanth,
    [SPECIES_ARON] = gMonIcon_Aron,
    [SPECIES_LAIRON] = gMonIcon_Lairon,
    [SPECIES_AGGRON] = gMonIcon_Aggron,
    [SPECIES_CASTFORM] = gMonIcon_Castform,
    [SPECIES_VOLBEAT] = gMonIcon_Volbeat,
    [SPECIES_ILLUMISE] = gMonIcon_Illumise,
    [SPECIES_LILEEP] = gMonIcon_Lileep,
    [SPECIES_CRADILY] = gMonIcon_Cradily,
    [SPECIES_ANORITH] = gMonIcon_Anorith,
    [SPECIES_ARMALDO] = gMonIcon_Armaldo,
    [SPECIES_RALTS] = gMonIcon_Ralts,
    [SPECIES_KIRLIA] = gMonIcon_Kirlia,
    [SPECIES_GARDEVOIR] = gMonIcon_Gardevoir,
    [SPECIES_BAGON] = gMonIcon_Bagon,
    [SPECIES_SHELGON] = gMonIcon_Shelgon,
    [SPECIES_SALAMENCE] = gMonIcon_Salamence,
    [SPECIES_BELDUM] = gMonIcon_Beldum,
    [SPECIES_METANG] = gMonIcon_Metang,
    [SPECIES_METAGROSS] = gMonIcon_Metagross,
    [SPECIES_REGIROCK] = gMonIcon_Regirock,
    [SPECIES_REGICE] = gMonIcon_Regice,
    [SPECIES_REGISTEEL] = gMonIcon_Registeel,
    [SPECIES_KYOGRE] = gMonIcon_Kyogre,
    [SPECIES_GROUDON] = gMonIcon_Groudon,
    [SPECIES_RAYQUAZA] = gMonIcon_Rayquaza,
    [SPECIES_LATIAS] = gMonIcon_Latias,
    [SPECIES_LATIOS] = gMonIcon_Latios,
    [SPECIES_JIRACHI] = gMonIcon_Jirachi,
    [SPECIES_DEOXYS] = gMonIcon_Deoxys,
    [SPECIES_CHIMECHO] = gMonIcon_Chimecho,
    [SPECIES_EGG] = gMonIcon_Egg,
    [SPECIES_UNOWN_B] = gMonIcon_UnownB,
    [SPECIES_UNOWN_C] = gMonIcon_UnownC,
    [SPECIES_UNOWN_D] = gMonIcon_UnownD,
    [SPECIES_UNOWN_E] = gMonIcon_UnownE,
    [SPECIES_UNOWN_F] = gMonIcon_UnownF,
    [SPECIES_UNOWN_G] = gMonIcon_UnownG,
    [SPECIES_UNOWN_H] = gMonIcon_UnownH,
    [SPECIES_UNOWN_I] = gMonIcon_UnownI,
    [SPECIES_UNOWN_J] = gMonIcon_UnownJ,
    [SPECIES_UNOWN_K] = gMonIcon_UnownK,
    [SPECIES_UNOWN_L] = gMonIcon_UnownL,
    [SPECIES_UNOWN_M] = gMonIcon_UnownM,
    [SPECIES_UNOWN_N] = gMonIcon_UnownN,
    [SPECIES_UNOWN_O] = gMonIcon_UnownO,
    [SPECIES_UNOWN_P] = gMonIcon_UnownP,
    [SPECIES_UNOWN_Q] = gMonIcon_UnownQ,
    [SPECIES_UNOWN_R] = gMonIcon_UnownR,
    [SPECIES_UNOWN_S] = gMonIcon_UnownS,
    [SPECIES_UNOWN_T] = gMonIcon_UnownT,
    [SPECIES_UNOWN_U] = gMonIcon_UnownU,
    [SPECIES_UNOWN_V] = gMonIcon_UnownV,
    [SPECIES_UNOWN_W] = gMonIcon_UnownW,
    [SPECIES_UNOWN_X] = gMonIcon_UnownX,
    [SPECIES_UNOWN_Y] = gMonIcon_UnownY,
    [SPECIES_UNOWN_Z] = gMonIcon_UnownZ,
    [SPECIES_UNOWN_EMARK] = gMonIcon_UnownExclamationMark,
    [SPECIES_UNOWN_QMARK] = gMonIcon_UnownQuestionMark,
};

const u8 gMonIconPaletteIndices[] =
{
    [SPECIES_NONE] = 0,
    [SPECIES_ARGOMON_F] = 1,
    [SPECIES_BOMBMON] = 1,
    [SPECIES_BOMMON] = 1,
    [SPECIES_BOTAMON] = 0,
    [SPECIES_CHIBICKMON] = 0,
    [SPECIES_CHIBOMON] = 0,
    [SPECIES_CONOMON] = 0,
    [SPECIES_COTSUCOMON] = 2,
    [SPECIES_CURIMON] = 2,
    [SPECIES_DATIRIMON] = 1,
    [SPECIES_DODOMON] = 1,
    [SPECIES_DOKIMON] = 0,
    [SPECIES_FUFUMON] = 1,
    [SPECIES_JYARIMON] = 2,
    [SPECIES_KEEMON] = 2,
    [SPECIES_KETOMON] = 0,
    [SPECIES_KURAMON] = 0,
    [SPECIES_LEAFMON] = 0,
    [SPECIES_CHOROMON] = 2,
    [SPECIES_MOKUMON] = 1,
    [SPECIES_NYOKIMON] = 0,
    [SPECIES_PABUMON] = 0,
    [SPECIES_PAFUMON] = 2,
    [SPECIES_PAOMON] = 2,
    [SPECIES_PETITMON] = 2,
    [SPECIES_PICHIMON] = 0,
    [SPECIES_POPOMON] = 2,
    [SPECIES_POYOMON] = 2,
    [SPECIES_PUNIMON] = 2,
    [SPECIES_PUPUMON] = 2,
    [SPECIES_PURURUMON] = 2,
    [SPECIES_PUSUMON] = 2,
    [SPECIES_PUTTIMON] = 2,
    [SPECIES_PUWAMON] = 2,
    [SPECIES_PUYOMON] = 0,
    [SPECIES_PYONMON] = 0,
    [SPECIES_RELEMON] = 2,
    [SPECIES_SAKUMON] = 1,
    [SPECIES_SANDMON] = 0,
    [SPECIES_TSUBUMON] = 0,
    [SPECIES_ICEBOTAMON] = 2,
    [SPECIES_YURAMON] = 2,
    [SPECIES_ZERIMON] = 1,
    [SPECIES_ZURUMON] = 0,
    [SPECIES_ARCADIAMON_IT] = 0,
    [SPECIES_ARGOMON_IT] = 0,
    [SPECIES_BABYDMON] = 0,
    [SPECIES_BIBIMON] = 0,
    [SPECIES_BOSAMON] = 2,
    [SPECIES_BUDMON] = 2,
    [SPECIES_BUKAMON] = 2,
    [SPECIES_CALUMON] = 1,
    [SPECIES_CHAPMON] = 1,
    [SPECIES_CHICCHIMON] = 1,
    [SPECIES_DEMMERAMON] = 2,
    [SPECIES_DEMIVEEMON] = 1,
    [SPECIES_DORIMON] = 2,
    [SPECIES_FRIMON] = 0,
    [SPECIES_GIGIMON] = 0,
    [SPECIES_GUMMYMON] = 0,
    [SPECIES_GURIMON] = 0,
    [SPECIES_HIYARIMON] = 0,
    [SPECIES_HOPMON] = 2,
    [SPECIES_KAKKINMON] = 2,
    [SPECIES_KAPURIMON] = 2,
    [SPECIES_KOKOMON] = 0,
    [SPECIES_KOROMON] = 2,
    [SPECIES_KOZENIMON] = 0,
    [SPECIES_KYAROMON] = 1,
    [SPECIES_KYOKYOMON] = 1,
    [SPECIES_KYUPIMON] = 1,
    [SPECIES_MINOMON] = 2,
    [SPECIES_MISSIMON] = 2,
    [SPECIES_MONIMON] = 1,
    [SPECIES_MOONMON] = 1,
    [SPECIES_MOTIMON] = 1,
    [SPECIES_NEGAMON] = 0,
    [SPECIES_NYAROMON] = 0,
    [SPECIES_PAGUMON] = 0,
    [SPECIES_PICKMON_SILVER] = 0,
    [SPECIES_PICKMON_WHITE] = 0,
    [SPECIES_PICKMON_RED] = 0,
    [SPECIES_PINAMON] = 1,
    [SPECIES_POROMON] = 2,
    [SPECIES_PUROROMON] = 2,
    [SPECIES_PUSURIMON] = 2,
    [SPECIES_PUYOYOMON] = 2,
    [SPECIES_SAKUTTOMON] = 2,
    [SPECIES_SUNMON] = 2,
    [SPECIES_TANEMON] = 2,
    [SPECIES_TOKOMON] = 2,
    [SPECIES_TOKOMON_X] = 2,
    [SPECIES_TORBALLMON] = 2,
    [SPECIES_TSUMEMON] = 2,
    [SPECIES_TSUNOMON] = 2,
    [SPECIES_TUMBLEMON] = 2,
    [SPECIES_UPAMON] = 1,
    [SPECIES_VIXIMON] = 2,
    [SPECIES_WANYAMON] = 2,
    [SPECIES_XIAOMON] = 0,
    [SPECIES_YAAMON] = 0,
    [SPECIES_YOKOMON] = 0,
    [SPECIES_AGUMON] = 1,
    [SPECIES_AGUMON_06] = 1,
    [SPECIES_AGUMON_EXPERT] = 1,
    [SPECIES_AGUMON_X] = 2,
    [SPECIES_ANGORAMON] = 2,
    [SPECIES_ARCADIAMON_ROOKIE] = 1,
    [SPECIES_ARGOMON_ROOKIE] = 2,
    [SPECIES_ARMADILMON] = 2,
    [SPECIES_ARURAUMON] = 1,
    [SPECIES_BAKOMON] = 1,
    [SPECIES_BEARMON] = 0,
    [SPECIES_BETAMON] = 0,
    [SPECIES_BETAMON_X] = 1,
    [SPECIES_BIYOMON] = 0,
    [SPECIES_BLKAGUMON] = 0,
    [SPECIES_BLKAGUMON_X] = 0,
    [SPECIES_BLKGABUMON] = 0,
    [SPECIES_BLKGUILMON] = 2,
    [SPECIES_BOKOMON] = 2,
    [SPECIES_BULUCOMON] = 0,
    [SPECIES_BURGERMON] = 1,
    [SPECIES_SAMUAGUMON] = 2,
    [SPECIES_CANDLEMON] = 1,
    [SPECIES_CHIKURIMON] = 0,
    [SPECIES_TYUTYUMON] = 2,
    [SPECIES_CHUUMON] = 2,
    [SPECIES_HAZYAGUMON] = 0,
    [SPECIES_COMMDRAMON] = 0,
    [SPECIES_CORONAMON] = 2,
    [SPECIES_CRABMON] = 2,
    [SPECIES_CRABMON_X] = 2,
    [SPECIES_CUTEMON] = 0,
    [SPECIES_DAMEMON] = 0,
    [SPECIES_DEMIDEVMON] = 0,
    [SPECIES_DOKUNEMON] = 0,
    [SPECIES_DONDOKOMON] = 0,
    [SPECIES_DORUMON] = 0,
    [SPECIES_DOTAGUMON] = 2,
    [SPECIES_DOTFALCMON] = 2,
    [SPECIES_DRACMON] = 0,
    [SPECIES_DRACOMON] = 1,
    [SPECIES_DRACOMON_X] = 0,
    [SPECIES_EBIBURGMON] = 0,
    [SPECIES_EKAKIMON] = 0,
    [SPECIES_ELECMON] = 0,
    [SPECIES_ELECMON_VIOLET] = 0,
    [SPECIES_ESPIMON] = 2,
    [SPECIES_AGUMON_FAKE_EXPERT] = 2,
    [SPECIES_FALCOMON] = 0,
    [SPECIES_FALCOMON_06] = 1,
    [SPECIES_FANBEEMON] = 1,
    [SPECIES_FLAMEMON] = 1,
    [SPECIES_FLORAMON] = 1,
    [SPECIES_GABUMON] = 1,
    [SPECIES_GABUMON_X] = 1,
    [SPECIES_GAMMAMON] = 2,
    [SPECIES_GAOMON] = 2,
    [SPECIES_GAOSSMON] = 2,
    [SPECIES_GAZIMON] = 2,
    [SPECIES_GAZIMON_X] = 2,
    [SPECIES_GHOSTMON] = 2,
    [SPECIES_GIZAMON] = 2,
    [SPECIES_GIZUMON] = 0,
    [SPECIES_GOBLIMON] = 0,
    [SPECIES_GOMAMON] = 1,
    [SPECIES_GOMAMON_X] = 0,
    [SPECIES_GOTSUMON] = 2,
    [SPECIES_GOTSUMON_X] = 2,
    [SPECIES_GUILMON] = 0,
    [SPECIES_GUILMON_X] = 0,
    [SPECIES_GUMDRAMON] = 0,
    [SPECIES_HACKMON] = 1,
    [SPECIES_HAGURUMON] = 2,
    [SPECIES_HAGURUMON_X] = 2,
    [SPECIES_HAWKMON] = 0,
    [SPECIES_HERISSMON] = 0,
    [SPECIES_HYOKOMON] = 2,
    [SPECIES_IGNITEMON] = 0,
    [SPECIES_IMPMON] = 0,
    [SPECIES_IMPMON_X] = 1,
    [SPECIES_JAZAMON] = 2,
    [SPECIES_JELLYMON] = 2,
    [SPECIES_JUNKMON] = 1,
    [SPECIES_KAMEMON] = 1,
    [SPECIES_KERAMON] = 1,
    [SPECIES_KERAMON_X] = 1,
    [SPECIES_KODOKGUMON] = 2,
    [SPECIES_KOKABUIMON] = 2,
    [SPECIES_KOKUWAMON] = 1,
    [SPECIES_KOKUWAMON_X] = 1,
    [SPECIES_KOTEMON] = 1,
    [SPECIES_KUDAMON] = 0,
    [SPECIES_KUDAMON_06] = 0,
    [SPECIES_KUNEMON] = 2,
    [SPECIES_LABRAMON] = 2,
    [SPECIES_LALAMON] = 2,
    [SPECIES_LIOLLMON] = 0,
    [SPECIES_LOOGAMON] = 0,
    [SPECIES_LOPMON] = 0,
    [SPECIES_LOPMON_X] = 0,
    [SPECIES_LUCEMON] = 1,
    [SPECIES_LUDOMON] = 0,
    [SPECIES_LUNAMON] = 2,
    [SPECIES_LUXMON] = 2,
    [SPECIES_METABEE] = 2,
    [SPECIES_KODEKACMON] = 0,
    [SPECIES_MODBETAMON] = 0,
    [SPECIES_MONITAMON] = 2,
    [SPECIES_MONMON] = 0,
    [SPECIES_MONODRAMON] = 0,
    [SPECIES_MORPHOMON] = 1,
    [SPECIES_MUCHOMON] = 2,
    [SPECIES_MUSHROOMON] = 0,
    [SPECIES_NEEMON] = 0,
    [SPECIES_OTAMAMON] = 2,
    [SPECIES_OTAMAMON_RED] = 0,
    [SPECIES_OTAMAMON_X] = 0,
    [SPECIES_PALMON] = 2,
    [SPECIES_PALMON_X] = 2,
    [SPECIES_PATAMON] = 0,
    [SPECIES_PAWNMON] = 0,
    [SPECIES_PAWNMON_WHITE] = 0,
    [SPECIES_PENGUINMON] = 0,
    [SPECIES_PETITMAMON] = 2,
    [SPECIES_PHASCOMON] = 0,
    [SPECIES_PILLOMON] = 0,
    [SPECIES_POMUMON] = 0,
    [SPECIES_PSYCHEMON] = 0,
    [SPECIES_PULSEMON] = 0,
    [SPECIES_RENAMON] = 0,
    [SPECIES_RENAMON_X] = 0,
    [SPECIES_ROKUSHO] = 2,
    [SPECIES_RYUDAMON] = 1,
    [SPECIES_SALAMON] = 2,
    [SPECIES_SALAMON_X] = 2,
    [SPECIES_SANGOMON] = 1,
    [SPECIES_ELEKID] = 1,
    [SPECIES_MAGBY] = 1,
    [SPECIES_MILTANK] = 1,
    [SPECIES_BLISSEY] = 1,
    [SPECIES_RAIKOU] = 0,
    [SPECIES_ENTEI] = 2,
    [SPECIES_SUICUNE] = 0,
    [SPECIES_LARVITAR] = 1,
    [SPECIES_PUPITAR] = 0,
    [SPECIES_TYRANITAR] = 1,
    [SPECIES_LUGIA] = 0,
    [SPECIES_HO_OH] = 1,
    [SPECIES_CELEBI] = 1,
    [SPECIES_OLD_UNOWN_B] = 0,
    [SPECIES_OLD_UNOWN_C] = 0,
    [SPECIES_OLD_UNOWN_D] = 0,
    [SPECIES_OLD_UNOWN_E] = 0,
    [SPECIES_OLD_UNOWN_F] = 0,
    [SPECIES_OLD_UNOWN_G] = 0,
    [SPECIES_OLD_UNOWN_H] = 0,
    [SPECIES_OLD_UNOWN_I] = 0,
    [SPECIES_OLD_UNOWN_J] = 0,
    [SPECIES_OLD_UNOWN_K] = 0,
    [SPECIES_OLD_UNOWN_L] = 0,
    [SPECIES_OLD_UNOWN_M] = 0,
    [SPECIES_OLD_UNOWN_N] = 0,
    [SPECIES_OLD_UNOWN_O] = 0,
    [SPECIES_OLD_UNOWN_P] = 0,
    [SPECIES_OLD_UNOWN_Q] = 0,
    [SPECIES_OLD_UNOWN_R] = 0,
    [SPECIES_OLD_UNOWN_S] = 0,
    [SPECIES_OLD_UNOWN_T] = 0,
    [SPECIES_OLD_UNOWN_U] = 0,
    [SPECIES_OLD_UNOWN_V] = 0,
    [SPECIES_OLD_UNOWN_W] = 0,
    [SPECIES_OLD_UNOWN_X] = 0,
    [SPECIES_OLD_UNOWN_Y] = 0,
    [SPECIES_OLD_UNOWN_Z] = 0,
    [SPECIES_TREECKO] = 1,
    [SPECIES_GROVYLE] = 0,
    [SPECIES_SCEPTILE] = 1,
    [SPECIES_TORCHIC] = 0,
    [SPECIES_COMBUSKEN] = 0,
    [SPECIES_BLAZIKEN] = 0,
    [SPECIES_MUDKIP] = 0,
    [SPECIES_MARSHTOMP] = 0,
    [SPECIES_SWAMPERT] = 0,
    [SPECIES_POOCHYENA] = 2,
    [SPECIES_MIGHTYENA] = 2,
    [SPECIES_ZIGZAGOON] = 2,
    [SPECIES_LINOONE] = 2,
    [SPECIES_WURMPLE] = 0,
    [SPECIES_SILCOON] = 2,
    [SPECIES_BEAUTIFLY] = 0,
    [SPECIES_CASCOON] = 2,
    [SPECIES_DUSTOX] = 1,
    [SPECIES_LOTAD] = 1,
    [SPECIES_LOMBRE] = 1,
    [SPECIES_LUDICOLO] = 1,
    [SPECIES_SEEDOT] = 1,
    [SPECIES_NUZLEAF] = 1,
    [SPECIES_SHIFTRY] = 0,
    [SPECIES_NINCADA] = 1,
    [SPECIES_NINJASK] = 1,
    [SPECIES_SHEDINJA] = 1,
    [SPECIES_TAILLOW] = 2,
    [SPECIES_SWELLOW] = 2,
    [SPECIES_SHROOMISH] = 1,
    [SPECIES_BRELOOM] = 1,
    [SPECIES_SPINDA] = 1,
    [SPECIES_WINGULL] = 0,
    [SPECIES_PELIPPER] = 0,
    [SPECIES_SURSKIT] = 2,
    [SPECIES_MASQUERAIN] = 0,
    [SPECIES_WAILMER] = 2,
    [SPECIES_WAILORD] = 0,
    [SPECIES_SKITTY] = 0,
    [SPECIES_DELCATTY] = 2,
    [SPECIES_KECLEON] = 1,
    [SPECIES_BALTOY] = 1,
    [SPECIES_CLAYDOL] = 0,
    [SPECIES_NOSEPASS] = 0,
    [SPECIES_TORKOAL] = 1,
    [SPECIES_SABLEYE] = 2,
    [SPECIES_BARBOACH] = 0,
    [SPECIES_WHISCASH] = 0,
    [SPECIES_LUVDISC] = 0,
    [SPECIES_CORPHISH] = 0,
    [SPECIES_CRAWDAUNT] = 0,
    [SPECIES_FEEBAS] = 2,
    [SPECIES_MILOTIC] = 0,
    [SPECIES_CARVANHA] = 0,
    [SPECIES_SHARPEDO] = 0,
    [SPECIES_TRAPINCH] = 1,
    [SPECIES_VIBRAVA] = 1,
    [SPECIES_FLYGON] = 1,
    [SPECIES_MAKUHITA] = 2,
    [SPECIES_HARIYAMA] = 1,
    [SPECIES_ELECTRIKE] = 1,
    [SPECIES_MANECTRIC] = 0,
    [SPECIES_NUMEL] = 1,
    [SPECIES_CAMERUPT] = 0,
    [SPECIES_SPHEAL] = 2,
    [SPECIES_SEALEO] = 2,
    [SPECIES_WALREIN] = 0,
    [SPECIES_CACNEA] = 1,
    [SPECIES_CACTURNE] = 1,
    [SPECIES_SNORUNT] = 2,
    [SPECIES_GLALIE] = 0,
    [SPECIES_LUNATONE] = 1,
    [SPECIES_SOLROCK] = 0,
    [SPECIES_AZURILL] = 2,
    [SPECIES_SPOINK] = 0,
    [SPECIES_GRUMPIG] = 2,
    [SPECIES_PLUSLE] = 0,
    [SPECIES_MINUN] = 0,
    [SPECIES_MAWILE] = 2,
    [SPECIES_MEDITITE] = 0,
    [SPECIES_MEDICHAM] = 0,
    [SPECIES_SWABLU] = 0,
    [SPECIES_ALTARIA] = 0,
    [SPECIES_WYNAUT] = 0,
    [SPECIES_DUSKULL] = 0,
    [SPECIES_DUSCLOPS] = 0,
    [SPECIES_ROSELIA] = 0,
    [SPECIES_SLAKOTH] = 2,
    [SPECIES_VIGOROTH] = 2,
    [SPECIES_SLAKING] = 1,
    [SPECIES_GULPIN] = 1,
    [SPECIES_SWALOT] = 2,
    [SPECIES_TROPIUS] = 1,
    [SPECIES_WHISMUR] = 0,
    [SPECIES_LOUDRED] = 2,
    [SPECIES_EXPLOUD] = 2,
    [SPECIES_CLAMPERL] = 0,
    [SPECIES_HUNTAIL] = 0,
    [SPECIES_GOREBYSS] = 0,
    [SPECIES_ABSOL] = 0,
    [SPECIES_SHUPPET] = 0,
    [SPECIES_BANETTE] = 0,
    [SPECIES_SEVIPER] = 2,
    [SPECIES_ZANGOOSE] = 0,
    [SPECIES_RELICANTH] = 1,
    [SPECIES_ARON] = 2,
    [SPECIES_LAIRON] = 2,
    [SPECIES_AGGRON] = 2,
    [SPECIES_CASTFORM] = 0,
    [SPECIES_VOLBEAT] = 0,
    [SPECIES_ILLUMISE] = 2,
    [SPECIES_LILEEP] = 2,
    [SPECIES_CRADILY] = 0,
    [SPECIES_ANORITH] = 0,
    [SPECIES_ARMALDO] = 0,
    [SPECIES_RALTS] = 1,
    [SPECIES_KIRLIA] = 1,
    [SPECIES_GARDEVOIR] = 1,
    [SPECIES_BAGON] = 2,
    [SPECIES_SHELGON] = 2,
    [SPECIES_SALAMENCE] = 0,
    [SPECIES_BELDUM] = 0,
    [SPECIES_METANG] = 0,
    [SPECIES_METAGROSS] = 0,
    [SPECIES_REGIROCK] = 2,
    [SPECIES_REGICE] = 2,
    [SPECIES_REGISTEEL] = 2,
    [SPECIES_KYOGRE] = 2,
    [SPECIES_GROUDON] = 0,
    [SPECIES_RAYQUAZA] = 1,
    [SPECIES_LATIAS] = 0,
    [SPECIES_LATIOS] = 2,
    [SPECIES_JIRACHI] = 0,
    [SPECIES_DEOXYS] = 0,
    [SPECIES_CHIMECHO] = 0,
    [SPECIES_EGG] = 1,
    [SPECIES_UNOWN_B] = 0,
    [SPECIES_UNOWN_C] = 0,
    [SPECIES_UNOWN_D] = 0,
    [SPECIES_UNOWN_E] = 0,
    [SPECIES_UNOWN_F] = 0,
    [SPECIES_UNOWN_G] = 0,
    [SPECIES_UNOWN_H] = 0,
    [SPECIES_UNOWN_I] = 0,
    [SPECIES_UNOWN_J] = 0,
    [SPECIES_UNOWN_K] = 0,
    [SPECIES_UNOWN_L] = 0,
    [SPECIES_UNOWN_M] = 0,
    [SPECIES_UNOWN_N] = 0,
    [SPECIES_UNOWN_O] = 0,
    [SPECIES_UNOWN_P] = 0,
    [SPECIES_UNOWN_Q] = 0,
    [SPECIES_UNOWN_R] = 0,
    [SPECIES_UNOWN_S] = 0,
    [SPECIES_UNOWN_T] = 0,
    [SPECIES_UNOWN_U] = 0,
    [SPECIES_UNOWN_V] = 0,
    [SPECIES_UNOWN_W] = 0,
    [SPECIES_UNOWN_X] = 0,
    [SPECIES_UNOWN_Y] = 0,
    [SPECIES_UNOWN_Z] = 0,
    [SPECIES_UNOWN_EMARK] = 0,
    [SPECIES_UNOWN_QMARK] = 0,
};

const struct SpritePalette gMonIconPaletteTable[] =
{
    { gMonIconPalettes[0], POKE_ICON_BASE_PAL_TAG + 0 },
    { gMonIconPalettes[1], POKE_ICON_BASE_PAL_TAG + 1 },
    { gMonIconPalettes[2], POKE_ICON_BASE_PAL_TAG + 2 },

// There are only 3 actual palettes. The following are unused
// and don't point to valid data.
    { gMonIconPalettes[3], POKE_ICON_BASE_PAL_TAG + 3 },
    { gMonIconPalettes[4], POKE_ICON_BASE_PAL_TAG + 4 },
    { gMonIconPalettes[5], POKE_ICON_BASE_PAL_TAG + 5 },
};

static const struct OamData sMonIconOamData =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
};

// fastest to slowest

static const union AnimCmd sAnim_0[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_2[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_3[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_4[] =
{
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_FRAME(0, 29), // frame 0 is repeated
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sMonIconAnims[] =
{
    sAnim_0,
    sAnim_1,
    sAnim_2,
    sAnim_3,
    sAnim_4,
};

static const union AffineAnimCmd sAffineAnim_0[] =
{
    AFFINEANIMCMD_FRAME(0, 0, 0, 10),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_1[] =
{
    AFFINEANIMCMD_FRAME(-2, -2, 0, 122),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sMonIconAffineAnims[] =
{
    sAffineAnim_0,
    sAffineAnim_1,
};

static const u16 sSpriteImageSizes[3][4] =
{
    [ST_OAM_SQUARE] =
    {
        [SPRITE_SIZE(8x8)]   =  8 * 8  / 2,
        [SPRITE_SIZE(16x16)] = 16 * 16 / 2,
        [SPRITE_SIZE(32x32)] = 32 * 32 / 2,
        [SPRITE_SIZE(64x64)] = 64 * 64 / 2,
    },
    [ST_OAM_H_RECTANGLE] =
    {
        [SPRITE_SIZE(16x8)]  = 16 * 8  / 2,
        [SPRITE_SIZE(32x8)]  = 32 * 8  / 2,
        [SPRITE_SIZE(32x16)] = 32 * 16 / 2,
        [SPRITE_SIZE(64x32)] = 64 * 32 / 2,
    },
    [ST_OAM_V_RECTANGLE] =
    {
        [SPRITE_SIZE(8x16)]  =  8 * 16 / 2,
        [SPRITE_SIZE(8x32)]  =  8 * 32 / 2,
        [SPRITE_SIZE(16x32)] = 16 * 32 / 2,
        [SPRITE_SIZE(32x64)] = 32 * 64 / 2,
    },
};

u8 CreateMonIcon(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality, bool32 handleDeoxys)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = GetMonIconPtr(species, personality, handleDeoxys),
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    if (species > NUM_SPECIES)
        iconTemplate.paletteTag = POKE_ICON_BASE_PAL_TAG;

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u8 CreateMonIconNoPersonality(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, bool32 handleDeoxys)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = NULL,
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    iconTemplate.image = GetMonIconTiles(species, handleDeoxys);
    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u16 GetIconSpecies(u16 species, u32 personality)
{
    u16 result;

    if (species == SPECIES_LOPMON)
    {
        u16 letter = GetUnownLetterByPersonality(personality);
        if (letter == 0)
            letter = SPECIES_LOPMON;
        else
            letter += (SPECIES_UNOWN_B - 1);
        result = letter;
    }
    else
    {
        if (species > NUM_SPECIES)
            result = INVALID_ICON_SPECIES;
        else
            result = species;
    }

    return result;
}

u16 GetUnownLetterByPersonality(u32 personality)
{
    if (!personality)
        return 0;
    else
        return GET_UNOWN_LETTER(personality);
}

u16 GetIconSpeciesNoPersonality(u16 species)
{
    u16 value;

    if (MailSpeciesToSpecies(species, &value) == SPECIES_LOPMON)
    {
        if (value == 0)
            value += SPECIES_LOPMON;
        else
            value += (SPECIES_UNOWN_B - 1);
        return value;
    }
    else
    {
        if (species > NUM_SPECIES)
            species = INVALID_ICON_SPECIES;
        return GetIconSpecies(species, 0);
    }
}

const u8 *GetMonIconPtr(u16 species, u32 personality, bool32 handleDeoxys)
{
    return GetMonIconTiles(GetIconSpecies(species, personality), handleDeoxys);
}

void FreeAndDestroyMonIconSprite(struct Sprite *sprite)
{
    FreeAndDestroyMonIconSprite_(sprite);
}

void LoadMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        LoadSpritePalette(&gMonIconPaletteTable[i]);
}

// unused
void SafeLoadMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void LoadMonIconPalette(u16 species)
{
    u8 palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void FreeMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        FreeSpritePaletteByTag(gMonIconPaletteTable[i].tag);
}

// unused
void SafeFreeMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void FreeMonIconPalette(u16 species)
{
    u8 palIndex;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void SpriteCB_MonIcon(struct Sprite *sprite)
{
    UpdateMonIconFrame(sprite);
}

const u8 *GetMonIconTiles(u16 species, bool32 handleDeoxys)
{
    const u8 *iconSprite = gMonIconTable[species];
    if (species == SPECIES_DEOXYS && handleDeoxys == TRUE)
    {
        iconSprite = (const u8 *)(0x400 + (u32)iconSprite); // use the specific Deoxys form icon (Speed in this case)
    }
    return iconSprite;
}

void TryLoadAllMonIconPalettesAtOffset(u16 offset)
{
    s32 i;
    const struct SpritePalette* monIconPalettePtr;

    if (offset <= 0xA0)
    {
        monIconPalettePtr = gMonIconPaletteTable;
        for(i = ARRAY_COUNT(gMonIconPaletteTable) - 1; i >= 0; i--)
        {
            LoadPalette(monIconPalettePtr->data, offset, 0x20);
            offset += 0x10;
            monIconPalettePtr++;
        }
    }
}

u8 GetValidMonIconPalIndex(u16 species)
{
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    return gMonIconPaletteIndices[species];
}

u8 GetMonIconPaletteIndexFromSpecies(u16 species)
{
    return gMonIconPaletteIndices[species];
}

const u16 *GetValidMonIconPalettePtr(u16 species)
{
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    return gMonIconPaletteTable[gMonIconPaletteIndices[species]].data;
}

u8 UpdateMonIconFrame(struct Sprite *sprite)
{
    u8 result = 0;

    if (sprite->animDelayCounter == 0)
    {
        s16 frame = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.imageValue;

        switch (frame)
        {
        case -1:
            break;
        case -2:
            sprite->animCmdIndex = 0;
            break;
        default:
            RequestSpriteCopy(
                // pointer arithmetic is needed to get the correct pointer to perform the sprite copy on.
                // because sprite->images is a struct def, it has to be casted to (u8 *) before any
                // arithmetic can be performed.
                (u8 *)sprite->images + (sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] * frame),
                (u8 *)(OBJ_VRAM0 + sprite->oam.tileNum * TILE_SIZE_4BPP),
                sSpriteImageSizes[sprite->oam.shape][sprite->oam.size]);
            sprite->animDelayCounter = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.duration & 0xFF;
            sprite->animCmdIndex++;
            result = sprite->animCmdIndex;
            break;
        }
    }
    else
    {
        sprite->animDelayCounter--;
    }
    return result;
}

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *iconTemplate, s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;

    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[iconTemplate->oam->shape][iconTemplate->oam->size] };

    struct SpriteTemplate spriteTemplate =
    {
        .tileTag = TAG_NONE,
        .paletteTag = iconTemplate->paletteTag,
        .oam = iconTemplate->oam,
        .anims = iconTemplate->anims,
        .images = &image,
        .affineAnims = iconTemplate->affineAnims,
        .callback = iconTemplate->callback,
    };

    spriteId = CreateSprite(&spriteTemplate, x, y, subpriority);
    gSprites[spriteId].animPaused = TRUE;
    gSprites[spriteId].animBeginning = FALSE;
    gSprites[spriteId].images = (const struct SpriteFrameImage *)iconTemplate->image;
    return spriteId;
}

static void FreeAndDestroyMonIconSprite_(struct Sprite *sprite)
{
    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] };
    sprite->images = &image;
    DestroySprite(sprite);
}

void SetPartyHPBarSprite(struct Sprite *sprite, u8 animNum)
{
    sprite->animNum = animNum;
    sprite->animDelayCounter = 0;
    sprite->animCmdIndex = 0;
}
