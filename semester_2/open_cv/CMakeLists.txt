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
#add_executable(canny_edges_exec src/canny_edges.cpp)

# add include directories to executable
#target_include_directories(main_exec PRIVATE include)
# link your libraries
find_package( OpenCV ) # alternative: find_package( OpenCV REQUIRED )
# continue only if opencv is found
if(OpenCV_FOUND)
     # add an executable for opencv canny 
    add_executable(opencv_canny /workspaces/Labor/semester_2/open_cv/scr/canny_edges.cpp)
    # declare the path to the image we want to work with
    target_compile_definitions(opencv_canny PRIVATE IMGPATH="${CMAKE_CURRENT_LIST_DIR}/resources" OUTPATH="${CMAKE_CURRENT_BINARY_DIR}")
    # include and link all opencv stuff
    target_include_directories(opencv_canny PUBLIC ${OpenCV_INCLUDE_DIRS} )
    target_link_libraries( opencv_canny ${OpenCV_LIBRARIES})
endif()

