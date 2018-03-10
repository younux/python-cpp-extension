# This is a Python C++ extension that uses the Python C/C++ API

Here, I am using Python 3.6 on Mac OS X

1. First create a virtualenv if you don't want to modify the global python

        virtualenv . -p python3
        source bin/activate
    

1. To build and install the extension to your python (in virtualenv in our case)  : 

        python setup.py build
        python setup.py install
    
1. after installing the module run the script test_generated_module.py to test the add function :

        python test_generated_module.py 



## Notes :

The CmakeLists.txt is present to help the IDE locate Python.h header to help with autocompletion,
otherwise it is not used for compiling.

