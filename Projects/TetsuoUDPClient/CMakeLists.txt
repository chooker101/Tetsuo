add_library(TetsuoUDPClient STATIC)

file(GLOB_RECURSE inc 
    Include/*.c 
    Include/*.cpp 
    Include/*.h 
    Include/*.hpp
)

file(GLOB_RECURSE src 
    Source/*.c 
    Source/*.cpp 
    Source/*.h 
    Source/*.hpp
)

file(GLOB pch
    *.c 
    *.cpp 
    *.h 
    *.hpp
)

target_sources(TetsuoUDPClient 
    PRIVATE
        ${inc}
        ${src}
        ${pch}
)

target_include_directories(TetsuoUDPClient
    PUBLIC
	    "Include"
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        "Source"
)

target_link_libraries(TetsuoUDPClient
    PUBLIC
        asio
)

vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${inc}")
vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${src}")
vs_source_group(${CMAKE_CURRENT_SOURCE_DIR} "${pch}")