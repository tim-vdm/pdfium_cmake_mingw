add_library(pdfium_base STATIC
    base_export.h
    bits.h
    check.h
    check_op.h
    component_export.h
    containers/adapters.h
    containers/contains.h
    cxx17_backports.h
    debug/alias.cc
    debug/alias.h
    immediate_crash.h
    memory/aligned_memory.cc
    memory/aligned_memory.h
    no_destructor.h
    notreached.h
    numerics/checked_math.h
    numerics/checked_math_impl.h
    numerics/clamped_math.h
    numerics/clamped_math_impl.h
    numerics/safe_conversions.h
    numerics/safe_conversions_arm_impl.h
    numerics/safe_conversions_impl.h
    numerics/safe_math.h
    numerics/safe_math_arm_impl.h
    numerics/safe_math_clang_gcc_impl.h
    numerics/safe_math_shared_impl.h
    span.h
    sys_byteorder.h
    template_util.h
)

if(WIN32)
    target_sources(pdfium_base PUBLIC
        win/scoped_select_object.h
        win/win_util.cc
        win/win_util.h
    )
endif()

target_link_libraries(pdfium_base PUBLIC
    pdfium_headers
)
