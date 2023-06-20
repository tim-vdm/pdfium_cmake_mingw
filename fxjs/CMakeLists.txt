add_library(pdfium_fxjs STATIC
    cjs_event_context_stub.cpp
    cjs_event_context_stub.h
    cjs_runtimestub.cpp
    cjs_runtimestub.h
    ijs_event_context.h
    ijs_runtime.cpp
    ijs_runtime.h
)

target_link_libraries(pdfium_fxjs PUBLIC
    pdfium_core_fxcrt
)
