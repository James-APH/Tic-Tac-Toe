# After creating dir out, and out/build/
# // to make two+ dir's do mkdir -p dir/dir/...
# // in build run: cmake -S ../../ -B .


# Setting cmake version:
cmake_minimum_required(VERSION 3.10)

# Setting c++ version requirement:
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Creating executable name:
project(game VERSION 1.0)


# adding files from src directory:
file(GLOB_RECURSE SRC_FILES src/*.cc CONFIGURE_DEPENDS)
add_executable(${PROJECT_NAME} main.cc ${SRC_FILES})


# Adding files from include directory:
target_include_directories(game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include )

find_package(Catch2 3 REQUIRED)
# These tests can use the Catch2-provided main
add_executable(tests test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
