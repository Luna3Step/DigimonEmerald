// Scene 1 (RAY_ANIM_DUO_FIGHT / RAY_ANIM_DUO_FIGHT_PRE)
const u32 gRaySceneDuoFight_Gekomon_Gfx[]           = INCBIN_U32("graphics/geogreymon_scene/scene_1/gekomon.4bpp.lz");
const u32 gRaySceneDuoFight_GekomonShoulder_Gfx[]   = INCBIN_U32("graphics/geogreymon_scene/scene_1/gekomon_shoulder.4bpp.lz");
const u32 gRaySceneDuoFight_GekomonClaw_Gfx[]       = INCBIN_U32("graphics/geogreymon_scene/scene_1/gekomon_claw.4bpp.lz");
const u32 gRaySceneDuoFight_Gatomon_x_Gfx[]            = INCBIN_U32("graphics/geogreymon_scene/scene_1/gatomon_x.4bpp.lz");
const u32 gRaySceneDuoFight_Gatomon_xPectoralFin_Gfx[] = INCBIN_U32("graphics/geogreymon_scene/scene_1/gatomon_x_pectoral_fin.4bpp.lz");
const u32 gRaySceneDuoFight_Gatomon_xDorsalFin_Gfx[]   = INCBIN_U32("graphics/geogreymon_scene/scene_1/gatomon_x_dorsal_fin.4bpp.lz");
const u32 gRaySceneDuoFight_Gekomon_Pal[]           = INCBIN_U32("graphics/geogreymon_scene/scene_1/gekomon.gbapal.lz");
const u32 gRaySceneDuoFight_Gatomon_x_Pal[]            = INCBIN_U32("graphics/geogreymon_scene/scene_1/gatomon_x.gbapal.lz");
const u32 gRaySceneDuoFight_Clouds_Gfx[]            = INCBIN_U32("graphics/geogreymon_scene/scene_1/clouds.4bpp.lz");
const u32 gRaySceneDuoFight_Clouds_Pal[]            = INCBIN_U32("graphics/geogreymon_scene/scene_1/clouds.gbapal.lz"); // pal 1 clouds, pal 2 rain
const u32 gRaySceneDuoFight_Clouds1_Tilemap[]       = INCBIN_U32("graphics/geogreymon_scene/scene_1/clouds1.bin.lz");
const u32 gRaySceneDuoFight_Clouds2_Tilemap[]       = INCBIN_U32("graphics/geogreymon_scene/scene_1/clouds2.bin.lz");
const u32 gRaySceneDuoFight_Clouds3_Tilemap[]       = INCBIN_U32("graphics/geogreymon_scene/scene_1/clouds3.bin.lz");

// Scene 2 (RAY_ANIM_TAKES_FLIGHT)
const u32 gRaySceneTakesFlight_Smoke_Gfx[]        = INCBIN_U32("graphics/geogreymon_scene/scene_2/smoke.4bpp.lz");
const u32 gRaySceneTakesFlight_Smoke_Pal[]        = INCBIN_U32("graphics/geogreymon_scene/scene_2/smoke.gbapal.lz");
const u32 gRaySceneTakesFlight_Geogreymon_Gfx[]     = INCBIN_U32("graphics/geogreymon_scene/scene_2/geogreymon.8bpp.lz");
const u32 gRaySceneTakesFlight_Geogreymon_Pal[]     = INCBIN_U32("graphics/geogreymon_scene/scene_2/geogreymon.gbapal.lz");
const u32 gRaySceneTakesFlight_Geogreymon_Tilemap[] = INCBIN_U32("graphics/geogreymon_scene/scene_2/geogreymon.bin.lz");
const u32 gRaySceneTakesFlight_Bg_Gfx[]           = INCBIN_U32("graphics/geogreymon_scene/scene_2/bg.4bpp.lz"); // uses pal 2 of gRaySceneTakesFlight_Geogreymon_Pal
const u32 gRaySceneTakesFlight_Bg_Tilemap[]       = INCBIN_U32("graphics/geogreymon_scene/scene_2/bg.bin.lz");

// Scene 3 (RAY_ANIM_DESCENDS)
const u32 gRaySceneDescends_Geogreymon_Gfx[]     = INCBIN_U32("graphics/geogreymon_scene/scene_3/geogreymon.4bpp.lz");
// for some reason there are an extra 0xC bytes at the end of the original geogreymon_tail.4bpp, so in order to produce the correct lz,
// we have to cat the bytes at the end with a make rule. not sure why those bytes are there, it may have been a bug in Game Freak's software.
const u32 gRaySceneDescends_GeogreymonTail_Gfx[] = INCBIN_U32("graphics/geogreymon_scene/scene_3/geogreymon_tail_fix.4bpp.lz");
const u32 gRaySceneDescends_Bg_Gfx[]           = INCBIN_U32("graphics/geogreymon_scene/scene_3/bg.4bpp.lz");
const u32 gRaySceneDescends_Light_Gfx[]        = INCBIN_U32("graphics/geogreymon_scene/scene_3/light.4bpp.lz"); // uses pal 2 of gRaySceneDescends_Bg_Pal
const u32 gRaySceneDescends_Bg_Pal[]           = INCBIN_U32("graphics/geogreymon_scene/scene_3/bg.gbapal.lz");
const u32 gRaySceneDescends_Bg_Tilemap[]       = INCBIN_U32("graphics/geogreymon_scene/scene_3/bg.bin.lz");
const u32 gRaySceneDescends_Light_Tilemap[]    = INCBIN_U32("graphics/geogreymon_scene/scene_3/light.bin.lz");

