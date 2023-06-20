add_library(pdfium_core_fpdfapi_edit STATIC
    cpdf_contentstream_write_utils.cpp
    cpdf_contentstream_write_utils.h
    cpdf_creator.cpp
    cpdf_creator.h
    cpdf_pagecontentgenerator.cpp
    cpdf_pagecontentgenerator.h
    cpdf_pagecontentmanager.cpp
    cpdf_pagecontentmanager.h
    cpdf_stringarchivestream.cpp
    cpdf_stringarchivestream.h
)

target_link_libraries(pdfium_core_fpdfapi_edit PUBLIC
    absl::variant
    pdfium_skia_shared
    pdfium_core_fxge
    pdfium_core_fpdfapi_font
    pdfium_core_fpdfapi_page
    pdfium_core_fpdfapi_parser
    pdfium_core_fpdfapi_render
)
