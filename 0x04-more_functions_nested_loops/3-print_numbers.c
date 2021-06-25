#include <stdio.h>

/**
 * print_numbers - print all digits and new line
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	i = 0;
	for (i; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
