# Specify CMAKE version
cmake_minimum_required(VERSION 3.16.3)

# Give the project a name. CMake will automatically store this name as the variable PROJECT_NAME
project(MLM)

include_directories(./c++/lib)

# Create executables
add_executable(test_matrix_multiply ./c++/tests/test_matrix_multiply.cpp ./c++/lib/cmath.cpp)

# TODO-KT: Use library to link these other files
# Compile library
# add_library(cmath STATIC ./c++/lib/cmath.cpp ./c++/lib/cmath.h)

# Link library to executable
# target_link_libraries(test_matrix_multiply LINK_PUBLIC cmath)
