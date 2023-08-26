cmake_minimum_required(VERSION 3.17)

project(CPUInfo
    VERSION 1.0
    DESCRIPTION "A simple CLI tool for displaying CPU information"
    LANGUAGES CXX)

set(NO_OCL 1)

# required for unit testing using CMake's ctest command
# include(CTest)
# enable_testing()

# we add the files in the include directory to be included
# while compiling all the source code
# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

include(AddGitSubmodule.cmake)

add_git_submodule(external/hwinfo)
include_directories(external/hwinfo/include)

add_executable(cpuinfo src/main.cpp)
target_link_libraries(cpuinfo PUBLIC hwinfo::HWinfo)
