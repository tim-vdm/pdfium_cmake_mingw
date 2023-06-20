add_library(pdfium_core_fdrm STATIC
    fx_crypt.cpp
    fx_crypt.h
    fx_crypt_aes.cpp
    fx_crypt_sha.cpp
)

target_link_libraries(pdfium_core_fdrm PUBLIC
    pdfium_core_fxcrt
)
