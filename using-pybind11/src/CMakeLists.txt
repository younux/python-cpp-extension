# Importing the pybind11 project in the root CmakeLists.txt provide us with
# the pybind11_add_module function. It will take care of all the details needed
# to build a Python extension module on any platform (see pybind11 documentation)
pybind11_add_module(_blockchain wrap.cpp)
