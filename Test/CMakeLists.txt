add_library(Test STATIC
Src/CString_Test.c
)

target_include_directories(Test PUBLIC
Inc
Includs
${CMAKE_CURRENT_LIST_DIR})


