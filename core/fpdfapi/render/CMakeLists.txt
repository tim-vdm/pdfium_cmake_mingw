add_library(pdfium_core_fpdfapi_render STATIC
    charposlist.cpp
    charposlist.h
    cpdf_devicebuffer.cpp
    cpdf_devicebuffer.h
    cpdf_docrenderdata.cpp
    cpdf_docrenderdata.h
    cpdf_imagerenderer.cpp
    cpdf_imagerenderer.h
    cpdf_pagerendercontext.cpp
    cpdf_pagerendercontext.h
    cpdf_progressiverenderer.cpp
    cpdf_progressiverenderer.h
    cpdf_rendercontext.cpp
    cpdf_rendercontext.h
    cpdf_renderoptions.cpp
    cpdf_renderoptions.h
    cpdf_rendershading.cpp
    cpdf_rendershading.h
    cpdf_renderstatus.cpp
    cpdf_renderstatus.h
    cpdf_rendertiling.cpp
    cpdf_rendertiling.h
    cpdf_scaledrenderbuffer.cpp
    cpdf_scaledrenderbuffer.h
    cpdf_textrenderer.cpp
    cpdf_textrenderer.h
    cpdf_type3cache.cpp
    cpdf_type3cache.h
    cpdf_type3glyphmap.cpp
    cpdf_type3glyphmap.h
)

if(WIN32)
    target_sources(pdfium_core_fpdfapi_render PUBLIC
        cpdf_windowsrenderdevice.cpp
        cpdf_windowsrenderdevice.h
    )
endif()

target_link_libraries(pdfium_core_fpdfapi_render PUBLIC
    pdfium_core_fxcodec
    pdfium_core_fxcrt
    pdfium_core_fxge
    pdfium_core_fpdfapi_font
    pdfium_core_fpdfapi_page
    pdfium_core_fpdfapi_parser
)
