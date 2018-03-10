cmake_minimum_required(VERSION 2.8)

project(python-extension-cpp)


include_directories("/Library/Frameworks/Python.framework/Versions/3.6/include/python3.6m/")

add_executable(${PROJECT_NAME} "main.cpp")


