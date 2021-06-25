#include <stdio.h>
#include "holberton.h"
/**
 * print_numbers - print all digits and new line
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
