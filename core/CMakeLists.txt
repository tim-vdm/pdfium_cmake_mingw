add_subdirectory(fxcrt)
add_subdirectory(fxge)
add_subdirectory(fxcodec)
add_subdirectory(fdrm)
add_subdirectory(fpdfapi)
add_subdirectory(fpdfdoc)
add_subdirectory(fpdftext)

add_library(pdfium_core INTERFACE)

target_link_libraries(pdfium_core INTERFACE
    pdfium_core_fxcrt
    pdfium_core_fxge
    pdfium_core_fxcodec
    pdfium_core_fdrm
    pdfium_core_fpdfapi
    pdfium_core_fpdfdoc
    pdfium_core_fpdftext
)
