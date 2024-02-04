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
    [SPECIES_KOROMON] = gMonIcon_Koromon,
    [SPECIES_KOZENIMON] = gMonIcon_Kozenimon,
    [SPECIES_KYAROMON] = gMonIcon_Kyaromon,
    [SPECIES_KYOKYOMON] = gMonIcon_Kyokyomon,
    [SPECIES_KYUPIMON] = gMonIcon_Kyupimon,
    [SPECIES_MINOMON] = gMonIcon_Minomon,
    [SPECIES_MISSIMON] = gMonIcon_Missimon,
    [SPECIES_MONIMON] = gMonIcon_Monimon,
    [SPECIES_MOONMON] = gMonIcon_Moonmon,
    [SPECIES_MOTIMON] = gMonIcon_Motimon,
    [SPECIES_NEGAMON] = gMonIcon_Negamon,
    [SPECIES_NYAROMON] = gMonIcon_Nyaromon,
    [SPECIES_PAGUMON] = gMonIcon_Pagumon,
    [SPECIES_PICKMON_SILVER] = gMonIcon_Pickmon_silver,
    [SPECIES_PICKMON_WHITE] = gMonIcon_Pickmon_white,
    [SPECIES_PICKMON_RED] = gMonIcon_Pickmon_red,
    [SPECIES_PINAMON] = gMonIcon_Pinamon,
    [SPECIES_POROMON] = gMonIcon_Poromon,
    [SPECIES_PUROROMON] = gMonIcon_Puroromon,
    [SPECIES_PUSURIMON] = gMonIcon_Pusurimon,
    [SPECIES_PUYOYOMON] = gMonIcon_Puyoyomon,
    [SPECIES_SAKUTTOMON] = gMonIcon_Sakuttomon,
    [SPECIES_SUNMON] = gMonIcon_Sunmon,
    [SPECIES_TANEMON] = gMonIcon_Tanemon,
    [SPECIES_TOKOMON] = gMonIcon_Tokomon,
    [SPECIES_TOKOMON_X] = gMonIcon_Tokomon_x,
    [SPECIES_TORBALLMON] = gMonIcon_Torballmon,
    [SPECIES_TSUMEMON] = gMonIcon_Tsumemon,
    [SPECIES_TSUNOMON] = gMonIcon_Tsunomon,
    [SPECIES_TUMBLEMON] = gMonIcon_Tumblemon,
    [SPECIES_UPAMON] = gMonIcon_Upamon,
    [SPECIES_VIXIMON] = gMonIcon_Viximon,
    [SPECIES_WANYAMON] = gMonIcon_Wanyamon,
    [SPECIES_XIAOMON] = gMonIcon_Xiaomon,
    [SPECIES_YAAMON] = gMonIcon_Yaamon,
    [SPECIES_YOKOMON] = gMonIcon_Yokomon,
    [SPECIES_AGUMON] = gMonIcon_Agumon,
    [SPECIES_AGUMON_06] = gMonIcon_Agumon_06,
    [SPECIES_AGUMON_EXPERT] = gMonIcon_Agumon_expert,
    [SPECIES_AGUMON_X] = gMonIcon_Agumon_x,
    [SPECIES_ANGORAMON] = gMonIcon_Angoramon,
    [SPECIES_ARCADIAMON_ROOKIE] = gMonIcon_Arcadiamon_rookie,
    [SPECIES_ARGOMON_ROOKIE] = gMonIcon_Argomon_rookie,
    [SPECIES_ARMADILMON] = gMonIcon_Armadilmon,
    [SPECIES_ARURAUMON] = gMonIcon_Aruraumon,
    [SPECIES_BAKOMON] = gMonIcon_Bakomon,
    [SPECIES_BEARMON] = gMonIcon_Bearmon,
    [SPECIES_BETAMON] = gMonIcon_Betamon,
    [SPECIES_BETAMON_X] = gMonIcon_Betamon_x,
    [SPECIES_BIYOMON] = gMonIcon_Biyomon,
    [SPECIES_BLKAGUMON] = gMonIcon_Blkagumon,
    [SPECIES_BLKAGUMON_X] = gMonIcon_Blkagumon_x,
    [SPECIES_BLKGABUMON] = gMonIcon_Blkgabumon,
    [SPECIES_BLKGUILMON] = gMonIcon_Blkguilmon,
    [SPECIES_BOKOMON] = gMonIcon_Bokomon,
    [SPECIES_BULUCOMON] = gMonIcon_Bulucomon,
    [SPECIES_BURGERMON] = gMonIcon_burgermon,
    [SPECIES_SAMUAGUMON] = gMonIcon_samuagumon,
    [SPECIES_CANDLEMON] = gMonIcon_Candlemon,
    [SPECIES_CHIKURIMON] = gMonIcon_Chikurimon,
    [SPECIES_TYUTYUMON] = gMonIcon_Tyutyumon,
    [SPECIES_CHUUMON] = gMonIcon_Chuumon,
    [SPECIES_HAZYAGUMON] = gMonIcon_Hazyagumon,
    [SPECIES_COMMDRAMON] = gMonIcon_Commdramon,
    [SPECIES_CORONAMON] = gMonIcon_coronamon,
    [SPECIES_CRABMON] = gMonIcon_Crabmon,
    [SPECIES_CRABMON_X] = gMonIcon_Crabmon_x,
    [SPECIES_CUTEMON] = gMonIcon_Cutemon,
    [SPECIES_DAMEMON] = gMonIcon_Damemon,
    [SPECIES_DEMIDEVMON] = gMonIcon_Demidevmon,
    [SPECIES_DOKUNEMON] = gMonIcon_Dokunemon,
    [SPECIES_DONDOKOMON] = gMonIcon_Dondokomon,
    [SPECIES_DORUMON] = gMonIcon_Dorumon,
    [SPECIES_DOTAGUMON] = gMonIcon_Dotagumon,
    [SPECIES_DOTFALCMON] = gMonIcon_Dotfalcmon,
    [SPECIES_DRACMON] = gMonIcon_Dracmon,
    [SPECIES_DRACOMON] = gMonIcon_Dracomon,
    [SPECIES_DRACOMON_X] = gMonIcon_Dracomon_x,
    [SPECIES_EBIBURGMON] = gMonIcon_Ebiburgmon,
    [SPECIES_EKAKIMON] = gMonIcon_Ekakimon,
    [SPECIES_ELECMON] = gMonIcon_Elecmon,
    [SPECIES_ELECMON_VIOLET] = gMonIcon_Elecmon_violet,
    [SPECIES_ESPIMON] = gMonIcon_Espimon,
    [SPECIES_AGUMON_FAKE_EXPERT] = gMonIcon_Agumon_fake_expert,
    [SPECIES_FALCOMON] = gMonIcon_Falcomon,
    [SPECIES_FALCOMON_06] = gMonIcon_Falcomon_06,
    [SPECIES_FANBEEMON] = gMonIcon_Fanbeemon,
    [SPECIES_FLAMEMON] = gMonIcon_Flamemon,
    [SPECIES_FLORAMON] = gMonIcon_Floramon,
    [SPECIES_GABUMON] = gMonIcon_Gabumon,
    [SPECIES_GABUMON_X] = gMonIcon_Gabumon_x,
    [SPECIES_GAMMAMON] = gMonIcon_Gammamon,
    [SPECIES_GAOMON] = gMonIcon_Gaomon,
    [SPECIES_GAOSSMON] = gMonIcon_Gaossmon,
    [SPECIES_GAZIMON] = gMonIcon_Gazimon,
    [SPECIES_GAZIMON_X] = gMonIcon_Gazimon_x,
    [SPECIES_GHOSTMON] = gMonIcon_Ghostmon,
    [SPECIES_GIZAMON] = gMonIcon_Gizamon,
    [SPECIES_GIZUMON] = gMonIcon_Gizumon,
    [SPECIES_GOBLIMON] = gMonIcon_Goblimon,
    [SPECIES_GOMAMON] = gMonIcon_Gomamon,
    [SPECIES_GOMAMON_X] = gMonIcon_Gomamon_x,
    [SPECIES_GOTSUMON] = gMonIcon_Gotsumon,
    [SPECIES_GOTSUMON_X] = gMonIcon_Gotsumon_x,
    [SPECIES_GUILMON] = gMonIcon_Guilmon,
    [SPECIES_GUILMON_X] = gMonIcon_Guilmon_x,
    [SPECIES_GUMDRAMON] = gMonIcon_Gumdramon,
    [SPECIES_HACKMON] = gMonIcon_Hackmon,
    [SPECIES_HAGURUMON] = gMonIcon_Hagurumon,
    [SPECIES_HAGURUMON_X] = gMonIcon_Hagurumon_x,
    [SPECIES_HAWKMON] = gMonIcon_Hawkmon,
    [SPECIES_HERISSMON] = gMonIcon_Herissmon,
    [SPECIES_HYOKOMON] = gMonIcon_Hyokomon,
    [SPECIES_IGNITEMON] = gMonIcon_Ignitemon,
    [SPECIES_IMPMON] = gMonIcon_Impmon,
    [SPECIES_IMPMON_X] = gMonIcon_Impmon_x,
    [SPECIES_JAZAMON] = gMonIcon_Jazamon,
    [SPECIES_JELLYMON] = gMonIcon_Jellymon,
    [SPECIES_JUNKMON] = gMonIcon_Junkmon,
    [SPECIES_KAMEMON] = gMonIcon_Kamemon,
    [SPECIES_KERAMON] = gMonIcon_Keramon,
    [SPECIES_KERAMON_X] = gMonIcon_Keramon_x,
    [SPECIES_KODOKGUMON] = gMonIcon_Kodokgumon,
    [SPECIES_KOKABUIMON] = gMonIcon_Kokabuimon,
    [SPECIES_KOKUWAMON] = gMonIcon_Kokuwamon,
    [SPECIES_KOKUWAMON_X] = gMonIcon_Kokuwamon_x,
    [SPECIES_KOTEMON] = gMonIcon_Kotemon,
    [SPECIES_KUDAMON] = gMonIcon_Kudamon,
    [SPECIES_KUDAMON_06] = gMonIcon_Kudamon_06,
    [SPECIES_KUNEMON] = gMonIcon_Kunemon,
    [SPECIES_LABRAMON] = gMonIcon_Labramon,
    [SPECIES_LALAMON] = gMonIcon_Lalamon,
    [SPECIES_LIOLLMON] = gMonIcon_Liollmon,
    [SPECIES_LOOGAMON] = gMonIcon_Loogamon,
    [SPECIES_LOPMON] = gMonIcon_Lopmon,
    [SPECIES_LOPMON_X] = gMonIcon_Lopmon_x,
    [SPECIES_LUCEMON] = gMonIcon_Lucemon,
    [SPECIES_LUDOMON] = gMonIcon_Ludomon,
    [SPECIES_LUNAMON] = gMonIcon_Lunamon,
    [SPECIES_LUXMON] = gMonIcon_Luxmon,
    [SPECIES_METABEE] = gMonIcon_Metabee,
    [SPECIES_KODEKACMON] = gMonIcon_Kodekacmon,
    [SPECIES_MODBETAMON] = gMonIcon_Modbetamon,
    [SPECIES_MONITAMON] = gMonIcon_Monitamon,
    [SPECIES_MONMON] = gMonIcon_Monmon,
    [SPECIES_MONODRAMON] = gMonIcon_Monodramon,
    [SPECIES_MORPHOMON] = gMonIcon_Morphomon,
    [SPECIES_MUCHOMON] = gMonIcon_Muchomon,
    [SPECIES_MUSHROOMON] = gMonIcon_Mushroomon,
    [SPECIES_NEEMON] = gMonIcon_Neemon,
    [SPECIES_OTAMAMON] = gMonIcon_Otamamon,
    [SPECIES_OTAMAMON_RED] = gMonIcon_Otamamon_red,
    [SPECIES_OTAMAMON_X] = gMonIcon_Otamamon_x,
    [SPECIES_PALMON] = gMonIcon_Palmon,
    [SPECIES_PALMON_X] = gMonIcon_Palmon_x,
    [SPECIES_PATAMON] = gMonIcon_Patamon,
    [SPECIES_PAWNMON] = gMonIcon_Pawnmon,
    [SPECIES_PAWNMON_WHITE] = gMonIcon_Pawnmon_white,
    [SPECIES_PENGUINMON] = gMonIcon_Penguinmon,
    [SPECIES_PETITMAMON] = gMonIcon_Petitmamon,
    [SPECIES_PHASCOMON] = gMonIcon_Phascomon,
    [SPECIES_PILLOMON] = gMonIcon_Pillomon,
    [SPECIES_POMUMON] = gMonIcon_Pomumon,
    [SPECIES_PSYCHEMON] = gMonIcon_Psychemon,
    [SPECIES_PULSEMON] = gMonIcon_Pulsemon,
    [SPECIES_RENAMON] = gMonIcon_Renamon,
    [SPECIES_RENAMON_X] = gMonIcon_Renamon_x,
    [SPECIES_ROKUSHO] = gMonIcon_Rokusho,
    [SPECIES_RYUDAMON] = gMonIcon_Ryudamon,
    [SPECIES_SALAMON] = gMonIcon_Salamon,
    [SPECIES_SALAMON_X] = gMonIcon_Salamon_x,
    [SPECIES_SANGOMON] = gMonIcon_Sangomon,
    [SPECIES_SANTAAGUMON] = gMonIcon_santaagumon,
    [SPECIES_BLKTOYAMON] = gMonIcon_Blktoyagumon,
    [SPECIES_SHAMANMON] = gMonIcon_Shamanmon,
    [SPECIES_SHOUTMON] = gMonIcon_Shoutmon,
    [SPECIES_YUKIAGUMON] = gMonIcon_Yukiagumon,
    [SPECIES_YUKIAGUMON_06] = gMonIcon_Yukiagumon_06,
    [SPECIES_ICEGOBIMON] = gMonIcon_Icegobimon,
    [SPECIES_SOLARMON] = gMonIcon_Solarmon,
    [SPECIES_SOUNBRDMON] = gMonIcon_Sounbrdmon,
    [SPECIES_SPADAMON] = gMonIcon_Spadamon,
    [SPECIES_SPARROWMON] = gMonIcon_Sparrowmon,
    [SPECIES_STARMON_2010] = gMonIcon_Starmon_2010,
    [SPECIES_STRABIMON] = gMonIcon_Strabimon,
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
    [SPECIES_SUNARZAMON] = gMonIcon_Sunarzamon,
    [SPECIES_SWIMMON] = gMonIcon_Swimmon,
    [SPECIES_SYAKOMON] = gMonIcon_Syakomon,
    [SPECIES_SYAKOMON_X] = gMonIcon_Syakomon_x,
    [SPECIES_TAPIRMON] = gMonIcon_Tapirmon,
    [SPECIES_TENTOMON] = gMonIcon_Tentomon,
    [SPECIES_TERRIERMON] = gMonIcon_Terriermon,
    [SPECIES_TERRIERMON_ASSISTANT] = gMonIcon_Terriermon_assistant,
    [SPECIES_TERRIERMON_X] = gMonIcon_Terriermon_x,
    [SPECIES_TINKERMON] = gMonIcon_Tinkermon,
    [SPECIES_TINPET] = gMonIcon_Tinpet,
    [SPECIES_TOYAGUMON] = gMonIcon_Toyagumon,
    [SPECIES_TSUKAIMON] = gMonIcon_Tsukaimon,
    [SPECIES_VEEMON] = gMonIcon_Veemon,
    [SPECIES_VEMMON] = gMonIcon_Vemmon,
    [SPECIES_VORVOMON] = gMonIcon_Vorvomon,
    [SPECIES_WORMMON] = gMonIcon_Wormmon,
    [SPECIES_ZENIMON] = gMonIcon_Zenimon,
    [SPECIES_ZUBAMON] = gMonIcon_Zubamon,
    [SPECIES_AEGIOMON] = gMonIcon_Aegiomon,
    [SPECIES_AGUNIMON] = gMonIcon_Agunimon,
    [SPECIES_AIRDRAMON] = gMonIcon_Airdramon,
    [SPECIES_AKATORIMON] = gMonIcon_Akatorimon,
    [SPECIES_ALLOMON] = gMonIcon_Allomon,
    [SPECIES_BAKEMON] = gMonIcon_Bakemon,
    [SPECIES_BALISTAMON] = gMonIcon_Balistamon,
    [SPECIES_BALUCHIMON] = gMonIcon_Baluchimon,
    [SPECIES_ALLOMON_X] = gMonIcon_Allomon_x,
    [SPECIES_ANGELAMON] = gMonIcon_Swellow,
    [SPECIES_ARESDRAMON] = gMonIcon_Aresdramon,
    [SPECIES_ATAMADEMON] = gMonIcon_Atamademon,
    [SPECIES_COREDRAMON_BLUE] = gMonIcon_Coredramon_blue,
    [SPECIES_ANGEMON] = gMonIcon_Angemon,
    [SPECIES_ANKYLOMON] = gMonIcon_Ankylomon,
    [SPECIES_ARCHELOMON] = gMonIcon_Archelomon,
    [SPECIES_ARGOMON_CHAMPION] = gMonIcon_Argomon_champion,
    [SPECIES_CHAMBLEMON] = gMonIcon_Chamblemon,
    [SPECIES_CHAMELEMON] = gMonIcon_Chamelemon,
    [SPECIES_BIRDRAMON] = gMonIcon_Birdramon,
    [SPECIES_BLGAOGAMON] = gMonIcon_Blgaogamon,
    [SPECIES_DONSHOUMON] = gMonIcon_Donshoumon,
    [SPECIES_DEXDORUMON] = gMonIcon_Dexdorumon,
    [SPECIES_DIATRYMON] = gMonIcon_Diatrymon,
    [SPECIES_BIOTHUNMON] = gMonIcon_Biothunmon,
    [SPECIES_CLOCKMON] = gMonIcon_Clockmon,
    [SPECIES_BLGARGOMON] = gMonIcon_Blgargomon,
    [SPECIES_DEPTHMON] = gMonIcon_Depthmon,
    [SPECIES_DEPUTYMON] = gMonIcon_Deputymon,
    [SPECIES_FLYBEEMON] = gMonIcon_Luvdisc,
    [SPECIES_DEVIDRAMON] = gMonIcon_Devidramon,
    [SPECIES_DEVIMON] = gMonIcon_Devimon,
    [SPECIES_DOGGYMON] = gMonIcon_Doggymon,
    [SPECIES_DOKUGUMON] = gMonIcon_Dokugumon,
    [SPECIES_CHOUFLYMON] = gMonIcon_Chouflymon,
    [SPECIES_CENTARUMON] = gMonIcon_Centarumon,
    [SPECIES_COREDRAMON_GREEN] = gMonIcon_Coredramon_green,
    [SPECIES_CYCLONEMON] = gMonIcon_Cyclonemon,
    [SPECIES_DAMEMON_FUSION] = gMonIcon_Damemon_fusion,
    [SPECIES_BETGAMAMON] = gMonIcon_Betgamamon,
    [SPECIES_BIOQUETMON] = gMonIcon_Bioquetmon,
    [SPECIES_BOARMON] = gMonIcon_Boarmon,
    [SPECIES_BOMNANIMON] = gMonIcon_Bomnanimon,
    [SPECIES_CHRYSALMON] = gMonIcon_Chrysalmon,
    [SPECIES_CITRAMON] = gMonIcon_Citramon,
    [SPECIES_EYESMON_SCATTERMODE] = gMonIcon_Spheal,
    [SPECIES_FANGMON] = gMonIcon_Sealeo,
    [SPECIES_FILMON] = gMonIcon_Walrein,
    [SPECIES_DARCMON] = gMonIcon_Darcmon,
    [SPECIES_TRAILMON_DARK] = gMonIcon_Trailmon_dark,
    [SPECIES_EXVEEMON_VIRUS] = gMonIcon_Snorunt,
    [SPECIES_EYESMON] = gMonIcon_Glalie,
    [SPECIES_DECKDRAMON] = gMonIcon_Deckdramon,
    [SPECIES_DELTAMON] = gMonIcon_Deltamon,
    [SPECIES_BIOSTEGMON] = gMonIcon_Biostegmon,
    [SPECIES_CLOCKMON_FUSION] = gMonIcon_Clockmon_fusion,
    [SPECIES_COELAMON] = gMonIcon_Coelamon,
    [SPECIES_BOOGIEMON] = gMonIcon_Boogiemon,
    [SPECIES_BUCCHIEMON_RED] = gMonIcon_Bucchiemon_red,
    [SPECIES_BLGARURMON] = gMonIcon_Blgarurmon,
    [SPECIES_SAWKUWAMON] = gMonIcon_Sawkuwamon,
    [SPECIES_BLIMPMON] = gMonIcon_Blimpmon,
    [SPECIES_DARLIZAMON] = gMonIcon_Darlizamon,
    [SPECIES_DARMAILMON] = gMonIcon_Darmailmon,
    [SPECIES_EXVEEMON] = gMonIcon_Wynaut,
    [SPECIES_DRIMOGEMON] = gMonIcon_Drimogemon,
    [SPECIES_EBIDRAMON] = gMonIcon_Ebidramon,
    [SPECIES_BULLMON] = gMonIcon_Bullmon,
    [SPECIES_AURUMON] = gMonIcon_Aurumon,
    [SPECIES_AXEMON] = gMonIcon_Axemon,
    [SPECIES_BABOONMON] = gMonIcon_Baboonmon,
    [SPECIES_BURAIMON] = gMonIcon_Buraimon,
    [SPECIES_BURGERMON_CHAMPION] = gMonIcon_Burgermon_champion,
    [SPECIES_ELEPHANMON] = gMonIcon_Elephanmon,
    [SPECIES_BAOHUCKMON] = gMonIcon_Baohuckmon,
    [SPECIES_BAROMON] = gMonIcon_Baromon,
    [SPECIES_TRAILMON_BATTLE_ARMAMENT] = gMonIcon_Trailmon_battle_armament,
    [SPECIES_FIRAMON] = gMonIcon_Clamperl,
    [SPECIES_FLADRAMON] = gMonIcon_Huntail,
    [SPECIES_FLAWIZAMON] = gMonIcon_Gorebyss,
    [SPECIES_EXERMON] = gMonIcon_Exermon,
    [SPECIES_DORUGAMON] = gMonIcon_Dorugamon,
    [SPECIES_DORULUMON] = gMonIcon_Dorulumon,
    [SPECIES_DARKTYRMON_X] = gMonIcon_Darktyrmon_x,
    [SPECIES_DARKTYRMON] = gMonIcon_Darktyrmon,
    [SPECIES_FLARIZAMON] = gMonIcon_Relicanth,
    [SPECIES_BLKGATOMON] = gMonIcon_Blkgatomon,
    [SPECIES_BLKGATOMON_UVER] = gMonIcon_Blkgatomon_uver,
    [SPECIES_BLGROWLMON] = gMonIcon_Blgrowlmon,
    [SPECIES_DOLPHMON] = gMonIcon_Dolphmon,
    [SPECIES_BUCCHIEMON_GREEN] = gMonIcon_Bucchiemon_green,
    [SPECIES_BULKMON] = gMonIcon_Bulkmon,
    [SPECIES_DIGMON] = gMonIcon_Digmon,
    [SPECIES_DINOHYUMON] = gMonIcon_Dinohyumon,
    [SPECIES_DOBERMON] = gMonIcon_Dobermon,
    [SPECIES_DOBERMON_X] = gMonIcon_Dobermon_x,
    [SPECIES_APEMON] = gMonIcon_Apemon,
    [SPECIES_AQUILAMON] = gMonIcon_Aquilamon,
    [SPECIES_ARCADIAMON_CHAMPION] = gMonIcon_Arcadiamon_champion,
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
    [SPECIES_EOSMON_CHAMPION] = gMonIcon_Eosmon_champion,
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
