add_executable(bunta main.cc)

add_subdirectory(input)
add_subdirectory(output)
add_subdirectory(progression)
add_subdirectory(generation)

target_compile_features(bunta PUBLIC cxx_std_17)
target_include_directories(bunta PUBLIC ${CMAKE_SOURCE_DIR}/include)
