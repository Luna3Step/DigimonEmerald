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
    [SPECIES_NONE] = gMonIcon_Argomon_f,
    [SPECIES_ARGOMON_F] = gMonIcon_Argomon_f,
    [SPECIES_BOMBMON] = gMonIcon_Bombmon,
    [SPECIES_BOMMON] = gMonIcon_Bommon,
    [SPECIES_BOTAMON] = gMonIcon_Botamon,
    [SPECIES_CHIBICKMON] = gMonIcon_Chibickmon,
    [SPECIES_CHIBOMON] = gMonIcon_Chibomon,
    [SPECIES_CONOMON] = gMonIcon_Conomon,
    [SPECIES_COTSUCOMON] = gMonIcon_Cotsucomon,
    [SPECIES_CURIMON] = gMonIcon_curimon,
    [SPECIES_DATIRIMON] = gMonIcon_Datirimon,
    [SPECIES_DODOMON] = gMonIcon_Dodomon,
    [SPECIES_DOKIMON] = gMonIcon_Dokimon,
    [SPECIES_FUFUMON] = gMonIcon_Fufumon,
    [SPECIES_JYARIMON] = gMonIcon_Jyarimon,
    [SPECIES_KEEMON] = gMonIcon_Keemon,
    [SPECIES_KETOMON] = gMonIcon_Ketomon,
    [SPECIES_KURAMON] = gMonIcon_Kuramon,
    [SPECIES_LEAFMON] = gMonIcon_Leafmon,
    [SPECIES_CHOROMON] = gMonIcon_Choromon,
    [SPECIES_MOKUMON] = gMonIcon_Mokumon,
    [SPECIES_NYOKIMON] = gMonIcon_Nyokimon,
    [SPECIES_PABUMON] = gMonIcon_Pabumon,
    [SPECIES_PAFUMON] = gMonIcon_Pafumon,
    [SPECIES_PAOMON] = gMonIcon_Paomon,
    [SPECIES_PETITMON] = gMonIcon_Petitmon,
    [SPECIES_PICHIMON] = gMonIcon_Pichimon,
    [SPECIES_POPOMON] = gMonIcon_Popomon,
    [SPECIES_POYOMON] = gMonIcon_Poyomon,
    [SPECIES_PUNIMON] = gMonIcon_Punimon,
    [SPECIES_PUPUMON] = gMonIcon_Pupumon,
    [SPECIES_PURURUMON] = gMonIcon_Pururumon,
    [SPECIES_PUSUMON] = gMonIcon_Pusumon,
    [SPECIES_PUTTIMON] = gMonIcon_Puttimon,
    [SPECIES_PUWAMON] = gMonIcon_Puwamon,
    [SPECIES_PUYOMON] = gMonIcon_Puyomon,
    [SPECIES_PYONMON] = gMonIcon_Pyonmon,
    [SPECIES_RELEMON] = gMonIcon_Relemon,
    [SPECIES_SAKUMON] = gMonIcon_Sakumon,
    [SPECIES_SANDMON] = gMonIcon_Sandmon,
    [SPECIES_TSUBUMON] = gMonIcon_Tsubumon,
    [SPECIES_ICEBOTAMON] = gMonIcon_Icebotamon,
    [SPECIES_YURAMON] = gMonIcon_Yuramon,
    [SPECIES_ZERIMON] = gMonIcon_Zerimon,
    [SPECIES_ZURUMON] = gMonIcon_Zurumon,
    [SPECIES_ARCADIAMON_IT] = gMonIcon_Arcadiamon_it,
    [SPECIES_ARGOMON_IT] = gMonIcon_Argomon_it,
    [SPECIES_BABYDMON] = gMonIcon_Babydmon,
    [SPECIES_BIBIMON] = gMonIcon_Bibimon,
    [SPECIES_BOSAMON] = gMonIcon_Bosamon,
    [SPECIES_BUDMON] = gMonIcon_Budmon,
    [SPECIES_BUKAMON] = gMonIcon_Bukamon,
    [SPECIES_CALUMON] = gMonIcon_Calumon,
    [SPECIES_CHAPMON] = gMonIcon_Chapmon,
    [SPECIES_CHICCHIMON] = gMonIcon_Chicchimon,
    [SPECIES_DEMMERAMON] = gMonIcon_Demmeramon,
    [SPECIES_DEMIVEEMON] = gMonIcon_Demiveemon,
    [SPECIES_DORIMON] = gMonIcon_Dorimon,
    [SPECIES_FRIMON] = gMonIcon_Frimon,
    [SPECIES_GIGIMON] = gMonIcon_Gigimon,
    [SPECIES_GUMMYMON] = gMonIcon_Gummymon,
    [SPECIES_GURIMON] = gMonIcon_Gurimon,
    [SPECIES_HIYARIMON] = gMonIcon_Hiyarimon,
    [SPECIES_HOPMON] = gMonIcon_Hopmon,
    [SPECIES_KAKKINMON] = gMonIcon_Kakkinmon,
    [SPECIES_KAPURIMON] = gMonIcon_Kapurimon,
    [SPECIES_KOKOMON] = gMonIcon_Kokomon,
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
    [SPECIES_SANTAAGUMON] = gMonIcon_Elekid,
    [SPECIES_BLKTOYAMON] = gMonIcon_Magby,
    [SPECIES_SHAMANMON] = gMonIcon_Miltank,
    [SPECIES_SHOUTMON] = gMonIcon_Blissey,
    [SPECIES_YUKIAGUMON] = gMonIcon_Raikou,
    [SPECIES_YUKIAGUMON_06] = gMonIcon_Entei,
    [SPECIES_ICEGOBIMON] = gMonIcon_Suicune,
    [SPECIES_SOLARMON] = gMonIcon_Larvitar,
    [SPECIES_SOUNBRDMON] = gMonIcon_Pupitar,
    [SPECIES_SPADAMON] = gMonIcon_Tyranitar,
    [SPECIES_SPARROWMON] = gMonIcon_Lugia,
    [SPECIES_STARMON_2010] = gMonIcon_HoOh,
    [SPECIES_STRABIMON] = gMonIcon_Celebi,
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
    [SPECIES_SUNARZAMON] = gMonIcon_Treecko,
    [SPECIES_SWIMMON] = gMonIcon_Grovyle,
    [SPECIES_SYAKOMON] = gMonIcon_Sceptile,
    [SPECIES_SYAKOMON_X] = gMonIcon_Torchic,
    [SPECIES_TAPIRMON] = gMonIcon_Combusken,
    [SPECIES_TENTOMON] = gMonIcon_Blaziken,
    [SPECIES_TERRIERMON] = gMonIcon_Mudkip,
    [SPECIES_TERRIERMON_ASSISTANT] = gMonIcon_Marshtomp,
    [SPECIES_TERRIERMON_X] = gMonIcon_Swampert,
    [SPECIES_TINKERMON] = gMonIcon_Poochyena,
    [SPECIES_TINPET] = gMonIcon_Mightyena,
    [SPECIES_TOYAGUMON] = gMonIcon_Zigzagoon,
    [SPECIES_TSUKAIMON] = gMonIcon_Linoone,
    [SPECIES_VEEMON] = gMonIcon_Wurmple,
    [SPECIES_VEMMON] = gMonIcon_Silcoon,
    [SPECIES_VORVOMON] = gMonIcon_Beautifly,
    [SPECIES_WORMMON] = gMonIcon_Cascoon,
    [SPECIES_ZENIMON] = gMonIcon_Dustox,
    [SPECIES_ZUBAMON] = gMonIcon_Lotad,
    [SPECIES_AEGIOMON] = gMonIcon_Lombre,
    [SPECIES_AGUNIMON] = gMonIcon_Ludicolo,
    [SPECIES_AIRDRAMON] = gMonIcon_Seedot,
    [SPECIES_AKATORIMON] = gMonIcon_Nuzleaf,
    [SPECIES_ALLOMON] = gMonIcon_Shiftry,
    [SPECIES_BAKEMON] = gMonIcon_Nincada,
    [SPECIES_BALISTAMON] = gMonIcon_Ninjask,
    [SPECIES_BALUCHIMON] = gMonIcon_Shedinja,
    [SPECIES_ALLOMON_X] = gMonIcon_Taillow,
    [SPECIES_ANGELAMON] = gMonIcon_Swellow,
    [SPECIES_ARESDRAMON] = gMonIcon_Shroomish,
    [SPECIES_ATAMADEMON] = gMonIcon_Breloom,
    [SPECIES_COREDRAMON_BLUE] = gMonIcon_Spinda,
    [SPECIES_ANGEMON] = gMonIcon_Wingull,
    [SPECIES_ANKYLOMON] = gMonIcon_Pelipper,
    [SPECIES_ARCHELOMON] = gMonIcon_Surskit,
    [SPECIES_ARGOMON_CHAMPION] = gMonIcon_Masquerain,
    [SPECIES_CHAMBLEMON] = gMonIcon_Wailmer,
    [SPECIES_CHAMELEMON] = gMonIcon_Wailord,
    [SPECIES_BIRDRAMON] = gMonIcon_Skitty,
    [SPECIES_BLGAOGAMON] = gMonIcon_Delcatty,
    [SPECIES_DONSHOUMON] = gMonIcon_Kecleon,
    [SPECIES_DEXDORUMON] = gMonIcon_Baltoy,
    [SPECIES_DIATRYMON] = gMonIcon_Claydol,
    [SPECIES_BIOTHUNMON] = gMonIcon_Nosepass,
    [SPECIES_CLOCKMON] = gMonIcon_Torkoal,
    [SPECIES_BLGARGOMON] = gMonIcon_Sableye,
    [SPECIES_DEPTHMON] = gMonIcon_Barboach,
    [SPECIES_DEPUTYMON] = gMonIcon_Whiscash,
    [SPECIES_FLYBEEMON] = gMonIcon_Luvdisc,
    [SPECIES_DEVIDRAMON] = gMonIcon_Corphish,
    [SPECIES_DEVIMON] = gMonIcon_Crawdaunt,
    [SPECIES_DOGGYMON] = gMonIcon_Feebas,
    [SPECIES_DOKUGUMON] = gMonIcon_Milotic,
    [SPECIES_CHOUFLYMON] = gMonIcon_Carvanha,
    [SPECIES_CENTARUMON] = gMonIcon_Sharpedo,
    [SPECIES_COREDRAMON_GREEN] = gMonIcon_Trapinch,
    [SPECIES_CYCLONEMON] = gMonIcon_Vibrava,
    [SPECIES_DAMEMON_FUSION] = gMonIcon_Flygon,
    [SPECIES_BETGAMAMON] = gMonIcon_Makuhita,
    [SPECIES_BIOQUETMON] = gMonIcon_Hariyama,
    [SPECIES_BOARMON] = gMonIcon_Electrike,
    [SPECIES_BOMNANIMON] = gMonIcon_Manectric,
    [SPECIES_CHRYSALMON] = gMonIcon_Numel,
    [SPECIES_CITRAMON] = gMonIcon_Camerupt,
    [SPECIES_EYESMON_SCATTERMODE] = gMonIcon_Spheal,
    [SPECIES_FANGMON] = gMonIcon_Sealeo,
    [SPECIES_FILMON] = gMonIcon_Walrein,
    [SPECIES_DARCMON] = gMonIcon_Cacnea,
    [SPECIES_TRAILMON_DARK] = gMonIcon_Cacturne,
    [SPECIES_EXVEEMON_VIRUS] = gMonIcon_Snorunt,
    [SPECIES_EYESMON] = gMonIcon_Glalie,
    [SPECIES_DECKDRAMON] = gMonIcon_Lunatone,
    [SPECIES_DELTAMON] = gMonIcon_Solrock,
    [SPECIES_BIOSTEGMON] = gMonIcon_Azurill,
    [SPECIES_CLOCKMON_FUSION] = gMonIcon_Spoink,
    [SPECIES_COELAMON] = gMonIcon_Grumpig,
    [SPECIES_BOOGIEMON] = gMonIcon_Plusle,
    [SPECIES_BUCCHIEMON_RED] = gMonIcon_Minun,
    [SPECIES_BLGARURMON] = gMonIcon_Mawile,
    [SPECIES_SAWKUWAMON] = gMonIcon_Meditite,
    [SPECIES_BLIMPMON] = gMonIcon_Medicham,
    [SPECIES_DARLIZAMON] = gMonIcon_Swablu,
    [SPECIES_DARMAILMON] = gMonIcon_Altaria,
    [SPECIES_EXVEEMON] = gMonIcon_Wynaut,
    [SPECIES_DRIMOGEMON] = gMonIcon_Duskull,
    [SPECIES_EBIDRAMON] = gMonIcon_Dusclops,
    [SPECIES_BULLMON] = gMonIcon_Roselia,
    [SPECIES_AURUMON] = gMonIcon_Slakoth,
    [SPECIES_AXEMON] = gMonIcon_Vigoroth,
    [SPECIES_BABOONMON] = gMonIcon_Slaking,
    [SPECIES_BURAIMON] = gMonIcon_Gulpin,
    [SPECIES_BURGERMON_CHAMPION] = gMonIcon_Swalot,
    [SPECIES_ELEPHANMON] = gMonIcon_Tropius,
    [SPECIES_BAOHUCKMON] = gMonIcon_Whismur,
    [SPECIES_BAROMON] = gMonIcon_Loudred,
    [SPECIES_TRAILMON_BATTLE_ARMAMENT] = gMonIcon_Exploud,
    [SPECIES_FIRAMON] = gMonIcon_Clamperl,
    [SPECIES_FLADRAMON] = gMonIcon_Huntail,
    [SPECIES_FLAWIZAMON] = gMonIcon_Gorebyss,
    [SPECIES_EXERMON] = gMonIcon_Absol,
    [SPECIES_DORUGAMON] = gMonIcon_Shuppet,
    [SPECIES_DORULUMON] = gMonIcon_Banette,
    [SPECIES_DARKTYRMON_X] = gMonIcon_Seviper,
    [SPECIES_DARKTYRMON] = gMonIcon_Zangoose,
    [SPECIES_FLARIZAMON] = gMonIcon_Relicanth,
    [SPECIES_BLKGATOMON] = gMonIcon_Aron,
    [SPECIES_BLKGATOMON_UVER] = gMonIcon_Lairon,
    [SPECIES_BLGROWLMON] = gMonIcon_Aggron,
    [SPECIES_DOLPHMON] = gMonIcon_Castform,
    [SPECIES_BUCCHIEMON_GREEN] = gMonIcon_Volbeat,
    [SPECIES_BULKMON] = gMonIcon_Illumise,
    [SPECIES_DIGMON] = gMonIcon_Lileep,
    [SPECIES_DINOHYUMON] = gMonIcon_Cradily,
    [SPECIES_DOBERMON] = gMonIcon_Anorith,
    [SPECIES_DOBERMON_X] = gMonIcon_Armaldo,
    [SPECIES_APEMON] = gMonIcon_Ralts,
    [SPECIES_AQUILAMON] = gMonIcon_Kirlia,
    [SPECIES_ARCADIAMON_CHAMPION] = gMonIcon_Gardevoir,
    [SPECIES_FLYMON] = gMonIcon_Bagon,
    [SPECIES_FRIGIMON] = gMonIcon_Shelgon,
    [SPECIES_FROGMON] = gMonIcon_Salamence,
    [SPECIES_FUGAMON] = gMonIcon_Beldum,
    [SPECIES_GANEMON] = gMonIcon_Metang,
    [SPECIES_GAOGAMON] = gMonIcon_Gaogamon,
    [SPECIES_GARGOMON] = gMonIcon_Regirock,
    [SPECIES_GARGOYLMON] = gMonIcon_Regice,
    [SPECIES_GARURUMON] = gMonIcon_Registeel,
    [SPECIES_GATOMON_X] = gMonIcon_Kyogre,
    [SPECIES_GEKOMON] = gMonIcon_Groudon,
    [SPECIES_GEOGREYMON] = gMonIcon_Rayquaza,
    [SPECIES_GARURUMON_X] = gMonIcon_Latias,
    [SPECIES_GATOMON] = gMonIcon_Latios,
    [SPECIES_GEREMON] = gMonIcon_Jirachi,
    [SPECIES_GESOMON] = gMonIcon_Deoxys,
    [SPECIES_EOSMON_CHAMPION] = gMonIcon_Chimecho,
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
    [SPECIES_SANTAAGUMON] = 1,
    [SPECIES_BLKTOYAMON] = 1,
    [SPECIES_SHAMANMON] = 1,
    [SPECIES_SHOUTMON] = 1,
    [SPECIES_YUKIAGUMON] = 0,
    [SPECIES_YUKIAGUMON_06] = 2,
    [SPECIES_ICEGOBIMON] = 0,
    [SPECIES_SOLARMON] = 1,
    [SPECIES_SOUNBRDMON] = 0,
    [SPECIES_SPADAMON] = 1,
    [SPECIES_SPARROWMON] = 0,
    [SPECIES_STARMON_2010] = 1,
    [SPECIES_STRABIMON] = 1,
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
    [SPECIES_SUNARZAMON] = 1,
    [SPECIES_SWIMMON] = 0,
    [SPECIES_SYAKOMON] = 1,
    [SPECIES_SYAKOMON_X] = 0,
    [SPECIES_TAPIRMON] = 0,
    [SPECIES_TENTOMON] = 0,
    [SPECIES_TERRIERMON] = 0,
    [SPECIES_TERRIERMON_ASSISTANT] = 0,
    [SPECIES_TERRIERMON_X] = 0,
    [SPECIES_TINKERMON] = 2,
    [SPECIES_TINPET] = 2,
    [SPECIES_TOYAGUMON] = 2,
    [SPECIES_TSUKAIMON] = 2,
    [SPECIES_VEEMON] = 0,
    [SPECIES_VEMMON] = 2,
    [SPECIES_VORVOMON] = 0,
    [SPECIES_WORMMON] = 2,
    [SPECIES_ZENIMON] = 1,
    [SPECIES_ZUBAMON] = 1,
    [SPECIES_AEGIOMON] = 1,
    [SPECIES_AGUNIMON] = 1,
    [SPECIES_AIRDRAMON] = 1,
    [SPECIES_AKATORIMON] = 1,
    [SPECIES_ALLOMON] = 0,
    [SPECIES_BAKEMON] = 1,
    [SPECIES_BALISTAMON] = 1,
    [SPECIES_BALUCHIMON] = 1,
    [SPECIES_ALLOMON_X] = 2,
    [SPECIES_ANGELAMON] = 2,
    [SPECIES_ARESDRAMON] = 1,
    [SPECIES_ATAMADEMON] = 1,
    [SPECIES_COREDRAMON_BLUE] = 1,
    [SPECIES_ANGEMON] = 0,
    [SPECIES_ANKYLOMON] = 0,
    [SPECIES_ARCHELOMON] = 2,
    [SPECIES_ARGOMON_CHAMPION] = 0,
    [SPECIES_CHAMBLEMON] = 2,
    [SPECIES_CHAMELEMON] = 0,
    [SPECIES_BIRDRAMON] = 0,
    [SPECIES_BLGAOGAMON] = 2,
    [SPECIES_DONSHOUMON] = 1,
    [SPECIES_DEXDORUMON] = 1,
    [SPECIES_DIATRYMON] = 0,
    [SPECIES_BIOTHUNMON] = 0,
    [SPECIES_CLOCKMON] = 1,
    [SPECIES_BLGARGOMON] = 2,
    [SPECIES_DEPTHMON] = 0,
    [SPECIES_DEPUTYMON] = 0,
    [SPECIES_FLYBEEMON] = 0,
    [SPECIES_DEVIDRAMON] = 0,
    [SPECIES_DEVIMON] = 0,
    [SPECIES_DOGGYMON] = 2,
    [SPECIES_DOKUGUMON] = 0,
    [SPECIES_CHOUFLYMON] = 0,
    [SPECIES_CENTARUMON] = 0,
    [SPECIES_COREDRAMON_GREEN] = 1,
    [SPECIES_CYCLONEMON] = 1,
    [SPECIES_DAMEMON_FUSION] = 1,
    [SPECIES_BETGAMAMON] = 2,
    [SPECIES_BIOQUETMON] = 1,
    [SPECIES_BOARMON] = 1,
    [SPECIES_BOMNANIMON] = 0,
    [SPECIES_CHRYSALMON] = 1,
    [SPECIES_CITRAMON] = 0,
    [SPECIES_EYESMON_SCATTERMODE] = 2,
    [SPECIES_FANGMON] = 2,
    [SPECIES_FILMON] = 0,
    [SPECIES_DARCMON] = 1,
    [SPECIES_TRAILMON_DARK] = 1,
    [SPECIES_EXVEEMON_VIRUS] = 2,
    [SPECIES_EYESMON] = 0,
    [SPECIES_DECKDRAMON] = 1,
    [SPECIES_DELTAMON] = 0,
    [SPECIES_BIOSTEGMON] = 2,
    [SPECIES_CLOCKMON_FUSION] = 0,
    [SPECIES_COELAMON] = 2,
    [SPECIES_BOOGIEMON] = 0,
    [SPECIES_BUCCHIEMON_RED] = 0,
    [SPECIES_BLGARURMON] = 2,
    [SPECIES_SAWKUWAMON] = 0,
    [SPECIES_BLIMPMON] = 0,
    [SPECIES_DARLIZAMON] = 0,
    [SPECIES_DARMAILMON] = 0,
    [SPECIES_EXVEEMON] = 0,
    [SPECIES_DRIMOGEMON] = 0,
    [SPECIES_EBIDRAMON] = 0,
    [SPECIES_BULLMON] = 0,
    [SPECIES_AURUMON] = 2,
    [SPECIES_AXEMON] = 2,
    [SPECIES_BABOONMON] = 1,
    [SPECIES_BURAIMON] = 1,
    [SPECIES_BURGERMON_CHAMPION] = 2,
    [SPECIES_ELEPHANMON] = 1,
    [SPECIES_BAOHUCKMON] = 0,
    [SPECIES_BAROMON] = 2,
    [SPECIES_TRAILMON_BATTLE_ARMAMENT] = 2,
    [SPECIES_FIRAMON] = 0,
    [SPECIES_FLADRAMON] = 0,
    [SPECIES_FLAWIZAMON] = 0,
    [SPECIES_EXERMON] = 0,
    [SPECIES_DORUGAMON] = 0,
    [SPECIES_DORULUMON] = 0,
    [SPECIES_DARKTYRMON_X] = 2,
    [SPECIES_DARKTYRMON] = 0,
    [SPECIES_FLARIZAMON] = 1,
    [SPECIES_BLKGATOMON] = 2,
    [SPECIES_BLKGATOMON_UVER] = 2,
    [SPECIES_BLGROWLMON] = 2,
    [SPECIES_DOLPHMON] = 0,
    [SPECIES_BUCCHIEMON_GREEN] = 0,
    [SPECIES_BULKMON] = 2,
    [SPECIES_DIGMON] = 2,
    [SPECIES_DINOHYUMON] = 0,
    [SPECIES_DOBERMON] = 0,
    [SPECIES_DOBERMON_X] = 0,
    [SPECIES_APEMON] = 1,
    [SPECIES_AQUILAMON] = 1,
    [SPECIES_ARCADIAMON_CHAMPION] = 1,
    [SPECIES_FLYMON] = 2,
    [SPECIES_FRIGIMON] = 2,
    [SPECIES_FROGMON] = 0,
    [SPECIES_FUGAMON] = 0,
    [SPECIES_GANEMON] = 0,
    [SPECIES_GAOGAMON] = 2,
    [SPECIES_GARGOMON] = 2,
    [SPECIES_GARGOYLMON] = 2,
    [SPECIES_GARURUMON] = 2,
    [SPECIES_GATOMON_X] = 2,
    [SPECIES_GEKOMON] = 0,
    [SPECIES_GEOGREYMON] = 1,
    [SPECIES_GARURUMON_X] = 0,
    [SPECIES_GATOMON] = 2,
    [SPECIES_GEREMON] = 0,
    [SPECIES_GESOMON] = 0,
    [SPECIES_EOSMON_CHAMPION] = 0,
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
    if (species == SPECIES_GESOMON && handleDeoxys == TRUE)
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
