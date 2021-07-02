#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse the given array.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int b[600];

	i = 0;
	while (i < n)
	{
		b[i] = a[n - 1 - i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
}

