add_library(pdfium_testing_image_diff STATIC
    image_diff_png.cpp
    image_diff_png.h
)

target_link_libraries(pdfium_testing_image_diff PUBLIC
    pdfium_headers
    PNG::PNG
)
