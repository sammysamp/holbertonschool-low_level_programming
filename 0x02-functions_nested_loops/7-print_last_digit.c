#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - return the last digit of a given number
 * @c: integer to check
 *
 * Return: 1 on success
 *
 */
int print_last_digit(int c)
{
	int d;

	d = abs(c) % 10;
	_putchar('0' + d);
	return (d);
}
