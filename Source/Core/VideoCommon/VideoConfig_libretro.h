struct ini_map
{
   const char *id;
   const char *name;

   /* Video */
   struct
   {
      bool value;
      bool enabled;
   } perf_queries;

   /* Video_Settings */
   struct
   {
      int value;
      bool enabled;
   } efb_scale;
   struct
   {
      bool value;
      bool enabled;
   } use_xfb;
   struct
   {
      bool value;
      bool enabled;
   } use_real_xfb;
   struct
   {
      unsigned value;
      bool enabled;
   } safe_texture_cache_color_samples;

   /* Video_Hacks */
   struct
   {
      bool value;
      bool enabled;
   } efb_to_texture_enable;

   /* Video_Enhancements */
   struct
   {
      unsigned value;
      bool enabled;
   } max_anisotropy;

   struct
   {
      bool value;
      bool enabled;
   } force_filtering;

   /* Wii */
   struct
   {
      bool value;
      bool enabled;
   } wii_widescreen;
   
   /* Video_Stereoscopy */

   struct
   {
      unsigned value;
      bool enabled;
   } stereo_convergence;

   struct
   {
      bool value;
      bool enabled;
   } stereo_efb_mono_depth;

   struct
   {
      unsigned value;
      bool enabled;
   } stereo_depth_percentage;

   struct
   {
      bool value;
      bool enabled;
   } stereo_mode;

   struct
   {
      bool value;
      bool enabled;
   } stereo_depth;

   struct
   {
      bool value;
      bool enabled;
   } stereo_swap_eyes;
};

struct ini_map maps[] =
{
   /* TODO/FIXME - Skipping FAAE01 to FASE01 - not sure why EFBToTextureEnable is empty here */
   {  "Cxxxxx",                                 /* ID */
      "All Virtual Console Commodore 64 games", /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "D43E01",                                 /* ID */
      "ZELDA OCARINA MULTI PACK",               /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "D43J01",                                 /* ID */
      "ZELDA OCARINA MULTI PACK",               /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "D43P01",                                 /* ID */
      "ZELDA OCARINA MULTI PACK",               /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "DD2P41",                                 /* ID */
      "Just Dance 2 (Demo)",                    /* Name */
      {false, false},                           /* perf_queries */
      {-1,    true},                            /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "DLSE64",                                 /* ID */
      "Star Wars: Rogue Squadron III: Rebel Strike : Limited Edition Bonus Disc (Demo)", /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {false, true},                            /* use_real_xfb */
      {0,   false},                             /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "DLSP64",                                 /* ID */
      "Star Wars: Rogue Squadron III: Rebel Strike : Limited Edition Bonus Disc (Demo)", /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {false, true},                            /* use_real_xfb */
      {0,   false},                             /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "Exxxxx",                                 /* ID */
      "All Virtual Console Arcade and NeoGeo Virtual Console games", /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "ESWE8P",                                 /* ID */
      "Wonder Boy II",                          /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E5ZE8P",                                 /* ID */
      "Super Hang-On",                          /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6ME9B",                                 /* ID */
      "TECMO BOWL",                             /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  false},                           /* use_xfb */
      {true,  false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6NE9B",                                 /* ID */
      "Solomon's Key",                          /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  false},                           /* use_xfb */
      {true,  false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6QE9B",                                 /* ID */
      "RYGAR",                                  /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  false},                           /* use_xfb */
      {true,  false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6VE8P",                                 /* ID */
      "Zaxxon",                                 /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6WE8P",                                 /* ID */
      "Golden Axe",                             /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6XE8P",                                 /* ID */
      "Altered Beast",                          /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E7ZEAF",                                 /* ID */
      "The Tower of Druaga",                    /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E52E08",                                 /* ID */
      "1942",                                   /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E53E08",                                 /* ID */
      "BLACK TIGER",                            /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E54E08",                                 /* ID */
      "GHOSTS'N GOBLINS",                       /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E55E08",                                 /* ID */
      "WoB:COMMANDO",                           /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E56E08",                                 /* ID */
      "EXED EXES",                              /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E57E08",                                 /* ID */
      "SONSON",                                 /* Name */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E62E8P",                                 /* ID */
      "Space Harrier",                          /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E63E8P",                                 /* ID */
      "Shinobi",                                /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E73EAF",                                 /* ID */
      "Mappy",                                  /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  false},                           /* use_xfb */
      {true,  false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E79EAF",                                 /* ID */
      "Gaplus",                                 /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  false},                           /* use_xfb */
      {true,  false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "Fxxxxx",                                 /* ID */
      "All NES Virtual Console games",          /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     true},                            /* max_anisotropy */
      {false, true},                            /* force_filtering */
      {false, true},                            /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2BE5G",                                 /* ID */
      "Black & Bruised",                        /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2BP7D",                                 /* ID */
      "Black & Bruised",                        /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2ME01",                                 /* ID */
      "Metroid Prime 2: Echoes",                /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2MJ01",                                 /* ID */
      "Metroid Prime 2: Echoes",                /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2MP01",                                 /* ID */
      "Metroid Prime 2: Echoes",                /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2OE41",                                 /* ID */
      "Prince of Persia: Warrior Within",       /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2OP41",                                 /* ID */
      "Prince of Persia: Warrior Within",       /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2VE08",                                 /* ID */
      "Viewtiful Joe 2",                        /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,   false},                             /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2VP08",                                 /* ID */
      "Viewtiful Joe 2",                        /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,   false},                             /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2XE8P",                                 /* ID */
      "SONIC GEMS COLLECTION",                  /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {4096,  true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2XP8P",                                 /* ID */
      "SONIC GEMS COLLECTION",                  /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {4096,  true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3AD69",                                 /* ID */
      "The Lord of The Rings - The Third Age",  /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3AE69",                                 /* ID */
      "The Lord of The Rings - The Third Age",  /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3AF69",                                 /* ID */
      "The Lord of The Rings - The Third Age",  /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3AP69",                                 /* ID */
      "The Lord of The Rings - The Third Age",  /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3FE69",                                 /* ID */
      "TimeSplitters Future Perfect",           /* Name */
      {true,  true},                            /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3FP69",                                 /* ID */
      "TimeSplitters Future Perfect",           /* Name */
      {true,  true},                            /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3FF69",                                 /* ID */
      "TimeSplitters Future Perfect",           /* Name */
      {true,  true},                            /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3LE8P",                                 /* ID */
      "Super Monkey Ball Adventure",            /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {7,     true},                            /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3QEA4",                                 /* ID */
      "TMNT3",                                  /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },

   /* TODO/FIXME - stopped at G3Q.ini - to be resumed */

   {  "D43U01",                                 /* ID */
      "ZELDA OCARINA MULTI PACK",               /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, true},                            /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GRSEAF",                                 /* ID */
      "SOULCALIBUR2",                           /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true,  true},                            /* use_xfb */
      {false, true},                            /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {
      "GRSPAF",                                 /* ID */
      "SOULCALIBUR2",                           /* Name */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {true , true},                            /* use_xfb */
      {false, true},                            /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_to_texture_enable */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* wii_widescreen */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   }
};

