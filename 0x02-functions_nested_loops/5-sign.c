#include <stdio.h>
#include "holberton.h"
/**
 * print_sign - check if is positive or negative
 * @n: integer value to check
 *
 * Return: 1 on success
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
}
