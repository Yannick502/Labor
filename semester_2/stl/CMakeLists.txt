# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(homework_1_7 VERSION 1.0 LANGUAGES C CXX)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# define the c++ standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

# add an executabel and assign files to it
add_executable(main_exec src/main.cpp)

# add include directories to executable
target_include_directories(main_exec PRIVATE include)
# link your libraries


