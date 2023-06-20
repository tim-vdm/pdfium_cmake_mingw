add_library(pdfium_fpdfsdk_pwl STATIC
    cpwl_button.cpp
    cpwl_button.h
    cpwl_caret.cpp
    cpwl_caret.h
    cpwl_cbbutton.cpp
    cpwl_cbbutton.h
    cpwl_cblistbox.cpp
    cpwl_cblistbox.h
    cpwl_combo_box.cpp
    cpwl_combo_box.h
    cpwl_edit.cpp
    cpwl_edit.h
    cpwl_edit_impl.cpp
    cpwl_edit_impl.h
    cpwl_list_box.cpp
    cpwl_list_box.h
    cpwl_list_ctrl.cpp
    cpwl_list_ctrl.h
    cpwl_sbbutton.cpp
    cpwl_sbbutton.h
    cpwl_scroll_bar.cpp
    cpwl_scroll_bar.h
    cpwl_special_button.cpp
    cpwl_special_button.h
    cpwl_wnd.cpp
    cpwl_wnd.h
    ipwl_fillernotify.h
)

target_link_libraries(pdfium_fpdfsdk_pwl PUBLIC
    pdfium_constants
    pdfium_core
)
