#include <Python.h>



float add(float x, float y){
    return x + y;
}


static PyObject* mymath_add(PyObject *self, PyObject *args){

    float x, y;
    if(!PyArg_ParseTuple(args, "ff", &x, &y)){
        return NULL;
    }

    float res;
    res = add(x, y);

    return PyFloat_FromDouble(res);
}


static PyMethodDef mymathMethods[] = {
    {"add", mymath_add, METH_VARARGS, "return the sum of two float numbers"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mymathModule = {
    PyModuleDef_HEAD_INIT,
    "mymath",
    "this is mymath module doc",
    -1,
    mymathMethods,
};

PyMODINIT_FUNC PyInit_mymath(void){

    return PyModule_Create(&mymathModule);
}
