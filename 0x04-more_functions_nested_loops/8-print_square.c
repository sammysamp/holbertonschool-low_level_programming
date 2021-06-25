#include "holberton.h"
/**
 * print_square - print square
 * @size: number of repetitions
 * Return: nothing
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
