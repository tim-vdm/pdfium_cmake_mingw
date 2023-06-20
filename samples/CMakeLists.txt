add_executable(pdfium_test
    pdfium_test.cc
    pdfium_test_dump_helper.h pdfium_test_dump_helper.cc
    pdfium_test_event_helper.h pdfium_test_event_helper.cc
    pdfium_test_write_helper.h pdfium_test_write_helper.cc

)

target_link_libraries(pdfium_test PUBLIC
    pdfium_testing
    pdfium_testing_image_diff
    pdfium_fpdfsdk    
)
