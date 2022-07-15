cmake_minimum_required(VERSION 3.11)
project(bunta)

# Increasingly strict compiler options.

add_compile_options(-Wall)
add_compile_options(-Wextra -Wpedantic)
add_compile_options(-fmessage-length=80 -fno-diagnostics-show-option
    -fstack-protector-all -g -O3 -std=c++17 -Walloc-zero -Walloca
    -Wctor-dtor-privacy -Wduplicated-cond -Wduplicated-branches
    -Werror -Wextra-semi -Wfatal-errors -Winit-self -Wlogical-op
    -Wold-style-cast -Wshadow -Wunused-const-variable=1
    -Wzero-as-null-pointer-constant)

# List of source files.

set(PROG_FILES main.cc)
 
# Create the executable 'bunta' from the source files.

add_executable(${PROJECT_NAME} ${PROG_FILES})
