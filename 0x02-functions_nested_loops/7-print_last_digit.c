#include <stdio.h>
#include "holberton.h"
/**
 * print_last_digit - return the last digit of a given number
 * @c: integer to check
 *
 * Return: 1 on success
 *
 */
int print_last_digit(int c)
{
	_putchar(c % 10);
	return (c % 10);
}