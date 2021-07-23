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
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	mcmp = malloc(sizeof(cmp));
	if (mcmp == NULL)
		return (-1);
	i = 0;
	while (!cmp(array[i]))
	{
		i++;
		if (i > size)
			return (-1);
	}
	free(mcmp);
	return (i);
}
