
cmake \
    -G "Ninja" \
    -DCMAKE_TOOLCHAIN_FILE=/vortex/mingw-2022/usr/share/mingw/toolchain-mingw64.cmake \
    -DFREETYPE_INCLUDE_DIRS=/vortex/x86_64-w64-mingw32/2022-04/include/QtFreetype \
    -DFREETYPE_LIBRARY=/vortex/x86_64-w64-mingw32/2022-04/lib/libQt6BundledFreetype.a \
    -DJPEG_INCLUDE_DIR=/vortex/x86_64-w64-mingw32/2022-04/include/QtJpeg \
    -DJPEG_LIBRARY=/vortex/x86_64-w64-mingw32/2022-04/lib/libQt6BundledLibjpeg.a \
    -DPNG_PNG_INCLUDE_DIR=/vortex/x86_64-w64-mingw32/2022-04/include/QtPng \
    -DPNG_LIBRARY=/vortex/x86_64-w64-mingw32/2022-04/lib/libQt6BundledLibpng.a \
    -DCMAKE_C_COMPILER_LAUNCHER=ccache \
    -DCMAKE_CXX_COMPILER_LAUNCHER=ccache \
    ..

