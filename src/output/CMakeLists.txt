add_library(output STATIC)

target_include_directories(output PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_sources(output
	PRIVATE printProgression.cc
	PUBLIC ${CMAKE_SOURCE_DIR}/include/output/printProgression.h)
