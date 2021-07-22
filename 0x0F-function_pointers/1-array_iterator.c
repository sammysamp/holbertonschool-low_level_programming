#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute in every element of array
 * @array: given array
 * @size: size of array
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	char *mname;
	unsigned int i;

	mname = malloc(sizeof(action));
	if (mname == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
	if (array == NULL)
		return;
	free(mname);
}
