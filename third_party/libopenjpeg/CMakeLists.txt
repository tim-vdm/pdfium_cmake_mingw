add_library(pdfium_openjpeg STATIC
    bio.c
    cio.c
    dwt.c
    event.c
    function_list.c
    ht_dec.c
    image.c
    invert.c
    j2k.c
    jp2.c
    mct.c
    mqc.c
    openjpeg.c
    # NOTE: opj_clock.c is not used.
    opj_malloc.cc
    opj_malloc.h
    pi.c
    sparse_array.c
    sparse_array.h
    t1.c
    t1_ht_luts.h
    t2.c
    tcd.c
    tgt.c
    thread.c
)

if(WIN32)
    target_compile_definitions(pdfium_openjpeg PUBLIC OPJ_STATIC)
endif()

target_include_directories(pdfium_openjpeg PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(pdfium_openjpeg PUBLIC
    pdfium_core_fxcrt
)

