set(ABSL_PROPAGATE_CXX_STD ON)
add_subdirectory(abseil-cpp)

add_subdirectory(base)
add_subdirectory(skia_shared)
add_subdirectory(lcms)
add_subdirectory(agg23)

if(WIN32)
    add_subdirectory(libopenjpeg)
    include(icu.cmake)
endif()
