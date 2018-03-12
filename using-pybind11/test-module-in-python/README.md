# Using the generated module in python

**Here, I am using Python 3.6 on Mac OS X.**

1. First create a virtualenv if you don't want to modify the global python

        virtualenv . -p python3
        source bin/activate
    
1. To install the extension to your python (in virtualenv in our case), just copy
the module "transaction.cpython-36m-darwin.so" (shared library) into "lib/site-packages/"
   
1. After installing the module run the script test_generated_module.py :

        python test_generated_module.py 




