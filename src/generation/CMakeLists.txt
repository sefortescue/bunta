add_library(generation STATIC)

target_include_directories(generation PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_sources(generation
	PRIVATE treeSearch.cc
	PUBLIC ${CMAKE_SOURCE_DIR}/include/generation/treeSearch.h)
