add_library(pdfium_core_fpdftext STATIC
    cpdf_linkextract.cpp
    cpdf_linkextract.h
    cpdf_textpage.cpp
    cpdf_textpage.h
    cpdf_textpagefind.cpp
    cpdf_textpagefind.h
    unicodenormalizationdata.cpp
    unicodenormalizationdata.h
)

target_link_libraries(pdfium_core_fpdftext PUBLIC
    pdfium_core_fpdfapi_font
    pdfium_core_fpdfapi_page
    pdfium_core_fpdfapi_parser
    pdfium_core_fxcrt
)
