#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (SPECIES_##species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
    egg_moves(ARGOMON_F,
              MOVE_LIGHT_SCREEN,
              MOVE_SKULL_BASH,
              MOVE_SAFEGUARD,
              MOVE_CHARM,
              MOVE_PETAL_DANCE,
              MOVE_MAGICAL_LEAF,
              MOVE_GRASS_WHISTLE,
              MOVE_CURSE),

    egg_moves(BOTAMON,
              MOVE_BELLY_DRUM,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_BITE,
              MOVE_OUTRAGE,
              MOVE_BEAT_UP,
              MOVE_SWORDS_DANCE,
              MOVE_DRAGON_DANCE),

    egg_moves(CONOMON,
              MOVE_MIRROR_COAT,
              MOVE_HAZE,
              MOVE_MIST,
              MOVE_FORESIGHT,
              MOVE_FLAIL,
              MOVE_REFRESH,
              MOVE_MUD_SPORT,
              MOVE_YAWN),

    egg_moves(KETOMON,
              MOVE_PURSUIT,
              MOVE_FAINT_ATTACK,
              MOVE_FORESIGHT,
              MOVE_STEEL_WING,
              MOVE_AIR_CUTTER),

    egg_moves(CHOROMON,
              MOVE_SCREECH,
              MOVE_FLAME_WHEEL,
              MOVE_FURY_SWIPES,
              MOVE_BITE,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_UPROAR,
              MOVE_SWAGGER),

    egg_moves(NYOKIMON,
              MOVE_FAINT_ATTACK,
              MOVE_FALSE_SWIPE,
              MOVE_SCARY_FACE,
              MOVE_QUICK_ATTACK,
              MOVE_TRI_ATTACK,
              MOVE_ASTONISH,
              MOVE_SKY_ATTACK),

    egg_moves(PAFUMON,
              MOVE_PURSUIT,
              MOVE_SLAM,
              MOVE_SPITE,
              MOVE_BEAT_UP,
              MOVE_POISON_FANG),

    egg_moves(POPOMON,
              MOVE_FLAIL,
              MOVE_SAFEGUARD,
              MOVE_COUNTER,
              MOVE_RAPID_SPIN,
              MOVE_ROCK_SLIDE,
              MOVE_METAL_CLAW,
              MOVE_SWORDS_DANCE,
              MOVE_CRUSH_CLAW),

    egg_moves(PUNIMON,
              MOVE_SUPERSONIC,
              MOVE_DISABLE,
              MOVE_TAKE_DOWN,
              MOVE_FOCUS_ENERGY,
              MOVE_CHARM,
              MOVE_COUNTER,
              MOVE_BEAT_UP),

    egg_moves(PUSUMON,
              MOVE_COUNTER,
              MOVE_DISABLE,
              MOVE_SUPERSONIC,
              MOVE_TAKE_DOWN,
              MOVE_AMNESIA,
              MOVE_CONFUSION,
              MOVE_BEAT_UP),

    egg_moves(RELEMON,
              MOVE_FAINT_ATTACK,
              MOVE_HYPNOSIS,
              MOVE_FLAIL,
              MOVE_SPITE,
              MOVE_DISABLE,
              MOVE_HOWL,
              MOVE_PSYCH_UP,
              MOVE_HEAT_WAVE),

    egg_moves(ICEBOTAMON,
              MOVE_QUICK_ATTACK,
              MOVE_PURSUIT,
              MOVE_FAINT_ATTACK,
              MOVE_GUST,
              MOVE_WHIRLWIND,
              MOVE_CURSE),

    egg_moves(ZERIMON,
              MOVE_SWORDS_DANCE,
              MOVE_RAZOR_LEAF,
              MOVE_FLAIL,
              MOVE_SYNTHESIS,
              MOVE_CHARM,
              MOVE_INGRAIN),

    egg_moves(ARGOMON_IT,
              MOVE_FALSE_SWIPE,
              MOVE_SCREECH,
              MOVE_COUNTER,
              MOVE_PSYBEAM,
              MOVE_FLAIL,
              MOVE_SWEET_SCENT,
              MOVE_LIGHT_SCREEN,
              MOVE_PURSUIT),

    egg_moves(BIBIMON,
              MOVE_BATON_PASS,
              MOVE_SCREECH,
              MOVE_GIGA_DRAIN,
              MOVE_SIGNAL_BEAM),

    egg_moves(BUDMON,
              MOVE_FAINT_ATTACK,
              MOVE_SCREECH,
              MOVE_ANCIENT_POWER,
              MOVE_PURSUIT,
              MOVE_BEAT_UP,
              MOVE_UPROAR,
              MOVE_ROCK_SLIDE),

    egg_moves(CALUMON,
              MOVE_SPITE,
              MOVE_CHARM,
              MOVE_HYPNOSIS,
              MOVE_AMNESIA,
              MOVE_PSYCH_UP,
              MOVE_ASSIST),

    egg_moves(CHICCHIMON,
              MOVE_HYPNOSIS,
              MOVE_PSYBEAM,
              MOVE_FORESIGHT,
              MOVE_LIGHT_SCREEN,
              MOVE_FUTURE_SIGHT,
              MOVE_PSYCHIC,
              MOVE_CROSS_CHOP,
              MOVE_REFRESH),

    egg_moves(DEMIVEEMON,
              MOVE_ROCK_SLIDE,
              MOVE_FORESIGHT,
              MOVE_MEDITATE,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_BEAT_UP,
              MOVE_REVENGE,
              MOVE_SMELLING_SALT),

    egg_moves(FRIMON,
              MOVE_BODY_SLAM,
              MOVE_SAFEGUARD,
              MOVE_CRUNCH,
              MOVE_THRASH,
              MOVE_FIRE_SPIN,
              MOVE_HOWL,
              MOVE_HEAT_WAVE),

    egg_moves(GUMMYMON,
              MOVE_MIST,
              MOVE_SPLASH,
              MOVE_BUBBLE_BEAM,
              MOVE_HAZE,
              MOVE_MIND_READER,
              MOVE_WATER_SPORT,
              MOVE_ICE_BALL),

    egg_moves(HOPMON,
              MOVE_ENCORE,
              MOVE_BARRIER,
              MOVE_KNOCK_OFF,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH),

    egg_moves(KOKOMON,
              MOVE_LIGHT_SCREEN,
              MOVE_MEDITATE,
              MOVE_ROLLING_KICK,
              MOVE_ENCORE,
              MOVE_SMELLING_SALT,
              MOVE_COUNTER,
              MOVE_ROCK_SLIDE),

    egg_moves(KYAROMON,
              MOVE_SWORDS_DANCE,
              MOVE_ENCORE,
              MOVE_REFLECT,
              MOVE_SYNTHESIS,
              MOVE_LEECH_LIFE,
              MOVE_INGRAIN,
              MOVE_MAGICAL_LEAF),

    egg_moves(MINOMON,
              MOVE_AURORA_BEAM,
              MOVE_MIRROR_COAT,
              MOVE_RAPID_SPIN,
              MOVE_HAZE,
              MOVE_SAFEGUARD,
              MOVE_CONFUSE_RAY),

    egg_moves(MONIMON,
              MOVE_MEGA_PUNCH,
              MOVE_ROCK_SLIDE,
              MOVE_BLOCK),

    egg_moves(NEGAMON,
              MOVE_FLAME_WHEEL,
              MOVE_THRASH,
              MOVE_DOUBLE_KICK,
              MOVE_HYPNOSIS,
              MOVE_CHARM,
              MOVE_DOUBLE_EDGE),

    egg_moves(PAGUMON,
              MOVE_SAFEGUARD,
              MOVE_BELLY_DRUM,
              MOVE_FUTURE_SIGHT,
              MOVE_STOMP,
              MOVE_MUD_SPORT,
              MOVE_SLEEP_TALK,
              MOVE_SNORE),

    egg_moves(PINAMON,
              MOVE_STEEL_WING,
              MOVE_FORESIGHT,
              MOVE_MIRROR_MOVE,
              MOVE_GUST,
              MOVE_QUICK_ATTACK,
              MOVE_FLAIL,
              MOVE_FEATHER_DANCE,
              MOVE_CURSE),

    egg_moves(POROMON,
              MOVE_QUICK_ATTACK,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_FAINT_ATTACK,
              MOVE_FLAIL,
              MOVE_ENDEAVOR),

    egg_moves(PUSURIMON,
              MOVE_LICK,
              MOVE_PERISH_SONG,
              MOVE_DISABLE,
              MOVE_HORN_DRILL,
              MOVE_SLAM,
              MOVE_ENCORE,
              MOVE_FAKE_OUT,
              MOVE_ICICLE_SPEAR),

    egg_moves(SAKUTTOMON,
              MOVE_HAZE,
              MOVE_MEAN_LOOK,
              MOVE_LICK,
              MOVE_IMPRISON,
              MOVE_CURSE,
              MOVE_SHADOW_PUNCH,
              MOVE_EXPLOSION),

    egg_moves(TANEMON,
              MOVE_BUBBLE_BEAM,
              MOVE_TAKE_DOWN,
              MOVE_BARRIER,
              MOVE_RAPID_SPIN,
              MOVE_SCREECH,
              MOVE_ICICLE_SPEAR),

    egg_moves(TOKOMON_X,
              MOVE_PSYWAVE,
              MOVE_PERISH_SONG,
              MOVE_HAZE,
              MOVE_ASTONISH,
              MOVE_WILL_O_WISP,
              MOVE_GRUDGE,
              MOVE_EXPLOSION),

    egg_moves(TSUNOMON,
              MOVE_ROCK_SLIDE,
              MOVE_FLAIL,
              MOVE_EXPLOSION,
              MOVE_BLOCK),

    egg_moves(TUMBLEMON,
              MOVE_BARRIER,
              MOVE_ASSIST,
              MOVE_ROLE_PLAY,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH),

    egg_moves(VIXIMON,
              MOVE_DIG,
              MOVE_HAZE,
              MOVE_AMNESIA,
              MOVE_FLAIL,
              MOVE_SLAM,
              MOVE_KNOCK_OFF,
              MOVE_SWORDS_DANCE),

    egg_moves(YOKOMON,
              MOVE_SYNTHESIS,
              MOVE_MOONLIGHT,
              MOVE_REFLECT,
              MOVE_ANCIENT_POWER,
              MOVE_PSYCH_UP,
              MOVE_INGRAIN,
              MOVE_CURSE),

    egg_moves(AGUMON_06,
              MOVE_ROCK_SLIDE,
              MOVE_ANCIENT_POWER,
              MOVE_BELLY_DRUM,
              MOVE_SCREECH,
              MOVE_SKULL_BASH,
              MOVE_PERISH_SONG,
              MOVE_SWORDS_DANCE),

    egg_moves(ARCADIAMON_ROOKIE,
              MOVE_BELLY_DRUM,
              MOVE_MAGNITUDE,
              MOVE_BODY_SLAM,
              MOVE_CURSE,
              MOVE_SMELLING_SALT,
              MOVE_SLEEP_TALK,
              MOVE_SNORE,
              MOVE_SUBSTITUTE),

    egg_moves(ARGOMON_ROOKIE,
              MOVE_SCREECH,
              MOVE_PSYWAVE,
              MOVE_PSYBEAM,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_WILL_O_WISP),

    egg_moves(ARURAUMON,
              MOVE_CRUNCH,
              MOVE_REVERSAL,
              MOVE_ROCK_SLIDE,
              MOVE_COUNTER,
              MOVE_MAGNITUDE,
              MOVE_SWORDS_DANCE,
              MOVE_CURSE,
              MOVE_CRUSH_CLAW),

    egg_moves(BEARMON,
              MOVE_PRESENT,
              MOVE_METRONOME,
              MOVE_HEAL_BELL,
              MOVE_AROMATHERAPY,
              MOVE_SUBSTITUTE),

    egg_moves(BETAMON,
              MOVE_FLAIL,
              MOVE_CONFUSION,
              MOVE_MEGA_DRAIN,
              MOVE_REFLECT,
              MOVE_AMNESIA,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER),

    egg_moves(BETAMON_X,
              MOVE_STOMP,
              MOVE_FORESIGHT,
              MOVE_FOCUS_ENERGY,
              MOVE_SAFEGUARD,
              MOVE_DISABLE,
              MOVE_COUNTER,
              MOVE_CRUSH_CLAW,
              MOVE_SUBSTITUTE),

    egg_moves(BIYOMON,
              MOVE_FLAIL,
              MOVE_AURORA_BEAM,
              MOVE_OCTAZOOKA,
              MOVE_DISABLE,
              MOVE_SPLASH,
              MOVE_DRAGON_RAGE,
              MOVE_DRAGON_BREATH),

    egg_moves(BLKAGUMON_X,
              MOVE_PSYBEAM,
              MOVE_HAZE,
              MOVE_HYDRO_PUMP,
              MOVE_SLEEP_TALK,
              MOVE_MUD_SPORT),

    egg_moves(BULUCOMON,
              MOVE_FUTURE_SIGHT,
              MOVE_HYPNOSIS,
              MOVE_MIMIC,
              MOVE_PSYCH_UP,
              MOVE_FAKE_OUT,
              MOVE_TRICK),

    egg_moves(BURGERMON,
              MOVE_COUNTER,
              MOVE_SAFEGUARD,
              MOVE_BATON_PASS,
              MOVE_RAZOR_WIND,
              MOVE_REVERSAL,
              MOVE_LIGHT_SCREEN,
              MOVE_ENDURE,
              MOVE_SILVER_WIND),

    egg_moves(TYUTYUMON,
              MOVE_FURY_ATTACK,
              MOVE_FLAIL,
              MOVE_FALSE_SWIPE,
              MOVE_FAINT_ATTACK),

    egg_moves(CORONAMON,
              MOVE_FORESIGHT,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              MOVE_REFRESH,
              MOVE_DRAGON_DANCE,
              MOVE_CURSE,
              MOVE_SLEEP_TALK,
              MOVE_HORN_DRILL),

    egg_moves(CRABMON_X,
              MOVE_CHARM,
              MOVE_FLAIL,
              MOVE_ENDURE,
              MOVE_CURSE,
              MOVE_TICKLE,
              MOVE_WISH),

    egg_moves(DONDOKOMON,
              MOVE_BUBBLE_BEAM,
              MOVE_AURORA_BEAM,
              MOVE_SLAM,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_ROCK_SLIDE,
              MOVE_SPIKES),

    egg_moves(DOTAGUMON,
              MOVE_BUBBLE_BEAM,
              MOVE_AURORA_BEAM,
              MOVE_RAPID_SPIN,
              MOVE_DIG,
              MOVE_FLAIL,
              MOVE_KNOCK_OFF,
              MOVE_CONFUSE_RAY),

    egg_moves(DRACMON,
              MOVE_WHIRLWIND,
              MOVE_PURSUIT,
              MOVE_FORESIGHT,
              MOVE_STEEL_WING,
              MOVE_DRAGON_BREATH,
              MOVE_CURSE),

    egg_moves(DRACOMON,
              MOVE_LICK,
              MOVE_CHARM,
              MOVE_DOUBLE_EDGE,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_SUBSTITUTE),

    egg_moves(ELECMON,
              MOVE_LIGHT_SCREEN,
              MOVE_MIST,
              MOVE_HAZE,
              MOVE_SUPERSONIC,
              MOVE_DRAGON_BREATH,
              MOVE_DRAGON_DANCE),

    egg_moves(FALCOMON_06,
              MOVE_VINE_WHIP,
              MOVE_LEECH_SEED,
              MOVE_COUNTER,
              MOVE_ANCIENT_POWER,
              MOVE_FLAIL,
              MOVE_NATURE_POWER,
              MOVE_INGRAIN,
              MOVE_GRASS_WHISTLE),

    egg_moves(FLORAMON,
              MOVE_FURY_SWIPES,
              MOVE_QUICK_ATTACK,
              MOVE_REVERSAL,
              MOVE_THRASH,
              MOVE_FORESIGHT,
              MOVE_COVET,
              MOVE_HOWL,
              MOVE_CRUSH_CLAW),

    egg_moves(GAMMAMON,
              MOVE_CRUNCH,
              MOVE_THRASH,
              MOVE_HYDRO_PUMP,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_MUD_SPORT,
              MOVE_WATER_SPORT,
              MOVE_DRAGON_CLAW),

    egg_moves(GAZIMON,
              MOVE_DOUBLE_EDGE,
              MOVE_PURSUIT,
              MOVE_SLASH,
              MOVE_FOCUS_ENERGY,
              MOVE_REVERSAL,
              MOVE_SUBSTITUTE,
              MOVE_TRICK,
              MOVE_ASSIST),

    egg_moves(GHOSTMON,
              MOVE_MIRROR_MOVE,
              MOVE_SUPERSONIC,
              MOVE_FAINT_ATTACK,
              MOVE_WING_ATTACK,
              MOVE_WHIRLWIND,
              MOVE_SKY_ATTACK,
              MOVE_FEATHER_DANCE),

    egg_moves(GIZUMON,
              MOVE_PSYBEAM,
              MOVE_BIDE,
              MOVE_SILVER_WIND),

    egg_moves(GOMAMON,
              MOVE_PSYBEAM,
              MOVE_DISABLE,
              MOVE_SONIC_BOOM,
              MOVE_BATON_PASS,
              MOVE_PURSUIT,
              MOVE_SIGNAL_BEAM),

    egg_moves(GOTSUMON_X,
              MOVE_FLAIL,
              MOVE_SCREECH,
              MOVE_AMNESIA),

    egg_moves(GUILMON_X,
              MOVE_REVERSAL,
              MOVE_BIDE,
              MOVE_PRESENT,
              MOVE_ENCORE,
              MOVE_DOUBLE_SLAP,
              MOVE_WISH,
              MOVE_CHARGE),

    egg_moves(GUMDRAMON,
              MOVE_PRESENT,
              MOVE_METRONOME,
              MOVE_AMNESIA,
              MOVE_BELLY_DRUM,
              MOVE_SPLASH,
              MOVE_MIMIC,
              MOVE_WISH,
              MOVE_SUBSTITUTE),

    egg_moves(HACKMON,
              MOVE_PERISH_SONG,
              MOVE_PRESENT,
              MOVE_FAINT_ATTACK,
              MOVE_WISH,
              MOVE_FAKE_TEARS),

    egg_moves(HAGURUMON,
              MOVE_PRESENT,
              MOVE_MIRROR_MOVE,
              MOVE_PECK,
              MOVE_FORESIGHT,
              MOVE_FUTURE_SIGHT,
              MOVE_SUBSTITUTE,
              MOVE_PSYCH_UP),

    egg_moves(HAWKMON,
              MOVE_HAZE,
              MOVE_DRILL_PECK,
              MOVE_QUICK_ATTACK,
              MOVE_FAINT_ATTACK,
              MOVE_STEEL_WING,
              MOVE_PSYCH_UP,
              MOVE_FEATHER_DANCE,
              MOVE_REFRESH),

    egg_moves(HYOKOMON,
              MOVE_TAKE_DOWN,
              MOVE_BODY_SLAM,
              MOVE_SAFEGUARD,
              MOVE_SCREECH,
              MOVE_REFLECT,
              MOVE_ODOR_SLEUTH,
              MOVE_CHARGE),

    egg_moves(JAZAMON,
              MOVE_LIGHT_SCREEN,
              MOVE_PRESENT,
              MOVE_AMNESIA,
              MOVE_FUTURE_SIGHT,
              MOVE_BELLY_DRUM,
              MOVE_PERISH_SONG,
              MOVE_SUPERSONIC,
              MOVE_SUBSTITUTE),

    egg_moves(JUNKMON,
              MOVE_SELF_DESTRUCT),

    egg_moves(KERAMON,
              MOVE_CONFUSION,
              MOVE_ENCORE,
              MOVE_DOUBLE_EDGE,
              MOVE_REFLECT,
              MOVE_AMNESIA,
              MOVE_HELPING_HAND,
              MOVE_PSYCH_UP),

    egg_moves(KOKABUIMON,
              MOVE_COUNTER,
              MOVE_SCREECH,
              MOVE_PURSUIT,
              MOVE_AGILITY,
              MOVE_SPITE,
              MOVE_SLAM,
              MOVE_DOUBLE_SLAP,
              MOVE_BEAT_UP),

    egg_moves(KOKUWAMON,
              MOVE_GRASS_WHISTLE,
              MOVE_ENCORE,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER,
              MOVE_CURSE,
              MOVE_HELPING_HAND),

    egg_moves(KOTEMON,
              MOVE_WHIRLWIND,
              MOVE_REVERSAL,
              MOVE_LEECH_LIFE,
              MOVE_SIGNAL_BEAM,
              MOVE_SILVER_WIND),

    egg_moves(KUDAMON,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_SAFEGUARD,
              MOVE_CURSE,
              MOVE_MUD_SPORT,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP),

    egg_moves(LALAMON,
              MOVE_WHIRLWIND,
              MOVE_DRILL_PECK,
              MOVE_MIRROR_MOVE,
              MOVE_WING_ATTACK,
              MOVE_SKY_ATTACK,
              MOVE_CONFUSE_RAY,
              MOVE_FEATHER_DANCE,
              MOVE_PERISH_SONG),

    egg_moves(LOOGAMON,
              MOVE_SCREECH,
              MOVE_DESTINY_BOND,
              MOVE_PSYCH_UP,
              MOVE_IMPRISON),

    egg_moves(LUCEMON,
              MOVE_TAKE_DOWN,
              MOVE_AMNESIA,
              MOVE_FORESIGHT,
              MOVE_FUTURE_SIGHT,
              MOVE_BEAT_UP,
              MOVE_PSYCH_UP,
              MOVE_WISH,
              MOVE_MAGIC_COAT),

    egg_moves(LUDOMON,
              MOVE_REFLECT,
              MOVE_PIN_MISSILE,
              MOVE_FLAIL,
              MOVE_SWIFT,
              MOVE_COUNTER,
              MOVE_SAND_TOMB),

    egg_moves(LUXMON,
              MOVE_BIDE,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_BITE,
              MOVE_HEADBUTT,
              MOVE_ASTONISH,
              MOVE_CURSE),

    egg_moves(METABEE,
              MOVE_METAL_CLAW,
              MOVE_WING_ATTACK,
              MOVE_RAZOR_WIND,
              MOVE_COUNTER,
              MOVE_SAND_TOMB),

    egg_moves(MODBETAMON,
              MOVE_METRONOME,
              MOVE_FAINT_ATTACK,
              MOVE_REFLECT,
              MOVE_PRESENT,
              MOVE_CRUNCH,
              MOVE_HEAL_BELL,
              MOVE_SNORE,
              MOVE_SMELLING_SALT),

    egg_moves(MONMON,
              MOVE_FLAIL,
              MOVE_HAZE,
              MOVE_BUBBLE_BEAM,
              MOVE_SUPERSONIC,
              MOVE_ASTONISH),

    egg_moves(MORPHOMON,
              MOVE_SWEET_SCENT),

    egg_moves(MUCHOMON,
              MOVE_HARDEN,
              MOVE_BIDE,
              MOVE_FLAIL,
              MOVE_FALSE_SWIPE),

    egg_moves(MUSHROOMON,
              MOVE_COUNTER,
              MOVE_SPITE,
              MOVE_FORESIGHT,
              MOVE_REFLECT,
              MOVE_BITE,
              MOVE_CRUSH_CLAW,
              MOVE_FAKE_OUT),

    egg_moves(NEEMON,
              MOVE_CRUNCH,
              MOVE_TAKE_DOWN,
              MOVE_SEISMIC_TOSS,
              MOVE_COUNTER,
              MOVE_METAL_CLAW,
              MOVE_FAKE_TEARS,
              MOVE_YAWN,
              MOVE_SLEEP_TALK),

    egg_moves(OTAMAMON_RED,
              MOVE_ACID_ARMOR,
              MOVE_HEAT_WAVE),

    egg_moves(PALMON,
              MOVE_TAKE_DOWN,
              MOVE_BITE,
              MOVE_BODY_SLAM,
              MOVE_ROCK_SLIDE,
              MOVE_ANCIENT_POWER,
              MOVE_MUD_SHOT,
              MOVE_ICICLE_SPEAR,
              MOVE_DOUBLE_EDGE),

    egg_moves(PATAMON,
              MOVE_ROCK_SLIDE,
              MOVE_SCREECH,
              MOVE_MIST,
              MOVE_AMNESIA,
              MOVE_BARRIER,
              MOVE_INGRAIN,
              MOVE_CONFUSE_RAY,
              MOVE_ICICLE_SPEAR),

    egg_moves(PAWNMON,
              MOVE_AURORA_BEAM,
              MOVE_OCTAZOOKA,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_SCREECH,
              MOVE_THUNDER_WAVE,
              MOVE_ROCK_BLAST),

    egg_moves(PENGUINMON,
              MOVE_AURORA_BEAM,
              MOVE_QUICK_ATTACK,
              MOVE_FUTURE_SIGHT,
              MOVE_SPLASH,
              MOVE_RAPID_SPIN,
              MOVE_ICE_BALL),

    egg_moves(PETITMAMON,
              MOVE_TWISTER,
              MOVE_HYDRO_PUMP,
              MOVE_HAZE,
              MOVE_SLAM,
              MOVE_MUD_SPORT,
              MOVE_ROCK_SLIDE),

    egg_moves(PHASCOMON,
              MOVE_DRILL_PECK,
              MOVE_PURSUIT,
              MOVE_WHIRLWIND,
              MOVE_SKY_ATTACK,
              MOVE_CURSE),

    egg_moves(PILLOMON,
              MOVE_FIRE_SPIN,
              MOVE_RAGE,
              MOVE_PURSUIT,
              MOVE_COUNTER,
              MOVE_SPITE,
              MOVE_REVERSAL,
              MOVE_BEAT_UP,
              MOVE_WILL_O_WISP),

    egg_moves(PULSEMON,
              MOVE_FOCUS_ENERGY,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_SNORE,
              MOVE_COUNTER,
              MOVE_FISSURE),

    egg_moves(ROKUSHO,
              MOVE_SPITE,
              MOVE_DISABLE,
              MOVE_BITE,
              MOVE_SWAGGER,
              MOVE_PSYCH_UP,
              MOVE_EXTRASENSORY),

    egg_moves(TYROGUE,
              MOVE_RAPID_SPIN,
              MOVE_HI_JUMP_KICK,
              MOVE_MACH_PUNCH,
              MOVE_MIND_READER,
              MOVE_HELPING_HAND),

    egg_moves(SMOOCHUM,
              MOVE_MEDITATE,
              MOVE_PSYCH_UP,
              MOVE_FAKE_OUT,
              MOVE_WISH,
              MOVE_ICE_PUNCH),

    egg_moves(ELEKID,
              MOVE_KARATE_CHOP,
              MOVE_BARRIER,
              MOVE_ROLLING_KICK,
              MOVE_MEDITATE,
              MOVE_CROSS_CHOP,
              MOVE_FIRE_PUNCH,
              MOVE_ICE_PUNCH),

    egg_moves(MAGBY,
              MOVE_KARATE_CHOP,
              MOVE_MEGA_PUNCH,
              MOVE_BARRIER,
              MOVE_SCREECH,
              MOVE_CROSS_CHOP,
              MOVE_THUNDER_PUNCH),

    egg_moves(MILTANK,
              MOVE_PRESENT,
              MOVE_REVERSAL,
              MOVE_SEISMIC_TOSS,
              MOVE_ENDURE,
              MOVE_PSYCH_UP,
              MOVE_CURSE,
              MOVE_HELPING_HAND,
              MOVE_SLEEP_TALK),

    egg_moves(LARVITAR,
              MOVE_PURSUIT,
              MOVE_STOMP,
              MOVE_OUTRAGE,
              MOVE_FOCUS_ENERGY,
              MOVE_ANCIENT_POWER,
              MOVE_DRAGON_DANCE,
              MOVE_CURSE),

    egg_moves(TREECKO,
              MOVE_CRUNCH,
              MOVE_MUD_SPORT,
              MOVE_ENDEAVOR,
              MOVE_LEECH_SEED,
              MOVE_DRAGON_BREATH,
              MOVE_CRUSH_CLAW),

    egg_moves(TORCHIC,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_ENDURE,
              MOVE_SWAGGER,
              MOVE_ROCK_SLIDE,
              MOVE_SMELLING_SALT),

    egg_moves(MUDKIP,
              MOVE_REFRESH,
              MOVE_UPROAR,
              MOVE_CURSE,
              MOVE_STOMP,
              MOVE_ICE_BALL,
              MOVE_MIRROR_COAT),

    egg_moves(POOCHYENA,
              MOVE_ASTONISH,
              MOVE_POISON_FANG,
              MOVE_COVET,
              MOVE_LEER,
              MOVE_YAWN),

    egg_moves(ZIGZAGOON,
              MOVE_CHARM,
              MOVE_PURSUIT,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              MOVE_TRICK),

    egg_moves(LOTAD,
              MOVE_SYNTHESIS,
              MOVE_RAZOR_LEAF,
              MOVE_SWEET_SCENT,
              MOVE_LEECH_SEED,
              MOVE_FLAIL,
              MOVE_WATER_GUN),

    egg_moves(SEEDOT,
              MOVE_LEECH_SEED,
              MOVE_AMNESIA,
              MOVE_QUICK_ATTACK,
              MOVE_RAZOR_WIND,
              MOVE_TAKE_DOWN,
              MOVE_FALSE_SWIPE),

    egg_moves(NINCADA,
              MOVE_ENDURE,
              MOVE_FAINT_ATTACK,
              MOVE_GUST,
              MOVE_SILVER_WIND),

    egg_moves(TAILLOW,
              MOVE_PURSUIT,
              MOVE_SUPERSONIC,
              MOVE_REFRESH,
              MOVE_MIRROR_MOVE,
              MOVE_RAGE,
              MOVE_SKY_ATTACK),

    egg_moves(SHROOMISH,
              MOVE_FAKE_TEARS,
              MOVE_SWAGGER,
              MOVE_CHARM,
              MOVE_FALSE_SWIPE,
              MOVE_HELPING_HAND),

    egg_moves(SPINDA,
              MOVE_ENCORE,
              MOVE_ROCK_SLIDE,
              MOVE_ASSIST,
              MOVE_DISABLE,
              MOVE_BATON_PASS,
              MOVE_WISH,
              MOVE_TRICK,
              MOVE_SMELLING_SALT),

    egg_moves(WINGULL,
              MOVE_MIST,
              MOVE_TWISTER,
              MOVE_AGILITY,
              MOVE_GUST,
              MOVE_WATER_SPORT),

    egg_moves(SURSKIT,
              MOVE_FORESIGHT,
              MOVE_MUD_SHOT,
              MOVE_PSYBEAM,
              MOVE_HYDRO_PUMP,
              MOVE_MIND_READER),

    egg_moves(WAILMER,
              MOVE_DOUBLE_EDGE,
              MOVE_THRASH,
              MOVE_SWAGGER,
              MOVE_SNORE,
              MOVE_SLEEP_TALK,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_TICKLE),

    egg_moves(SKITTY,
              MOVE_HELPING_HAND,
              MOVE_PSYCH_UP,
              MOVE_UPROAR,
              MOVE_FAKE_TEARS,
              MOVE_WISH,
              MOVE_BATON_PASS,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE),

    egg_moves(KECLEON,
              MOVE_DISABLE,
              MOVE_MAGIC_COAT,
              MOVE_TRICK),

    egg_moves(NOSEPASS,
              MOVE_MAGNITUDE,
              MOVE_ROLLOUT,
              MOVE_EXPLOSION),

    egg_moves(TORKOAL,
              MOVE_ERUPTION,
              MOVE_ENDURE,
              MOVE_SLEEP_TALK,
              MOVE_YAWN),

    egg_moves(SABLEYE,
              MOVE_PSYCH_UP,
              MOVE_RECOVER,
              MOVE_MOONLIGHT),

    egg_moves(BARBOACH,
              MOVE_THRASH,
              MOVE_WHIRLPOOL,
              MOVE_SPARK),

    egg_moves(LUVDISC,
              MOVE_SPLASH,
              MOVE_SUPERSONIC,
              MOVE_WATER_SPORT,
              MOVE_MUD_SPORT),

    egg_moves(CORPHISH,
              MOVE_MUD_SPORT,
              MOVE_ENDEAVOR,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER),

    egg_moves(FEEBAS,
              MOVE_MIRROR_COAT,
              MOVE_DRAGON_BREATH,
              MOVE_MUD_SPORT,
              MOVE_HYPNOSIS,
              MOVE_LIGHT_SCREEN,
              MOVE_CONFUSE_RAY),

    egg_moves(CARVANHA,
              MOVE_HYDRO_PUMP,
              MOVE_DOUBLE_EDGE,
              MOVE_THRASH),

    egg_moves(TRAPINCH,
              MOVE_FOCUS_ENERGY,
              MOVE_QUICK_ATTACK,
              MOVE_GUST),

    egg_moves(MAKUHITA,
              MOVE_FAINT_ATTACK,
              MOVE_DETECT,
              MOVE_FORESIGHT,
              MOVE_HELPING_HAND,
              MOVE_CROSS_CHOP,
              MOVE_REVENGE,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER),

    egg_moves(ELECTRIKE,
              MOVE_CRUNCH,
              MOVE_HEADBUTT,
              MOVE_UPROAR,
              MOVE_CURSE,
              MOVE_SWIFT),

    egg_moves(NUMEL,
              MOVE_HOWL,
              MOVE_SCARY_FACE,
              MOVE_BODY_SLAM,
              MOVE_ROLLOUT,
              MOVE_DEFENSE_CURL,
              MOVE_STOMP),

    egg_moves(SPHEAL,
              MOVE_WATER_SPORT,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP,
              MOVE_YAWN,
              MOVE_ROCK_SLIDE,
              MOVE_CURSE,
              MOVE_FISSURE),

    egg_moves(CACNEA,
              MOVE_GRASS_WHISTLE,
              MOVE_ACID,
              MOVE_TEETER_DANCE,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER),

    egg_moves(SNORUNT,
              MOVE_BLOCK,
              MOVE_SPIKES),

    egg_moves(AZURILL,
              MOVE_ENCORE,
              MOVE_SING,
              MOVE_REFRESH,
              MOVE_SLAM,
              MOVE_TICKLE),

    egg_moves(SPOINK,
              MOVE_FUTURE_SIGHT,
              MOVE_EXTRASENSORY,
              MOVE_SUBSTITUTE,
              MOVE_TRICK),

    egg_moves(PLUSLE,
              MOVE_SUBSTITUTE,
              MOVE_WISH),

    egg_moves(MINUN,
              MOVE_SUBSTITUTE,
              MOVE_WISH),

    egg_moves(MAWILE,
              MOVE_SWORDS_DANCE,
              MOVE_FALSE_SWIPE,
              MOVE_POISON_FANG,
              MOVE_PSYCH_UP,
              MOVE_ANCIENT_POWER,
              MOVE_TICKLE),

    egg_moves(MEDITITE,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH,
              MOVE_FORESIGHT,
              MOVE_FAKE_OUT,
              MOVE_BATON_PASS,
              MOVE_DYNAMIC_PUNCH),

    egg_moves(SWABLU,
              MOVE_AGILITY,
              MOVE_HAZE,
              MOVE_PURSUIT,
              MOVE_RAGE),

    egg_moves(DUSKULL,
              MOVE_IMPRISON,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_GRUDGE,
              MOVE_MEMENTO,
              MOVE_FAINT_ATTACK),

    egg_moves(ROSELIA,
              MOVE_SPIKES,
              MOVE_SYNTHESIS,
              MOVE_PIN_MISSILE,
              MOVE_COTTON_SPORE),

    egg_moves(SLAKOTH,
              MOVE_PURSUIT,
              MOVE_SLASH,
              MOVE_BODY_SLAM,
              MOVE_SNORE,
              MOVE_CRUSH_CLAW,
              MOVE_CURSE,
              MOVE_SLEEP_TALK),

    egg_moves(GULPIN,
              MOVE_DREAM_EATER,
              MOVE_ACID_ARMOR,
              MOVE_SMOG,
              MOVE_PAIN_SPLIT),

    egg_moves(TROPIUS,
              MOVE_HEADBUTT,
              MOVE_SLAM,
              MOVE_RAZOR_WIND,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER),

    egg_moves(WHISMUR,
              MOVE_TAKE_DOWN,
              MOVE_SNORE,
              MOVE_SWAGGER,
              MOVE_EXTRASENSORY,
              MOVE_SMELLING_SALT),

    egg_moves(CLAMPERL,
              MOVE_REFRESH,
              MOVE_MUD_SPORT,
              MOVE_BODY_SLAM,
              MOVE_SUPERSONIC,
              MOVE_BARRIER,
              MOVE_CONFUSE_RAY),

    egg_moves(ABSOL,
              MOVE_BATON_PASS,
              MOVE_FAINT_ATTACK,
              MOVE_DOUBLE_EDGE,
              MOVE_MAGIC_COAT,
              MOVE_CURSE,
              MOVE_SUBSTITUTE),

    egg_moves(SHUPPET,
              MOVE_DISABLE,
              MOVE_DESTINY_BOND,
              MOVE_FORESIGHT,
              MOVE_ASTONISH,
              MOVE_IMPRISON),

    egg_moves(SEVIPER,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP,
              MOVE_BODY_SLAM),

    egg_moves(ZANGOOSE,
              MOVE_FLAIL,
              MOVE_DOUBLE_KICK,
              MOVE_RAZOR_WIND,
              MOVE_COUNTER,
              MOVE_ROAR,
              MOVE_CURSE),

    egg_moves(RELICANTH,
              MOVE_MAGNITUDE,
              MOVE_SKULL_BASH,
              MOVE_WATER_SPORT,
              MOVE_AMNESIA,
              MOVE_SLEEP_TALK,
              MOVE_ROCK_SLIDE),

    egg_moves(ARON,
              MOVE_ENDEAVOR,
              MOVE_BODY_SLAM,
              MOVE_STOMP,
              MOVE_SMELLING_SALT),

    egg_moves(CASTFORM,
              MOVE_FUTURE_SIGHT,
              MOVE_PSYCH_UP),

    egg_moves(VOLBEAT,
              MOVE_BATON_PASS,
              MOVE_SILVER_WIND,
              MOVE_TRICK),

    egg_moves(ILLUMISE,
              MOVE_BATON_PASS,
              MOVE_SILVER_WIND,
              MOVE_GROWTH),

    egg_moves(LILEEP,
              MOVE_BARRIER,
              MOVE_RECOVER,
              MOVE_MIRROR_COAT,
              MOVE_ROCK_SLIDE),

    egg_moves(ANORITH,
              MOVE_RAPID_SPIN,
              MOVE_KNOCK_OFF,
              MOVE_SWORDS_DANCE,
              MOVE_ROCK_SLIDE),

    egg_moves(RALTS,
              MOVE_DISABLE,
              MOVE_WILL_O_WISP,
              MOVE_MEAN_LOOK,
              MOVE_MEMENTO,
              MOVE_DESTINY_BOND),

    egg_moves(BAGON,
              MOVE_HYDRO_PUMP,
              MOVE_THRASH,
              MOVE_DRAGON_RAGE,
              MOVE_TWISTER,
              MOVE_DRAGON_DANCE),

    egg_moves(CHIMECHO,
              MOVE_DISABLE,
              MOVE_CURSE,
              MOVE_HYPNOSIS,
              MOVE_DREAM_EATER),

    EGG_MOVES_TERMINATOR
};
