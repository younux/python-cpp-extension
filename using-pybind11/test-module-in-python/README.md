# Using the generated module in python

**Here, I am using Python 3.6 on Mac OS X.**

1. First create a virtualenv if you don't want to modify the global python

        virtualenv . -p python3
        source bin/activate
    
1. To install the extension to your python (in virtualenv in our case), just copy
the module "_blockchain.cpython-36m-darwin.so" (shared library) into "lib/site-packages/"
   
1. After installing the module run the script test_generated_module.py :

        python test_generated_module.py 

Bellow the interpreter output : 

    _blockchain module imported
    Blockchain created with difficulty 6 
    Creating block 1 with 1 transaction ...
    Mining block 1 ...
    Block mined - Hash : 000000b06af0ee4b2b0b73f5b76d58c383fe576a9370de5e3391941c1c5f8091 - Nonce : 9411590
    Creating block 2 with 4 transaction ...
    Mining block 2 ...
    Block mined - Hash : 0000008dea02364282cedd9f3a8bf0f2a90506dc2e55984946ed11884c7351ce - Nonce : 2264799
    Creating block 3 with 10 transaction ...
    Mining block 3 ...
    Block mined - Hash : 0000000982b1a8321f9bd2c4c12fac654ce18c05f5eb730e0f16593efd4fed22 - Nonce : 21273739
    Mining finished


