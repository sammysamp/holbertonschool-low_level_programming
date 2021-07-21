#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	char *mname;
	int i;

	mname = malloc(sizeof(action));
	if (mname == NULL)
		return;
	for (i = 0; i < n; i++)
		action(array[i]);
	if (array == NULL)
		return;
	free(mname);
}
