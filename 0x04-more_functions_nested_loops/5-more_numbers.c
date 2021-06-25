#include "holberton.h"
/**
 * more_numbers - print digits 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			k = i;
			if (i > 9)
			{
				_putchar('0' + 1);
				k = i % 10;
			}
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}

