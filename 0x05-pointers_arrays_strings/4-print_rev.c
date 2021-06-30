#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: pointer of the string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = s - len;
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
