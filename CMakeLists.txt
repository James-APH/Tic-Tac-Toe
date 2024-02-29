# After creating dir out, and out/build/
# // to make two+ dir's do mkdir -p dir/dir/...
# // in build run: cmake -S ../../ -B .


# Setting cmake version
cmake_minimum_required(VERSION 3.10)

# Setting c++ version requirement
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(game)

add_executable({$PROJECT_NAME} main.cc)




