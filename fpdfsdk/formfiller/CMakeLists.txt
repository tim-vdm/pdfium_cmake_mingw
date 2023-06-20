add_library(pdfium_fpdfsdk_formfiller STATIC
    cffl_button.cpp
    cffl_button.h
    cffl_checkbox.cpp
    cffl_checkbox.h
    cffl_combobox.cpp
    cffl_combobox.h
    cffl_fieldaction.cpp
    cffl_fieldaction.h
    cffl_formfield.cpp
    cffl_formfield.h
    cffl_interactiveformfiller.cpp
    cffl_interactiveformfiller.h
    cffl_listbox.cpp
    cffl_listbox.h
    cffl_perwindowdata.cpp
    cffl_perwindowdata.h
    cffl_pushbutton.cpp
    cffl_pushbutton.h
    cffl_radiobutton.cpp
    cffl_radiobutton.h
    cffl_textfield.cpp
    cffl_textfield.h
    cffl_textobject.cpp
    cffl_textobject.h
)

target_link_libraries(pdfium_fpdfsdk_formfiller PUBLIC
    pdfium_fpdfsdk_pwl
)
