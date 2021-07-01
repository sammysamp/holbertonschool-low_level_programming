#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - print not even character position of string
 * @str: pointer of the string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	s = s - len;
	for (i = 0; i < len; i += 2)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
