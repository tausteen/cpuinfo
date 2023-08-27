cmake_minimum_required(VERSION 3.14)

project(CPUInfo
    VERSION 1.0
    DESCRIPTION "A simple CLI tool for displaying CPU information"
    LANGUAGES CXX)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# cpu.h in hwinfo do not require OCL
set(NO_OCL 1)

include(AddGitSubmodule.cmake)

add_git_submodule(external/hwinfo)
include_directories(external/hwinfo/include)

add_executable(cpuinfo src/main.cpp)
target_link_libraries(cpuinfo PUBLIC hwinfo::HWinfo)

include(CTest)

add_executable(include_hwinfo_test test/include_hwinfo_test.cpp)
target_link_libraries(include_hwinfo_test PUBLIC hwinfo::HWinfo)
add_executable(cpu_model_test test/cpu_model_test.cpp)
target_link_libraries(cpu_model_test PUBLIC hwinfo::HWinfo)

enable_testing()

add_test(NAME include_hwinfo_test COMMAND include_hwinfo_test)
add_test(NAME cpu_model_test COMMAND cpu_model_test)
