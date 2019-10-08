add_library(asio INTERFACE)

file(GLOB_RECURSE inc
    asio/asio/include/*.h 
    asio/asio/include/*.hpp
)

list(FILTER inc EXCLUDE REGEX ".*/examples/.*")
list(FILTER inc EXCLUDE REGEX ".*/tests/.*")

target_compile_definitions(asio
	INTERFACE
		ASIO_STANDALONE
		ASIO_HAS_STD_TYPE_TRAITS
		ASIO_HAS_STD_ADDRESSOF
		ASIO_HAS_STD_ARRAY
		ASIO_HAS_CSTDINT
		ASIO_HAS_STD_SHARED_PTR
		_SILENCE_CXX17_ALLOCATOR_VOID_DEPRECATION_WARNING
)

target_sources(asio
	INTERFACE
    	${inc}
)

target_include_directories(asio
	INTERFACE
		"asio/asio/include"
)
