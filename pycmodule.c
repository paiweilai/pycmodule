#include "Python.h"

static PyObject*
hello_world(PyObject* self, PyObject* args) {
    return Py_BuildValue("s", "Hello world!");
}

static PyMethodDef
module_functions[] = {
	{"hello_world", hello_world, METH_VARARGS, "Say hello."},
	{NULL}
};

void
initpycmodule(void) {
	Py_InitModule3("pycmodule", module_functions, "A minimal python-c module.");
}
