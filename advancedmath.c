#include <Python.h>

static PyObject* add(
  PyObject* self, PyObject* args) {
  int v1;
  int v2;
  if(!PyArg_ParseTuple(args, "ii", &v1, &v2))
    return NULL;
  return Py_BuildValue("i", v1 + v2);
}

static PyObject* sub(
  PyObject* self, PyObject* args) {
  int v1;
  int v2;
  if(!PyArg_ParseTuple(args, "ii", &v1, &v2))
    return NULL;
  return Py_BuildValue("i", v1 - v2);
}

static PyMethodDef methods[] = {
    {"add",  add, METH_VARARGS,
    "Add two numbers."},
    {"sub",  sub, METH_VARARGS,
    "Subtract two numbers."},
    {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC initadvancedmath(void) {
    (void)Py_InitModule("advancedmath", methods);
}
