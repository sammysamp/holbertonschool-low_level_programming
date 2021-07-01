#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print elements of given array
 * @a: pointer of the array
 * @n: number or elements to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