static bool VideoConfigLoadGameIniLibretro(IniFile *iniFile, const char *id, u16 revision)
{
   for (unsigned i = 0; i < (sizeof(maps) / sizeof(maps[0])); i++)
   {
      if (!strcmp(id, maps[i].id))
      {
         IniFile::Section* settings = NULL;

         iniFile->Load(File::GetUserPath(F_DOLPHINCONFIG_IDX));

         printf("ID found within database: %s (name: %s)\n", id, maps[i].name);

         settings = iniFile->GetOrCreateSection("Video");

         if (maps[i].perf_queries.enabled)
            settings->Set("PerfQueriesEnable", maps[i].perf_queries.value);

         settings = iniFile->GetOrCreateSection("Video_Settings");

         if (maps[i].efb_scale.enabled)
            settings->Set("EFBScale", maps[i].efb_scale.value);
         if (maps[i].use_xfb.enabled)
            settings->Set("UseXFB", maps[i].use_xfb.value);
         if (maps[i].use_real_xfb.enabled)
            settings->Set("UseRealXFB", maps[i].use_real_xfb.value);
         if (maps[i].safe_texture_cache_color_samples.enabled)
            settings->Set("SafeTextureCacheColorSamples", maps[i].safe_texture_cache_color_samples.value);

         settings = iniFile->GetOrCreateSection("Video_Hacks");

         if (maps[i].efb_to_texture_enable.enabled)
            settings->Set("EFBToTextureEnable", maps[i].efb_to_texture_enable.value);

         settings = iniFile->GetOrCreateSection("Video_Enhancements");

         if (maps[i].max_anisotropy.enabled)
            settings->Set("MaxAnisotropy", maps[i].max_anisotropy.value);
         if (maps[i].force_filtering.enabled)
            settings->Set("ForceFiltering", maps[i].force_filtering.value);

         settings = iniFile->GetOrCreateSection("Wii");

         if (maps[i].wii_widescreen.enabled)
            settings->Set("Widescreen", maps[i].wii_widescreen.value);

         settings = iniFile->GetOrCreateSection("Video_Stereoscopy");

         if (maps[i].stereo_convergence.enabled)
            settings->Set("StereoConvergence", maps[i].stereo_convergence.value);

         if (maps[i].stereo_efb_mono_depth.enabled)
            settings->Set("StereoEFBMonoDepth", maps[i].stereo_efb_mono_depth.value);
         
         if (maps[i].stereo_depth_percentage.enabled)
            settings->Set("StereoDepthPercentage", maps[i].stereo_depth_percentage.value);

         if (maps[i].stereo_mode.enabled)
            settings->Set("StereoMode", maps[i].stereo_mode.value);

         if (maps[i].stereo_depth.enabled)
            settings->Set("StereoDepth", maps[i].stereo_depth.value);

         if (maps[i].stereo_swap_eyes.enabled)
            settings->Set("StereoSwapEyes", maps[i].stereo_swap_eyes.value);

         return true;
      }
   }

   return false;
}
