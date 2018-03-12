cmake_minimum_required(VERSION 2.8)

project(using-pybind11)

# Set C++ standard to C++14
set(CMAKE_CXX_STANDARD 14)

# Add pybind11 repository (The CMake command add_subdirectory will import the pybind11 project
# which provides the pybind11_add_module function. It will take care of all the details needed
# to build a Python extension module on any platform.) (see pybind11 documentation)
add_subdirectory("./pybind11")


# Add project headers
include_directories("./include")

# Add a subdirectory which is the source directory (which contains project source files and wraping source files)
add_subdirectory("./src")

