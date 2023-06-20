add_library(pdfium_core_fxcrt STATIC
    autonuller.h
    autorestorer.h
    binary_buffer.cpp
    binary_buffer.h
    byteorder.h
    bytestring.cpp
    bytestring.h
    cfx_bitstream.cpp
    cfx_bitstream.h
    cfx_datetime.cpp
    cfx_datetime.h
    cfx_read_only_span_stream.cpp
    cfx_read_only_span_stream.h
    cfx_read_only_string_stream.cpp
    cfx_read_only_string_stream.h
    cfx_read_only_vector_stream.cpp
    cfx_read_only_vector_stream.h
    cfx_seekablestreamproxy.cpp
    cfx_seekablestreamproxy.h
    cfx_timer.cpp
    cfx_timer.h
    code_point_view.h
    data_vector.h
    fileaccess_iface.h
    fixed_size_data_vector.h
    fixed_try_alloc_zeroed_data_vector.h
    fixed_uninit_data_vector.h
    fixed_zeroed_data_vector.h
    fx_2d_size.h
    fx_bidi.cpp
    fx_bidi.h
    fx_codepage.cpp
    fx_codepage.h
    fx_codepage_forward.h
    fx_coordinates.cpp
    fx_coordinates.h
    fx_extension.cpp
    fx_extension.h
    fx_folder.h
    fx_memory.cpp
    fx_memory.h
    fx_memory_malloc.cpp
    fx_memory_wrappers.h
    fx_number.cpp
    fx_number.h
    fx_random.cpp
    fx_random.h
    fx_safe_types.h
    fx_stream.cpp
    fx_stream.h
    fx_string.cpp
    fx_string.h
    fx_string_wrappers.h
    fx_system.cpp
    fx_system.h
    fx_types.h
    fx_unicode.cpp
    fx_unicode.h
    mask.h
    maybe_owned.h
    observed_ptr.cpp
    observed_ptr.h
    pauseindicator_iface.h
    retain_ptr.h
    scoped_set_insertion.h
    shared_copy_on_write.h
    small_buffer.h
    span_util.h
    stl_util.h
    string_data_template.cpp
    string_data_template.h
    string_pool_template.h
    string_view_template.h
    tree_node.h
    utf16.h
    weak_ptr.h
    widestring.cpp
    widestring.h
    widetext_buffer.cpp
    widetext_buffer.h
    xml/cfx_xmlchardata.cpp
    xml/cfx_xmlchardata.h
    xml/cfx_xmldocument.cpp
    xml/cfx_xmldocument.h
    xml/cfx_xmlelement.cpp
    xml/cfx_xmlelement.h
    xml/cfx_xmlinstruction.cpp
    xml/cfx_xmlinstruction.h
    xml/cfx_xmlnode.cpp
    xml/cfx_xmlnode.h
    xml/cfx_xmlparser.cpp
    xml/cfx_xmlparser.h
    xml/cfx_xmltext.cpp
    xml/cfx_xmltext.h
)

if(UNIX)
    target_sources(pdfium_core_fxcrt PUBLIC
        cfx_fileaccess_posix.cpp
        cfx_fileaccess_posix.h
        fx_folder_posix.cpp
    )

    target_compile_definitions(pdfium_core_fxcrt PUBLIC USE_SYSTEM_ICUUC)
    target_link_libraries(pdfium_core_fxcrt PUBLIC ICU::uc)

elseif(WIN32)
    target_sources(pdfium_core_fxcrt PUBLIC
        cfx_fileaccess_windows.cpp
        cfx_fileaccess_windows.h
        fx_folder_windows.cpp
    )

    target_link_libraries(pdfium_core_fxcrt PUBLIC pdfium_icuuc)

endif()

target_link_libraries(pdfium_core_fxcrt PUBLIC
    absl::optional    
    pdfium_base
)
