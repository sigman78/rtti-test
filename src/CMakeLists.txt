include(GenerateExportHeader)


#add_library(Common STATIC userclass.cpp)
#target_include_directories(Common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
add_library(Common SHARED userclass.cpp)
target_include_directories(Common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})
generate_export_header(Common)
set_target_properties(Common PROPERTIES CXX_VISIBILITY_PRESET ${VISIBILITY})

add_library(Shared1 SHARED library1.cpp)
target_include_directories(Shared1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})
generate_export_header(Shared1)
target_link_libraries(Shared1 Common)
set_target_properties(Shared1 PROPERTIES CXX_VISIBILITY_PRESET ${VISIBILITY})


add_executable(Main main.cpp)
target_link_libraries(Main Common Shared1)
