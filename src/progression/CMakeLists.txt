add_library(progression STATIC)

target_include_directories(progression PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_sources(progression
	PRIVATE progression.cc
	PUBLIC ${CMAKE_SOURCE_DIR}/include/progression/progression.h)