// Scene 4 (RAY_ANIM_CHARGES)
const u32 gRaySceneCharges_Bg_Gfx[]           = INCBIN_U32("graphics/geogreymon_scene/scene_4/bg.4bpp.lz");
const u32 gRaySceneCharges_Bg_Tilemap[]       = INCBIN_U32("graphics/geogreymon_scene/scene_4/bg.bin.lz");
const u32 gRaySceneCharges_Streaks_Gfx[]      = INCBIN_U32("graphics/geogreymon_scene/scene_4/streaks.4bpp.lz");
const u32 gRaySceneCharges_Streaks_Tilemap[]  = INCBIN_U32("graphics/geogreymon_scene/scene_4/streaks.bin.lz");
const u32 gRaySceneCharges_Geogreymon_Gfx[]     = INCBIN_U32("graphics/geogreymon_scene/scene_4/geogreymon.4bpp.lz");
const u32 gRaySceneCharges_Geogreymon_Tilemap[] = INCBIN_U32("graphics/geogreymon_scene/scene_4/geogreymon.bin.lz");
const u32 gRaySceneCharges_Orbs_Tilemap[]     = INCBIN_U32("graphics/geogreymon_scene/scene_4/orbs.bin.lz");
const u32 gRaySceneCharges_Bg_Pal[]           = INCBIN_U32("graphics/geogreymon_scene/scene_4/bg.gbapal.lz");

// Scene 5 (RAY_ANIM_CHASES_AWAY)
const u32 gRaySceneChasesAway_Gekomon_Gfx[]      = INCBIN_U32("graphics/geogreymon_scene/scene_5/gekomon.4bpp.lz");
const u32 gRaySceneChasesAway_GekomonTail_Gfx[]  = INCBIN_U32("graphics/geogreymon_scene/scene_5/gekomon_tail.4bpp.lz");
const u32 gRaySceneChasesAway_Gatomon_x_Gfx[]       = INCBIN_U32("graphics/geogreymon_scene/scene_5/gatomon_x.4bpp.lz");
const u32 gRaySceneChasesAway_Geogreymon_Gfx[]     = INCBIN_U32("graphics/geogreymon_scene/scene_5/geogreymon.4bpp.lz");
const u32 gRaySceneChasesAway_GeogreymonTail_Gfx[] = INCBIN_U32("graphics/geogreymon_scene/scene_5/geogreymon_tail.4bpp.lz");
const u32 gRaySceneChasesAway_Gatomon_xSplash_Gfx[] = INCBIN_U32("graphics/geogreymon_scene/scene_5/gatomon_x_splash.4bpp.lz");
const u32 gRaySceneChasesAway_Gekomon_Pal[]      = INCBIN_U32("graphics/geogreymon_scene/scene_5/gekomon.gbapal.lz");
const u32 gRaySceneChasesAway_Gatomon_x_Pal[]       = INCBIN_U32("graphics/geogreymon_scene/scene_5/gatomon_x.gbapal.lz");
const u32 gRaySceneChasesAway_Geogreymon_Pal[]     = INCBIN_U32("graphics/geogreymon_scene/scene_5/geogreymon.gbapal.lz");
const u32 gRaySceneChasesAway_Gatomon_xSplash_Pal[] = INCBIN_U32("graphics/geogreymon_scene/scene_5/gatomon_x_splash.gbapal.lz");
const u32 gRaySceneChasesAway_Light_Gfx[]        = INCBIN_U32("graphics/geogreymon_scene/scene_5/light.4bpp.lz");
const u32 gRaySceneChasesAway_Ring_Gfx[]         = INCBIN_U32("graphics/geogreymon_scene/scene_5/ring.8bpp.lz");
const u32 gRaySceneChasesAway_Light_Tilemap[]    = INCBIN_U32("graphics/geogreymon_scene/scene_5/light.bin.lz");
const u32 gRaySceneChasesAway_Bg_Tilemap[]       = INCBIN_U32("graphics/geogreymon_scene/scene_5/bg.bin.lz");
const u32 gRaySceneChasesAway_Ring_Tilemap[]     = INCBIN_U32("graphics/geogreymon_scene/scene_5/ring.bin.lz");
const u32 gRaySceneChasesAway_Bg_Pal[]           = INCBIN_U32("graphics/geogreymon_scene/scene_5/bg.gbapal.lz");
