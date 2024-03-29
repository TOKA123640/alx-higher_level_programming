#include <Python.h>
/**
 * print_python_list_info - shows info about Python lists
 * @p: Object
 * Return: 0
 */
void print_python_list_info(PyObject *p)
{
	int size, alloc, i;
	pyobject *obj;

	size = py_SIZE(P);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (i = 0; i < size; i++)
	{
		ptintf("Element %d: ", i);

		obj = PyList_GetItem(p, i);
		printf("%s\n", Py_TYPE(obj)->tp_name);
		
	}
}
