add_library(input STATIC)

target_include_directories(input PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_sources(input
	PRIVATE validateArgs.cc
	PUBLIC ${CMAKE_SOURCE_DIR}/include/input/validateArgs.h)
