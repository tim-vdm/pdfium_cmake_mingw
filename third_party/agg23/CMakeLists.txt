add_library(pdfium_agg23 STATIC
    agg_basics.h
    agg_clip_liang_barsky.h
    agg_conv_dash.h
    agg_conv_stroke.h
    agg_curves.cpp
    agg_curves.h
    agg_path_storage.cpp
    agg_path_storage.h
    agg_rasterizer_scanline_aa.cpp
    agg_rasterizer_scanline_aa.h
    agg_renderer_scanline.h
    agg_rendering_buffer.h
    agg_scanline_u.h
    agg_vcgen_dash.cpp
    agg_vcgen_stroke.cpp
)

target_link_libraries(pdfium_agg23 PUBLIC
    pdfium_headers
)
