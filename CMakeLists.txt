cmake_minimum_required(VERSION 3.16)
project(PDFium)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ZLIB REQUIRED)
find_package(Freetype REQUIRED)
find_package(JPEG REQUIRED)
find_package(PNG REQUIRED)

if(UNIX)
    find_package(OpenJPEG REQUIRED)
    find_package(ICU COMPONENTS uc REQUIRED)
endif()

if(WIN32)
    add_compile_definitions(
        UNICODE
        HAVE_BOOLEAN
    )
endif()

add_library(pdfium_headers INTERFACE)
target_include_directories(pdfium_headers INTERFACE ${CMAKE_SOURCE_DIR})

add_subdirectory(third_party)
add_subdirectory(constants)
add_subdirectory(core)
add_subdirectory(fxjs)
add_subdirectory(fpdfsdk)
add_subdirectory(testing)
add_subdirectory(samples)
