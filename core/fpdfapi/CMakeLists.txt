add_subdirectory(cmaps)
add_subdirectory(parser)
add_subdirectory(font)
add_subdirectory(page)
add_subdirectory(edit)
add_subdirectory(render)

add_library(pdfium_core_fpdfapi INTERFACE)

target_link_libraries(pdfium_core_fpdfapi INTERFACE
    pdfium_core_fpdfapi_cmaps
    pdfium_core_fpdfapi_edit
    pdfium_core_fpdfapi_font
    pdfium_core_fpdfapi_page
    pdfium_core_fpdfapi_parser
    pdfium_core_fpdfapi_render
)
