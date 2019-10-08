add_library(gtest STATIC IMPORTED GLOBAL)

target_include_directories(gtest 
    INTERFACE
        "gtest/include"
)

#target_link_libraries(gtest
#    INTERFACE
#        ${CMAKE_CURRENT_SOURCE_DIR}/gtest/lib/${TARGET_ARCH}/gtest.lib
#)

set_target_properties(gtest PROPERTIES
    IMPORTED_LOCATION_DEBUG   "${CMAKE_CURRENT_SOURCE_DIR}/gtest/lib/${TARGET_ARCH}/gtestd.lib"
    IMPORTED_LOCATION_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/gtest/lib/${TARGET_ARCH}/gtest.lib"
    IMPORTED_LOCATION_PUBLISH "${CMAKE_CURRENT_SOURCE_DIR}/gtest/lib/${TARGET_ARCH}/gtest.lib"
)