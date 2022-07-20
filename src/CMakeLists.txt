# Add an executable called bunta
add_executable(${CMAKE_PROJECT_NAME} main.cc)

# Add subdirectories for building libraries
add_subdirectory(input)
add_subdirectory(progression)
add_subdirectory(generation)
add_subdirectory(output)

# Set compile options
target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE -std=c++17 -Wall -Wextra -Wpedantic 
	-fmessage-length=80 -fno-diagnostics-show-option -fstack-protector-all -g -O3 -Walloc-zero 
	-Walloca -Wctor-dtor-privacy -Wduplicated-cond -Wduplicated-branches -Werror -Wextra-semi 
	-Wfatal-errors -Winit-self -Wlogical-op -Wold-style-cast -Wshadow -Wunused-const-variable=1 
        -Wzero-as-null-pointer-constant)

# Include directories
target_include_directories(${CMAKE_PROJECT_NAME} 
	PRIVATE ${CMAKE_SOURCE_DIR}/include/input
		${CMAKE_SOURCE_DIR}/include/progression
		${CMAKE_SOURCE_DIR}/include/generation
		${CMAKE_SOURCE_DIR}/include/output)

# Link libraries to bunta 
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE input progression generation output)
