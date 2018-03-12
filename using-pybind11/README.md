# This is a Python C++ extension that uses the pybind11

## pybind11 : https://github.com/pybind/pybind11

* **In this project, I will wrap C++ class.**  

* **I am using Python 3.6 on Mac OS X.**


1. First you need to build the module using cmake : 
        
        mkdir build
        cd build
        cmake ..
        make

1. Once the build is done successfully, you will find the generated module
in "build/src", its name in my example is "transaction.cpython-36m-darwin.so",
this is a shared library (pyd on windows).

1. Now we need to add this module to our python (install it) so as we can use it.
Go to "test-module-in-python" subfolder to see an example that uses a python 
virtualenv to not affect the global python installation.



