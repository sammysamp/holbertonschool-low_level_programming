#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "main.h"
/**
 * print_binary - convert unsigned int to bin
 * @n: number tu convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
