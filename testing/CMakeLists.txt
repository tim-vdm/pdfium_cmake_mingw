add_library(pdfium_testing STATIC
    command_line_helpers.cpp
    command_line_helpers.h
    font_renamer.cpp
    font_renamer.h
    fx_string_testhelpers.cpp
    fx_string_testhelpers.h
    invalid_seekable_read_stream.cpp
    invalid_seekable_read_stream.h
    pseudo_retainable.h
    scoped_set_tz.cpp
    scoped_set_tz.h
    string_write_stream.cpp
    string_write_stream.h
    test_fonts.cpp
    test_fonts.h
    test_loader.cpp
    test_loader.h
    test_support.h
    utils/bitmap_saver.cpp
    utils/bitmap_saver.h
    utils/file_util.cpp
    utils/file_util.h
    utils/hash.cpp
    utils/hash.h
    utils/path_service.cpp
    utils/path_service.h
)

target_link_libraries(pdfium_testing PUBLIC
    pdfium_core_fxge
)

add_subdirectory(image_diff)
