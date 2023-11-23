# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Daniel Rodríguez Duarte
# @date Nov 23, 2023
# @brief CMakeLists.txt simple example para el programa Practica10
#        This does not generate documentation
#        It doesn't build any library
cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name
project(fibonacci_sum                # Mandatory
    VERSION 1.0
    DESCRIPTION "A simple CMake project for the Fibonacci Sum application"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)                                              # Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(fibonacci_sum
    src/Practica10.cc)

# Add expected compiler features to a target.
target_compile_features(Practica10 PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(Practica10 PRIVATE -Wall -Wextra -Wpedantic -Weffc++)

