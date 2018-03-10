from distutils.core import Extension, setup


module1 = Extension("mymath", sources=["mymath.cpp"])

setup(name="mymath", version="1.0", description="my math module extension", ext_modules=[module1])