add_library(Includs STATIC
 Src/CString.c
)


target_include_directories(Includs PUBLIC
Inc
Src
${CMAKE_CURRENT_LIST_DIR})



