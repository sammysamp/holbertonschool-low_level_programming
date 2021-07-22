#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search an integer
 * @array: given array
 * @size: size of array
 * @cmp: function pointer to compare
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	char *mcmp;
	unsigned int i;

	mcmp = malloc(sizeof(cmp));
	if (mcmp == NULL)
		return;
	i = 0;
	while (array[i] != cmp(i))
	{
		i++
	}
	if (array == NULL)
		return;
	free(mname);
	return (i);
}
