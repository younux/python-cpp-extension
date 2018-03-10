# This a Python C++ extensions that uses the Python C/Cpp API


1. First create a virtualenv 

    virtualenv . -p python3
    source bin/activate
    

1. To build and install the extension to your python (in virtualenv in our case)  : 

        python setup.py build
        python setup.py install
    
1. after installing the module run the script test_generated_module.py to test the add function :

        python test_generated_module.py 



## Notes :

The CmakeLists.txt is present to help the IDE to locate Python.h header to help with autocompletion,
otherwise it is not used for compiling. The file main.cpp was generated
by cpp IDE and it is not used.
