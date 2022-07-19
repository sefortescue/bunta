cmake_minimum_required(VERSION 3.13.0)
project(bunta)

# Make tools accessible
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/tools")

# Include macro to force out-of-source build
include(MacroOutOfSourceBuild.cmake)

# Build options
option(BUILD_TESTS "Build test executable?" ON)

# Set output directory for executables libraries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Default compiler options.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic 
	-fmessage-length=80 -fno-diagnostics-show-option 
	-fstack-protector-all -g -O3 -Walloc-zero -Walloca 
	-Wctor-dtor-privacy -Wduplicated-cond -Wduplicated-branches 
	-Werror -Wextra-semi -Wfatal-errors -Winit-self -Wlogical-op 
	-Wold-style-cast -Wshadow -Wunused-const-variable=1 
	-Wzero-as-null-pointer-constant")

# Add subdirectories
add_subdirectory(src)
if (BUILD_TESTS)
	add_subdirectory(tests)
endif (BUILD_TESTS)
