add_library(pdfium_core_fxcodec STATIC
    basic/basicmodule.cpp
    basic/basicmodule.h
    cfx_codec_memory.cpp
    cfx_codec_memory.h
    fax/faxmodule.cpp
    fax/faxmodule.h
    flate/flatemodule.cpp
    flate/flatemodule.h
    fx_codec.cpp
    fx_codec.h
    fx_codec_def.h
    icc/icc_transform.cpp
    icc/icc_transform.h
    jbig2/JBig2_ArithDecoder.cpp
    jbig2/JBig2_ArithDecoder.h
    jbig2/JBig2_ArithIntDecoder.cpp
    jbig2/JBig2_ArithIntDecoder.h
    jbig2/JBig2_BitStream.cpp
    jbig2/JBig2_BitStream.h
    jbig2/JBig2_Context.cpp
    jbig2/JBig2_Context.h
    jbig2/JBig2_Define.h
    jbig2/JBig2_DocumentContext.cpp
    jbig2/JBig2_DocumentContext.h
    jbig2/JBig2_GrdProc.cpp
    jbig2/JBig2_GrdProc.h
    jbig2/JBig2_GrrdProc.cpp
    jbig2/JBig2_GrrdProc.h
    jbig2/JBig2_HtrdProc.cpp
    jbig2/JBig2_HtrdProc.h
    jbig2/JBig2_HuffmanDecoder.cpp
    jbig2/JBig2_HuffmanDecoder.h
    jbig2/JBig2_HuffmanTable.cpp
    jbig2/JBig2_HuffmanTable.h
    jbig2/JBig2_Image.cpp
    jbig2/JBig2_Image.h
    jbig2/JBig2_Page.h
    jbig2/JBig2_PatternDict.cpp
    jbig2/JBig2_PatternDict.h
    jbig2/JBig2_PddProc.cpp
    jbig2/JBig2_PddProc.h
    jbig2/JBig2_SddProc.cpp
    jbig2/JBig2_SddProc.h
    jbig2/JBig2_Segment.cpp
    jbig2/JBig2_Segment.h
    jbig2/JBig2_SymbolDict.cpp
    jbig2/JBig2_SymbolDict.h
    jbig2/JBig2_TrdProc.cpp
    jbig2/JBig2_TrdProc.h
    jbig2/jbig2_decoder.cpp
    jbig2/jbig2_decoder.h
    jpeg/jpeg_common.cpp
    jpeg/jpeg_common.h
    jpeg/jpegmodule.cpp
    jpeg/jpegmodule.h
    jpx/cjpx_decoder.cpp
    jpx/cjpx_decoder.h
    jpx/jpx_decode_utils.cpp
    jpx/jpx_decode_utils.h
    scanlinedecoder.cpp
    scanlinedecoder.h
)

if(UNIX)
    target_compile_definitions(pdfium_core_fxcodec PUBLIC USE_SYSTEM_LIBOPENJPEG2)
    target_include_directories(pdfium_core_fxcodec PUBLIC ${OPENJPEG_INCLUDE_DIRS})
    target_link_libraries(pdfium_core_fxcodec PUBLIC ${OPENJPEG_LIBRARIES})
elseif(WIN32)
    target_link_libraries(pdfium_core_fxcodec PUBLIC pdfium_openjpeg)
endif()

target_compile_definitions(pdfium_core_fxcodec PUBLIC
    USE_SYSTEM_ZLIB
    USE_SYSTEM_LIBJPEG    
)

target_link_libraries(pdfium_core_fxcodec PUBLIC
    ZLIB::ZLIB
    JPEG::JPEG
    pdfium_core_fxge
    pdfium_lcms2
)
