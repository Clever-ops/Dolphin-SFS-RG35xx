struct ini_map
{
   const char *id;
   const char *name;

   /* Video */
   struct
   {
      int value;
      bool enabled;
   } projection_hack;
   struct
   {
      const char *value;
      bool enabled;
   } ph_sznear;
   struct
   {
      const char *value;
      bool enabled;
   } ph_szfar;
   struct
   {
      const char *value;
      bool enabled;
   } ph_znear;
   struct
   {
      const char *value;
      bool enabled;
   } ph_zfar;
   struct
   {
      bool value;
      bool enabled;
   } perf_queries;

   /* Video_Settings */
   struct
   {
      bool value;
      bool enabled;
   } vsync;
   struct
   {
      bool value;
      bool enabled;
   } widescreen_hack;
   struct
   {
      int value;
      bool enabled;
   } aspect_ratio;
   struct
   {
      bool value;
      bool enabled;
   } crop;
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
   struct
   {
      bool value;
      bool enabled;
   } hirestextures;
   struct
   {
      bool value;
      bool enabled;
   } convert_hirestextures;
   struct
   {
      bool value;
      bool enabled;
   } cache_hirestextures;
   struct
   {
      bool value;
      bool enabled;
   } enable_pixel_lighting;
   struct
   {
      bool value;
      bool enabled;
   } fast_depth_calc;
   struct
   {
      int value;
      bool enabled;
   } msaa;
   struct
   {
      bool value;
      bool enabled;
   } ssaa;
   struct
   {
      bool value;
      bool enabled;
   } force_truecolor;
   struct
   {
      int value;
      bool enabled;
   } efb_scale;
   struct
   {
      bool value;
      bool enabled;
   } disable_fog;
   struct
   {
      bool value;
      bool enabled;
   } backend_multithreading;
   struct
   {
      bool value;
      bool enabled;
   } command_buffer_execute_interval;

   /* Video_Hacks */
   struct
   {
      bool value;
      bool enabled;
   } efb_access_enable;
   struct
   {
      bool value;
      bool enabled;
   } bbox_enable;
   struct
   {
      bool value;
      bool enabled;
   } force_progressive;
   struct
   {
      bool value;
      bool enabled;
   } efb_to_texture_enable;
   struct
   {
      bool value;
      bool enabled;
   } efb_scaled_copy;
   struct
   {
      bool value;
      bool enabled;
   } efb_emulate_format_changes;
   struct
   {
      bool value;
      bool enabled;
   } vertex_rounding;

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
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "D43E01",                                 /* ID */
      "ZELDA OCARINA MULTI PACK",               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "D43J01",                                 /* ID */
      "ZELDA OCARINA MULTI PACK",               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */


      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "D43P01",                                 /* ID */
      "ZELDA OCARINA MULTI PACK",               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "DD2P41",                                 /* ID */
      "Just Dance 2 (Demo)",                    /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {-1,    true},                            /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "DLSE64",                                 /* ID */
      "Star Wars: Rogue Squadron III: Rebel Strike : Limited Edition Bonus Disc (Demo)", /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {false, true},                            /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "DLSP64",                                 /* ID */
      "Star Wars: Rogue Squadron III: Rebel Strike : Limited Edition Bonus Disc (Demo)", /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {false, true},                            /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "Exxxxx",                                 /* ID */
      "All Virtual Console Arcade and NeoGeo Virtual Console games", /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "ESWE8P",                                 /* ID */
      "Wonder Boy II",                          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E5ZE8P",                                 /* ID */
      "Super Hang-On",                          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6ME9B",                                 /* ID */
      "TECMO BOWL",                             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  false},                           /* use_xfb */
      {true,  false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6NE9B",                                 /* ID */
      "Solomon's Key",                          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  false},                           /* use_xfb */
      {true,  false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6QE9B",                                 /* ID */
      "RYGAR",                                  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  false},                           /* use_xfb */
      {true,  false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6VE8P",                                 /* ID */
      "Zaxxon",                                 /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6WE8P",                                 /* ID */
      "Golden Axe",                             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E6XE8P",                                 /* ID */
      "Altered Beast",                          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E7ZEAF",                                 /* ID */
      "The Tower of Druaga",                    /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E52E08",                                 /* ID */
      "1942",                                   /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E53E08",                                 /* ID */
      "BLACK TIGER",                            /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E54E08",                                 /* ID */
      "GHOSTS'N GOBLINS",                       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E55E08",                                 /* ID */
      "WoB:COMMANDO",                           /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E56E08",                                 /* ID */
      "EXED EXES",                              /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E57E08",                                 /* ID */
      "SONSON",                                 /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E62E8P",                                 /* ID */
      "Space Harrier",                          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E63E8P",                                 /* ID */
      "Shinobi",                                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E73EAF",                                 /* ID */
      "Mappy",                                  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  false},                           /* use_xfb */
      {true,  false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "E79EAF",                                 /* ID */
      "Gaplus",                                 /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  false},                           /* use_xfb */
      {true,  false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "Fxxxxx",                                 /* ID */
      "All NES Virtual Console games",          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     true},                            /* max_anisotropy */
      {false, true},                            /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2BE5G",                                 /* ID */
      "Black & Bruised",                        /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2BP7D",                                 /* ID */
      "Black & Bruised",                        /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2ME01",                                 /* ID */
      "Metroid Prime 2: Echoes",                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2MJ01",                                 /* ID */
      "Metroid Prime 2: Echoes",                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2MP01",                                 /* ID */
      "Metroid Prime 2: Echoes",                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2OE41",                                 /* ID */
      "Prince of Persia: Warrior Within",       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2OP41",                                 /* ID */
      "Prince of Persia: Warrior Within",       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2VE08",                                 /* ID */
      "Viewtiful Joe 2",                        /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,   false},                             /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2VP08",                                 /* ID */
      "Viewtiful Joe 2",                        /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {true,  true},                            /* use_real_xfb */
      {0,   false},                             /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2XE8P",                                 /* ID */
      "SONIC GEMS COLLECTION",                  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {4096,  true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G2XP8P",                                 /* ID */
      "SONIC GEMS COLLECTION",                  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {4096,  true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3AD69",                                 /* ID */
      "The Lord of The Rings - The Third Age",  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3AE69",                                 /* ID */
      "The Lord of The Rings - The Third Age",  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3AF69",                                 /* ID */
      "The Lord of The Rings - The Third Age",  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3FE69",                                 /* ID */
      "TimeSplitters Future Perfect",           /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {true,  true},                            /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3FP69",                                 /* ID */
      "TimeSplitters Future Perfect",           /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {true,  true},                            /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3FF69",                                 /* ID */
      "TimeSplitters Future Perfect",           /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {true,  true},                            /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3LE8P",                                 /* ID */
      "Super Monkey Ball Adventure",            /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {7,     true},                            /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3QEA4",                                 /* ID */
      "TMNT3",                                  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },

   {  "G3RD52",                                 /* ID */
      "Shrek 2",                                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3RE52",                                 /* ID */
      "Shrek 2",                                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3RF52",                                 /* ID */
      "Shrek 2",                                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3RP52",                                 /* ID */
      "Shrek 2",                                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3XE52",                                 /* ID */
      "X-Men: The Official Game",               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true },                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G3XP52",                                 /* ID */
      "X-Men: The Official Game",               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,   true },                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G4CE54",                                 /* ID */
      "Charlie and The Chocolate Factory",      /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G4CP54",                                 /* ID */
      "Charlie and The Chocolate Factory",      /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G4ME69",                                 /* ID */
      "The Sims: Bustin Out GameCube",          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G4MP69",                                 /* ID */
      "The Sims: Bustin Out GameCube",          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G4SE01",                                 /* ID */
      "The Legend of Zelda: Four Swords",       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G4SP01",                                 /* ID */
      "The Legend of Zelda: Four Swords",       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G5NEAF",                                 /* ID */
      "Namco Museum 50th Anniversary",          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {false,  true},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G5NP69",                                 /* ID */
      "Namco Museum 50th Anniversary",          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {false,  true},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G5SE7D",                                 /* ID */
      "Spyro",                                  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false,  true},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G5SP7D",                                 /* ID */
      "Spyro",                                  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false,  true},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G5TE69",                                 /* ID */
      "Tiger Woods PGA TOUR 2005",               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G5TP69",                                 /* ID */
      "Tiger Woods PGA TOUR 2005",               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G6QE08",                                 /* ID */
      "Mega Man Anniversary Collection",        /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G6TE5G",                                 /* ID */
      "Teen Titans",                            /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G6TP5G",                                 /* ID */
      "Teen Titans",                            /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G6WE69",                                 /* ID */
      "Tiger Woods PGA TOUR 06",                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G6WP69",                                 /* ID */
      "Tiger Woods PGA TOUR 06",                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G8ME01",                                 /* ID */
      "Paper Mario: The Thousand-Year Door",    /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {true,   true},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false,  true},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {545,    true},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G8MJ01",                                 /* ID */
      "Paper Mario: The Thousand-Year Door",    /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {true,   true},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false,  true},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {545,    true},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G8MP01",                                 /* ID */
      "Paper Mario: The Thousand-Year Door",    /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {true,   true},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false,  true},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {545,    true},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G9SE8P",                                 /* ID */
      "Sonic Heroes",                           /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,      true},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {2,      true},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,      true},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G9SJ8P",                                 /* ID */
      "Sonic Heroes",                           /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,      true},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {2,      true},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,      true},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G9SP8P",                                 /* ID */
      "Sonic Heroes",                           /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,      true},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {2,      true},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,      true},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G9TD52",                                 /* ID */
      "Shark Tale",                             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G9TE52",                                 /* ID */
      "Shark Tale",                             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G9TF52",                                 /* ID */
      "Shark Tale",                             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G9TI52",                                 /* ID */
      "Shark Tale",                             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "G9TP52",                                 /* ID */
      "Shark Tale",                             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAFJ01",                                 /* ID */
      "Doubutsu no Mori Plus/Animal Crossing",  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {623,    true},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAFP01",                                 /* ID */
      "Doubutsu no Mori Plus/Animal Crossing",  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {623,    true},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAFU01",                                 /* ID */
      "Doubutsu no Mori Plus/Animal Crossing",  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {623,    true},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAKE5D",                                 /* ID */
      "Midway Arcade Treasures",                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GALE01",                                 /* ID */
      "Super Smash Bros Melee",                 /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {-1,     true},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {64,     true},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GALJ01",                                 /* ID */
      "Super Smash Bros Melee",                 /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {-1,     true},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {64,     true},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GALP01",                                 /* ID */
      "Super Smash Bros Melee",                 /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {-1,     true},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {64,     true},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAPE52",                                 /* ID */
      "American Chopper 2",                     /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAUE08",                                 /* ID */
      "auto modellista",                        /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {false,  true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAUJ08",                                 /* ID */
      "auto modellista",                        /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {false,  true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAVE78",                                 /* ID */
      "Avatar: The Legend of Aang",             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAVP78",                                 /* ID */
      "Avatar: The Legend of Aang",             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAVY78",                                 /* ID */
      "Avatar: The Legend of Aang",             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GAYE5D",                                 /* ID */
      "Midway Arcade Treasures 2",              /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBHDC8",                                 /* ID */
      "Mystic Heroes",                          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBHFC8",                                 /* ID */
      "Mystic Heroes",                          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBHPC8",                                 /* ID */
      "Mystic Heroes",                          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBLE52",                                 /* ID */
      "BLOODY ROAR(R): PRIMAL FURY",            /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBLP52",                                 /* ID */
      "BLOODY ROAR(R): PRIMAL FURY",            /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBME7F",                                 /* ID */
      "Batman: Dark Tomorrow",                  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBMJ28",                                 /* ID */
      "Batman: Dark Tomorrow",                  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBMP7F",                                 /* ID */
      "Batman: Dark Tomorrow",                  /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBVE41",                                 /* ID */
      "Batman: Vengeance",                      /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBVP41",                                 /* ID */
      "Batman: Vengeance",                      /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBWD64",                                 /* ID */
      "Star Wars Bounty Hunter",                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBWE64",                                 /* ID */
      "Star Wars Bounty Hunter",                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBWF64",                                 /* ID */
      "Star Wars Bounty Hunter",                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GBWP64",                                 /* ID */
      "Star Wars Bounty Hunter",                /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GC2E9G",                                 /* ID */
      "Conflict: Desert Storm II",              /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GC6E01",                                 /* ID */
      "Pokemon Colosseum",                      /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {-1,     true},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GC6P01",                                 /* ID */
      "Pokemon Colosseum",                      /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {-1,     true},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GC9P6S",                                 /* ID */
      "Conan (disc 0)",                         /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCCE01",                                 /* ID */
      "Final Fantasy Crystal Chronicles",       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {true,   true},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCCJ01",                                 /* ID */
      "FINAL FANTASY Crystal Chronicles",       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {true,   true},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCCJGC",                                 /* ID */
      "FINAL FANTASY Crystal Chronicles",       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {true,   true},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCCP01",                                 /* ID */
      "FINAL FANTASY Crystal Chronicles",       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {true,   true},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCDE08",                                 /* ID */
      "Resident Evil Code Veronica X",          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false,  true},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false,  true},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCDJ08",                                 /* ID */
      "Resident Evil Code Veronica X",          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false,  true},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false,  true},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCDP08",                                 /* ID */
      "Resident Evil Code Veronica X",          /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false,  true},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false,  true},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCEE41",                                 /* ID */
      "Tom Clancy's Splinter Cell",             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCEP41",                                 /* ID */
      "Tom Clancy's Splinter Cell",             /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCIE69",                                 /* ID */
      "The Sims",                               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCIP69",                                 /* ID */
      "The Sims",                               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,      true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCNE7D",                                 /* ID */
      "Crash Nitro Kart",                       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCNP7D",                                 /* ID */
      "Crash Nitro Kart",                       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCPE6S",                                 /* ID */
      "Casper",                                 /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCPP6S",                                 /* ID */
      "Casper",                                 /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCZE69",                                 /* ID */
      "Catwoman",                               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GCZP69",                                 /* ID */
      "Catwoman",                               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDDE41",                                 /* ID */
      "Disney's Donald Duck Goin' Quackers",    /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDEE71",                                 /* ID */
      "Baldur's Gate: Dark Alliance",           /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {512,    true},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDGE7H",                                 /* ID */
      "Dragon's Lair 3D",                       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDGP78",                                 /* ID */
      "Dragon's Lair 3D",                       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDME01",                                 /* ID */
      "Disney's Magical Mirror starring Mickey Mouse", /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {true,   true},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDMJ01",                                 /* ID */
      "Disney's Magical Mirror starring Mickey Mouse", /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {true,   true},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDMP01",                                 /* ID */
      "Disney's Magical Mirror starring Mickey Mouse", /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {true,   true},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDSE78",                                 /* ID */
      "Dark Summit",                            /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDSP78",                                 /* ID */
      "Dark Summit",                            /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDTE69",                                 /* ID */
      "Def Jam Vendetta",                       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GDTP69",                                 /* ID */
      "Def Jam Vendetta",                       /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,   true},                           /* use_xfb */
      {true,   true},                           /* use_real_xfb */
      {false, false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {0,     false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },

   /* TODO/FIXME - stopped at GDX.ini - to be resumed */
   {  "D43U01",                                 /* ID */
      "ZELDA OCARINA MULTI PACK",               /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {false, false},                           /* use_xfb */
      {false, false},                           /* use_real_xfb */
      {0,     false},                           /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, true},                            /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
      {false, false},                           /* stereo_convergence */
      {false, false},                           /* stereo_efb_mono_depth */
      {0,     false},                           /* stereo_depth_percentage */
      {false, false},                           /* stereo_mode */
      {false, false},                           /* stereo_depth */
      {false, false},                           /* stereo_swap_eyes */
   },
   {  "GRSEAF",                                 /* ID */
      "SOULCALIBUR2",                           /* Name */
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {false, true},                            /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
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
      {0,     false},                           /* projection_hack */
      {"",    false},                           /* ph_sznear */
      {"",    false},                           /* ph_szfar */
      {"",    false},                           /* ph_znear */
      {"",    false},                           /* ph_zfar */
      {false, false},                           /* perf_queries */

      {false, false},                           /* vsync */
      {false, false},                           /* widescreen_hack */
      {0,     false},                           /* aspect_ratio */
      {false, false},                           /* crop */
      {true,  true},                            /* use_xfb */
      {false, true},                            /* use_real_xfb */
      {512,   true},                            /* safe_texture_cache_color_samples */
      {false, false},                           /* hirestextures */
      {false, false},                           /* convert_hirestextures */
      {false, false},                           /* cache_hirestextures */
      {false, false},                           /* enable_pixel_lighting */
      {false, false},                           /* fast_depth_calc */
      {0,     false},                           /* msaa */
      {false, false},                           /* ssaa */
      {false, false},                           /* force_true_color */
      {0,     false},                           /* efb_scale */
      {false, false},                           /* disable_fog */
      {false, false},                           /* backend_multithreading */
      {false, false},                           /* command_buffer_execute_interval */

      {false, false},                           /* efb_access_enable */
      {false, false},                           /* bbox_enable */
      {false, false},                           /* force_progressive */
      {false, false},                           /* efb_to_texture_enable */
      {false, false},                           /* efb_scaled_copy */
      {false, false},                           /* efb_emulate_format_changes */
      {false, false},                           /* vertex_rounding */
      {0,     false},                           /* max_anisotropy */
      {false, false},                           /* force_filtering */
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

         settings = iniFile->GetOrCreateSection("Video_Settings");

         if (maps[i].vsync.enabled)
            settings->Set("VSync", maps[i].vsync.value);
         if (maps[i].widescreen_hack.enabled)
            settings->Set("wideScreenHack", maps[i].widescreen_hack.value);
         if (maps[i].aspect_ratio.enabled)
            settings->Set("AspectRatio", maps[i].aspect_ratio.value);
         if (maps[i].crop.enabled)
            settings->Set("Crop", maps[i].crop.value);
         if (maps[i].use_xfb.enabled)
            settings->Set("UseXFB", maps[i].use_xfb.value);
         if (maps[i].use_real_xfb.enabled)
            settings->Set("UseRealXFB", maps[i].use_real_xfb.value);
         if (maps[i].safe_texture_cache_color_samples.enabled)
            settings->Set("SafeTextureCacheColorSamples", maps[i].safe_texture_cache_color_samples.value);
         if (maps[i].hirestextures.enabled)
            settings->Set("HiresTextures", maps[i].hirestextures.value);
         if (maps[i].convert_hirestextures.enabled)
            settings->Set("ConvertHiresTextures", maps[i].convert_hirestextures.value);
         if (maps[i].cache_hirestextures.enabled)
            settings->Set("CacheHiresTextures", maps[i].cache_hirestextures.value);
         if (maps[i].enable_pixel_lighting.enabled)
            settings->Set("EnablePixelLighting", maps[i].enable_pixel_lighting.value);
         if (maps[i].fast_depth_calc.enabled)
            settings->Set("FastDepthCalc", maps[i].fast_depth_calc.value);
         if (maps[i].msaa.enabled)
            settings->Set("MSAA", maps[i].msaa.value);
         if (maps[i].ssaa.enabled)
            settings->Set("SSAA", maps[i].ssaa.value);
         if (maps[i].force_truecolor.enabled)
            settings->Set("ForceTrueColor", maps[i].force_truecolor.value);
         if (maps[i].efb_scale.enabled)
            settings->Set("EFBScale", maps[i].efb_scale.value);

         if (maps[i].disable_fog.enabled)
            settings->Set("DisableFog", maps[i].disable_fog.value);
         if (maps[i].backend_multithreading.enabled)
            settings->Set("BackendMultithreading", maps[i].backend_multithreading.value);
         if (maps[i].command_buffer_execute_interval.enabled)
            settings->Set("CommandBufferExecuteInterval", maps[i].command_buffer_execute_interval.value);

         settings = iniFile->GetOrCreateSection("Video_Enhancements");

         if (maps[i].force_filtering.enabled)
            settings->Set("ForceFiltering", maps[i].force_filtering.value);
         if (maps[i].max_anisotropy.enabled)
            settings->Set("MaxAnisotropy", maps[i].max_anisotropy.value);

#if 0
         /* PostProcessingShader */
#endif

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

         settings = iniFile->GetOrCreateSection("Video_Hacks");

         if (maps[i].efb_access_enable.enabled)
            settings->Set("EFBAccessEnable", maps[i].efb_access_enable.value);
         if (maps[i].bbox_enable.enabled)
            settings->Set("BBoxEnable", maps[i].bbox_enable.value);
         if (maps[i].force_progressive.enabled)
            settings->Set("ForceProgressive", maps[i].force_progressive.value);
         if (maps[i].efb_to_texture_enable.enabled)
            settings->Set("EFBToTextureEnable", maps[i].efb_to_texture_enable.value);
         if (maps[i].efb_scaled_copy.enabled)
            settings->Set("EFBScaledCopy", maps[i].efb_scaled_copy.value);
         if (maps[i].efb_emulate_format_changes.enabled)
            settings->Set("EFBEmulateFormatChanges", maps[i].efb_emulate_format_changes.value);
         if (maps[i].vertex_rounding.enabled)
            settings->Set("VertexRounding", maps[i].vertex_rounding.value);

         settings = iniFile->GetOrCreateSection("Video");

         if (maps[i].projection_hack.enabled)
            settings->Set("ProjectionHack", maps[i].projection_hack.value);
         if (maps[i].ph_sznear.enabled)
            settings->Set("PH_SZNear", maps[i].ph_sznear.value);
         if (maps[i].ph_szfar.enabled)
            settings->Set("PH_SZFar", maps[i].ph_szfar.value);
         if (maps[i].ph_znear.enabled)
            settings->Set("PH_ZNear", maps[i].ph_znear.value);
         if (maps[i].ph_zfar.enabled)
            settings->Set("PH_ZFar", maps[i].ph_zfar.value);
         if (maps[i].perf_queries.enabled)
            settings->Set("PerfQueriesEnable", maps[i].perf_queries.value);

         return true;
      }
   }

   return false;
}
